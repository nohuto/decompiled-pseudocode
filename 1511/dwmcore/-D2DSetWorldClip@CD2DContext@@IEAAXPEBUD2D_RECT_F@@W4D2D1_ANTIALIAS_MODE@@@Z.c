/*
 * XREFs of ?D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800226F0
 * Callers:
 *     ?SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180024B7C (-SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CD2DContext::D2DSetWorldClip(CD2DContext *this, const struct D2D_RECT_F *a2, unsigned int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int128 v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+30h] [rbp-38h]
  int v11; // [rsp+34h] [rbp-34h]

  if ( *((_BYTE *)this + 378)
    || a3 != *((_DWORD *)this + 64)
    || a2->left != *((float *)this + 60)
    || a2->top != *((float *)this + 61)
    || a2->right != *((float *)this + 62)
    || a2->bottom != *((float *)this + 63) )
  {
    v6 = *((_QWORD *)this + 5);
    v10 = 0;
    v11 = 0;
    v9 = _xmm;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 240LL))(v6, &v9);
    v7 = *((_QWORD *)this + 6);
    *((_BYTE *)this + 378) = 0;
    v8 = (__int128)*a2;
    *((_DWORD *)this + 64) = a3;
    *((_OWORD *)this + 15) = v8;
    (*(void (__fastcall **)(__int64, const struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, a2, a3);
  }
}
