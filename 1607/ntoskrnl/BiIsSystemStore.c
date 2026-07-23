/*
 * XREFs of BiIsSystemStore @ 0x14053D918
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140534100 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x14053BB20 (BiLoadSystemStore.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
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
