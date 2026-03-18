/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x140496C38
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlGUIDFromString @ 0x14043FEA8 (RtlGUIDFromString.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x140496D2C (PiDmGetCmObjectConstraintListFromCache.c)
 *     PiDmGetCmObjectListFromCache @ 0x140496EA8 (PiDmGetCmObjectListFromCache.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  const WCHAR *v2; // rdx
  bool v3; // zf
  __int64 v4; // rax
  int v5; // ecx
  NTSTATUS result; // eax
  _QWORD v7[5]; // [rsp+40h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+78h] [rbp+3Fh] BYREF

  Guid.Data1 = 0;
  memset(v7, 0, sizeof(v7));
  *(_QWORD *)&Guid.Data2 = 0LL;
  *(_DWORD *)&Guid.Data4[4] = 0;
  v2 = *(const WCHAR **)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24) == 0LL;
  LOBYTE(v7[2]) = *(_BYTE *)(a1 + 32) & 1;
  v7[3] = *(_QWORD *)(a1 + 40);
  v7[4] = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 72);
    if ( !v2 )
      return PiDmGetCmObjectListFromCache(
               3,
               (unsigned int)PiPnpRtlInterfaceFilterCallback,
               (unsigned int)v7,
               *(_QWORD *)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(_QWORD *)(a1 + 72));
    v5 = 0;
    return PiDmGetCmObjectConstraintListFromCache(
             v5,
             (_DWORD)v2,
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)v7,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             v4);
  }
  if ( !v2 )
  {
LABEL_10:
    v4 = *(_QWORD *)(a1 + 72);
    v5 = 1;
    v2 = *(const WCHAR **)(a1 + 24);
    return PiDmGetCmObjectConstraintListFromCache(
             v5,
             (_DWORD)v2,
             (unsigned int)PiPnpRtlInterfaceFilterCallback,
             (unsigned int)v7,
             *(_QWORD *)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             v4);
  }
  result = RtlInitUnicodeStringEx(&DestinationString, v2);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      v7[0] = &Guid;
      goto LABEL_10;
    }
  }
  return result;
}
