/*
 * XREFs of ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z @ 0x180006700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall std::error_category::equivalent(std::error_category *this, std::error_category **a2, int a3)
{
  return this == a2[1] && *(_DWORD *)a2 == a3;
}
