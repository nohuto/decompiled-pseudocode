/*
 * XREFs of ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C007F6A4
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     NtGdiDeleteColorSpace @ 0x1C00BE720 (NtGdiDeleteColorSpace.c)
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteColorSpace(HCOLORSPACE a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  if ( a1 != ghStockColorSpace )
  {
    v2 = HmgRemoveObject((__int64)a1, 0LL, 0, 1, 9, 0LL);
    if ( !v2 )
    {
      EngSetLastError(0x57u);
      return v1;
    }
    FreeObject(v2);
  }
  return 1;
}
