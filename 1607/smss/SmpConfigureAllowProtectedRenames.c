/*
 * XREFs of SmpConfigureAllowProtectedRenames @ 0x14000C7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureAllowProtectedRenames(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  SmpAllowProtectedRenames = a4 == 4 && *a3 != 0;
  return 0LL;
}
