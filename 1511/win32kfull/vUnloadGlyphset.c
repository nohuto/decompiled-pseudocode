/*
 * XREFs of vUnloadGlyphset @ 0x1C0106E00
 * Callers:
 *     vtfdUnloadFontFileTE @ 0x1C0106CF0 (vtfdUnloadFontFileTE.c)
 *     BmfdUnloadFontFile @ 0x1C0106D8C (BmfdUnloadFontFile.c)
 * Callees:
 *     <none>
 */

void __fastcall vUnloadGlyphset(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = 0LL;
    while ( v3 != a2 )
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 16);
    }
    if ( (*(_DWORD *)v3)-- == 1 )
    {
      v6 = *(_QWORD *)(v3 + 16);
      if ( v4 )
        *(_QWORD *)(v4 + 16) = v6;
      else
        *a1 = v6;
      Win32FreePool(v3);
    }
  }
}
