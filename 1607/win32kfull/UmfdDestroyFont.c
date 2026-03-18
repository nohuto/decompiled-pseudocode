/*
 * XREFs of UmfdDestroyFont @ 0x1C02D8FC0
 * Callers:
 *     <none>
 * Callees:
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C029B630 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C029B65C (FONTOBJ_SetCachedGlyphAttrs.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C02A4314 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdDestroyFont(__int64 a1)
{
  void *CachedGlyphAttrs; // rax
  void *v3; // rax
  void **v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  CachedGlyphAttrs = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 0);
  if ( CachedGlyphAttrs )
  {
    EngFreeMem(CachedGlyphAttrs);
    FONTOBJ_SetCachedGlyphAttrs(a1, 0, 0LL);
  }
  v3 = (void *)FONTOBJ_GetCachedGlyphAttrs(a1, 1u);
  if ( v3 )
  {
    EngFreeMem(v3);
    FONTOBJ_SetCachedGlyphAttrs(a1, 1u, 0LL);
  }
  v6 = 3;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = &DestroyFontRequest::`vftable';
  v8 = a1;
  return UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL), (__int64)&v5);
}
