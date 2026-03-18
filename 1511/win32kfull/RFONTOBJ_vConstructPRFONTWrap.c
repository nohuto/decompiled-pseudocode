/*
 * XREFs of RFONTOBJ_vConstructPRFONTWrap @ 0x1C00DD2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ_vConstructPRFONTWrap(struct RFONT **a1, struct RFONT *a2)
{
  *a1 = a2;
  if ( a2 )
  {
    RFONTOBJ::vMakeInactive(a1);
    *a1 = 0LL;
  }
}
