/*
 * XREFs of ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@PEBU_DXGK_DRIVERCAPS@@HAEAH@Z @ 0x1C014672C
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 * Callees:
 *     ?ScaleCursorShapeCoreBilinear@@YAJAEBU_CURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0146834 (-ScaleCursorShapeCoreBilinear@@YAJAEBU_CURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@.c)
 *     ?ScaleCursorShapeCoreSimple@@YAJAEBU_CURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C0146B9C (-ScaleCursorShapeCoreSimple@@YAJAEBU_CURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z.c)
 */

__int64 __fastcall ScaleCursorShape(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGKARG_SETPOINTERSHAPE *a4,
        struct _DXGKARG_SETPOINTERSHAPE *a5,
        const struct _DXGK_DRIVERCAPS *a6,
        int a7,
        int *a8)
{
  int v9; // r10d
  int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  __int64 result; // rax
  UINT v14; // eax
  UINT Height; // ecx
  UINT v16; // r10d
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
  if ( !v16 || !v17 || v16 > a6->MaxPointerWidth || v17 > a6->MaxPointerHeight )
    return 3221225659LL;
  if ( (a4->Flags.Value & 2) != 0 )
  {
    result = ScaleCursorShapeCoreBilinear((const struct _CURSOR_SCALING_INFO *)v18, a4, a5);
    goto LABEL_15;
  }
  if ( !a7 )
    return 3221225659LL;
  result = ScaleCursorShapeCoreSimple((const struct _CURSOR_SCALING_INFO *)v18, a4, a5);
LABEL_15:
  if ( (int)result >= 0 )
    *a8 = 1;
  return result;
}
