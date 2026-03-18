/*
 * XREFs of UsbhRegPnpStart @ 0x1C0006220
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetGlobalUxdSettings @ 0x1C000639C (UsbhGetGlobalUxdSettings.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 */

__int64 __fastcall UsbhRegPnpStart(__int64 a1)
{
  wchar_t **v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rbp
  int v5; // r12d
  int v6; // r15d
  ULONG v7; // edx
  const WCHAR *v8; // rdi
  _QWORD *PoolWithTag; // rax
  _DWORD *v10; // rdi
  NTSTATUS v11; // eax
  int v12; // esi
  unsigned int v14; // eax
  void *DeviceRegKey; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  int v17; // [rsp+A0h] [rbp+18h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0;
  v2 = &HubInstanceKeyValues;
  v4 = FdoExt(a1);
  if ( HubInstanceKeyValues )
  {
    v5 = v17;
    v6 = v17;
    while ( 1 )
    {
      if ( *((_DWORD *)v2 + 2) != 4 )
        goto LABEL_12;
      v7 = 2;
      v8 = *v2;
      if ( *((_BYTE *)v2 + 12) )
        v7 = 1;
      if ( IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v4 + 1192), v7, 0x1F0000u, &DeviceRegKey) < 0 )
        goto LABEL_12;
      RtlInitUnicodeString(&DestinationString, v8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741670;
        goto LABEL_11;
      }
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      v11 = ZwQueryValueKey(
              DeviceRegKey,
              &DestinationString,
              KeyValuePartialInformation,
              PoolWithTag,
              0x10u,
              &ResultLength);
      v12 = v11;
      if ( v11 == -2147483643 )
        break;
      if ( v11 >= 0 )
        goto LABEL_15;
LABEL_10:
      ExFreePoolWithTag(v10, 0);
LABEL_11:
      ZwClose(DeviceRegKey);
      if ( v12 >= 0 && v6 == 4 && v5 == 4 )
        ((void (__fastcall *)(__int64, wchar_t *, int *, __int64))v2[3])(a1, *v2, &v17, 4LL);
LABEL_12:
      v2 += 4;
      if ( !*v2 )
        goto LABEL_13;
    }
    v12 = 0;
LABEL_15:
    v14 = v10[2];
    if ( v14 > 4 )
      v14 = 4;
    memmove(&v17, v10 + 3, v14);
    v5 = v10[1];
    v6 = v10[2];
    goto LABEL_10;
  }
LABEL_13:
  UsbhGetGlobalUxdSettings(v3, v4 + 5176);
  return 0LL;
}
