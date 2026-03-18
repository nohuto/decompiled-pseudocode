/*
 * XREFs of ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800218B0
 * Callers:
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800250B0 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CD2DContext::PopLayer(struct ID2D1PrivateCompositorRenderer **this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rsi
  float *v5; // r14
  unsigned int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+34h] [rbp-24h]

  CD2DContext::FlushDrawList(this);
  v3 = *((_DWORD *)this + 48);
  v4 = 0LL;
  if ( v3 )
    v4 = *((_QWORD *)this[21] + (unsigned int)(v3 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 40LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16)
                                                                                                  + 40LL));
  if ( *(_BYTE *)(v4 + 56) )
  {
    v5 = (float *)(v4 + 60);
    v6 = *(_DWORD *)(v4 + 76);
    if ( *(_BYTE *)(v4 + 48) )
    {
      v7 = *(_QWORD *)(v4 + 16);
      if ( *(_BYTE *)(v7 + 378)
        || v6 != *(_DWORD *)(v7 + 256)
        || *v5 != *(float *)(v7 + 240)
        || *(float *)(v4 + 64) != *(float *)(v7 + 244)
        || *(float *)(v4 + 68) != *(float *)(v7 + 248)
        || *(float *)(v4 + 72) != *(float *)(v7 + 252) )
      {
        v8 = *(_QWORD *)(v7 + 40);
        v14 = 0;
        v15 = 0;
        v13 = _xmm;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 240LL))(v8, &v13);
        v9 = *(_QWORD *)(v7 + 48);
        *(_BYTE *)(v7 + 378) = 0;
        v10 = *(_OWORD *)v5;
        *(_DWORD *)(v7 + 256) = v6;
        *(_OWORD *)(v7 + 240) = v10;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 80LL))(v9, v4 + 60, v6);
      }
    }
    *(_BYTE *)(v4 + 56) = 1;
  }
  else
  {
    v11 = *(_QWORD *)(v4 + 16);
    v12 = *(_QWORD *)(v11 + 48);
    *(_BYTE *)(v11 + 378) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 80LL))(v12, 0LL, 1LL);
  }
  --*(_DWORD *)(v4 + 52);
}
