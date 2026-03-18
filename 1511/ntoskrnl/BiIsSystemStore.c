/*
 * XREFs of BiIsSystemStore @ 0x1404FCABC
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1404F4C48 (BcdForciblyUnloadStore.c)
 *     BiLoadSystemStore @ 0x1404FACDC (BiLoadSystemStore.c)
 *     BiOpenSystemStore @ 0x1404FB6E8 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x1404FB8E4 (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x1404FBE3C (BcdCloseStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
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
