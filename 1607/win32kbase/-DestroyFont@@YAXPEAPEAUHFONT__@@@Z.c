/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0056318
 * Callers:
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C003A290 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HFONT *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreDeleteObject(v2);
    *a1 = 0LL;
  }
}
