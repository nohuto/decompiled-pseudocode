/*
 * XREFs of IoCreateDevice @ 0x1404132C4
 * Callers:
 *     RawMountVolume @ 0x14040E7F4 (RawMountVolume.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PiSwGetChildPdo @ 0x140539FCC (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IopFindLegacyDeviceNode @ 0x14067F04C (IopFindLegacyDeviceNode.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     ViDdiDriverEntry @ 0x140738C50 (ViDdiDriverEntry.c)
 *     VerifierIoCreateDevice @ 0x140742DC0 (VerifierIoCreateDevice.c)
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
 *     RawInitialize @ 0x1407B9A68 (RawInitialize.c)
 *     WmipDriverEntry @ 0x1407B9CBC (WmipDriverEntry.c)
 *     PiDaDriverEntry @ 0x1407B9E30 (PiDaDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     IopInsertRemoveDevice @ 0x140008248 (IopInsertRemoveDevice.c)
 *     KeInitializeDeviceQueue @ 0x1400082B8 (KeInitializeDeviceQueue.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14041374C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PoVolumeDevice @ 0x1405B7EDC (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x1405BE634 (IopCreateVpb.c)
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
  ULONG v7; // r14d
  ULONG v8; // edi
  unsigned __int64 v9; // rsi
  PUNICODE_STRING p_DestinationString; // rbx
  ULONG v12; // eax
  __int16 v13; // r13
  bool v14; // r15
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // edi
  NTSTATUS Vpb; // ebx
  char *v19; // rdx
  ULONG v20; // ecx
  __int64 v21; // rcx
  PVOID v22; // rcx
  NTSTATUS inserted; // eax
  _QWORD *v25; // rax
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v27; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v29; // [rsp+68h] [rbp-98h] BYREF
  ULONG v30; // [rsp+70h] [rbp-90h]
  ULONG v31; // [rsp+74h] [rbp-8Ch]
  ULONG v32; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING v33; // [rsp+80h] [rbp-80h]
  PDEVICE_OBJECT *v34; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h]
  PUNICODE_STRING v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t pszDest[20]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v44[40]; // [rsp+100h] [rbp+0h] BYREF

  v7 = DeviceExtensionSize;
  v34 = DeviceObject;
  v8 = DeviceExtensionSize & 7;
  v32 = DeviceExtensionSize;
  v9 = DeviceType;
  Object = 0LL;
  p_DestinationString = DeviceName;
  v33 = DeviceName;
  v12 = DeviceCharacteristics & 0x80;
  v31 = DeviceCharacteristics;
  v27 = v12;
  v13 = 0;
  v29 = 0LL;
  v30 = v8;
LABEL_2:
  P = 0LL;
  while ( 1 )
  {
    if ( v12 )
    {
      RtlStringCchPrintfW(
        pszDest,
        0x11uLL,
        L"\\Device\\%08lx",
        (unsigned int)_InterlockedIncrement(&IopUniqueDeviceObjectNumber));
      RtlInitUnicodeString(&DestinationString, pszDest);
      p_DestinationString = &DestinationString;
      v33 = &DestinationString;
    }
    v14 = p_DestinationString != 0LL;
    v15 = IopCreateDefaultDeviceSecurityDescriptor((unsigned int)v9, v31, DeviceName, v44, &v29, &P, 0LL);
    if ( (_DWORD)v9 == 3 )
    {
      v13 = 2048;
    }
    else if ( (_DWORD)v9 == 7 || (_DWORD)v9 == 8 || (_DWORD)v9 == 36 )
    {
      v13 = 512;
    }
    v36 = 48;
    v37 = 0LL;
    v38 = p_DestinationString;
    v40 = v15;
    v16 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x200;
    v41 = 0LL;
    v39 = v16;
    if ( Exclusive )
    {
      v16 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x220;
      v39 = v16;
    }
    if ( p_DestinationString )
      v39 = v16 | 0x10;
    if ( v8 )
      v8 = 8 - v8;
    v17 = v7 + v8;
    if ( v17 >= 0xFFFFFE48 )
    {
      Vpb = -1073741811;
      goto LABEL_37;
    }
    Vpb = ObCreateObject(0, IoDeviceObjectType, (unsigned int)&v36, 0, 0, v17 + 440, 0, 0, (__int64)&Object);
    if ( Vpb < 0 )
      goto LABEL_37;
    memset(Object, 0, v17 + 440);
    v7 = v32;
    v19 = (char *)Object + v17 + 336;
    *((_QWORD *)v19 + 1) = Object;
    *((_QWORD *)Object + 39) = v19;
    *(_DWORD *)v19 = 13;
    *((_QWORD *)v19 + 11) = 0LL;
    *((_DWORD *)v19 + 4) = 0;
    *((_QWORD *)v19 + 3) = 0LL;
    *(_WORD *)Object = 3;
    *((_WORD *)Object + 1) = v7 + 336;
    v20 = v31;
    *((_DWORD *)Object + 18) = v9;
    *((_DWORD *)Object + 13) = v20;
    if ( (unsigned int)v9 <= 0x24 )
    {
      v21 = 0x1080000084LL;
      if ( _bittest64(&v21, v9) )
        break;
    }
LABEL_19:
    *((_DWORD *)Object + 38) = 0;
    *((_WORD *)Object + 152) = v13;
    *((_DWORD *)Object + 12) = 128;
    if ( Exclusive )
      *((_DWORD *)Object + 12) |= 8u;
    if ( v14 )
      *((_DWORD *)Object + 12) |= 0x40u;
    if ( v7 )
      *((_QWORD *)Object + 8) = (char *)Object + 336;
    else
      *((_QWORD *)Object + 8) = 0LL;
    *((_BYTE *)Object + 76) = 1;
    if ( (_DWORD)v9 == 3 || (unsigned int)v9 > 7 && ((unsigned int)v9 <= 9 || (_DWORD)v9 == 20 || (_DWORD)v9 == 32) )
    {
      v25 = (char *)Object + 80;
      *((_QWORD *)Object + 11) = (char *)Object + 80;
      *v25 = v25;
    }
    else
    {
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)Object + 4);
    }
    v22 = Object;
    if ( (*((_DWORD *)Object + 13) & 0x40001) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) |= 0x800u;
      v22 = Object;
    }
    inserted = ObInsertObject(v22, 0LL, 3u, 1u, &Object, &Handle);
    Vpb = inserted;
    if ( inserted >= 0 )
    {
      ObfReferenceObject(DriverObject);
      *((_QWORD *)Object + 1) = DriverObject;
      IopInsertRemoveDevice((__int64)DriverObject, (__int64)Object, 1);
      if ( *((_QWORD *)Object + 7) )
        PoVolumeDevice();
      ObCloseHandle(Handle, 0);
      goto LABEL_37;
    }
    if ( inserted != -1073741771 || (v12 = v27) == 0 )
    {
      Object = 0LL;
LABEL_37:
      if ( v29 )
        ExFreePoolWithTag(v29, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      *v34 = (PDEVICE_OBJECT)Object;
      return Vpb;
    }
    if ( v29 )
    {
      ExFreePoolWithTag(v29, 0);
      v12 = v27;
      v29 = 0LL;
    }
    p_DestinationString = v33;
    v8 = v30;
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      v12 = v27;
      goto LABEL_2;
    }
  }
  Vpb = IopCreateVpb(Object);
  if ( Vpb >= 0 )
  {
    KeInitializeEvent((PRKEVENT)((char *)Object + 280), SynchronizationEvent, 1u);
    goto LABEL_19;
  }
  ObfDereferenceObject(Object);
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  *v34 = 0LL;
  return Vpb;
}
