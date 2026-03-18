/*
 * XREFs of BiIsSystemStore @ 0x14056F55C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140569050 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x14056D274 (BiLoadSystemStore.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
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
    ExFreePoolWithTag(P, 0);
    if ( v3 && (int)BiGetRegistryValue(a1, L"TreatAsSystem", L"Description", 4LL, &P, &v6) >= 0 )
    {
      v4 = *(_DWORD *)P != 0;
      ExFreePoolWithTag(P, 0);
      return v4;
    }
  }
  return v1;
}
