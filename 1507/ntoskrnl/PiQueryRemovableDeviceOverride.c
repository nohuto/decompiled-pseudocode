/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x140540D3C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpGetDeviceLocationStrings @ 0x14040D898 (PnpGetDeviceLocationStrings.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404D8C10 (PnpDeviceObjectToDeviceInstance.c)
 *     PipFindDeviceOverrideEntry @ 0x140540FE4 (PipFindDeviceOverrideEntry.c)
 *     PnpOpenFirstMatchingSubKey @ 0x14067E628 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, bool *a4)
{
  int v7; // r13d
  void *v8; // r12
  int DeviceOverrideEntry; // ebx
  __int64 v11; // rcx
  PVOID *v12; // r13
  unsigned int v13; // r14d
  unsigned int i; // r15d
  PVOID PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  PVOID v19; // rax
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[5]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  bool *v29; // [rsp+D8h] [rbp-28h]
  char KeyValueInformation[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v31; // [rsp+E4h] [rbp-1Ch]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]

  v29 = a4;
  v7 = 0;
  v8 = 0LL;
  if ( PnpDeviceOverrideHashList )
  {
    memset(&P[1], 0, 0x20uLL);
    DeviceOverrideEntry = -1073741772;
    if ( (*(_BYTE *)(a1 + 680) & 1) == 0 )
    {
      LODWORD(P[1]) = 2490404;
      P[2] = L"ChildLocationPaths";
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
        ZwClose(P[3]);
        *(_BYTE *)(a1 + 680) |= 4u;
      }
      DeviceOverrideEntry = -1073741772;
    }
    if ( (*(_BYTE *)(a1 + 680) & 3) != 1 )
    {
      LODWORD(P[1]) = 1835034;
      P[2] = L"LocationPaths";
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
      v11 = *(_QWORD *)(a1 + 16);
      if ( (*(_BYTE *)(v11 + 680) & 5) != 1 )
      {
        LODWORD(P[1]) = 2490404;
        P[2] = L"ChildLocationPaths";
        DeviceOverrideEntry = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v11 + 32), (__int64)&Handle, 131097);
        if ( DeviceOverrideEntry < 0 )
          return (unsigned int)DeviceOverrideEntry;
        P[0] = (PVOID)0x300000002LL;
        v12 = P;
        v13 = 256;
        LODWORD(NumberOfBytes) = 256;
        for ( i = 0; i < 2; ++i )
        {
          DeviceOverrideEntry = 0;
          if ( !v8 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x6E697050u);
            v13 = NumberOfBytes;
            v8 = PoolWithTag;
            if ( !PoolWithTag )
              DeviceOverrideEntry = -1073741670;
          }
          if ( DeviceOverrideEntry >= 0 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
            v22 = *(_DWORD *)v12;
            DeviceOverrideEntry = CmGetDeviceRegProp(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    v16,
                                    (__int64)Handle,
                                    v22,
                                    (__int64)&v23,
                                    (__int64)v8,
                                    (__int64)&NumberOfBytes);
            if ( DeviceOverrideEntry == -1073741789 )
            {
              ExFreePoolWithTag(v8, 0);
              v19 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6E697050u);
              v13 = NumberOfBytes;
              v8 = v19;
              if ( !v19 )
                DeviceOverrideEntry = -1073741670;
            }
            else if ( DeviceOverrideEntry >= 0 )
            {
              if ( v23 == 7 )
                DeviceOverrideEntry = PipFindDeviceOverrideEntry(v8);
              else
                DeviceOverrideEntry = -1073741823;
            }
          }
          LODWORD(NumberOfBytes) = v13;
          if ( DeviceOverrideEntry >= 0 )
            break;
          v12 = (PVOID *)((char *)v12 + 4);
        }
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        ZwClose(Handle);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(_BYTE *)(v17 + 680);
        if ( (v18 & 1) == 0 )
        {
          if ( DeviceOverrideEntry >= 0 )
            *(_BYTE *)(v17 + 680) = v18 | 4;
          *(_BYTE *)(*(_QWORD *)(a1 + 16) + 680LL) |= 1u;
        }
        v7 = 0;
      }
      if ( DeviceOverrideEntry < 0 )
        return (unsigned int)DeviceOverrideEntry;
    }
    KeyHandle = 0LL;
    if ( LODWORD(P[4]) != 1 )
      goto LABEL_50;
    ObjectAttributes.RootDirectory = P[3];
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
      DeviceOverrideEntry = PnpGetDeviceLocationStrings(a1, (char **)P, &v22);
      if ( DeviceOverrideEntry < 0
        || (DeviceOverrideEntry = PnpOpenFirstMatchingSubKey((PCWSTR)P[0], &KeyHandle),
            ExFreePoolWithTag(P[0], 0),
            DeviceOverrideEntry < 0) )
      {
        if ( LODWORD(P[4]) > 1 )
        {
          ObjectAttributes.RootDirectory = P[3];
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
    ZwClose(P[3]);
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
        if ( v31 == 4 && v32 == 4 )
          v7 = v33;
        else
          DeviceOverrideEntry = -1073741823;
      }
      ZwClose(KeyHandle);
      *v29 = v7 != 0;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)DeviceOverrideEntry;
}
