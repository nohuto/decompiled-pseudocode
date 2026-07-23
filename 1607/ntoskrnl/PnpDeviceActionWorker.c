/*
 * XREFs of PnpDeviceActionWorker @ 0x1400865A0
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140086468 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpProcessClearProblem @ 0x140131C4C (PpProcessClearProblem.c)
 *     PnpCompleteSystemStartProcess @ 0x1401457A8 (PnpCompleteSystemStartProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpProcessRebalance @ 0x1401CE42C (PnpProcessRebalance.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     PiProcessReenumeration @ 0x140488E80 (PiProcessReenumeration.c)
 *     PiProcessRequeryDeviceState @ 0x14054619C (PiProcessRequeryDeviceState.c)
 *     PiQueryPowerRelations @ 0x140570F88 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140571174 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessStartSystemDevices @ 0x140581188 (PiProcessStartSystemDevices.c)
 *     PiConfigureDevice @ 0x14064978C (PiConfigureDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140649820 (PiProcessClearDeviceProblem.c)
 *     PiProcessHaltDevice @ 0x140649918 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x14064999C (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140649ADC (PiProcessSetDeviceProblem.c)
 *     PiRestartDevice @ 0x140649C2C (PiRestartDevice.c)
 */

__int64 PnpDeviceActionWorker()
{
  unsigned __int8 v0; // r12
  char v1; // r13
  char v2; // r15
  int v3; // esi
  KIRQL v4; // al
  char *v5; // rdi
  KIRQL v6; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // ecx
  int started; // eax
  int v13; // r15d
  char *v14; // r14
  __int64 v15; // rax
  int *v16; // rax
  struct _KEVENT *v17; // rcx
  int PowerRelations; // eax
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  __int128 v23; // xmm0
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  ULONG_PTR v28; // rcx
  char v29; // [rsp+48h] [rbp-29h]
  char v30; // [rsp+49h] [rbp-28h]
  char v31; // [rsp+4Ah] [rbp-27h]
  __int128 *v32; // [rsp+50h] [rbp-21h] BYREF
  int v33; // [rsp+58h] [rbp-19h] BYREF
  char v34; // [rsp+5Ch] [rbp-15h]
  _QWORD NotificationStructure[5]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v36; // [rsp+88h] [rbp+17h] BYREF

  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v0 = 0;
  v29 = 0;
  v1 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v31 = 0;
    v3 = 0;
    v30 = 1;
    v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v5 = (char *)PnpEnumerationRequestList;
    v6 = v4;
    if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      v7 = *(_QWORD *)PnpEnumerationRequestList;
      if ( *((PVOID **)PnpEnumerationRequestList + 1) != &PnpEnumerationRequestList
        || *(PVOID *)(v7 + 8) != PnpEnumerationRequestList )
      {
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(PVOID *)PnpEnumerationRequestList;
      *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v2 )
      break;
    v5 = 0LL;
LABEL_6:
    KeReleaseSpinLock(&PnpSpinLock, v6);
    if ( v5 )
    {
      v8 = *(_QWORD *)&NullGuid.Data1 - *((_QWORD *)v5 + 7);
      if ( *(_QWORD *)&NullGuid.Data1 == *((_QWORD *)v5 + 7) )
        v8 = *(_QWORD *)NullGuid.Data4 - *((_QWORD *)v5 + 8);
      if ( v8 )
      {
        v23 = *(_OWORD *)(v5 + 56);
        v32 = &v36;
        v36 = v23;
        EtwActivityIdControlKernel(2LL, &v32);
        v31 = 1;
      }
      *((_QWORD *)v5 + 1) = v5;
      *(_QWORD *)v5 = v5;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v3 = -1073741431;
        goto LABEL_23;
      }
      v9 = *((_QWORD *)v5 + 2);
      if ( v9 )
        v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
      else
        v10 = 0LL;
      if ( *(_DWORD *)(v10 + 300) == 788 )
      {
LABEL_65:
        v3 = -1073741823;
        goto LABEL_23;
      }
      v11 = *((_DWORD *)v5 + 6);
      if ( v11 <= 12 )
      {
        if ( v11 == 12 )
          goto LABEL_75;
        if ( v11 <= 5 )
        {
          if ( v11 == 5 )
          {
            if ( v9 )
              v22 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
            else
              v22 = 0LL;
            PowerRelations = PiQueryPowerRelations(v22, 0LL);
            goto LABEL_41;
          }
          if ( !v11 )
          {
            v0 = 1;
            goto LABEL_23;
          }
          v20 = v11 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( !v21 )
            {
              PowerRelations = PpProcessClearProblem(v5);
              goto LABEL_41;
            }
            v24 = v21 - 1;
            if ( v24 )
            {
              if ( v24 != 1 )
                goto LABEL_65;
              PowerRelations = PiProcessHaltDevice(v5);
              goto LABEL_41;
            }
          }
          PowerRelations = PiProcessClearDeviceProblem(v5);
          goto LABEL_41;
        }
        if ( v11 == 6 )
        {
          PowerRelations = PnpProcessRebalance(v5);
          goto LABEL_41;
        }
        if ( v11 == 7 )
        {
          v1 = 1;
          goto LABEL_23;
        }
        if ( v11 > 10 )
        {
          PowerRelations = PiProcessRequeryDeviceState(v5);
          goto LABEL_41;
        }
LABEL_21:
        started = PiProcessReenumeration(v5);
LABEL_22:
        v3 = started;
        v30 = 0;
        goto LABEL_23;
      }
      if ( v11 > 17 )
      {
        switch ( v11 )
        {
          case 18:
            v29 = 1;
            goto LABEL_23;
          case 19:
            memset(NotificationStructure, 0, sizeof(NotificationStructure));
            LODWORD(NotificationStructure[4]) = -1;
            LODWORD(NotificationStructure[0]) = 2359297;
            *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
            NotificationStructure[3] = 0LL;
            IoReportTargetDeviceChangeAsynchronous(*((PDEVICE_OBJECT *)v5 + 2), NotificationStructure, 0LL, 0LL);
            v28 = *((_QWORD *)v5 + 2);
            goto LABEL_85;
          case 20:
            v28 = *((_QWORD *)v5 + 2);
LABEL_85:
            PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(v28);
            goto LABEL_23;
        }
        if ( (unsigned int)(v11 - 21) > 3 )
          goto LABEL_65;
        PowerRelations = PiConfigureDevice(v5);
        goto LABEL_41;
      }
      if ( v11 == 17 )
      {
        started = PiProcessStartSystemDevices(v5);
        goto LABEL_22;
      }
      v25 = v11 - 13;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
              goto LABEL_65;
LABEL_75:
            PowerRelations = PiRestartDevice(v5);
          }
          else
          {
            PowerRelations = PiProcessSetDeviceProblem(v5);
          }
LABEL_41:
          v3 = PowerRelations;
          goto LABEL_23;
        }
        goto LABEL_21;
      }
      v3 = PiProcessResourceRequirementsChanged(v5);
      if ( v3 < 0 )
      {
        v0 = 1;
        v3 = 0;
      }
LABEL_23:
      v13 = 1;
      do
      {
        v14 = *(char **)v5;
        v15 = **(_QWORD **)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(char **)(v15 + 8) != v14 )
          __fastfail(3u);
        *(_QWORD *)v5 = v15;
        *(_QWORD *)(v15 + 8) = v5;
        v16 = (int *)*((_QWORD *)v14 + 6);
        if ( v16 )
          *v16 = v3;
        v17 = (struct _KEVENT *)*((_QWORD *)v14 + 5);
        if ( v17 )
          KeSetEvent(v17, 0, 0);
        if ( v14 == v5 )
        {
          v13 = 0;
          if ( v30 )
            ObfDereferenceObjectWithTag(*((PVOID *)v14 + 2), 0x746C6644u);
        }
        ExFreePoolWithTag(v14, 0x32706E50u);
      }
      while ( v13 );
      v2 = v29;
      if ( v31 )
      {
        v32 = 0LL;
        EtwActivityIdControlKernel(2LL, &v32);
        v2 = v29;
      }
    }
    else if ( v0 || v1 )
    {
      v33 = 3;
      v34 = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*(PVOID *)(IopRootDeviceNode + 32), 0x746C6644u);
      PipProcessDevNodeTree(IopRootDeviceNode, 0, (unsigned int)&v33, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v1 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess();
      v2 = 0;
      v29 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KeReleaseSpinLock(&PnpSpinLock, v6);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
