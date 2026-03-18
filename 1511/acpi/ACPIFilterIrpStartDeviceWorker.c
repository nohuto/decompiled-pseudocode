/*
 * XREFs of ACPIFilterIrpStartDeviceWorker @ 0x1C00715E0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeInitializePciDevice @ 0x1C0020BB0 (ACPIWakeInitializePciDevice.c)
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C007E678 (PnpCmResourcesExcludeSidebandResources.c)
 */

void __fastcall ACPIFilterIrpStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rdi
  void *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v16; // [rsp+80h] [rbp+8h] BYREF
  void *v17; // [rsp+88h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = DeviceExtension;
  v17 = 0LL;
  v7 = *(_QWORD *)(DeviceExtension + 104);
  v8 = *(_QWORD *)(v3 + 184);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 16);
  if ( v7 )
  {
    v11 = PnpCmResourcesExcludeSidebandResources(v7, v9, *(_QWORD *)(v8 + 16), (unsigned int)&v16, (__int64)&v17);
    v4 = v16;
    v5 = v17;
  }
  else
  {
    v11 = -1073741772;
  }
  if ( v11 >= 0 )
  {
    if ( *v4 != 1 || v4[4] )
    {
      *(_QWORD *)(v8 + 8) = v4;
      *(_QWORD *)(v8 + 16) = v5;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
    }
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_OWORD *)(v12 - 72) = *(_OWORD *)v12;
  *(_OWORD *)(v12 - 56) = *(_OWORD *)(v12 + 16);
  *(_OWORD *)(v12 - 40) = *(_OWORD *)(v12 + 32);
  *(_QWORD *)(v12 - 24) = *(_QWORD *)(v12 + 48);
  *(_BYTE *)(v12 - 69) = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_QWORD *)(v13 - 16) = ACPIRootIrpCompleteRoutine;
  *(_QWORD *)(v13 - 8) = &Event;
  *(_BYTE *)(v13 - 69) = -32;
  v14 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 720), *(PIRP *)(a1 + 40));
  if ( v14 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
  }
  if ( v14 >= 0 )
  {
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v8 + 16) = v10;
    if ( (*(_QWORD *)v6 & 0x102000000LL) != 0 )
      ACPIWakeInitializePciDevice(*(_QWORD *)(v6 + 712));
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  IofCompleteRequest(*(PIRP *)(a1 + 40), 0);
}
