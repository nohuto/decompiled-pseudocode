/*
 * XREFs of NtGdiQueryFonts @ 0x14032B940
 * Callers:
 *     <none>
 * Callees:
 *     ?GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1403109EC (-GreQueryFonts@@YAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall NtGdiQueryFonts(void *a1, unsigned int a2, void *a3)
{
  unsigned int v4; // r14d
  unsigned int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rdi
  union _LARGE_INTEGER v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  v9.QuadPart = 0LL;
  if ( a2 && a1 )
  {
    if ( a2 <= 0x4E2000 )
      v7 = (struct _UNIVERSAL_FONT_ID *)AllocFreeTmpBuffer(8 * a2);
    if ( !v7 )
      v6 = -1;
  }
  if ( v6 != -1 )
  {
    v6 = GreQueryFonts(v7, v4, &v9);
    if ( v6 != -1 )
    {
      GreProbeAndWriteToUntrustedVa(a3, 8uLL, &v9, 8uLL, 1uLL);
      if ( a1 )
      {
        if ( v6 < v4 )
          v4 = v6;
        GreProbeAndWriteToUntrustedVa(a1, 8LL * v4, v7, 8LL * v4, 4uLL);
      }
    }
  }
  if ( v7 )
    FreeTmpBuffer(v7);
  if ( v6 == -1 )
    EngSetLastError(8u);
  return v6;
}
