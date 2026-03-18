/*
 * XREFs of ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021500
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CD2DContext::SetClip(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v7; // eax
  __int64 v8; // rsi
  bool v9; // zf
  __int128 v10; // xmm0
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int128 v14; // xmm0
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  CD2DContext::FlushDrawList(this);
  v7 = *((_DWORD *)this + 48);
  v8 = 0LL;
  if ( v7 )
    v8 = *((_QWORD *)this[21] + (unsigned int)(v7 - 1));
  v9 = *(_BYTE *)(v8 + 48) == 0;
  v10 = (__int128)*a3;
  *(_DWORD *)(v8 + 76) = a4;
  *(_OWORD *)(v8 + 60) = v10;
  if ( v9 )
  {
    *(_BYTE *)(v8 + 56) = 1;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 16);
    if ( *(_BYTE *)(v11 + 378)
      || a4 != *(_DWORD *)(v11 + 256)
      || *(float *)(v8 + 60) != *(float *)(v11 + 240)
      || *(float *)(v8 + 64) != *(float *)(v11 + 244)
      || *(float *)(v8 + 68) != *(float *)(v11 + 248)
      || *(float *)(v8 + 72) != *(float *)(v11 + 252) )
    {
      v12 = *(_QWORD *)(v11 + 40);
      v15 = _xmm;
      v16 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 240LL))(v12, &v15);
      v13 = *(_QWORD *)(v11 + 48);
      *(_BYTE *)(v11 + 378) = 0;
      v14 = *(_OWORD *)(v8 + 60);
      *(_DWORD *)(v11 + 256) = a4;
      *(_OWORD *)(v11 + 240) = v14;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v8 + 60, a4);
    }
    *(_BYTE *)(v8 + 56) = 1;
  }
}
