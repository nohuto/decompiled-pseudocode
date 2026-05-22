/*
 * XREFs of ?PopulateTargetingData@MPCGamepadProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002E7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::PopulateTargetingData(
        MPCGamepadProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  *((_BYTE *)a3 + 684) = 1;
  *((_DWORD *)a3 + 181) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 182) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 183) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a3 + 184) = *((_DWORD *)a2 + 41);
  *((_DWORD *)a3 + 185) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 186) = *((_DWORD *)a2 + 43);
  return 0LL;
}
