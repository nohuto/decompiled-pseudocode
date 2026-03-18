/*
 * XREFs of ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180002E80
 * Callers:
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180005880 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800AE65C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::PopLayer(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]

  CD2DContext::FlushDrawList(this);
  v3 = *((_DWORD *)this + 54);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)this + 24) + 8LL * (unsigned int)(v3 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 40LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16)
                                                                                                  + 40LL));
  if ( *(_BYTE *)(v4 + 56) )
  {
    v5 = *(_DWORD *)(v4 + 76);
    if ( *(_BYTE *)(v4 + 48) )
    {
      v6 = *(_QWORD *)(v4 + 16);
      if ( *(_BYTE *)(v6 + 402)
        || v5 != *(_DWORD *)(v6 + 280)
        || !AreEqual((const struct D2D_RECT_F *)(v4 + 60), (const struct D2D_RECT_F *)(v6 + 264)) )
      {
        v7 = *(_QWORD *)(v6 + 40);
        v13 = 0;
        v14 = 0;
        v12 = _xmm;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 240LL))(v7, &v12);
        v8 = *(_QWORD *)(v6 + 48);
        *(_BYTE *)(v6 + 402) = 0;
        v9 = *(_OWORD *)(v4 + 60);
        *(_DWORD *)(v6 + 280) = v5;
        *(_OWORD *)(v6 + 264) = v9;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 80LL))(v8, v4 + 60, v5);
      }
    }
    *(_BYTE *)(v4 + 56) = 1;
  }
  else
  {
    v10 = *(_QWORD *)(v4 + 16);
    v11 = *(_QWORD *)(v10 + 48);
    *(_BYTE *)(v10 + 402) = 1;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 80LL))(v11, 0LL, 1LL);
  }
  --*(_DWORD *)(v4 + 52);
}
