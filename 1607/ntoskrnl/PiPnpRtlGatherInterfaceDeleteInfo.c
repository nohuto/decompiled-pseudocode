/*
 * XREFs of PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062F06C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14062ECD8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(__int64 a1, unsigned int ***a2)
{
  void *v2; // rsi
  unsigned int **PoolWithTag; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+60h] [rbp-49h] BYREF
  __int64 v12; // [rsp+68h] [rbp-41h] BYREF
  int v13[4]; // [rsp+70h] [rbp-39h] BYREF
  wchar_t v14[40]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  PoolWithTag = (unsigned int **)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x20uLL);
    Object = PiDmGetObject(3LL, a1, *a2);
    if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
      goto LABEL_24;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1,
                       3u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                       (__int64)&v11 + 4,
                       (__int64)v13,
                       16,
                       (__int64)&v11,
                       0);
    Object = ObjectProperty;
    if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
    {
      if ( ObjectProperty < 0 )
        goto LABEL_24;
      if ( PnpStringFromGuid(v13, v14) >= 0 )
      {
        Object = PiDmGetObject(4LL, (__int64)v14, *a2 + 1);
        if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
          goto LABEL_24;
      }
    }
    v8 = PnpGetObjectProperty(
           0x47706E50u,
           0xC8uLL,
           a1,
           3,
           0LL,
           0LL,
           (__int64)&DEVPKEY_Device_InstanceId,
           (__int64)&v11 + 4,
           (PVOID *)&v12,
           &v11,
           0);
    v2 = (void *)v12;
    Object = v8;
    if ( v8 != -1073741772 && v8 != -1073741275 )
    {
      if ( v8 < 0 )
        goto LABEL_24;
      Object = PiDmGetObject(1LL, v12, *a2 + 2);
      if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
        goto LABEL_24;
    }
    v9 = PnpGetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           a1,
           3u,
           0LL,
           0LL,
           (__int64)&DEVPKEY_Device_ContainerId,
           (__int64)&v11 + 4,
           (__int64)v13,
           16,
           (__int64)&v11,
           0);
    Object = v9;
    if ( v9 == -1073741772 || v9 == -1073741275 )
    {
      Object = 0;
    }
    else
    {
      if ( v9 < 0 )
        goto LABEL_24;
      Object = PnpStringFromGuid(v13, v14);
      if ( Object < 0 )
        goto LABEL_24;
      Object = PiDmGetObject(5LL, (__int64)v14, *a2 + 3);
      if ( Object == -1073741772 )
      {
        Object = 0;
        goto LABEL_25;
      }
    }
    if ( Object >= 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  Object = -1073741670;
LABEL_24:
  PiPnpRtlFreeInterfaceDeleteInfo(*a2);
  *a2 = 0LL;
LABEL_25:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)Object;
}
