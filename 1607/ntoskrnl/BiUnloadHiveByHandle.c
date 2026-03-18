/*
 * XREFs of BiUnloadHiveByHandle @ 0x140533C28
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14053B6F4 (BiCloseStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
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
  ExFreePoolWithTag(P, 0x4B444342u);
  return v6;
}
