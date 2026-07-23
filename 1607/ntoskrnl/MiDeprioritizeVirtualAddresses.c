/*
 * XREFs of MiDeprioritizeVirtualAddresses @ 0x140110898
 * Callers:
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 *     MmTrimPagedPool @ 0x14065A34C (MmTrimPagedPool.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 */

char __fastcall MiDeprioritizeVirtualAddresses(unsigned __int64 a1, __int64 a2, ULONG_PTR a3, char a4)
{
  __int64 v7; // r8
  ULONG_PTR *SharedWorkingSetList; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  char v13; // r9
  char v14; // r14
  LONG *SharedVm; // rdi
  KIRQL v16; // al
  unsigned int PfnPriority; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int64 Wsle; // rax
  char v26; // [rsp+20h] [rbp-F8h]
  int v27; // [rsp+24h] [rbp-F4h]
  int v28; // [rsp+28h] [rbp-F0h]
  unsigned int v29[40]; // [rsp+30h] [rbp-E8h] BYREF

  v29[0] = 0;
  v27 = a4 & 7;
  v28 = dword_1403271C8;
  SharedWorkingSetList = MiGetSharedWorkingSetList(a3);
  v9 = 0LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v10 + 8 * v11;
  if ( (v13 & 0x10) != 0 )
  {
    v14 = 17;
    v26 = 17;
  }
  else
  {
    SharedVm = MiGetSharedVm(v7);
    v16 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v14 = v16;
    v26 = v16;
  }
  LOBYTE(PfnPriority) = MiIsAddressValid(v10);
  if ( !(_BYTE)PfnPriority )
    v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v10 < v12 )
  {
    do
    {
      if ( (v10 & 0xFFF) != 0 || (LOBYTE(PfnPriority) = MiIsAddressValid(v10), (_BYTE)PfnPriority) )
      {
        if ( (*(_BYTE *)v10 & 1) != 0 )
        {
          v19 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v10);
          LOBYTE(PfnPriority) = 0;
          v21 = v19 - 0x58000000000LL;
          if ( *(_QWORD *)v21 )
          {
            if ( (*(_BYTE *)(v21 + 35) & 8) == 0 )
            {
              v22 = *(_QWORD *)(v21 + 8);
              if ( (v22 & v20) == 0 )
                LOBYTE(PfnPriority) = MiDemoteCombinedPte(a3, v10, v20 | v22);
              if ( (a4 & 8) == 0 )
              {
                PfnPriority = MiGetPfnPriority(v21);
                if ( v27 != PfnPriority )
                {
                  MiLockPageAtDpcInline(v23);
                  MiUpdatePfnPriority(v21);
                  LOBYTE(PfnPriority) = -1;
                  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                }
              }
              if ( (a4 & 0x20) != 0 && v9 >= SharedWorkingSetList[1] )
              {
                Wsle = MiLocateWsle((__int64)(v10 << 25) >> 16, a3, *(_QWORD *)v21);
                v9 = Wsle;
                if ( v28 )
                  MI_WSLE_LOG_ACCESS(
                    a3,
                    (_DWORD *)(SharedWorkingSetList[10] + Wsle * *((unsigned int *)SharedWorkingSetList + 8)),
                    (_BYTE *)v10);
                *(_QWORD *)&v29[2 * v29[0] + 2] = v9;
                PfnPriority = v29[0] + 1;
                v29[0] = PfnPriority;
                if ( PfnPriority == 19 )
                {
                  LOBYTE(PfnPriority) = MiFreeWsleList(a3, v29, 0);
                  v29[0] = 0;
                }
              }
            }
          }
        }
      }
      else
      {
        v10 += 4088LL;
      }
      v10 += 8LL;
    }
    while ( v10 < v12 );
    v14 = v26;
  }
  if ( v29[0] )
    LOBYTE(PfnPriority) = MiFreeWsleList(a3, v29, 0);
  if ( v14 != 17 )
  {
    LOBYTE(v18) = v14;
    LOBYTE(PfnPriority) = MiUnlockWorkingSetExclusive(a3, v18);
  }
  return PfnPriority;
}
