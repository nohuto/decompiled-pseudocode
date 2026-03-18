/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x14067FC98
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PlugPlayGetDeviceStatus @ 0x1404DCE8C (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14067FB74 (PiPnpRtlFreeDeviceDeleteInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, void **a2)
{
  PVOID PoolWithTag; // rax
  int DeviceRegProp; // edi
  __int64 v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+10h] BYREF
  int v11; // [rsp+90h] [rbp+18h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x54uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
LABEL_11:
    PiPnpRtlFreeDeviceDeleteInfo(*a2);
    *a2 = 0LL;
    return (unsigned int)DeviceRegProp;
  }
  memset(PoolWithTag, 0, 0x54uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( PlugPlayGetDeviceStatus((__int128 *)&DestinationString, &v8, *a2, &v12, 0) < 0 )
    *(_DWORD *)*a2 = 45;
  v7 = (__int64)*a2 + 4;
  v10 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)SourceString,
                    0LL,
                    9,
                    (__int64)&v11,
                    v7,
                    (__int64)&v10);
  if ( DeviceRegProp >= 0 && v11 == 1 && v10 > 2 )
  {
    *((_WORD *)*a2 + 40) = 0;
  }
  else
  {
    DeviceRegProp = 0;
    *((_WORD *)*a2 + 2) = 0;
  }
  if ( DeviceRegProp < 0 )
    goto LABEL_11;
  return (unsigned int)DeviceRegProp;
}
