/*
 * XREFs of ?HitTest@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18013EBF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x180139304 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CNineGridBrush::HitTest(
        CNineGridBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  struct D2D_RECT_F v10; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0;
  if ( a2->width != 0.0 && a2->height != 0.0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CNineGridBrush *))(*(_QWORD *)this + 176LL))(this) )
    {
      width = a2->width;
      v10.left = 0.0;
      v10.top = 0.0;
      height = a2->height;
      v10.right = width;
      v10.bottom = height;
      if ( Contains(&v10, a3) )
        *a4 = 1;
    }
  }
  return 0LL;
}
