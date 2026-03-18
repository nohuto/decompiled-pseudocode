/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C000A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C000397C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPISetDeviceWorker @ 0x1C0009460 (ACPISetDeviceWorker.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C000A540 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000A770 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInternalWaitWakeLoop @ 0x1C000A980 (ACPIInternalWaitWakeLoop.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000E3F0 (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C00231B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0047CB0 (ACPICMLidPowerStateCallBack.c)
 */

__int64 __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v3; // si
  _DWORD *DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  __int64 v7; // rdi
  int Status; // ebx
  unsigned __int8 MinorFunction; // r12
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  const char *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  _BYTE *PoolWithTag; // rax
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 *v20; // rax
  int v21; // eax
  char v22; // r8
  NTSTATUS v23; // eax
  char v24; // r8
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  __int64 *v27; // r8
  __int64 *v28; // rdx
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 *v31; // r8
  __int64 *v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rdx
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rdx
  __int64 *v41; // rcx
  __int64 v42; // [rsp+30h] [rbp-39h]
  __int64 v43; // [rsp+38h] [rbp-31h]
  __int64 v44; // [rsp+38h] [rbp-31h]
  __int64 v45; // [rsp+38h] [rbp-31h]
  __int64 v46; // [rsp+40h] [rbp-29h]
  __int64 v47; // [rsp+40h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+70h] [rbp+7h] BYREF
  signed __int32 v50; // [rsp+D0h] [rbp+67h] BYREF
  ULONG DataSize; // [rsp+D8h] [rbp+6Fh] BYREF
  void *DeviceRegKey; // [rsp+E0h] [rbp+77h] BYREF
  PVOID Data; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = 0;
  v50 = 0;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)qword_1C002C340;
  v7 = (__int64)DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( (DeviceExtension[50] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack((PVOID)v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1);
    }
    else
    {
      IoStatus.Status = 0;
      IoStatus.Information = 0LL;
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = *(_SYSTEM_POWER_STATE *)(v7 + 488);
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      ACPIInternalWaitWakeLoop(v1, 0, v11, 0LL, &IoStatus);
    }
    if ( (*(_DWORD *)(v7 + 8) & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !*(_QWORD *)(v7 + 568) )
      {
        v50 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 9uLL, 0x53706341u);
        *(_QWORD *)(v7 + 568) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[8] = 0;
          RtlStringCchPrintfA(*(NTSTRSAFE_PSTR *)(v7 + 568), 9uLL, "%d", v50);
        }
        else
        {
          v18 = *(_QWORD *)(v7 + 8);
          v19 = qword_1C002C340;
          v20 = qword_1C002C340;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v19 = *(__int64 **)(v7 + 560);
            if ( (v18 & 0x400000000000LL) != 0 )
              v20 = 0LL;
          }
          v42 = (__int64)v19;
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_qss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v19,
            5,
            14,
            (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
            v7,
            v42,
            (__int64)v20);
        }
      }
      v21 = ACPIGet((__int64 *)v7, 1145653319, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v22 = v21;
      if ( v21 < 0 )
      {
        v36 = *(_QWORD *)(v7 + 8);
        v37 = qword_1C002C340;
        v38 = qword_1C002C340;
        if ( (v36 & 0x200000000000LL) != 0 )
        {
          v37 = *(__int64 **)(v7 + 560);
          if ( (v36 & 0x400000000000LL) != 0 )
            v38 = *(__int64 **)(v7 + 568);
        }
        v44 = (__int64)v37;
        LOBYTE(v37) = 4;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v37,
          5,
          18,
          (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
          v22,
          v7,
          v44,
          (__int64)v38);
      }
      else
      {
        v23 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v24 = v23;
        if ( v23 < 0 )
        {
          v33 = *(_QWORD *)(v7 + 8);
          v34 = qword_1C002C340;
          v35 = qword_1C002C340;
          if ( (v33 & 0x200000000000LL) != 0 )
          {
            v34 = *(__int64 **)(v7 + 560);
            if ( (v33 & 0x400000000000LL) != 0 )
              v35 = *(__int64 **)(v7 + 568);
          }
          v43 = (__int64)v34;
          LOBYTE(v34) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v34,
            5,
            17,
            (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
            v24,
            v7,
            v43,
            (__int64)v35);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v25 < 0 )
          {
            v26 = *(_QWORD *)(v7 + 8);
            v27 = qword_1C002C340;
            v28 = qword_1C002C340;
            if ( (v26 & 0x200000000000LL) != 0 )
            {
              v27 = *(__int64 **)(v7 + 560);
              if ( (v26 & 0x400000000000LL) != 0 )
                v28 = *(__int64 **)(v7 + 568);
            }
            v46 = (__int64)v28;
            LOBYTE(v28) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v28,
              5,
              15,
              (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
              v25,
              v7,
              (__int64)v27,
              v46);
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v50 = _strtoui64(*(const char **)(v7 + 568), 0LL, 10);
          v29 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v50, 4u);
          if ( v29 < 0 )
          {
            v30 = *(_QWORD *)(v7 + 8);
            v31 = qword_1C002C340;
            v32 = qword_1C002C340;
            if ( (v30 & 0x200000000000LL) != 0 )
            {
              v31 = *(__int64 **)(v7 + 560);
              if ( (v30 & 0x400000000000LL) != 0 )
                v32 = *(__int64 **)(v7 + 568);
            }
            v47 = (__int64)v32;
            LOBYTE(v32) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v32,
              5,
              16,
              (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
              v29,
              v7,
              (__int64)v31,
              v47);
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications((ULONG_PTR)v1, (__int64)ACPICMButtonNotifyByDeviceObject, (__int64)v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v39 = *(_QWORD *)(v7 + 8);
      v40 = qword_1C002C340;
      v41 = qword_1C002C340;
      if ( (v39 & 0x200000000000LL) != 0 )
      {
        v40 = *(__int64 **)(v7 + 560);
        if ( (v39 & 0x400000000000LL) != 0 )
          v41 = *(__int64 **)(v7 + 568);
      }
      v45 = (__int64)v40;
      LOBYTE(v40) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v40,
        5,
        19,
        (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
        Status,
        v7,
        v45,
        (__int64)v41);
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v13 = (const char *)qword_1C002C340;
  if ( v7 )
  {
    v14 = *(_QWORD *)(v7 + 8);
    v3 = v7;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 560);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(v7 + 568);
    }
  }
  v15 = 26;
  if ( MinorFunction < 0x1Au )
    v15 = MinorFunction;
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x14u,
           (__int64)&WPP_ffa629311d53357875166d871b25d509_Traceguids,
           (char)v5,
           ACPIDispatchPnpTableNames[v15],
           Status,
           v3,
           v6,
           v13);
}
