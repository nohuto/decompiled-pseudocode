/*
 * XREFs of PopFxProcessWork @ 0x1400BF0DC
 * Callers:
 *     PopFxActivateComponentWorker @ 0x1400BF4F0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400BF6F0 (PopFxIdleWorkerTail.c)
 *     PopFxPluginWork @ 0x1400C11C0 (PopFxPluginWork.c)
 *     PoFxCompleteIdleState @ 0x140131BB4 (PoFxCompleteIdleState.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400BF094 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400BF470 (PopDiagTraceFxDevicePowerRequirement.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400BF87C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 *     PopPluginDevicePower @ 0x1400BFF6C (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400C0CB0 (PopFxScheduleDeviceIdleTimer.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401269D4 (PopFxDeliverDevicePowerRequired.c)
 *     PopPluginComponentIdleState @ 0x140131500 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131D54 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140149238 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x1402024D8 (PopFxCompleteComponentPerfState.c)
 *     PopPepCompleteComponentIdleState @ 0x140205CAC (PopPepCompleteComponentIdleState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140208A94 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14020E2B4 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14020E33C (PopFxAcpiForwardPepWorkRequest.c)
 */

void __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  ULONG_PTR v3; // rax
  int *v4; // rdi
  char v6; // r13
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  char v9; // bp
  KIRQL v10; // r15
  ULONG_PTR v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbx
  KIRQL v14; // dl
  __int64 v15; // r8
  void (__fastcall *v16)(_QWORD, _QWORD); // rax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  BOOLEAN v19; // al
  char v20; // al
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // r8
  __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // r9
  ULONG_PTR v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rbx
  KIRQL v35; // bp
  __int64 v36; // rbx
  NTSTATUS v37; // esi
  __int64 v38; // rax
  __int64 v39; // rcx
  int RemlockSize; // [rsp+20h] [rbp-78h]
  _QWORD v41[4]; // [rsp+40h] [rbp-58h] BYREF
  NTSTATUS v42; // [rsp+60h] [rbp-38h]
  __int64 v43; // [rsp+A8h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = a2;
  if ( (unsigned int)v3 > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, v3, 0LL);
  while ( 1 )
  {
    v6 = 0;
    if ( !*v4 )
    {
      v11 = *((_QWORD *)v4 + 1);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, *v4, 0LL);
      v12 = (unsigned int)v4[4];
      if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 620) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
      _mm_lfence();
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 624) + 8 * v12);
      if ( *(_DWORD *)(v13 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v4[4], 0LL);
      if ( *(int *)(v13 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v11 + 624) + 8 * v12), 1uLL);
      if ( (*(_DWORD *)(v13 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v11 + 624) + 8 * v12), 2uLL);
      if ( *(_DWORD *)(v13 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v11 + 624) + 8 * v12), 3uLL);
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 200));
      if ( *(int *)(v13 + 216) > 0 )
      {
        *(_QWORD *)(v13 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v13 + 208) = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 200), v14);
      LOBYTE(v15) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v11 + 48), (unsigned int)v12, v15);
      v16 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 112);
      if ( v16 )
        v16(*(_QWORD *)(v11 + 168), (unsigned int)v12);
      PopPepProcessEvent(*(_QWORD *)(v11 + 56), 200 * v12 + *(_QWORD *)(v11 + 56) + 176, 2, 3, RemlockSize, 0LL);
      PopFxCompleteComponentActivation(v11);
      goto LABEL_17;
    }
    if ( *v4 != 1 )
      break;
    v21 = *((_QWORD *)v4 + 1);
    if ( BugCheckParameter2 )
      PopFxBugCheck(0x603uLL, BugCheckParameter2, *v4, 0LL);
    v22 = (unsigned int)v4[4];
    if ( (unsigned int)v22 >= *(_DWORD *)(v21 + 620) )
      PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
    _mm_lfence();
    v23 = *(_QWORD *)(*(_QWORD *)(v21 + 624) + 8 * v22);
    if ( (unsigned int)v4[5] >= *(_DWORD *)(v23 + 156) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v21 + 624) + 8 * v22), 0LL);
    v24 = v4[5];
    if ( v24 == *(_DWORD *)(v23 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v21 + 624) + 8 * v22), 1uLL);
    if ( v24 && *(_DWORD *)(v23 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v21 + 624) + 8 * v22), 2uLL);
    *(_DWORD *)(v23 + 152) = v4[5];
    *(_DWORD *)(v23 + 140) = 2;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v21 + 128))(
      *(_QWORD *)(v21 + 168),
      (unsigned int)v22,
      (unsigned int)v4[5]);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 140), 0xFFFFFFFF) != 1 )
      return;
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(v21 + 48), (unsigned int)v22, (unsigned int)v4[5]);
    v6 = PopPluginComponentIdleState(v21, (unsigned int)v22, v25, v4);
LABEL_17:
    if ( !v6 )
      return;
  }
  switch ( *v4 )
  {
    case 2:
      v7 = *((_QWORD *)v4 + 1);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, *v4, 0LL);
      v8 = *(_QWORD *)(v7 + 48);
      v9 = *((_BYTE *)v4 + 16);
      if ( v8 )
      {
        LOBYTE(a3) = *((_BYTE *)v4 + 16);
        LOBYTE(a2) = 1;
        PopDiagTraceFxDevicePowerRequirement(v8, a2, a3);
      }
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 328));
      if ( !v9 )
      {
        _m_prefetchw((const void *)(v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 0x80u) != 0 )
          PopFxBugCheck(0x609uLL, 0LL, v7, 1uLL);
        PopPluginDevicePower(v7, 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x80u);
        if ( *(_QWORD *)(v7 + 144) )
        {
          if ( *(_DWORD *)(v7 + 36) || *(_DWORD *)(v7 + 40) || (*(_DWORD *)(v7 + 32) & 4) != 0 )
            PopFxBugCheck(0x610uLL, 0LL, v7, 0LL);
          *(_DWORD *)(v7 + 40) = 2;
          if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v7) )
          {
            PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
            (*(void (__fastcall **)(_QWORD))(v7 + 144))(*(_QWORD *)(v7 + 168));
            _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
            _InterlockedDecrement((volatile signed __int32 *)(v7 + 40));
          }
        }
        else
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
        }
        goto LABEL_16;
      }
      *(_DWORD *)(v7 + 36) = 2;
      _m_prefetchw((const void *)(v7 + 32));
      v17 = *(_DWORD *)(v7 + 32);
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 32), v17 & 0xFFFFFF7F, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x80u) == 0 )
        PopFxBugCheck(0x609uLL, 0LL, v7, 0LL);
      _m_prefetchw((const void *)(v7 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v7 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v7 + 40) = 0;
        v19 = KeCancelTimer((PKTIMER)(v7 + 336));
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 36));
        if ( !v19 )
        {
LABEL_16:
          KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 328), v10);
          goto LABEL_17;
        }
        v20 = PopFxCompleteDevicePowerRequired(v7, (__int64)v4);
      }
      else
      {
        if ( *(_DWORD *)(v7 + 40) )
          goto LABEL_16;
        v20 = PopFxDeliverDevicePowerRequired(v7);
      }
      v6 = v20;
      goto LABEL_16;
    case 3:
      v36 = *((_QWORD *)v4 + 1);
      v37 = -1073741822;
      v43 = 0LL;
      if ( *(_QWORD *)(v36 + 152) )
      {
        v37 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v36 + 208), 0LL, &File, 1u, 0x20u);
        if ( v37 >= 0 )
        {
          v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v36 + 152))(
                  *(_QWORD *)(v36 + 168),
                  *((_QWORD *)v4 + 2),
                  *((_QWORD *)v4 + 4),
                  *((_QWORD *)v4 + 5),
                  *((_QWORD *)v4 + 6),
                  *((_QWORD *)v4 + 7),
                  &v43);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v36 + 208), 0LL, 0x20u);
        }
      }
      v38 = *(_QWORD *)(v36 + 56);
      v42 = v37;
      v39 = *(_QWORD *)(v38 + 32);
      v41[0] = *(_QWORD *)(v39 + 72);
      v41[1] = *((_QWORD *)v4 + 2);
      v41[2] = *((_QWORD *)v4 + 3);
      v41[3] = v43;
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v39 + 64) + 96LL))(15LL, v41);
      break;
    case 4:
      v34 = *((_QWORD *)v4 + 1);
      v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 328));
      if ( *((_BYTE *)v4 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v34 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v34 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v34);
      KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 328), v35);
      break;
    case 5:
      v32 = *((_QWORD *)v4 + 1);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, *v4, 0LL);
      v33 = v4[4];
      if ( v33 >= *(_DWORD *)(v32 + 620) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, v32, (unsigned int)v4[4]);
      PopPepCompleteComponentIdleState(*(_QWORD *)(v32 + 56), v33);
      break;
    case 6:
      v26 = *((_QWORD *)v4 + 1);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, *v4, 0LL);
      v27 = v4[4];
      if ( v27 >= *(_DWORD *)(v26 + 620) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
      _mm_lfence();
      v28 = *(_QWORD *)(*(_QWORD *)(v26 + 624) + 8LL * v27);
      v29 = *(_QWORD *)(v28 + 248);
      v30 = _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 40), 0xFFFFFFFF);
      _InterlockedOr((volatile signed __int32 *)(v29 + 40), 0x20000000u);
      PopDiagTraceFxPerfRequestProgress(v29, (v30 - 1) & 7);
      LOBYTE(v31) = *((_BYTE *)v4 + 20);
      PopFxCompleteComponentPerfState(v26, *(unsigned int *)(v28 + 16), *(_QWORD *)(v28 + 248), v31);
      break;
    case 7:
      PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)v4 + 1));
      break;
    case 8:
      PopFxAcpiForwardPepWorkRequest(*((_QWORD *)v4 + 1));
      break;
  }
}
