/*
 * XREFs of MiDeprioritizeVARange @ 0x1401D257C
 * Callers:
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

char __fastcall MiDeprioritizeVARange(unsigned __int64 a1, __int64 a2, ULONG_PTR a3, char a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r13
  KIRQL v10; // r15
  unsigned __int64 Wsle; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rcx
  char v18; // [rsp+20h] [rbp-108h]
  int v19; // [rsp+24h] [rbp-104h]
  int v20; // [rsp+28h] [rbp-100h]
  __int64 v21; // [rsp+30h] [rbp-F8h]
  unsigned int v22[40]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = 0;
  v22[0] = 0;
  v20 = a4 & 7;
  v5 = 0LL;
  v19 = dword_1402FED88;
  v21 = *(_QWORD *)(a3 + 184);
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 + 8 * a2;
  if ( (a4 & 0x10) != 0 )
  {
    v10 = 17;
    v18 = 17;
  }
  else
  {
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a3);
    v18 = v10;
  }
  LOBYTE(Wsle) = MiIsAddressValid(v8);
  if ( !(_BYTE)Wsle )
    v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  if ( v8 < v9 )
  {
    do
    {
      if ( (v8 & 0xFFF) != 0 || (LOBYTE(Wsle) = MiIsAddressValid(v8), (_BYTE)Wsle) )
      {
        if ( (*(_BYTE *)v8 & 1) != 0 )
        {
          v14 = 3 * MI_GET_PAGE_FRAME_FROM_PTE(v8);
          LOBYTE(Wsle) = 0;
          v15 = 16 * v14 - 0x58000000000LL;
          if ( *(_QWORD *)v15 )
          {
            if ( (*(_BYTE *)(v15 + 35) & 8) == 0 )
            {
              v12 = *(_QWORD *)(v15 + 8);
              LOBYTE(Wsle) = 0;
              if ( v12 >= 0 )
                LOBYTE(Wsle) = MiDemoteCombinedPte((unsigned __int64 *)v8, v12 | 0x8000000000000000uLL);
              if ( (a4 & 8) == 0 )
              {
                LODWORD(Wsle) = MI_GET_PFN_PRIORITY(v15);
                if ( v20 != (_DWORD)Wsle )
                {
                  MiLockPageAtDpcInline(v16, v12, v13);
                  MiUpdatePfnPriority(v15);
                  LOBYTE(Wsle) = -1;
                  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v4 = v22[0];
                }
              }
              if ( (a4 & 0x20) != 0 )
              {
                Wsle = *(_QWORD *)(a3 + 184);
                if ( v5 >= *(_QWORD *)(Wsle + 8) )
                {
                  Wsle = MiLocateWsle((__int64)(v8 << 25) >> 16, a3, *(_QWORD *)v15);
                  v5 = Wsle;
                  if ( v19 )
                    LOBYTE(Wsle) = MI_WSLE_LOG_ACCESS(
                                     a3,
                                     (_DWORD *)(*(_QWORD *)(v21 + 496) + Wsle * *(unsigned int *)(v21 + 64)),
                                     (_BYTE *)v8);
                  *(_QWORD *)&v22[2 * v4 + 2] = v5;
                  v4 = v22[0] + 1;
                  v22[0] = v4;
                  if ( v4 == 19 )
                  {
                    LOBYTE(Wsle) = MiFreeWsleList(a3, v22, 0);
                    v4 = 0;
                    v22[0] = 0;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v8 += 4088LL;
      }
      v8 += 8LL;
    }
    while ( v8 < v9 );
    v10 = v18;
    if ( v4 )
      LOBYTE(Wsle) = MiFreeWsleList(a3, v22, 0);
  }
  if ( v10 != 17 )
  {
    LOBYTE(v12) = v10;
    LOBYTE(Wsle) = MiUnlockWorkingSetExclusive(a3, v12, v13);
  }
  return Wsle;
}
