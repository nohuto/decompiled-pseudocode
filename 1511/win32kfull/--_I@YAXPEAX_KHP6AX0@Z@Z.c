/*
 * XREFs of ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00F05E0
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02682E4 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  int v4; // edi
  char *i; // rbx

  v4 = a3;
  for ( i = &a1[a2 * a3]; --v4 >= 0; a4(i) )
    i -= a2;
}
