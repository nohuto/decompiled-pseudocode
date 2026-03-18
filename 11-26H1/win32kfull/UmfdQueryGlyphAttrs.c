/*
 * XREFs of UmfdQueryGlyphAttrs @ 0x14034E680
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1400FCF74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1400FD4AC (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1401FF3C0 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x140328298 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdQueryGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD v7[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  result = FONTOBJ_GetCachedGlyphAttrs(a1, a2);
  if ( !result )
  {
    FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 7);
    v10 = 0LL;
    v7[0] = &QueryGlyphAttrsRequest::`vftable';
    v7[5] = a1;
    v8 = a2;
    v9 = 0LL;
    if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL), (__int64)v7, v5) >= 0 )
    {
      v6 = v9;
      if ( v9 )
        FONTOBJ_SetCachedGlyphAttrs(a1, a2, v9);
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
