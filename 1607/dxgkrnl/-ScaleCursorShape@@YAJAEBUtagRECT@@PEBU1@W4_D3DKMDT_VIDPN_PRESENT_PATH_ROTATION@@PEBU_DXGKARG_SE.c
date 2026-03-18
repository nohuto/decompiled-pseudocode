/*
 * XREFs of ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C007CA4C
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 * Callees:
 *     ?ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C016F4D8 (-ContainsXor@@YA_NPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z @ 0x1C016F538 (-ConvertMonochromeToColor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@@Z.c)
 *     ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C016FAB0 (-ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@.c)
 */

__int64 __fastcall ScaleCursorShape(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGKARG_SETPOINTERSHAPE *a4,
        struct _DXGKARG_SETPOINTERSHAPE *a5,
        struct _DXGKARG_SETPOINTERSHAPE *a6,
        const struct _DXGK_DRIVERCAPS *a7,
        int *a8)
{
  int v9; // r9d
  int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  __int64 result; // rax
  UINT v14; // eax
  UINT Height; // ecx
  UINT v16; // r9d
  UINT v17; // eax
  _DWORD v18[10]; // [rsp+20h] [rbp-28h] BYREF

  *a8 = 0;
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
  {
    v9 = a1->right - a1->left;
    v10 = a1->bottom - a1->top;
  }
  else
  {
    v9 = a1->bottom - a1->top;
    v10 = a1->right - a1->left;
  }
  v11 = a2->right - a2->left;
  v12 = a2->bottom - a2->top;
  v18[1] = v10;
  v18[0] = v9;
  v18[2] = v11;
  v18[3] = v12;
  if ( v9 == v11 && v10 == v12 )
    return 0LL;
  v14 = (v11 + v9 * a4->Width - 1) / v11;
  Height = a4->Height;
  v16 = v14;
  v18[4] = v14;
  v17 = (v10 * Height + v12 - 1) / v12;
  v18[5] = v17;
  if ( !v16 || !v17 || v16 > a7->MaxPointerWidth || v17 > a7->MaxPointerHeight )
    return 3221225659LL;
  if ( (a4->Flags.Value & 1) != 0 )
  {
    ConvertMonochromeToColor(a4, a6);
    a4 = a6;
  }
  a5->Flags.Value = 0;
  if ( (a4->Flags.Value & 4) != 0 && ContainsXor(a4) )
    a5->Flags.Value = 4;
  else
    a5->Flags.Value = 2;
  if ( (a4->Flags.Value & 6) == 0 )
    return 3221225659LL;
  result = ScaleCursorShapeCoreBilinear((const struct CURSOR_SCALING_INFO *)v18, a4, a5);
  if ( (int)result >= 0 )
    *a8 = 1;
  return result;
}
