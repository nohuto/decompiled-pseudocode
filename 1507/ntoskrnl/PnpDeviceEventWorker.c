/*
 * XREFs of PnpDeviceEventWorker @ 0x14045FC1C
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpProcessCustomDeviceEvent @ 0x14045D6DC (PnpProcessCustomDeviceEvent.c)
 *     PnpProcessDeferredRegistrations @ 0x14045FFE0 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x140460174 (PnpCompleteDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     PnpProcessTargetDeviceEvent @ 0x140460714 (PnpProcessTargetDeviceEvent.c)
 *     PnpNotifyDeviceClassChange @ 0x140460F64 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14067C6F4 (PnpNotifyHwProfileChange.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  char v4; // r15
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // rbx
  __int64 **v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // rcx
  unsigned __int8 v13; // r14
  signed __int32 v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int8 v23; // r14
  signed __int8 v24; // cf
  unsigned __int8 v25; // di
  signed __int32 v26; // eax
  __int64 v27; // rbx
  unsigned __int8 v28; // di
  signed __int32 v29; // eax
  int v30; // eax
  __int128 v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int8 v34; // r14
  unsigned __int8 v35; // di
  signed __int32 v36; // eax
  __int128 *v37; // [rsp+30h] [rbp-40h] BYREF
  PVOID Pa; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 v40; // [rsp+50h] [rbp-20h] BYREF

  PnpDeviceEventThread = (__int64)KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) >= 0 )
  {
    while ( 1 )
    {
      v3 = PnpDeviceEventList;
      v4 = 0;
      v5 = KeAbPreAcquire(PnpDeviceEventList + 64, 0LL, 0LL, v2);
      v7 = v5;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v3 + 64), 0) )
        ExpAcquireFastMutexContended(v3 + 64, v5);
      if ( v7 )
        *(_BYTE *)(v7 + 26) |= 1u;
      v9 = PnpDeviceEventList;
      *(_QWORD *)(v3 + 72) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 112) = CurrentIrql;
      v10 = (__int64 **)(v9 + 120);
      if ( *v10 == (__int64 *)v10 )
      {
        v21 = KeAbPreAcquire((ULONG_PTR)&PnpNotificationInProgressLock, 0LL, 0LL, v6);
        v22 = v21;
        v23 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v24 = _interlockedbittestandreset((volatile signed __int32 *)&PnpNotificationInProgressLock, 0);
        if ( !v24 )
          ExpAcquireFastMutexContended((ULONG_PTR)&PnpNotificationInProgressLock, v21);
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        qword_140349348 = (__int64)KeGetCurrentThread();
        dword_140349370 = v23;
        KeSetEvent(&PnpEventQueueEmpty, 0, 0);
        PnpNotificationInProgress = 0;
        PnpProcessDeferredRegistrations();
        v25 = dword_140349370;
        qword_140349348 = 0LL;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpNotificationInProgressLock, 1, 0);
        if ( v26 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpNotificationInProgressLock, v26);
        __writecr8(v25);
        KeAbPostRelease((ULONG_PTR)&PnpNotificationInProgressLock);
        v27 = PnpDeviceEventList;
        v28 = *(_BYTE *)(PnpDeviceEventList + 112);
        *(_QWORD *)(PnpDeviceEventList + 72) = 0LL;
        v29 = _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 64), 1, 0);
        if ( v29 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)(v27 + 64), v29);
        __writecr8(v28);
        KeAbPostRelease(v27 + 64);
        if ( P )
          ExFreePoolWithTag(P, 0x4C706E50u);
        PnpDeviceEventThread = 0LL;
        KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
        return;
      }
      v11 = *v10;
      v12 = **v10;
      if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
        __fastfail(3u);
      *v10 = (__int64 *)v12;
      *(_QWORD *)(v12 + 8) = v10;
      v11[1] = (__int64)v11;
      *v11 = (__int64)v11;
      v13 = *(_BYTE *)(v9 + 112);
      *(_QWORD *)(v9 + 72) = 0LL;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 64), 1, 0);
      if ( v14 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)(v9 + 64), v14);
      __writecr8(v13);
      KeAbPostRelease(v9 + 64);
      Pa = v11;
      v15 = *(_QWORD *)&NullGuid.Data1 - v11[11];
      if ( *(_QWORD *)&NullGuid.Data1 == v11[11] )
        v15 = *(_QWORD *)NullGuid.Data4 - v11[12];
      if ( v15 )
      {
        v31 = *(_OWORD *)(v11 + 11);
        v37 = &v40;
        v40 = v31;
        EtwActivityIdControlKernel(2, (PVOID *)&v37);
        v4 = 1;
      }
      v16 = v11[18];
      v17 = 0;
      if ( v16 && !*(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL) )
        v17 = -1073741810;
      if ( PnpShutdownEvent.Header.SignalState
        && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
      {
        v17 = -1073741431;
      }
      if ( v17 >= 0 )
      {
        v18 = *((_DWORD *)v11 + 30);
        if ( v18 > 4 )
        {
          if ( v18 >= 6 )
          {
            if ( v18 <= 8 )
              goto LABEL_41;
            if ( v18 == 9 || v18 == 11 || v18 == 10 )
            {
              v30 = PiUEventNotifyUserMode(v11);
LABEL_40:
              v17 = v30;
              goto LABEL_41;
            }
          }
          goto LABEL_48;
        }
        if ( v18 == 4 )
          goto LABEL_24;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( !v19 )
          {
            v30 = PnpProcessTargetDeviceEvent(&Pa);
            goto LABEL_40;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v11 + 84);
            PnpNotifyDeviceClassChange(v11 + 13, v11 + 19, &DestinationString);
LABEL_24:
            PiUEventNotifyUserMode(v11);
LABEL_42:
            PnpCompleteDeviceEvent(Pa);
            goto LABEL_43;
          }
          if ( v20 == 1 )
          {
            v30 = PnpProcessCustomDeviceEvent((__int64 *)&Pa);
            goto LABEL_40;
          }
LABEL_48:
          v17 = -1073741823;
          goto LABEL_41;
        }
        v17 = PiUEventNotifyUserMode(v11);
        if ( v17 >= 0 )
          PnpNotifyHwProfileChange(v11 + 13);
      }
LABEL_41:
      if ( v17 != 259 )
        goto LABEL_42;
LABEL_43:
      PnpProcessDeferredRegistrations();
      if ( v4 )
      {
        v37 = 0LL;
        EtwActivityIdControlKernel(2, (PVOID *)&v37);
      }
    }
  }
  v32 = KeAbPreAcquire((ULONG_PTR)&PnpNotificationInProgressLock, 0LL, 0LL, v2);
  v33 = v32;
  v34 = KeGetCurrentIrql();
  __writecr8(1uLL);
  v24 = _interlockedbittestandreset((volatile signed __int32 *)&PnpNotificationInProgressLock, 0);
  if ( !v24 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpNotificationInProgressLock, v32);
  if ( v33 )
    *(_BYTE *)(v33 + 26) |= 1u;
  qword_140349348 = (__int64)KeGetCurrentThread();
  dword_140349370 = v34;
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  v35 = dword_140349370;
  PnpNotificationInProgress = 0;
  qword_140349348 = 0LL;
  v36 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpNotificationInProgressLock, 1, 0);
  if ( v36 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpNotificationInProgressLock, v36);
  __writecr8(v35);
  KeAbPostRelease((ULONG_PTR)&PnpNotificationInProgressLock);
  PnpDeviceEventThread = 0LL;
}
