/*
 * XREFs of ?GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z @ 0x1C0028554
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0024F60 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 * Callees:
 *     cCapString @ 0x1C00607F4 (cCapString.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

struct _FONTMAPPERFAMILYFALLBACK *__fastcall GetFontMapperFamilyFallback(const unsigned __int16 *a1)
{
  char *v1; // rbx
  char *v3; // rdi
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char *)gpfmffTable;
  if ( gpfmffTable )
  {
    v3 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
    cCapString(v7, a1, 32LL);
    while ( v1 < v3 )
    {
      v4 = (unsigned __int16 *)v7;
      do
      {
        v5 = *(unsigned __int16 *)((char *)v4 + v1 - v7);
        v6 = *v4 - v5;
        if ( v6 )
          break;
        ++v4;
      }
      while ( v5 );
      if ( !v6 )
        return (struct _FONTMAPPERFAMILYFALLBACK *)v1;
      v1 += 128;
    }
  }
  return 0LL;
}
