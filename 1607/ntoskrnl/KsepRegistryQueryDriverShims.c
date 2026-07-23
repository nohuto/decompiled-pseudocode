/*
 * XREFs of KsepRegistryQueryDriverShims @ 0x140514A24
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140514ED8 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepRegistryCloseKey @ 0x140514A9C (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x140514C9C (KsepRegistryOpenKey.c)
 *     KsepRegistryQuerySZ @ 0x140579410 (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryDriverShims(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int SZ; // ebx
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  SZ = KsepRegistryOpenKey(
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Compatibility\\Driver",
         a1,
         &KeyHandle);
  if ( SZ >= 0 )
    SZ = KsepRegistryQuerySZ(KeyHandle, L"Shims", 2048LL, a4);
  if ( SZ == -1073741772 )
    SZ = -1073741275;
  KsepRegistryCloseKey(KeyHandle);
  return (unsigned int)SZ;
}
