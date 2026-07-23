/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x14050D9CC
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PipFindDeviceOverrideEntry @ 0x14050DC78 (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x14050DE68 (PnpGetDeviceLocationStrings.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14051230C (PnpDeviceObjectToDeviceInstance.c)
 *     PnpOpenFirstMatchingSubKey @ 0x14062DC6C (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  int v7; // r13d
  void *v8; // r12
  int DeviceOverrideEntry; // ebx
  __int64 v10; // rcx
  PVOID *p_P; // r13
  unsigned int v12; // r14d
  unsigned int i; // r15d
  PVOID PoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // al
  PVOID v19; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[4]; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-60h] BYREF
  bool *v29; // [rsp+A8h] [rbp-58h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  char KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v32; // [rsp+E4h] [rbp-1Ch]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]

  v29 = a4;
  v7 = 0;
  v8 = 0LL;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)-1073741772;
  memset(v26, 0, sizeof(v26));
  DeviceOverrideEntry = -1073741772;
  if ( (*(_BYTE *)(a1 + 680) & 1) == 0 )
  {
    LODWORD(v26[0]) = 2490404;
    v26[1] = L"ChildLocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      if ( DeviceOverrideEntry >= 0 )
        goto LABEL_40;
    }
    if ( a3 )
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
    if ( DeviceOverrideEntry >= 0 )
    {
LABEL_40:
      ZwClose((HANDLE)v26[2]);
      *(_BYTE *)(a1 + 680) |= 4u;
    }
    DeviceOverrideEntry = -1073741772;
  }
  if ( (*(_BYTE *)(a1 + 680) & 3) != 1 )
  {
    LODWORD(v26[0]) = 1835034;
    v26[1] = L"LocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      if ( DeviceOverrideEntry >= 0 )
        goto LABEL_41;
    }
    if ( a3 )
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3);
    if ( DeviceOverrideEntry >= 0 )
LABEL_41:
      *(_BYTE *)(a1 + 680) |= 2u;
  }
  *(_BYTE *)(a1 + 680) |= 1u;
  if ( DeviceOverrideEntry < 0 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v10 + 680) & 5) != 1 )
    {
      LODWORD(v26[0]) = 2490404;
      v26[1] = L"ChildLocationPaths";
      DeviceOverrideEntry = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v10 + 32), &Handle, 131097LL);
      if ( DeviceOverrideEntry < 0 )
        return (unsigned int)DeviceOverrideEntry;
      P = (PVOID)0x300000002LL;
      p_P = &P;
      v12 = 256;
      LODWORD(NumberOfBytes) = 256;
      for ( i = 0; i < 2; ++i )
      {
        DeviceOverrideEntry = 0;
        if ( !v8 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x6E697050u);
          v12 = NumberOfBytes;
          v8 = PoolWithTag;
          if ( !PoolWithTag )
            DeviceOverrideEntry = -1073741670;
        }
        if ( DeviceOverrideEntry >= 0 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
          v23 = *(_DWORD *)p_P;
          DeviceOverrideEntry = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  v15,
                                  (__int64)Handle,
                                  v23,
                                  (__int64)&v22,
                                  (__int64)v8,
                                  (__int64)&NumberOfBytes,
                                  0);
          if ( DeviceOverrideEntry == -1073741789 )
          {
            ExFreePoolWithTag(v8, 0);
            v19 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
            v12 = NumberOfBytes;
            v8 = v19;
            if ( !v19 )
              DeviceOverrideEntry = -1073741670;
          }
          else if ( DeviceOverrideEntry >= 0 )
          {
            if ( v22 == 7 )
              DeviceOverrideEntry = PipFindDeviceOverrideEntry(v8);
            else
              DeviceOverrideEntry = -1073741823;
          }
        }
        LODWORD(NumberOfBytes) = v12;
        if ( DeviceOverrideEntry >= 0 )
          break;
        p_P = (PVOID *)((char *)p_P + 4);
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      ZwClose(Handle);
      v16 = *(_QWORD *)(a1 + 16);
      v17 = *(_BYTE *)(v16 + 680);
      if ( (v17 & 1) == 0 )
      {
        if ( DeviceOverrideEntry >= 0 )
          *(_BYTE *)(v16 + 680) = v17 | 4;
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
      }
      v7 = 0;
    }
    if ( DeviceOverrideEntry < 0 )
      return (unsigned int)DeviceOverrideEntry;
  }
  KeyHandle = 0LL;
  if ( LODWORD(v26[3]) != 1 )
    goto LABEL_50;
  ObjectAttributes.RootDirectory = (HANDLE)v26[2];
  *(_DWORD *)&ValueName.Length = 262146;
  ObjectAttributes.ObjectName = &ValueName;
  ValueName.Buffer = (wchar_t *)L"*";
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DeviceOverrideEntry = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DeviceOverrideEntry < 0 )
  {
LABEL_50:
    DeviceOverrideEntry = PnpGetDeviceLocationStrings(a1, &P, &v23);
    if ( DeviceOverrideEntry < 0
      || (DeviceOverrideEntry = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle),
          ExFreePoolWithTag(P, 0),
          DeviceOverrideEntry < 0) )
    {
      if ( LODWORD(v26[3]) > 1 )
      {
        ObjectAttributes.RootDirectory = (HANDLE)v26[2];
        *(_DWORD *)&ValueName.Length = 262146;
        ObjectAttributes.ObjectName = &ValueName;
        ValueName.Buffer = (wchar_t *)L"*";
        KeyHandle = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceOverrideEntry = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
    }
  }
  ZwClose((HANDLE)v26[2]);
  if ( DeviceOverrideEntry >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 1310738;
    ValueName.Buffer = L"Removable";
    DeviceOverrideEntry = ZwQueryValueKey(
                            KeyHandle,
                            &ValueName,
                            KeyValuePartialInformation,
                            KeyValueInformation,
                            0x14u,
                            &ResultLength);
    if ( DeviceOverrideEntry >= 0 )
    {
      if ( v32 == 4 && v33 == 4 )
        v7 = v34;
      else
        DeviceOverrideEntry = -1073741823;
    }
    ZwClose(KeyHandle);
    *v29 = v7 != 0;
  }
  return (unsigned int)DeviceOverrideEntry;
}
