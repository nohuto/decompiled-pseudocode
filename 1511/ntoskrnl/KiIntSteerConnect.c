/*
 * XREFs of KiIntSteerConnect @ 0x140122B3C
 * Callers:
 *     KeConnectInterrupt @ 0x140122784 (KeConnectInterrupt.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KiIntSteerSetDestination @ 0x1400E8374 (KiIntSteerSetDestination.c)
 *     KiIntSteerLogState @ 0x140122EC4 (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140122F3C (KiIntSteerChooseInitialTargetProcessors.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r12
  _QWORD *v6; // r15
  char v7; // di
  int v8; // r13d
  __int64 *PoolWithTag; // rax
  __int64 *v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 i; // rdi
  __int16 v15; // cx
  unsigned __int16 *v16; // rax
  bool v17; // zf
  ULONG_PTR **v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 Prcb; // rax
  __int64 v22; // rdi
  __int64 **v23; // rax
  int v25; // ecx
  int v26; // eax
  unsigned __int16 v27; // cx
  __int64 v28; // rdx
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  unsigned __int16 *v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+38h] [rbp-18h]
  __int16 v33; // [rsp+40h] [rbp-10h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+50h]
  int NewIrqla; // [rsp+A0h] [rbp+50h]
  ULONG v37; // [rsp+A8h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( !KiIntSteerEtwHandle )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  v7 = 1;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      v8 = -1;
      goto LABEL_6;
    }
LABEL_38:
    v27 = *(_WORD *)(a3 + 32);
    v28 = *(_QWORD *)(a3 + 24);
    if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v27 )
      LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v27 + 1;
    *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v27 + 2] |= v28;
    return 0LL;
  }
  NewIrqla = *(_DWORD *)(a3 + 56);
  if ( (unsigned __int8)off_1402D27F0() )
  {
    v7 = 0;
    v26 = off_1402D27D8();
    if ( !v26 )
      goto LABEL_35;
  }
  else
  {
    v26 = 0;
  }
  if ( v26 < 0 )
    goto LABEL_38;
LABEL_35:
  v8 = NewIrqla;
LABEL_6:
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[4] = (__int64)v6;
  *((_DWORD *)PoolWithTag + 6) = v4;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 56) = v7;
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
  PoolWithTag[18] = *(_QWORD *)(a3 + 80);
  if ( (_DWORD)v4 )
  {
    v11 = v6;
    v12 = v4;
    do
    {
      v13 = (_QWORD *)*v11++;
      v13[22] = 0LL;
      v13[24] = 0LL;
      v13[25] = 0LL;
      v13[27] = 0LL;
      v13[21] = v10;
      --v12;
    }
    while ( v12 );
    v6 = a1;
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  if ( !*(_DWORD *)a3 )
  {
    for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
    {
      v25 = *(_DWORD *)(i + 32);
      if ( v25 != -1 && v25 == v8 )
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
        goto LABEL_23;
      }
    }
  }
  i = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6B725449u);
  if ( i )
  {
    KiIntSteerChooseInitialTargetProcessors((_DWORD)v6, v4, a3, (unsigned int)&v31, (__int64)&v37);
    memset((void *)i, 0, 0xD0uLL);
    v15 = v32;
    *(_QWORD *)(i + 24) = i + 16;
    *(_QWORD *)(i + 16) = i + 16;
    *(_DWORD *)(i + 32) = v8;
    *(_BYTE *)(i + 132) = 0;
    *(_QWORD *)(i + 152) = 0LL;
    *(_WORD *)(i + 144) = *(_WORD *)(a3 + 32);
    *(_DWORD *)(i + 128) = v37;
    v16 = v31;
    *(_QWORD *)(i + 136) = 0LL;
    *(_QWORD *)(i + 160) = v16;
    *(_WORD *)(i + 168) = v15;
    *(_WORD *)(i + 184) = v15;
    *(_QWORD *)(i + 176) = v16;
    v17 = *(_DWORD *)(i + 128) == 2;
    *(_OWORD *)(i + 40) = *(_OWORD *)a3;
    *(_OWORD *)(i + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(i + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(i + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(i + 104) = *(_OWORD *)(a3 + 64);
    *(_QWORD *)(i + 120) = *(_QWORD *)(a3 + 80);
    if ( v17 )
      *(_QWORD *)(i + 200) = *(_QWORD *)(*v6 + 240LL);
    v18 = (ULONG_PTR **)qword_1402E2448;
    *(_QWORD *)i = &KiIntTrackRootList;
    *(_QWORD *)(i + 8) = v18;
    if ( *v18 != &KiIntTrackRootList )
      __fastfail(3u);
    *v18 = (ULONG_PTR *)i;
    v19 = i + 64;
    qword_1402E2448 = i;
    ++KiIntTrackRootCount;
    if ( *(_DWORD *)(i + 128) != 2 )
      v19 = i + 160;
    v33 = *(_WORD *)(v19 + 8);
    v32 = *(_QWORD *)v19;
    v31 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v37, &v31) )
    {
      Prcb = KeGetPrcb(v37);
      ++*(_DWORD *)(Prcb + 11544);
    }
    if ( *(_DWORD *)(i + 128) )
      KiIntSteerSetDestination(i, i + 160, v20);
LABEL_23:
    v10[2] = i;
    v22 = i + 16;
    v23 = *(__int64 ***)(v22 + 8);
    *v10 = v22;
    v10[1] = (__int64)v23;
    if ( *v23 != (__int64 *)v22 )
      __fastfail(3u);
    *v23 = v10;
    *(_QWORD *)(v22 + 8) = v10;
    KiIntSteerLogState(v10, &PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
  }
  else
  {
    v3 = -1073741670;
    ExFreePoolWithTag(v10, 0x6B725449u);
  }
  KeReleaseSpinLock(&KiIntTrackSpinlock, NewIrql);
  return v3;
}
