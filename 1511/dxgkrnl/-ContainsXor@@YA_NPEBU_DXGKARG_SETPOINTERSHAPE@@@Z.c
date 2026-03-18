/*
 * XREFs of ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C014A144
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C009FED0 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

char __fastcall ContainsXor(const struct _DXGKARG_SETPOINTERSHAPE *a1)
{
  UINT Height; // r8d
  int v2; // edx
  UINT Width; // r11d
  UINT v4; // r9d
  unsigned int v5; // r10d

  Height = a1->Height;
  v2 = 0;
  if ( !Height )
    return 0;
  Width = a1->Width;
  while ( 1 )
  {
    v4 = 0;
    if ( Width )
      break;
LABEL_7:
    if ( ++v2 >= Height )
      return 0;
  }
  v5 = 0;
  while ( *(_DWORD *)((char *)a1->pPixels + v2 * a1->Pitch + (unsigned __int64)v5) != -1 )
  {
    ++v4;
    v5 += 4;
    if ( v4 >= Width )
      goto LABEL_7;
  }
  return 1;
}
