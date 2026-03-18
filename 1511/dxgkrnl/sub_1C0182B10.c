/*
 * XREFs of sub_1C0182B10 @ 0x1C0182B10
 * Callers:
 *     sub_1C01828D8 @ 0x1C01828D8 (sub_1C01828D8.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 */

char __fastcall sub_1C0182B10(DMMVIDPNSOURCEMODE *a1, char a2, char a3)
{
  char v3; // bl
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  int PixelFormat; // eax

  v3 = 0;
  if ( !a1 )
    return 0;
  if ( a3 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 18) - 3) > 1 )
      return 0;
  }
  else if ( *((_DWORD *)a1 + 18) != 1 )
  {
    return 0;
  }
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a1);
  if ( !a2 )
    return 1;
  PixelFormat = GraphicsInfo->PixelFormat;
  if ( PixelFormat >= 20 && (PixelFormat <= 23 || PixelFormat == 32 || PixelFormat == 41) )
    return 1;
  return v3;
}
