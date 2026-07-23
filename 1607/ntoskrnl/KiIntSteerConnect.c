/*
 * XREFs of KiIntSteerConnect @ 0x14012D8EC
 * Callers:
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 * Callees:
 *     KiIntSteerSetDestination @ 0x1400A4728 (KiIntSteerSetDestination.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerLogState @ 0x14012DC88 (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14012DD00 (KiIntSteerChooseInitialTargetProcessors.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159800 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  _QWORD *v5; // r15
  char v6; // r14
  int v7; // r13d
  __int64 *PoolWithTag; // rax
  __int64 *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 i; // rbx
  int v14; // r9d
  int v15; // r14d
  __int16 v16; // cx
  unsigned __int16 *v17; // rax
  bool v18; // zf
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 Prcb; // rax
  __int64 v22; // rbx
  __int64 **v23; // rax
  int v25; // ecx
  int v26; // eax
  unsigned __int16 v27; // cx
  __int64 v28; // rdx
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  unsigned __int16 *v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+48h] [rbp-18h]
  __int16 v33; // [rsp+50h] [rbp-10h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+50h]
  int NewIrqla; // [rsp+B0h] [rbp+50h]
  ULONG v37; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a2;
  v5 = a1;
  if ( !KiIntSteerEtwHandle )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( !*(_DWORD *)a3 )
  {
    NewIrqla = *(_DWORD *)(a3 + 56);
    if ( (unsigned __int8)off_1402F2490() )
    {
      v6 = 0;
      v26 = off_1402F2478();
      if ( !v26 )
        goto LABEL_38;
    }
    else
    {
      v6 = 1;
      v26 = 0;
    }
    if ( v26 < 0 )
      goto LABEL_41;
LABEL_38:
    v7 = NewIrqla;
    goto LABEL_6;
  }
  if ( *(_DWORD *)a3 != 3 )
  {
LABEL_41:
    v27 = *(_WORD *)(a3 + 32);
    v28 = *(_QWORD *)(a3 + 24);
    if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v27 )
      LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v27 + 1;
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v27 + 2] |= v28;
    return 0LL;
  }
  v6 = 1;
  v7 = -1;
LABEL_6:
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = (__int64)v5;
    *((_DWORD *)PoolWithTag + 6) = v3;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    *((_BYTE *)PoolWithTag + 56) = v6;
    *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
    *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
    *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
    PoolWithTag[18] = *(_QWORD *)(a3 + 80);
    if ( (_DWORD)v3 )
    {
      v10 = v5;
      v11 = v3;
      do
      {
        v12 = (_QWORD *)*v10++;
        v12[22] = 0LL;
        v12[24] = 0LL;
        v12[25] = 0LL;
        v12[27] = 0LL;
        v12[21] = v9;
        --v11;
      }
      while ( v11 );
      v5 = a1;
    }
    NewIrql = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( !*(_DWORD *)a3 )
    {
      for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
      {
        v25 = *(_DWORD *)(i + 32);
        if ( v25 != -1 && v25 == v7 )
        {
          if ( *(_DWORD *)(i + 128) == 2 )
          {
            *(_BYTE *)(*(_QWORD *)(i + 200) + 16LL) = 0;
            *(_DWORD *)(i + 128) = 0;
            *(_BYTE *)(i + 132) = 0;
            v29 = *(_WORD *)(a3 + 32);
            v30 = *(_QWORD *)(a3 + 24);
            if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v29 )
              LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v29 + 1;
            *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v29 + 2] |= v30;
          }
          v15 = 0;
          goto LABEL_26;
        }
      }
    }
    i = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6B725449u);
    if ( i )
    {
      v15 = KiIntSteerChooseInitialTargetProcessors((_DWORD)v5, v3, a3, v14, v6, (__int64)&v31, (__int64)&v37);
      if ( v15 >= 0 )
      {
        memset((void *)i, 0, 0xD0uLL);
        v16 = v32;
        *(_QWORD *)(i + 24) = i + 16;
        *(_QWORD *)(i + 16) = i + 16;
        *(_DWORD *)(i + 32) = v7;
        *(_BYTE *)(i + 132) = 0;
        *(_QWORD *)(i + 152) = 0LL;
        *(_WORD *)(i + 144) = *(_WORD *)(a3 + 32);
        *(_DWORD *)(i + 128) = v37;
        v17 = v31;
        *(_QWORD *)(i + 136) = 0LL;
        *(_QWORD *)(i + 160) = v17;
        *(_WORD *)(i + 168) = v16;
        *(_WORD *)(i + 184) = v16;
        *(_QWORD *)(i + 176) = v17;
        v18 = *(_DWORD *)(i + 128) == 2;
        *(_OWORD *)(i + 40) = *(_OWORD *)a3;
        *(_OWORD *)(i + 56) = *(_OWORD *)(a3 + 16);
        *(_OWORD *)(i + 72) = *(_OWORD *)(a3 + 32);
        *(_OWORD *)(i + 88) = *(_OWORD *)(a3 + 48);
        *(_OWORD *)(i + 104) = *(_OWORD *)(a3 + 64);
        *(_QWORD *)(i + 120) = *(_QWORD *)(a3 + 80);
        if ( v18 )
          *(_QWORD *)(i + 200) = *(_QWORD *)(*v5 + 240LL);
        v19 = (__int64 *)qword_140307978;
        if ( *(ULONG_PTR **)qword_140307978 != &KiIntTrackRootList )
          __fastfail(3u);
        *(_QWORD *)i = &KiIntTrackRootList;
        v20 = i + 64;
        *(_QWORD *)(i + 8) = v19;
        *v19 = i;
        ++KiIntTrackRootCount;
        qword_140307978 = i;
        if ( *(_DWORD *)(i + 128) != 2 )
          v20 = i + 160;
        v33 = *(_WORD *)(v20 + 8);
        v32 = *(_QWORD *)v20;
        v31 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v37, &v31) )
        {
          Prcb = KeGetPrcb(v37);
          ++*(_DWORD *)(Prcb + 11544);
        }
        if ( *(_DWORD *)(i + 128) )
          KiIntSteerSetDestination(i);
        v15 = 0;
      }
      if ( !v15 )
      {
LABEL_26:
        v9[2] = i;
        v22 = i + 16;
        v23 = *(__int64 ***)(v22 + 8);
        if ( *v23 != (__int64 *)v22 )
          __fastfail(3u);
        *v9 = v22;
        v9[1] = (__int64)v23;
        *v23 = v9;
        *(_QWORD *)(v22 + 8) = v9;
        KiIntSteerLogState(v9, &PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
        goto LABEL_28;
      }
    }
    else
    {
      v15 = -1073741670;
    }
    ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_28:
    KeReleaseSpinLock(&KiIntTrackSpinlock, NewIrql);
    return (unsigned int)v15;
  }
  return 3221225626LL;
}
