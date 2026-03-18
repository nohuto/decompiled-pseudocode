/*
 * XREFs of ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1C014A1A4
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C009FED0 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMonochromeToColor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2)
{
  UINT Height; // r15d
  UINT v3; // edi
  UINT Pitch; // ebp
  _BYTE *pPixels; // r13
  UINT Width; // r8d
  char *v9; // r15
  int v10; // esi
  UINT v11; // r14d
  unsigned int v12; // r12d
  int v13; // edx
  unsigned int *v14; // r10
  int v15; // ecx
  int v16; // eax

  Height = a1->Height;
  v3 = 0;
  Pitch = a1->Pitch;
  pPixels = a1->pPixels;
  Width = a1->Width;
  a2->Width = Width;
  a2->Height = a1->Height;
  a2->Flags.Value = 4;
  a2->Pitch = 4 * Width;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  a2->VidPnSourceId = a1->VidPnSourceId;
  v9 = &pPixels[Pitch * Height];
  if ( a1->Height )
  {
    v10 = 0;
    do
    {
      v11 = 0;
      if ( a1->Width )
      {
        v12 = 0;
        do
        {
          v13 = 128 >> (v11 & 7);
          v14 = (unsigned int *)((char *)a2->pPixels + v12 + (unsigned __int64)(a2->Pitch * v3));
          v15 = ((unsigned __int8)v13 & (unsigned __int8)v9[v10 + (v11 >> 3)]) != 0 ? 0xFFFFFF : 0;
          v16 = -((unsigned __int8)(v13 & pPixels[v10 + (v11++ >> 3)]) != 0);
          v12 += 4;
          *v14 = v15 | v16 & 0xFF000000;
        }
        while ( v11 < a1->Width );
      }
      ++v3;
      v10 += Pitch;
    }
    while ( v3 < a1->Height );
  }
}
