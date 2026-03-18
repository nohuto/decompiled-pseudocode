/*
 * XREFs of ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0069724
 * Callers:
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C00377D0 (GreDeleteObject.c)
 */

void __fastcall DestroyFont(HFONT *a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = (__int64)*a1;
  if ( v3 )
  {
    GreDeleteObject(v3, a2);
    *a1 = 0LL;
  }
}
