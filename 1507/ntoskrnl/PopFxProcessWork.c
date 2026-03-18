/*
 * XREFs of PopFxProcessWork @ 0x1400288DC
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14002775C (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 *     PopFxPluginWork @ 0x140029DC8 (PopFxPluginWork.c)
 *     PoFxCompleteIdleState @ 0x140139BA8 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopFxCompleteComponentActivation @ 0x140027434 (PopFxCompleteComponentActivation.c)
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     PopPluginDevicePower @ 0x140027AFC (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x140027CF4 (PopPepProcessEvent.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140028790 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140028CEC (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140029EA0 (PopFxScheduleDeviceIdleTimer.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopFxCompleteDevicePowerRequired @ 0x14013027C (PopFxCompleteDevicePowerRequired.c)
 *     PopPluginComponentIdleState @ 0x14013939C (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140139C3C (PopDiagTraceFxComponentIdleState.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14013A1B4 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14016C8E8 (PopFxUpdateDeviceIdleTimer.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x14023785C (PopFxCompleteComponentPerfState.c)
 *     PopPepCompleteComponentIdleState @ 0x14023B284 (PopPepCompleteComponentIdleState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x14023E3B0 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140242D14 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140242DA8 (PopFxAcpiForwardPepWorkRequest.c)
 */

int __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  ULONG_PTR v3; // rax
  __int64 v6; // rdx
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  char v9; // si
  volatile signed __int32 *v10; // r14
  unsigned __int8 v11; // r15
  char v12; // bl
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // ecx
  __int64 v17; // r8
  ULONG_PTR v18; // r15
  __int64 v19; // r14
  __int64 v20; // rbx
  volatile signed __int32 *v21; // rsi
  unsigned __int8 CurrentIrql; // r12
  void (__fastcall *v23)(_QWORD, _QWORD); // rax
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  BOOLEAN v26; // al
  char v27; // al
  __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  char v32; // dl
  __int64 v33; // r9
  ULONG_PTR v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rsi
  volatile signed __int32 *v37; // rbx
  unsigned __int8 v38; // bp
  __int64 v39; // rbx
  NTSTATUS v40; // esi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 RemlockSize; // [rsp+20h] [rbp-88h]
  _QWORD v45[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v46; // [rsp+60h] [rbp-48h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v48; // [rsp+C0h] [rbp+18h] BYREF

  v3 = *a2;
  if ( (unsigned int)v3 > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, v3, 0LL);
  while ( 1 )
  {
    v6 = 2LL;
    if ( !*a2 )
    {
      v18 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
      v19 = (unsigned int)a2[4];
      if ( (unsigned int)v19 >= *(_DWORD *)(v18 + 620) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      _mm_lfence();
      v20 = *(_QWORD *)(*(_QWORD *)(v18 + 624) + 8 * v19);
      v21 = (volatile signed __int32 *)(v20 + 200);
      if ( *(_DWORD *)(v20 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)a2[4], 0LL);
      if ( *(int *)(v20 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v18 + 624) + 8 * v19), 1uLL);
      if ( (*(_DWORD *)(v20 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v18 + 624) + 8 * v19), 2uLL);
      if ( *(_DWORD *)(v20 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v18 + 624) + 8 * v19), 3uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v20 + 200);
      }
      else if ( _interlockedbittestandset64(v21, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v20 + 200);
      }
      if ( *(int *)(v20 + 216) > 0 )
      {
        *(_QWORD *)(v20 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v20 + 208) = 1;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v20 + 200, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v21, 0LL);
      __writecr8(CurrentIrql);
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v18 + 48), v19, 1u);
      v23 = *(void (__fastcall **)(_QWORD, _QWORD))(v18 + 112);
      if ( v23 )
        v23(*(_QWORD *)(v18 + 168), (unsigned int)v19);
      PopPepProcessEvent(
        *(_QWORD *)(v18 + 56),
        200LL * (unsigned int)v19 + *(_QWORD *)(v18 + 56) + 176LL,
        2,
        3u,
        RemlockSize,
        0LL);
      LODWORD(v3) = PopFxCompleteComponentActivation(v18, v20, 1);
      v12 = 0;
      goto LABEL_22;
    }
    if ( *a2 != 1 )
      break;
    v13 = *((_QWORD *)a2 + 1);
    if ( BugCheckParameter2 )
      PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
    v14 = (unsigned int)a2[4];
    if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 620) )
      PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
    _mm_lfence();
    v15 = *(_QWORD *)(*(_QWORD *)(v13 + 624) + 8 * v14);
    if ( (unsigned int)a2[5] >= *(_DWORD *)(v15 + 156) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 624) + 8 * v14), 0LL);
    v16 = a2[5];
    if ( v16 == *(_DWORD *)(v15 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 624) + 8 * v14), 1uLL);
    if ( v16 && *(_DWORD *)(v15 + 152) )
      PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 624) + 8 * v14), 2uLL);
    *(_DWORD *)(v15 + 152) = a2[5];
    *(_DWORD *)(v15 + 140) = 2;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v13 + 128))(
      *(_QWORD *)(v13 + 168),
      (unsigned int)v14,
      (unsigned int)a2[5]);
    LODWORD(v3) = _InterlockedDecrement((volatile signed __int32 *)(v15 + 140));
    if ( (_DWORD)v3 )
      return v3;
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(v13 + 48), (unsigned int)v14, (unsigned int)a2[5]);
    LODWORD(v3) = PopPluginComponentIdleState(v13, (unsigned int)v14, v17, a2);
    v12 = v3;
LABEL_22:
    if ( !v12 )
      return v3;
  }
  switch ( *a2 )
  {
    case 2:
      v7 = *((_QWORD *)a2 + 1);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
      v8 = *(_QWORD *)(v7 + 48);
      v9 = *((_BYTE *)a2 + 16);
      if ( v8 )
      {
        LOBYTE(a3) = *((_BYTE *)a2 + 16);
        LOBYTE(v6) = 1;
        PopDiagTraceFxDevicePowerRequirement(v8, v6, a3);
        LODWORD(v6) = 2;
      }
      v10 = (volatile signed __int32 *)(v7 + 328);
      v11 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v7 + 328);
      }
      else
      {
        if ( !_interlockedbittestandset64(v10, 0LL) )
          goto LABEL_10;
        KxWaitForSpinLockAndAcquire(v7 + 328);
      }
      LODWORD(v6) = 2;
LABEL_10:
      if ( !v9 )
      {
        _m_prefetchw((const void *)(v7 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 0x80u) != 0 )
          PopFxBugCheck(0x609uLL, 0LL, v7, 1uLL);
        PopPluginDevicePower(v7, 0, 0LL);
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
            _InterlockedAdd((volatile signed __int32 *)(v7 + 40), 0xFFFFFFFF);
          }
        }
        else
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
        }
        goto LABEL_18;
      }
      *(_DWORD *)(v7 + 36) = v6;
      _m_prefetchw((const void *)(v7 + 32));
      v24 = *(_DWORD *)(v7 + 32);
      do
      {
        v25 = v24;
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 32), v24 & 0xFFFFFF7F, v24);
      }
      while ( v25 != v24 );
      if ( (v24 & 0x80u) == 0 )
        PopFxBugCheck(0x609uLL, 0LL, v7, 0LL);
      _m_prefetchw((const void *)(v7 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v7 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v7 + 40) = 0;
        v26 = KeCancelTimer((PKTIMER)(v7 + 336));
        _InterlockedAdd((volatile signed __int32 *)(v7 + 36), 0xFFFFFFFF);
        if ( v26 )
        {
          v27 = PopFxCompleteDevicePowerRequired(v7);
LABEL_54:
          v12 = v27;
          goto LABEL_19;
        }
      }
      else if ( !*(_DWORD *)(v7 + 40) )
      {
        v27 = PopFxDeliverDevicePowerRequired(v7);
        goto LABEL_54;
      }
LABEL_18:
      v12 = 0;
LABEL_19:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v10, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      LODWORD(v3) = v11;
      __writecr8(v11);
      goto LABEL_22;
    case 3:
      v39 = *((_QWORD *)a2 + 1);
      v40 = -1073741822;
      v48 = 0LL;
      if ( *(_QWORD *)(v39 + 152) )
      {
        v40 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v39 + 208), 0LL, &File, 1u, 0x20u);
        if ( v40 >= 0 )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v39 + 152))(
                  *(_QWORD *)(v39 + 168),
                  *((_QWORD *)a2 + 2),
                  *((_QWORD *)a2 + 4),
                  *((_QWORD *)a2 + 5),
                  *((_QWORD *)a2 + 6),
                  *((_QWORD *)a2 + 7),
                  &v48);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 212), 0xFFFFFFFF) == 1 )
            KeSetEvent((PRKEVENT)(v39 + 216), 0, 0);
        }
      }
      v41 = *(_QWORD *)(v39 + 56);
      v46 = v40;
      v42 = *(_QWORD *)(v41 + 32);
      v45[0] = *(_QWORD *)(v42 + 72);
      v45[1] = *((_QWORD *)a2 + 2);
      v45[2] = *((_QWORD *)a2 + 3);
      v45[3] = v48;
      LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v42 + 64) + 96LL))(15LL, v45);
      break;
    case 4:
      v36 = *((_QWORD *)a2 + 1);
      v37 = (volatile signed __int32 *)(v36 + 328);
      v38 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v36 + 328);
      }
      else if ( _interlockedbittestandset64(v37, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(v36 + 328);
      }
      if ( *((_BYTE *)a2 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v36 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v36 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v36);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v36 + 328, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v37, 0LL);
      LODWORD(v3) = v38;
      __writecr8(v38);
      break;
    case 5:
      v34 = *((_QWORD *)a2 + 1);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, *a2, 0LL);
      v35 = a2[4];
      if ( v35 >= *(_DWORD *)(v34 + 620) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, v34, (unsigned int)a2[4]);
      LODWORD(v3) = PopPepCompleteComponentIdleState(*(_QWORD *)(v34 + 56), v35);
      break;
    case 6:
      v28 = *((_QWORD *)a2 + 1);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, *a2, 0LL);
      v29 = a2[4];
      if ( v29 >= *(_DWORD *)(v28 + 620) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)a2 + 1), (unsigned int)a2[4]);
      _mm_lfence();
      v30 = *(_QWORD *)(*(_QWORD *)(v28 + 624) + 8LL * v29);
      v31 = *(_QWORD *)(v30 + 248);
      v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 40), 0xFFFFFFFF);
      _InterlockedOr((volatile signed __int32 *)(v31 + 40), 0x20000000u);
      PopDiagTraceFxPerfRequestProgress(v31, (v32 - 1) & 7);
      LOBYTE(v33) = *((_BYTE *)a2 + 20);
      LODWORD(v3) = PopFxCompleteComponentPerfState(v28, *(unsigned int *)(v30 + 16), *(_QWORD *)(v30 + 248), v33);
      break;
    case 7:
      LODWORD(v3) = PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)a2 + 1));
      break;
    case 8:
      LODWORD(v3) = PopFxAcpiForwardPepWorkRequest(*((_QWORD *)a2 + 1));
      break;
  }
  return v3;
}
