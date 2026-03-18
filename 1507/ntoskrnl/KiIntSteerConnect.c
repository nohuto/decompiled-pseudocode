/*
 * XREFs of KiIntSteerConnect @ 0x1401558E8
 * Callers:
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntSteerSetDestination @ 0x1400EB378 (KiIntSteerSetDestination.c)
 *     KiIntSteerLogState @ 0x140155CB8 (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140155D28 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  char v6; // bl
  __int64 *PoolWithTag; // rax
  __int64 *v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned __int8 CurrentIrql; // r12
  __int64 i; // rbx
  __int16 v14; // cx
  __int64 v15; // rax
  bool v16; // zf
  ULONG_PTR **v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // r10
  unsigned __int64 v20; // r9
  int v21; // r11d
  unsigned int v22; // r11d
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rbx
  __int64 **v28; // rax
  int v30; // eax
  int v31; // eax
  unsigned __int16 v32; // cx
  __int64 v33; // rdx
  unsigned __int16 v34; // cx
  __int64 v35; // rdx
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF
  __int16 v37; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v39; // [rsp+A0h] [rbp+18h]
  int v40; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  if ( !KiIntSteerEtwHandle )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 3 )
    {
      v39 = -1;
      v6 = 1;
      goto LABEL_6;
    }
LABEL_46:
    v32 = *(_WORD *)(a3 + 32);
    v33 = *(_QWORD *)(a3 + 24);
    if ( (unsigned __int16)KiIntSteerAffinitizedInterrupts <= v32 )
      LOWORD(KiIntSteerAffinitizedInterrupts) = v32 + 1;
    qword_140332988[v32] |= v33;
    return 0LL;
  }
  v39 = *(_DWORD *)(a3 + 56);
  if ( (unsigned __int8)off_140321940() )
  {
    v6 = 0;
    v31 = off_140321928();
    if ( !v31 )
      goto LABEL_6;
  }
  else
  {
    v6 = 1;
    v31 = 0;
  }
  if ( v31 < 0 )
    goto LABEL_46;
LABEL_6:
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6B725449u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[4] = (__int64)a1;
  *((_DWORD *)PoolWithTag + 6) = v3;
  PoolWithTag[5] = 0LL;
  PoolWithTag[6] = 0LL;
  *((_BYTE *)PoolWithTag + 56) = v6;
  *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
  *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
  *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
  if ( (_DWORD)v3 )
  {
    v9 = a1;
    v10 = v3;
    do
    {
      v11 = (_QWORD *)*v9++;
      v11[22] = 0LL;
      v11[24] = 0LL;
      v11[25] = 0LL;
      v11[27] = 0LL;
      v11[21] = v8;
      --v10;
    }
    while ( v10 );
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&KiIntTrackSpinlock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock);
  }
  if ( !*(_DWORD *)a3 )
  {
    for ( i = KiIntTrackRootList; (ULONG_PTR *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
    {
      v30 = *(_DWORD *)(i + 32);
      if ( v30 != -1 && v30 == v39 )
      {
        if ( *(_DWORD *)(i + 120) == 2 )
        {
          *(_BYTE *)(*(_QWORD *)(i + 192) + 16LL) = 0;
          *(_DWORD *)(i + 120) = 0;
          *(_BYTE *)(i + 124) = 0;
          v34 = *(_WORD *)(a3 + 32);
          v35 = *(_QWORD *)(a3 + 24);
          if ( (unsigned __int16)KiIntSteerAffinitizedInterrupts <= v34 )
            LOWORD(KiIntSteerAffinitizedInterrupts) = v34 + 1;
          qword_140332988[v34] |= v35;
        }
        goto LABEL_29;
      }
    }
  }
  i = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x6B725449u);
  if ( i )
  {
    KiIntSteerChooseInitialTargetProcessors((_DWORD)a1, v3, a3, (unsigned int)&v36, (__int64)&v40);
    memset((void *)i, 0, 0xC8uLL);
    v14 = v37;
    *(_QWORD *)(i + 24) = i + 16;
    *(_QWORD *)(i + 16) = i + 16;
    *(_DWORD *)(i + 32) = v39;
    *(_BYTE *)(i + 124) = 0;
    *(_QWORD *)(i + 144) = 0LL;
    *(_WORD *)(i + 136) = *(_WORD *)(a3 + 32);
    *(_DWORD *)(i + 120) = v40;
    v15 = v36;
    *(_QWORD *)(i + 128) = 0LL;
    *(_QWORD *)(i + 152) = v15;
    *(_WORD *)(i + 160) = v14;
    *(_WORD *)(i + 176) = v14;
    *(_QWORD *)(i + 168) = v15;
    v16 = *(_DWORD *)(i + 120) == 2;
    *(_OWORD *)(i + 40) = *(_OWORD *)a3;
    *(_OWORD *)(i + 56) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(i + 72) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(i + 88) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(i + 104) = *(_OWORD *)(a3 + 64);
    if ( v16 )
      *(_QWORD *)(i + 192) = *(_QWORD *)(*a1 + 240LL);
    v17 = (ULONG_PTR **)qword_140332898;
    *(_QWORD *)i = &KiIntTrackRootList;
    *(_QWORD *)(i + 8) = v17;
    if ( *v17 != &KiIntTrackRootList )
      __fastfail(3u);
    *v17 = (ULONG_PTR *)i;
    ++KiIntTrackRootCount;
    v18 = i + 64;
    qword_140332898 = i;
    if ( *(_DWORD *)(i + 120) != 2 )
      v18 = i + 152;
    v19 = *(_WORD *)(v18 + 8);
    v20 = *(_QWORD *)v18;
    v21 = v19;
LABEL_21:
    v22 = v21 + 1;
    while ( 1 )
    {
      if ( v20 )
      {
        _BitScanForward64(&v23, v20);
        v21 = v19;
        v20 &= ~(1LL << v23);
        v24 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v19 + (unsigned __int8)v23];
        if ( (unsigned int)v24 >= (unsigned int)KeNumberProcessors_0 )
        {
          v25 = 0LL;
        }
        else
        {
          _mm_lfence();
          v25 = KiProcessorBlock[v24];
        }
        ++*(_DWORD *)(v25 + 11544);
        goto LABEL_21;
      }
      if ( ++v19 >= v22 )
        break;
      v20 = *(_QWORD *)(8LL * v19 + 8);
    }
    if ( *(_DWORD *)(i + 120) )
      KiIntSteerSetDestination(i, i + 152, 0x140000000LL);
LABEL_29:
    v26 = 0;
    v8[2] = i;
    v27 = i + 16;
    v28 = *(__int64 ***)(v27 + 8);
    *v8 = v27;
    v8[1] = (__int64)v28;
    if ( *v28 != (__int64 *)v27 )
      __fastfail(3u);
    *v28 = v8;
    *(_QWORD *)(v27 + 8) = v8;
    KiIntSteerLogState(v8, &PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
  }
  else
  {
    v26 = -1073741670;
    ExFreePoolWithTag(v8, 0x6B725449u);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
  else
    _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
  __writecr8(CurrentIrql);
  return v26;
}
