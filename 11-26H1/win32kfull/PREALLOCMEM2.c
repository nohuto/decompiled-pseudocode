/*
 * XREFs of PREALLOCMEM2 @ 0x1401852A0
 * Callers:
 *     ??$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z @ 0x140229844 (--$AllocAndCopyRegistryEntries@UFONTSUB@@$0GCHDGGEH@@@YAJPEAKPEAPEAUFONTSUB@@0PEBU0@@Z.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPERFAMILYFALLBACK@@0PEBU0@@Z @ 0x1403430E0 (--$AllocAndCopyRegistryEntries@U_FONTMAPPERFAMILYFALLBACK@@$0EGEGENEH@@@YAJPEAKPEAPEAU_FONTMAPPE.c)
 *     vInitFontSubTable @ 0x1403FB77C (vInitFontSubTable.c)
 *     vInitFontMapperFamilyFallbackTable @ 0x1403FC2B0 (vInitFontMapperFamilyFallbackTable.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

char *__fastcall PREALLOCMEM2(void *Src, size_t Size, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  char *v7; // rax
  char *v8; // rdi
  unsigned int v10; // r9d
  __int64 v11; // rbx

  v4 = Size;
  v6 = a3;
  v7 = (char *)PALLOCNOZ(a3, a4, a3);
  v8 = v7;
  if ( v7 )
  {
    v10 = v6;
    if ( v4 < v6 )
      v10 = v4;
    v11 = v10;
    memmove(v7, Src, v10);
    Win32FreePool(Src);
    memset_0(&v8[v11], 0, v6 - (unsigned int)v11);
  }
  return v8;
}
