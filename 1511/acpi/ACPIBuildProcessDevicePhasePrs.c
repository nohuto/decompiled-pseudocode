/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C0006A80
 * Callers:
 *     <none>
 * Callees:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0008220 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0008660 (ACPIBuildCompleteGeneric.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrs(__int64 a1)
{
  __int64 v2; // rcx
  bool v3; // zf

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 56) == 0LL;
  *(_DWORD *)(a1 + 32) = 16;
  if ( !v3 && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(a1 + 82) == 3 )
      PnpBiosSetFlagsForNotableInterrupts(v2, *(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 104));
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs(a1 + 80, 1LL);
  }
  ACPIBuildCompleteGeneric(0LL, 0LL, 0LL, a1);
  return 0LL;
}
