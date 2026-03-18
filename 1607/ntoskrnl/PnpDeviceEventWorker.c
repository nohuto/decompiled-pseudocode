/*
 * XREFs of PnpDeviceEventWorker @ 0x1403EF9F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwActivityIdControlKernel @ 0x140007EA8 (EtwActivityIdControlKernel.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpProcessCustomDeviceEvent @ 0x1403EF2C8 (PnpProcessCustomDeviceEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x1403EF8F0 (PnpProcessTargetDeviceEvent.c)
 *     PnpProcessDeferredRegistrations @ 0x1403EFCC0 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x1403EFD70 (PnpCompleteDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 */

void __fastcall PnpDeviceEventWorker(PVOID P)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 **v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  __int128 v14; // xmm0
  PVOID Pa; // [rsp+30h] [rbp-40h] BYREF
  __int128 *v16; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  PnpDeviceEventThread = (__int64)KeGetCurrentThread();
  if ( KeWaitForSingleObject((PVOID)(PnpDeviceEventList + 8), Executive, 0, 0, 0LL) < 0 )
  {
    ExAcquireFastMutex(&PnpNotificationInProgressLock);
    KeSetEvent(&PnpEventQueueEmpty, 0, 0);
    PnpNotificationInProgress = 0;
    KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
    PnpDeviceEventThread = 0LL;
    return;
  }
  while ( 1 )
  {
    v2 = 0;
    ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
    v3 = PnpDeviceEventList;
    v4 = (__int64 **)(PnpDeviceEventList + 120);
    if ( *v4 == (__int64 *)v4 )
      break;
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
    v5[1] = (__int64)v5;
    *v5 = (__int64)v5;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 64));
    Pa = v5;
    v7 = *(_QWORD *)&NullGuid.Data1 - v5[11];
    if ( *(_QWORD *)&NullGuid.Data1 == v5[11] )
      v7 = *(_QWORD *)NullGuid.Data4 - v5[12];
    if ( v7 )
    {
      v14 = *(_OWORD *)(v5 + 11);
      v16 = &v18;
      v18 = v14;
      EtwActivityIdControlKernel(2, (PVOID *)&v16);
      v2 = 1;
    }
    v8 = v5[18];
    v9 = 0;
    if ( v8 && !*(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL) )
      v9 = -1073741810;
    if ( PnpShutdownEvent.Header.SignalState
      && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
    {
      v9 = -1073741431;
    }
    if ( v9 >= 0 )
    {
      v10 = *((_DWORD *)v5 + 30);
      if ( v10 > 4 )
      {
        if ( v10 >= 6 )
        {
          if ( v10 <= 8 )
            goto LABEL_28;
          if ( v10 == 9 || v10 == 11 || v10 == 10 )
          {
            v13 = PiUEventNotifyUserMode(v5);
            goto LABEL_27;
          }
        }
        goto LABEL_46;
      }
      if ( v10 == 4 )
        goto LABEL_33;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( !v11 )
        {
          v13 = PnpProcessTargetDeviceEvent((__int64 *)&Pa);
          goto LABEL_27;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v5 + 84);
          PnpNotifyDeviceClassChange(v5 + 13, v5 + 19, &DestinationString);
LABEL_33:
          PiUEventNotifyUserMode(v5);
LABEL_29:
          PnpCompleteDeviceEvent(Pa);
          goto LABEL_30;
        }
        if ( v12 == 1 )
        {
          v13 = PnpProcessCustomDeviceEvent(&Pa);
LABEL_27:
          v9 = v13;
          goto LABEL_28;
        }
LABEL_46:
        v9 = -1073741823;
        goto LABEL_28;
      }
      v9 = PiUEventNotifyUserMode(v5);
      if ( v9 >= 0 )
        PnpNotifyHwProfileChange(v5 + 13);
    }
LABEL_28:
    if ( v9 != 259 )
      goto LABEL_29;
LABEL_30:
    PnpProcessDeferredRegistrations();
    if ( v2 )
    {
      v16 = 0LL;
      EtwActivityIdControlKernel(2, (PVOID *)&v16);
    }
  }
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  KeSetEvent(&PnpEventQueueEmpty, 0, 0);
  PnpNotificationInProgress = 0;
  PnpProcessDeferredRegistrations();
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( P )
    ExFreePoolWithTag(P, 0x4C706E50u);
  PnpDeviceEventThread = 0LL;
  KeReleaseMutex((PRKMUTEX)(PnpDeviceEventList + 8), 0);
}
