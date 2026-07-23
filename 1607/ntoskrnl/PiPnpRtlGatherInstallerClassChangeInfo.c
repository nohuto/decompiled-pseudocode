/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EEF4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14062EC7C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, wchar_t *a2, unsigned int ***a3)
{
  unsigned int **PoolWithTag; // rax
  __int64 v7; // rdx
  unsigned int *v8; // r8
  int Object; // ebx
  int ObjectProperty; // eax
  _BYTE v12[4]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v13[4]; // [rsp+64h] [rbp-94h] BYREF
  int v14[6]; // [rsp+68h] [rbp-90h] BYREF
  wchar_t v15[40]; // [rsp+80h] [rbp-78h] BYREF

  PoolWithTag = (unsigned int **)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
LABEL_15:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3, v7, v8);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2u, a2, (volatile signed __int32 **)*a3 + 2);
    if ( Object < 0 )
      goto LABEL_15;
  }
  Object = PiDmGetObject(1LL, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_15;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)v13,
                     (__int64)v14,
                     16,
                     (__int64)v12,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
  {
    Object = 0;
  }
  else
  {
    if ( ObjectProperty < 0 )
      goto LABEL_15;
    Object = PnpStringFromGuid(v14, v15);
    if ( Object < 0 )
      goto LABEL_15;
    Object = PiDmGetObject(2LL, (__int64)v15, *a3 + 1);
    if ( Object == -1073741772 )
      return 0;
  }
  if ( Object < 0 )
    goto LABEL_15;
  return (unsigned int)Object;
}
