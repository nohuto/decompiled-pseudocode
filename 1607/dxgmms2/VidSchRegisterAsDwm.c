/*
 * XREFs of VidSchRegisterAsDwm @ 0x1C0074070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchRegisterAsDwm(__int64 a1)
{
  if ( !a1 )
    return 3221225485LL;
  *(_BYTE *)(a1 + 2624) = 1;
  return 0LL;
}
