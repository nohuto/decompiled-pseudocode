/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x14014EE78
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406A7C70 (MmLogSystemShareablePfnInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1406E84F4 (EtwpEnumerateWorkingSet.c)
 * Callees:
 *     MiGetPfnProtection @ 0x14007B518 (MiGetPfnProtection.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiIdentifyPfnWrapper @ 0x1400C4980 (MiIdentifyPfnWrapper.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // edi
  int v5; // ebp
  __int64 v8; // rsi
  __int64 v9; // rbx
  char *v10; // r12
  unsigned int v11; // ebp
  signed __int32 i; // edx
  __int64 v13; // rcx
  unsigned __int64 *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r10
  char *v18; // r15
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  unsigned __int64 *v21; // r8
  unsigned __int64 PteShadow; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v35; // [rsp+24h] [rbp-94h]
  __int64 v36; // [rsp+28h] [rbp-90h]
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp-88h]
  _BYTE v39[48]; // [rsp+40h] [rbp-78h] BYREF

  v4 = 0;
  v5 = a4;
  v35 = 0;
  v8 = a1;
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v9 = a1 - 1272;
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)(a1 - 1272) )
    {
      KiStackAttachProcess((_KPROCESS *)(a1 - 1272), 0, (__int64)v39);
      v35 = 1;
    }
  }
  v36 = *(_QWORD *)(v8 + 184);
  v10 = *(char **)(v36 + 496);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v8, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v8);
    for ( i = *(_DWORD *)v8; (*(_DWORD *)v8 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)v8 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)v8, i | 0x40000000, i);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    v5 = a4;
  }
  if ( v9 && (*(_DWORD *)(v9 + 772) & 0x20) != 0 )
  {
    v4 = -1073741558;
    goto LABEL_42;
  }
  v13 = *(_QWORD *)(v8 + 104);
  if ( v5 )
  {
    *a2 = v13;
    v14 = a2 + 1;
    v15 = 0LL;
    if ( 8 * v13 + 8 > a3 )
    {
LABEL_22:
      v4 = -1073741820;
      goto LABEL_42;
    }
LABEL_25:
    v17 = 0x200000000000000LL;
    v18 = &v10[*(unsigned int *)(v36 + 64) * *(_QWORD *)(v36 + 16)];
    do
    {
      v19 = *(_QWORD *)v10;
      if ( (*(_QWORD *)v10 & 1) != 0 )
      {
        v20 = (v19 & 0x800000000000LL) != 0 ? v19 | 0xFFFF000000000000uLL : v19 & 0xFFFFFFFFFFFFLL;
        if ( v20 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        {
          v21 = (unsigned __int64 *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          PteShadow = *v21;
          if ( (unsigned __int64)(v21 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(v21, *v21);
          v23 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( a4 )
          {
            v24 = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)*v14) & 0xFFF;
            *v14 = v24;
            v25 = v24 ^ ((unsigned __int16)v24 ^ (*(_QWORD *)(v23 + 40) >> 58 << 9)) & 0xE00;
            *v14 = v25;
            v26 = v25 ^ ((unsigned __int16)v25 ^ (((*(_QWORD *)(v23 + 40) & 0x200000000000000LL) != 0) << 8)) & 0x100;
            *v14 = v26;
            if ( (v17 & *(_QWORD *)(v23 + 40)) != 0 )
            {
              LOBYTE(v29) = 7;
              if ( (*(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
                v29 = *(_QWORD *)(v23 + 24) & 0x3FFFFFFFFFFFFFFFLL;
              v30 = v26 ^ (unsigned __int8)(v26 ^ (32 * v29)) & 0xE0;
              *v14 = v30;
              v28 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)MiGetPfnProtection(v23, v10)) & 0x1F;
            }
            else
            {
              v27 = v26 & 0xFFFFFFFFFFFFFF1FuLL;
              *v14 = v27;
              v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v23 + 16) >> 5)) & 0x1F;
            }
            *v14++ = v28;
          }
          else if ( (v17 & *(_QWORD *)(v23 + 40)) != 0 )
          {
            MiIdentifyPfnWrapper(v23, v15);
            v32 = *(_QWORD *)v10;
            if ( (*(_QWORD *)v10 & 0x800000000000LL) != 0 )
              v33 = v32 | 0xFFFF000000000000uLL;
            else
              v33 = v32 & 0xFFFFFFFFFFFFLL;
            *(_QWORD *)(v15 + 24) = v33 & 0xFFFFFFFFFFFFF000uLL;
            v15 += 32LL;
          }
        }
      }
      v10 += *(unsigned int *)(v36 + 64);
      v17 = 0x200000000000000LL;
    }
    while ( v10 <= v18 );
    v8 = a1;
    goto LABEL_42;
  }
  v16 = v13 - *(_QWORD *)(v8 + 112);
  v15 = (__int64)(a2 + 2);
  a2[1] = v16;
  v14 = 0LL;
  if ( 32 * v16 + 16 > a3 )
    goto LABEL_22;
  if ( v16 )
    goto LABEL_25;
LABEL_42:
  MiUnlockWorkingSetExclusive(v8, CurrentIrql);
  if ( v35 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v39, 0);
  return v4;
}
