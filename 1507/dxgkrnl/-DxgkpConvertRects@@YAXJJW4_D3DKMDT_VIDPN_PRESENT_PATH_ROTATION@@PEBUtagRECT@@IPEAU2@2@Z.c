/*
 * XREFs of ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0132564
 * Callers:
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C00D0120 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C00D0A18 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00D16FC (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkpConvertRects(
        int a1,
        int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct tagRECT *a4,
        unsigned int a5,
        struct tagRECT *a6,
        struct tagRECT *a7)
{
  int v7; // r10d
  int v8; // r11d
  LONG left; // esi
  LONG top; // r14d
  int v11; // ebx
  int v12; // r9d
  __int64 v13; // r15
  signed __int64 v14; // rdi
  LONG *i; // rcx
  LONG v16; // eax
  __int128 v17; // [rsp+0h] [rbp-10h]

  v7 = a2;
  v8 = a1;
  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
  {
    v7 = a1;
    v8 = a2;
  }
  left = a4->left;
  top = a4->top;
  v11 = a4->right - a4->left;
  v12 = a4->bottom - top;
  if ( a5 )
  {
    v13 = a5;
    v14 = (char *)a7 - (char *)a6;
    for ( i = &a6->right; ; i += 4 )
    {
      if ( a3 == D3DKMDT_VPPR_IDENTITY )
      {
        v17 = *(_OWORD *)(i - 2);
        goto LABEL_14;
      }
      if ( a3 == D3DKMDT_VPPR_ROTATE90 )
      {
        LODWORD(v17) = *(i - 1);
        DWORD1(v17) = v7 - *i;
        DWORD2(v17) = i[1];
        v16 = v7 - *(i - 2);
        goto LABEL_12;
      }
      if ( a3 == D3DKMDT_VPPR_ROTATE180 )
        break;
      if ( a3 == D3DKMDT_VPPR_ROTATE270 )
      {
        LODWORD(v17) = v8 - i[1];
        DWORD1(v17) = *(i - 2);
        DWORD2(v17) = v8 - *(i - 1);
        v16 = *i;
LABEL_12:
        HIDWORD(v17) = v16;
      }
LABEL_14:
      *(LONG *)((char *)i + v14 - 8) = left + v11 * (int)v17 / v8;
      *(LONG *)((char *)i + v14 - 4) = top + v12 * DWORD1(v17) / v7;
      *(LONG *)((char *)i + v14) = left + (v8 + v11 * DWORD2(v17) - 1) / v8;
      *(LONG *)((char *)i + v14 + 4) = top + (v7 + v12 * HIDWORD(v17) - 1) / v7;
      if ( !--v13 )
        return;
    }
    LODWORD(v17) = v8 - *i;
    DWORD1(v17) = v7 - i[1];
    DWORD2(v17) = v8 - *(i - 2);
    v16 = v7 - *(i - 1);
    goto LABEL_12;
  }
}
