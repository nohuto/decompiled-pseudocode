/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C001F740
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ACPIBuildCompleteGeneric @ 0x1C001F8A0 (ACPIBuildCompleteGeneric.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C001F8C4 (PnpBiosSetFlagsForNotableInterrupts.c)
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
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    FreeDataBuffs(a1 + 80, 1u);
  }
  ACPIBuildCompleteGeneric(0LL, 0LL, 0LL, a1);
  return 0LL;
}
