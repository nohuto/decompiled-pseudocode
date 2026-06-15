/*
 * XREFs of ?GetSupportedModes@CWindowsPolicyManager@@UEAAJPEAPEBUModeList@@@Z @ 0x18001B920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetSupportedModes(CWindowsPolicyManager *this, const struct ModeList **a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = (const struct ModeList *)L"\a";
  return result;
}
