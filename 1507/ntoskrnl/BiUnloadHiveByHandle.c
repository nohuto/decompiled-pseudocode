/*
 * XREFs of BiUnloadHiveByHandle @ 0x1405690B8
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140569050 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14056D384 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(HANDLE Handle, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = BiGetRegistryValue(Handle, L"KeyName", L"Description", 1LL, &P, &v8);
  BiCloseKey(Handle);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v6 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0);
  return v6;
}
