/*
 * XREFs of IoCreateDevice @ 0x140472390
 * Callers:
 *     RawMountVolume @ 0x1403EFCEC (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x1403F03EC (PiSwGetChildPdo.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     VRegSetup @ 0x140551B90 (VRegSetup.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     ViDdiDriverEntry @ 0x1407047E8 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 *     RawInitialize @ 0x14079C354 (RawInitialize.c)
 *     WmipDriverEntry @ 0x14079CA30 (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x14079CBA4 (PiDaDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IopInsertRemoveDevice @ 0x14007F198 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x14007F208 (KeInitializeDeviceQueue.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404727EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PoVolumeDevice @ 0x14056C9A4 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14057DE7C (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  ULONG v8; // ecx
  ULONG v9; // esi
  unsigned __int64 v10; // r15
  struct _DEVICE_OBJECT *v11; // rbx
  PUNICODE_STRING p_DestinationString; // rdi
  ULONG v13; // r14d
  ULONG v14; // eax
  bool v15; // r12
  __int64 v16; // rdx
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // eax
  NTSTATUS Vpb; // edi
  __int64 v21; // rcx
  USHORT v22; // ax
  __int64 v23; // rcx
  NTSTATUS inserted; // eax
  PVOID v25; // rdx
  __int16 v27; // ax
  __int16 v28; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v30; // [rsp+60h] [rbp-A0h]
  _BYTE v31[12]; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  ULONG v33; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING v34; // [rsp+80h] [rbp-80h]
  PDEVICE_OBJECT *v35; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t pszDest[20]; // [rsp+D8h] [rbp-28h] BYREF
  char v45[40]; // [rsp+100h] [rbp+0h] BYREF

  v8 = DeviceCharacteristics;
  v35 = DeviceObject;
  v9 = DeviceExtensionSize & 7;
  v10 = DeviceType;
  v11 = 0LL;
  Object = 0LL;
  v28 = 0;
  p_DestinationString = DeviceName;
  *(_DWORD *)&v31[8] = 0;
  v13 = DeviceExtensionSize;
  P = 0LL;
  v14 = DeviceCharacteristics & 0x80;
  v34 = DeviceName;
  v30 = v14;
  v33 = DeviceExtensionSize;
  *(_QWORD *)v31 = DeviceExtensionSize & 7;
  while ( 1 )
  {
    if ( v14 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      v11 = (struct _DEVICE_OBJECT *)Object;
      p_DestinationString = &DestinationString;
      v8 = DeviceCharacteristics;
      v34 = &DestinationString;
    }
    v15 = p_DestinationString != 0LL;
    v16 = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v10, v8, DeviceName, v45, &v31[4], &P, 0LL);
    if ( (_DWORD)v10 == 3 )
    {
      v27 = 2048;
    }
    else
    {
      if ( (_DWORD)v10 != 7 )
      {
        if ( (_DWORD)v10 == 8 )
        {
          v28 = 512;
          goto LABEL_8;
        }
        if ( (_DWORD)v10 != 36 )
          goto LABEL_8;
      }
      v27 = 512;
    }
    v28 = v27;
LABEL_8:
    v37 = 48;
    v38 = 0LL;
    v39 = p_DestinationString;
    v41 = v16;
    v17 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x200;
    v42 = 0LL;
    v40 = v17;
    if ( Exclusive )
    {
      v17 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x220;
      v40 = v17;
    }
    if ( p_DestinationString )
      v40 = v17 | 0x10;
    if ( v9 )
      v9 = 8 - v9;
    v18 = v13 + v9;
    if ( v18 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_36;
    }
    v19 = ObCreateObject(0, (_DWORD *)IoDeviceObjectType, (__int64)&v37, 0, 0, v18 + 440, 0, 0, &Object);
    v11 = (struct _DEVICE_OBJECT *)Object;
    Vpb = v19;
    if ( v19 < 0 )
      goto LABEL_36;
    memset(Object, 0, v18 + 440);
    v13 = v33;
    v21 = (__int64)&v11[1] + v18;
    v22 = v33 + 336;
    *(_QWORD *)(v21 + 8) = v11;
    v11->DeviceObjectExtension = (struct _DEVOBJ_EXTENSION *)v21;
    *(_DWORD *)v21 = 13;
    *(_QWORD *)(v21 + 88) = 0LL;
    *(_DWORD *)(v21 + 16) = 0;
    *(_QWORD *)(v21 + 24) = 0LL;
    v11->Type = 3;
    v11->Size = v22;
    v11->DeviceType = v10;
    v11->Characteristics = DeviceCharacteristics;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v23 = 0x1080000084LL;
      if ( _bittest64(&v23, v10) )
        break;
    }
LABEL_18:
    v11->AlignmentRequirement = 0;
    v11->SectorSize = v28;
    v11->Flags = 128;
    if ( Exclusive )
      v11->Flags = 136;
    if ( v15 )
      v11->Flags |= 0x40u;
    if ( v13 )
      v11->DeviceExtension = &v11[1];
    else
      v11->DeviceExtension = 0LL;
    v11->StackSize = 1;
    if ( (_DWORD)v10 == 3 || (unsigned int)v10 > 7 && ((unsigned int)v10 <= 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32) )
    {
      v11->Queue.ListEntry.Blink = &v11->Queue.ListEntry;
      v11->Queue.ListEntry.Flink = &v11->Queue.ListEntry;
    }
    else
    {
      KeInitializeDeviceQueue(&v11->DeviceQueue);
    }
    if ( (v11->Characteristics & 0x40001) == 0 )
      v11->DeviceObjectExtension->ExtensionFlags |= 0x800u;
    inserted = ObInsertObject(v11, 0LL, 3u, 1u, &Object, &Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      v11 = (struct _DEVICE_OBJECT *)Object;
      v25 = Object;
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)v25, 1);
      if ( v11->Vpb )
        PoVolumeDevice(v11);
      ObCloseHandle(Handle, 0);
      goto LABEL_36;
    }
    if ( inserted != -1073741771 || (v14 = v30) == 0 )
    {
      v11 = 0LL;
LABEL_36:
      if ( *(_QWORD *)&v31[4] )
        ExFreePoolWithTag(*(PVOID *)&v31[4], 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      *v35 = v11;
      return Vpb;
    }
    if ( *(_QWORD *)&v31[4] )
    {
      ExFreePoolWithTag(*(PVOID *)&v31[4], 0);
      v14 = v30;
      *(_QWORD *)&v31[4] = 0LL;
    }
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v14 = v30;
      P = 0LL;
    }
    v11 = (struct _DEVICE_OBJECT *)Object;
    p_DestinationString = v34;
    v9 = *(_DWORD *)v31;
    v8 = DeviceCharacteristics;
  }
  Vpb = IopCreateVpb(v11);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent(&v11->DeviceLock, SynchronizationEvent, 1u);
    goto LABEL_18;
  }
  ObfDereferenceObject(v11);
  if ( *(_QWORD *)&v31[4] )
    ExFreePoolWithTag(*(PVOID *)&v31[4], 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *v35 = 0LL;
  return Vpb;
}
