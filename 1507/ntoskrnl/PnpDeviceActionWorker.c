/*
 * XREFs of PnpDeviceActionWorker @ 0x14002604C
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 * Callees:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140026540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PpProcessClearProblem @ 0x140131834 (PpProcessClearProblem.c)
 *     PnpCompleteSystemStartProcess @ 0x1401699B4 (PnpCompleteSystemStartProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpProcessRebalance @ 0x1401FBA84 (PnpProcessRebalance.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiProcessReenumeration @ 0x14045E274 (PiProcessReenumeration.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     PiProcessRequeryDeviceState @ 0x140582AD8 (PiProcessRequeryDeviceState.c)
 *     PiConfigureDevice @ 0x1405878B8 (PiConfigureDevice.c)
 *     PiProcessClearDeviceProblem @ 0x14058C2C8 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x14058E23C (PiRestartDevice.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1405B3B40 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiProcessStartSystemDevices @ 0x1405C154C (PiProcessStartSystemDevices.c)
 *     PiProcessHaltDevice @ 0x140693C40 (PiProcessHaltDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x140693CC4 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x140693E04 (PiProcessSetDeviceProblem.c)
 */

__int64 PnpDeviceActionWorker()
{
  unsigned __int8 v0; // r12
  char v1; // r13
  char v2; // r15
  PVOID *v3; // rcx
  int v4; // esi
  unsigned __int8 CurrentIrql; // r14
  char *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // ecx
  int started; // eax
  int restarted; // eax
  int v15; // r15d
  char *v16; // r14
  __int64 v17; // rax
  int *v18; // rax
  struct _KEVENT *v19; // rcx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int128 v26; // xmm0
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
  void *retaddr; // [rsp+D0h] [rbp+5Fh]

  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v0 = 0;
  v29 = 0;
  v1 = 0;
  v2 = 0;
  PpDevNodeLockTree(1LL);
LABEL_2:
  v3 = &PnpEnumerationRequestList;
  while ( 1 )
  {
    v31 = 0;
    v4 = 0;
    v30 = 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&PnpSpinLock);
    }
    else
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
        goto LABEL_5;
      KxWaitForSpinLockAndAcquire(&PnpSpinLock);
    }
    v3 = &PnpEnumerationRequestList;
LABEL_5:
    v6 = (char *)PnpEnumerationRequestList;
    if ( PnpEnumerationRequestList == &PnpEnumerationRequestList )
      break;
    v7 = *(_QWORD *)PnpEnumerationRequestList;
    if ( *((PVOID **)PnpEnumerationRequestList + 1) != &PnpEnumerationRequestList
      || *(PVOID *)(v7 + 8) != PnpEnumerationRequestList )
    {
      __fastfail(3u);
    }
    PnpEnumerationRequestList = *(PVOID *)PnpEnumerationRequestList;
    *(_QWORD *)(v7 + 8) = &PnpEnumerationRequestList;
LABEL_9:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
    else
      _InterlockedAnd64(&PnpSpinLock, 0LL);
    __writecr8(CurrentIrql);
    if ( !v6 )
    {
      if ( v0 || v1 )
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
        PnpCompleteSystemStartProcess(v3);
        v2 = 0;
        v29 = 0;
      }
      goto LABEL_2;
    }
    v8 = *(_QWORD *)&NullGuid.Data1 - *((_QWORD *)v6 + 7);
    if ( *(_QWORD *)&NullGuid.Data1 == *((_QWORD *)v6 + 7) )
      v8 = *(_QWORD *)NullGuid.Data4 - *((_QWORD *)v6 + 8);
    if ( v8 )
    {
      v26 = *(_OWORD *)(v6 + 56);
      v32 = &v36;
      v36 = v26;
      EtwActivityIdControlKernel(2LL, &v32);
      v31 = 1;
    }
    *((_QWORD *)v6 + 1) = v6;
    *(_QWORD *)v6 = v6;
    if ( PnpShutdownEvent.Header.SignalState )
    {
      v4 = -1073741431;
      goto LABEL_36;
    }
    v9 = *((_QWORD *)v6 + 2);
    if ( v9 )
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
    else
      v10 = 0LL;
    if ( *(_DWORD *)(v10 + 300) == 788 )
      goto LABEL_86;
    v11 = *((_DWORD *)v6 + 6);
    if ( v11 > 12 )
    {
      if ( v11 > 17 )
      {
        switch ( v11 )
        {
          case 18:
            v29 = 1;
            goto LABEL_36;
          case 19:
            memset(NotificationStructure, 0, sizeof(NotificationStructure));
            LODWORD(NotificationStructure[4]) = -1;
            LODWORD(NotificationStructure[0]) = 2359297;
            *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
            NotificationStructure[3] = 0LL;
            IoReportTargetDeviceChangeAsynchronous(*((PDEVICE_OBJECT *)v6 + 2), NotificationStructure, 0LL, 0LL);
            v28 = *((_QWORD *)v6 + 2);
            break;
          case 20:
            v28 = *((_QWORD *)v6 + 2);
            break;
          default:
            if ( (unsigned int)(v11 - 21) <= 3 )
            {
              restarted = PiConfigureDevice(v6);
              goto LABEL_35;
            }
            goto LABEL_86;
        }
        PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(v28);
        goto LABEL_36;
      }
      if ( v11 == 17 )
      {
        started = PiProcessStartSystemDevices(v6);
        goto LABEL_27;
      }
      v23 = v11 - 13;
      if ( !v23 )
      {
        v4 = PiProcessResourceRequirementsChanged(v6);
        if ( v4 < 0 )
        {
          v0 = 1;
          v4 = 0;
        }
        goto LABEL_36;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
LABEL_26:
        started = PiProcessReenumeration(v6);
LABEL_27:
        v4 = started;
        v30 = 0;
        goto LABEL_36;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        restarted = PiProcessSetDeviceProblem(v6);
        goto LABEL_35;
      }
      if ( v25 == 1 )
      {
LABEL_74:
        restarted = PiRestartDevice(v6);
        goto LABEL_35;
      }
LABEL_86:
      v4 = -1073741823;
      goto LABEL_36;
    }
    if ( v11 == 12 )
      goto LABEL_74;
    if ( v11 <= 5 )
    {
      if ( v11 == 5 )
      {
        if ( v9 )
          v22 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
        else
          v22 = 0LL;
        restarted = PiQueryPowerRelations(v22, 0LL);
        goto LABEL_35;
      }
      if ( !v11 )
      {
        v0 = 1;
        goto LABEL_36;
      }
      v20 = v11 - 1;
      if ( !v20 )
        goto LABEL_75;
      v21 = v20 - 1;
      if ( !v21 )
      {
        restarted = PpProcessClearProblem(v6);
LABEL_35:
        v4 = restarted;
        goto LABEL_36;
      }
      v27 = v21 - 1;
      if ( !v27 )
      {
LABEL_75:
        restarted = PiProcessClearDeviceProblem(v6);
        goto LABEL_35;
      }
      if ( v27 == 1 )
      {
        restarted = PiProcessHaltDevice(v6);
        goto LABEL_35;
      }
      goto LABEL_86;
    }
    if ( v11 == 6 )
    {
      restarted = PnpProcessRebalance(v6);
      goto LABEL_35;
    }
    if ( v11 != 7 )
    {
      if ( v11 <= 10 )
        goto LABEL_26;
      restarted = PiProcessRequeryDeviceState(v6);
      goto LABEL_35;
    }
    v1 = 1;
LABEL_36:
    v15 = 1;
    do
    {
      v16 = *(char **)v6;
      v17 = **(_QWORD **)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || *(char **)(v17 + 8) != v16 )
        __fastfail(3u);
      *(_QWORD *)v6 = v17;
      *(_QWORD *)(v17 + 8) = v6;
      v18 = (int *)*((_QWORD *)v16 + 6);
      if ( v18 )
        *v18 = v4;
      v19 = (struct _KEVENT *)*((_QWORD *)v16 + 5);
      if ( v19 )
        KeSetEvent(v19, 0, 0);
      if ( v16 == v6 )
      {
        v15 = 0;
        if ( v30 )
          ObfDereferenceObjectWithTag(*((PVOID *)v16 + 2), 0x746C6644u);
      }
      ExFreePoolWithTag(v16, 0x32706E50u);
    }
    while ( v15 );
    v3 = &PnpEnumerationRequestList;
    v2 = v29;
    if ( v31 )
    {
      v32 = 0LL;
      EtwActivityIdControlKernel(2LL, &v32);
      v2 = v29;
      goto LABEL_2;
    }
  }
  if ( v0 || v1 || v2 )
  {
    v6 = 0LL;
    goto LABEL_9;
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  __writecr8(CurrentIrql);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
