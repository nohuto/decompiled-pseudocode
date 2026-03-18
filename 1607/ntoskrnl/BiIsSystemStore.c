/*
 * XREFs of BiIsSystemStore @ 0x14053D3D8
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x14053B5E0 (BiLoadSystemStore.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14053C8A8 (BcdCloseStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 */

bool __fastcall BiIsSystemStore(__int64 a1)
{
  char v1; // di
  bool v3; // bl
  bool v4; // bl
  char v6; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", L"Description", 4LL, &P, &v6) >= 0 )
  {
    v3 = *(_DWORD *)P != 0;
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( v3 && (int)BiGetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &P, &v6) >= 0 )
    {
      v4 = *(_DWORD *)P != 0;
      ExFreePoolWithTag(P, 0x4B444342u);
      return v4;
    }
  }
  return v1;
}
