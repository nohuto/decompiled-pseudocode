/*
 * XREFs of ?D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007C754
 * Callers:
 *     ?SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800AD64C (-SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800AE65C (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::D2DSetWorldClip(CD2DContext *this, const struct D2D_RECT_F *a2, unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct D2D_RECT_F v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+34h] [rbp-24h]

  if ( *((_BYTE *)this + 402)
    || a3 != *((_DWORD *)this + 70)
    || !AreEqual(a2, (const struct D2D_RECT_F *)((char *)this + 264)) )
  {
    v6 = *((_QWORD *)this + 5);
    v10 = 0;
    v11 = 0;
    v9 = _xmm;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 240LL))(v6, &v9);
    v7 = *((_QWORD *)this + 6);
    *((_BYTE *)this + 402) = 0;
    v8 = *a2;
    *((_DWORD *)this + 70) = a3;
    *(struct D2D_RECT_F *)((char *)this + 264) = v8;
    (*(void (__fastcall **)(__int64, const struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, a2, a3);
  }
}
