/*
 * XREFs of ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetClip(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        unsigned int a4)
{
  int v7; // eax
  __int64 v8; // rbx
  bool v9; // zf
  __int128 v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]

  CD2DContext::FlushDrawList(this);
  v7 = *((_DWORD *)this + 54);
  v8 = 0LL;
  if ( v7 )
    v8 = *((_QWORD *)this[24] + (unsigned int)(v7 - 1));
  v9 = *(_BYTE *)(v8 + 48) == 0;
  v10 = (__int128)*a3;
  *(_DWORD *)(v8 + 76) = a4;
  *(_OWORD *)(v8 + 60) = v10;
  if ( !v9 )
  {
    v11 = *(_QWORD *)(v8 + 16);
    if ( *(_BYTE *)(v11 + 402)
      || a4 != *(_DWORD *)(v11 + 280)
      || *(float *)(v8 + 60) != *(float *)(v11 + 264)
      || *(float *)(v8 + 64) != *(float *)(v11 + 268)
      || *(float *)(v8 + 68) != *(float *)(v11 + 272)
      || *(float *)(v8 + 72) != *(float *)(v11 + 276) )
    {
      v12 = *(_QWORD *)(v11 + 40);
      v15 = _xmm;
      v16 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 240LL))(v12, &v15);
      v13 = *(_QWORD *)(v11 + 48);
      *(_BYTE *)(v11 + 402) = 0;
      v14 = *(_OWORD *)(v8 + 60);
      *(_DWORD *)(v11 + 280) = a4;
      *(_OWORD *)(v11 + 264) = v14;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 80LL))(v13, v8 + 60, a4);
    }
  }
  *(_BYTE *)(v8 + 56) = 1;
}
