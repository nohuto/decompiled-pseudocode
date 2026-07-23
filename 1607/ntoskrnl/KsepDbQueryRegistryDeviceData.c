/*
 * XREFs of KsepDbQueryRegistryDeviceData @ 0x1405353E8
 * Callers:
 *     KseQueryDeviceData @ 0x140535190 (KseQueryDeviceData.c)
 * Callees:
 *     KsepRegistryCloseKey @ 0x140514A9C (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 *     KsepStringTransform @ 0x140535480 (KsepStringTransform.c)
 *     KsepRegistryQueryValue @ 0x140654384 (KsepRegistryQueryValue.c)
 */

__int64 __fastcall KsepDbQueryRegistryDeviceData(__int64 a1, const WCHAR *a2, _DWORD *a3, _DWORD *a4)
{
  int Value; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h] BYREF
  _WORD *v12; // [rsp+50h] [rbp-10h]

  LODWORD(v11) = 0;
  v12 = 0LL;
  KeyHandle = 0LL;
  Value = KsepStringTransform(&v11, a1);
  if ( Value >= 0 )
  {
    if ( (int)KsepRegistryOpenKey(
                L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Device",
                v12,
                &KeyHandle) < 0
      || (v10 = (unsigned int)*a4,
          Value = KsepRegistryQueryValue(KeyHandle, a2, v10, (__int64)&v10),
          *a4 = v10,
          Value == -1073741772) )
    {
      Value = -1073741275;
    }
    else if ( Value >= 0 )
    {
      Value = 0;
      *a3 |= 0x10000000u;
    }
    if ( KeyHandle )
      KsepRegistryCloseKey(KeyHandle);
  }
  KsepStringFree(&v11);
  return (unsigned int)Value;
}
