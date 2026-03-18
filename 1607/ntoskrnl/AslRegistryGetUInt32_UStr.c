/*
 * XREFs of AslRegistryGetUInt32_UStr @ 0x1406C5728
 * Callers:
 *     SdbResolveDatabase @ 0x1406C44AC (SdbResolveDatabase.c)
 *     AslRegistryGetUInt32 @ 0x1406C56B8 (AslRegistryGetUInt32.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140159F60 (ZwQueryValueKey.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32_UStr(_DWORD *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  __int64 Length; // [rsp+20h] [rbp-48h]
  ULONG v8; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v9[6]; // [rsp+38h] [rbp-30h] BYREF

  *a1 = 0;
  v8 = 0;
  v4 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, v9, 0x14u, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v9[1] == 4 && v9[2] == 4 )
    {
      v5 = 0;
      *a1 = v9[3];
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetUInt32_UStr", 786, (unsigned int)"Invalid value type");
      return (unsigned int)-1073741788;
    }
  }
  else if ( v4 != -1073741772 )
  {
    LODWORD(Length) = v4;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryGetUInt32_UStr",
      779,
      (unsigned int)"Failed to query key value [%x]",
      Length);
  }
  return v5;
}
