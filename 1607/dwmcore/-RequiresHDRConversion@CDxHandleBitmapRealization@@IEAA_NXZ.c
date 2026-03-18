/*
 * XREFs of ?RequiresHDRConversion@CDxHandleBitmapRealization@@IEAA_NXZ @ 0x180054A1C
 * Callers:
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleBitmapRealization::RequiresHDRConversion(CDxHandleBitmapRealization *this)
{
  int v1; // eax
  char v2; // dl

  v1 = *((_DWORD *)this + 43);
  v2 = 0;
  if ( v1 == 3 || v1 == 12 || v1 == 14 || v1 == 17 )
    return 1;
  return v2;
}
