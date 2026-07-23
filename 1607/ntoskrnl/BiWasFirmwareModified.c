/*
 * XREFs of BiWasFirmwareModified @ 0x14012E534
 * Callers:
 *     BiCloseStore @ 0x14053BC34 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  bool v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &P, &v3) >= 0 )
  {
    v1 = *(_DWORD *)P != 0;
    ExFreePoolWithTag(P, 0x4B444342u);
  }
  return v1;
}
