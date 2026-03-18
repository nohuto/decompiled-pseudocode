/*
 * XREFs of ?IsOfType@CGaussianBlurEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001A360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGaussianBlurEffect::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 9) > 1 && a2 != 7 )
    return (unsigned int)(a2 - 100) <= 1;
  return v2;
}
