/*
 * XREFs of USBDeviceStart @ 0x1C001BB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 *     RegistryReadPnPKeyValue @ 0x1C001B15C (RegistryReadPnPKeyValue.c)
 *     USBHwGetDescriptor @ 0x1C001C918 (USBHwGetDescriptor.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C001C998 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x1C001CB00 (USBHwSelectAudioConfiguration.c)
 *     USBHwGetDeviceIDString @ 0x1C001D408 (USBHwGetDeviceIDString.c)
 *     USBHwLogStartFailure @ 0x1C001D6B0 (USBHwLogStartFailure.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C001D8DC (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  unsigned __int16 *v2; // r14
  __int64 v3; // r13
  char *v4; // rdi
  NTSTATUS Status; // ebx
  PIRP Irp; // r12
  PVOID PoolWithTag; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int16 *v13; // r12
  PVOID v14; // rax
  bool v15; // r12
  __int64 v16; // r9
  NTSTATUS AudioConfigurationDescriptor; // eax
  __int64 v18; // r9
  PUSB_INTERFACE_DESCRIPTOR v19; // rax
  __int64 v20; // r8
  __int64 AudioSpecificInterface; // rax
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r8
  int v25; // edi
  _DWORD *v26; // r12
  int DeviceIDString; // eax
  __int64 v28; // rsi
  struct _DEVICE_OBJECT *v29; // rcx
  PVOID v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // edx
  _WORD *v34; // rcx
  char v36[64]; // [rsp+40h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-9h] BYREF
  PVOID v38; // [rsp+F0h] [rbp+67h] BYREF
  PVOID P; // [rsp+F8h] [rbp+6Fh]
  __int64 v40; // [rsp+100h] [rbp+77h]
  PVOID Item; // [rsp+108h] [rbp+7Fh]

  v40 = *(_QWORD *)(a1 + 16);
  Item = 0LL;
  v2 = 0LL;
  P = 0LL;
  v3 = *(_QWORD *)(v40 + 72);
  v4 = 0LL;
  Status = -1073741670;
  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
  if ( !Irp )
  {
    v10 = 0LL;
    goto LABEL_12;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x41627845u);
  if ( PoolWithTag )
  {
    Irp->IoStatus.Status = -1073741637;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_QWORD *)(v8 + 56) = USBHwIrpCompleteSynch;
    *(_QWORD *)(v8 + 64) = &Event;
    *(_BYTE *)(v8 + 3) = -32;
    v9 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 8) = &USB_BUS_INTERFACE_USBDI_GUID;
    *(_WORD *)v9 = 2075;
    *(_QWORD *)(v9 + 24) = PoolWithTag;
    *(_DWORD *)(v9 + 16) = 65608;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), Irp);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
      Status = Irp->IoStatus.Status;
    }
    if ( Status < 0 )
    {
      ExFreePool(PoolWithTag);
      PoolWithTag = 0LL;
    }
  }
  IoFreeIrp(Irp);
  if ( Status < 0 )
    goto LABEL_11;
  if ( !PoolWithTag )
  {
    Status = -1073741438;
LABEL_11:
    v10 = 0LL;
    goto LABEL_12;
  }
  v10 = PoolWithTag;
  P = PoolWithTag;
LABEL_12:
  v11 = -1LL;
  if ( Status < 0 )
  {
    v12 = -1LL;
    strcpy(v36, "Could not acquire Bus Interface");
    do
      ++v12;
    while ( v36[v12] );
    USBHwLogStartFailure(a1, (unsigned int)Status, v36);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v10, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(P);
      P = 0LL;
    }
    else
    {
      *(_QWORD *)(v3 + 56) = P;
    }
  }
  if ( Status < 0 )
    goto LABEL_102;
  LODWORD(v38) = 18;
  Status = -1073741670;
  v13 = (unsigned __int16 *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x12uLL, 0x41627845u);
  if ( v13 )
  {
    v14 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x88uLL, 0x41627845u);
    if ( v14 )
      Status = USBHwGetDescriptor(a1, (int)&v38, (int)v13, 1, 0, 0, v14);
    if ( Status < 0 )
      ExFreePool(v13);
    else
      v2 = v13;
  }
  v15 = 0;
  if ( Status < 0 )
  {
    v16 = -1LL;
    strcpy(v36, "Could not acquire Device Descriptor");
    do
      ++v16;
    while ( v36[v16] );
    USBHwLogStartFailure(a1, (unsigned int)Status, v36);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v2, ExFreePool);
    if ( Status < 0 )
      ExFreePool(v2);
    else
      *(_QWORD *)(v3 + 32) = v2;
  }
  if ( Status < 0 )
    goto LABEL_102;
  if ( ExAllocatePoolWithTag((POOL_TYPE)512, 9uLL, 0x41627845u) )
  {
    AudioConfigurationDescriptor = USBHwGetAudioConfigurationDescriptor(a1);
    v4 = (char *)Item;
    Status = AudioConfigurationDescriptor;
  }
  else
  {
    Status = -1073741670;
  }
  if ( Status < 0 )
  {
    v18 = -1LL;
    strcpy(v36, "Could not acquire Configuration Descriptor");
    do
      ++v18;
    while ( v36[v18] );
    USBHwLogStartFailure(a1, (unsigned int)Status, v36);
  }
  else
  {
    Status = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v4, ExFreePool);
    if ( Status < 0 )
    {
      ExFreePool(v4);
    }
    else
    {
      *(_QWORD *)(v3 + 40) = v4;
      if ( v2[4] == 2321 && v2[5] == 9490 && *((_WORD *)v4 + 1) > 0x22u )
        v4[34] = 0;
      if ( v2[4] == 2235 && v2[5] == 9986 && *((_WORD *)v4 + 1) > 0x36u )
        v4[54] = 1;
      if ( v2[4] == 2706 && v2[5] == 4128 && *((_WORD *)v4 + 1) > 0x2Au )
        *(_WORD *)(v4 + 41) = 161;
      if ( v2[4] == 2675 && v2[5] == 6 && *((_WORD *)v4 + 1) > 0x2Au )
        *(_WORD *)(v4 + 41) = 161;
    }
  }
  if ( Status < 0 )
    goto LABEL_102;
  v19 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v4, v4, -1, -1, 1, 1, -1);
  if ( v19 )
  {
    *(_QWORD *)(v3 + 48) = v19;
    AudioSpecificInterface = USBParseGetAudioSpecificInterface(v4, v19, v20, 8LL);
    if ( AudioSpecificInterface )
    {
      v22 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
      *(_DWORD *)(v3 + 8) = v22;
      if ( v22 >= 0x200 )
        Status = -1073741735;
      goto LABEL_72;
    }
LABEL_71:
    Status = -1073741438;
    goto LABEL_72;
  }
  if ( !USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v4, v4, -1, -1, 1, 2, -1) )
    v15 = USBD_ParseConfigurationDescriptorEx((PUSB_CONFIGURATION_DESCRIPTOR)v4, v4, -1, -1, 1, 3, -1) != 0LL;
  *(_BYTE *)(v3 + 5) = v15;
  if ( !v15 )
  {
    v23 = -1LL;
    strcpy(v36, "Could not find Control interface in Configuration Descriptor");
    do
      ++v23;
    while ( v36[v23] );
    USBHwLogStartFailure(a1, (unsigned int)Status, v36);
    goto LABEL_71;
  }
LABEL_72:
  if ( Status < 0 )
    goto LABEL_102;
  Status = USBHwSelectAudioConfiguration(a1);
  if ( Status < 0 )
  {
    strcpy(v36, "Could not Select a device configuration");
    do
      ++v11;
    while ( v36[v11] );
    USBHwLogStartFailure(a1, (unsigned int)Status, v36);
LABEL_102:
    if ( P )
      (*((void (__fastcall **)(_QWORD))P + 3))(*((_QWORD *)P + 1));
    return (unsigned int)Status;
  }
  v25 = 10;
  if ( *((_BYTE *)v2 + 15) )
  {
    v26 = (_DWORD *)(v40 + 32);
    DeviceIDString = USBHwGetDeviceIDString(a1);
    Status = DeviceIDString;
    if ( DeviceIDString == -1073741822 )
    {
      v28 = v40;
      *v26 = 10;
      Status = 0;
      *(_QWORD *)(v28 + 24) = Default_Product_String;
      goto LABEL_88;
    }
    if ( DeviceIDString >= 0 )
    {
      v28 = v40;
      goto LABEL_88;
    }
    strcpy(v36, "Could not acquire a device name string");
    do
      ++v11;
    while ( v36[v11] );
    USBHwLogStartFailure(a1, (unsigned int)DeviceIDString, v36);
    v28 = v40;
  }
  else
  {
    v28 = v40;
    *(_QWORD *)(v40 + 24) = Default_Product_String;
    *(_DWORD *)(v28 + 32) = 10;
  }
  if ( Status < 0 )
    goto LABEL_102;
LABEL_88:
  *(_BYTE *)(v3 + 212) = 0;
  v29 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v38 = 0LL;
  if ( (int)RegistryReadPnPKeyValue(v29, L"CapturePacketsPerUrb", v24, &v38) >= 0 )
  {
    v30 = v38;
    v31 = *(_DWORD *)v38;
    if ( *(_DWORD *)v38 >= 3u )
    {
      if ( v31 > 0xA )
        v31 = 10;
      v25 = v31;
    }
    else
    {
      v25 = 3;
    }
    *(_BYTE *)(v3 + 212) = 1;
    ExFreePool(v30);
  }
  *(_DWORD *)(v3 + 208) = v25;
  v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  *(_BYTE *)(v3 + 4) = (*(__int64 (__fastcall **)(_QWORD))(v32 + 64))(*(_QWORD *)(v32 + 8));
  v33 = 0;
  v34 = &unk_1C000ACB2;
  *(_QWORD *)(v3 + 200) = v3 + 192;
  *(_QWORD *)(v3 + 192) = v3 + 192;
  *(_DWORD *)(v28 + 40) = v2[4];
  *(_DWORD *)(v28 + 44) = v2[5];
  *(_DWORD *)(v28 + 48) = v2[6];
  *(_QWORD *)(v28 + 56) = &KSCOMPONENTID_USBAUDIO;
  while ( v2[4] != *(v34 - 1) || v2[5] != *v34 )
  {
    ++v33;
    v34 += 2;
    if ( v33 >= 0x18 )
      goto LABEL_101;
  }
  *(_BYTE *)(v3 + 6) = 1;
LABEL_101:
  if ( Status < 0 )
    goto LABEL_102;
  return (unsigned int)Status;
}
