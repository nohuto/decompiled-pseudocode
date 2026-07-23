/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x14010FA14
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14010F8A4 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6F28 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x14000F770 (MiIdentifyPfnWrapper.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiGetPfnProtection @ 0x1400B6940 (MiGetPfnProtection.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // edi
  __int64 v8; // rbp
  __int64 v9; // rsi
  char *v10; // r15
  __int64 v11; // rcx
  LONG *SharedVm; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 *v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rcx
  char *v18; // r14
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  KIRQL v33; // [rsp+20h] [rbp-98h]
  int v34; // [rsp+24h] [rbp-94h]
  ULONG_PTR *SharedWorkingSetList; // [rsp+30h] [rbp-88h]
  _BYTE v38[48]; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  v34 = 0;
  v8 = a1;
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v9 = a1 - 1280;
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)(a1 - 1280) )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1280), 0, (__int64)v38);
      v34 = 1;
    }
  }
  SharedWorkingSetList = MiGetSharedWorkingSetList(v8);
  v10 = (char *)SharedWorkingSetList[10];
  SharedVm = MiGetSharedVm(v11);
  v33 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  if ( v9 && (*(_DWORD *)(v9 + 772) & 0x20) != 0 )
  {
    v4 = -1073741558;
    goto LABEL_29;
  }
  v14 = *(_QWORD *)(v8 + 112);
  if ( a4 )
  {
    *a2 = v14;
    v15 = a2 + 1;
    v16 = 0LL;
    if ( 8 * v14 + 8 > a3 )
    {
LABEL_9:
      v4 = -1073741820;
      goto LABEL_29;
    }
LABEL_12:
    v13 = 0xFFFFF68000000000uLL;
    v18 = &v10[*((unsigned int *)SharedWorkingSetList + 8) * SharedWorkingSetList[2]];
    do
    {
      v19 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 1) != 0 )
      {
        v20 = (v19 & 0x800000000000LL) != 0 ? v19 | 0xFFFF000000000000uLL : v19 & 0xFFFFFFFFFFFFLL;
        if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
          if ( a4 )
          {
            v24 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)*v15) & 0xFFF;
            *v15 = v24;
            v25 = v24 ^ ((unsigned __int16)v24 ^ (*(_QWORD *)(v21 + 40) >> 58 << 9)) & 0xE00;
            *v15 = v25;
            v26 = v25 ^ ((unsigned __int16)v25 ^ (((*(_QWORD *)(v21 + 40) & 0x200000000000000LL) != 0) << 8)) & 0x100;
            *v15 = v26;
            if ( (v23 & *(_QWORD *)(v21 + 40)) != 0 )
            {
              LOBYTE(v28) = 7;
              if ( (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v28 = *(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v29 = v26 ^ (unsigned __int8)(v26 ^ (32 * v28)) & 0xE0;
              *v15 = v29;
              *v15 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)MiGetPfnProtection(v21, v10)) & 0x1F;
            }
            else
            {
              v27 = v26 & 0xFFFFFFFFFFFFFF1FuLL;
              *v15 = v27;
              *v15 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v21 + 16) >> 5)) & 0x1F;
            }
            ++v15;
          }
          else if ( (v23 & *(_QWORD *)(v21 + 40)) != 0 )
          {
            MiIdentifyPfnWrapper(v21, v16);
            v31 = *(_QWORD *)v10;
            if ( (*(_QWORD *)v10 & 0x800000000000LL) != 0 )
              v32 = v31 | 0xFFFF000000000000uLL;
            else
              v32 = v31 & 0xFFFFFFFFFFFFLL;
            *(_QWORD *)(v16 + 24) = v32 & 0xFFFFFFFFFFFFF000uLL;
            v16 += 32LL;
          }
          v13 = 0xFFFFF68000000000uLL;
        }
      }
      v10 += *((unsigned int *)SharedWorkingSetList + 8);
    }
    while ( v10 <= v18 );
    v8 = a1;
    goto LABEL_29;
  }
  v17 = v14 - *(_QWORD *)(v8 + 120);
  v16 = (__int64)(a2 + 2);
  a2[1] = v17;
  v15 = 0LL;
  if ( 32 * v17 + 16 > a3 )
    goto LABEL_9;
  if ( v17 )
    goto LABEL_12;
LABEL_29:
  LOBYTE(v13) = v33;
  MiUnlockWorkingSetExclusive(v8, v13);
  if ( v34 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v38, 0);
  return v4;
}
