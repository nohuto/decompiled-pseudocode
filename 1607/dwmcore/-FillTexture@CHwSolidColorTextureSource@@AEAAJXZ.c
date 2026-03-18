/*
 * XREFs of ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18017C668
 * Callers:
 *     ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x18017C720 (-Realize@CHwSolidColorTextureSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18017DAD8 (-LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x18018764C (-Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::FillTexture(
        CHwSolidColorTextureSource *this,
        __int64 a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  _D3DLOCKED_RECT v9; // [rsp+30h] [rbp-18h] BYREF

  v5 = CD3DLockableTexture::LockRect(*((CD3DLockableTexture **)this + 13), &v9, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x103u);
  }
  else
  {
    v7 = Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB((const struct _D3DCOLORVALUE *)((char *)this + 116));
    *(_DWORD *)v9.pBits = v7;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL)
                                                                             + 128LL)
                                                                 + 576LL)
                                                   + 120LL))(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL) + 128LL) + 576LL),
      *(_QWORD *)(*((_QWORD *)this + 13) + 128LL),
      0LL);
  }
  return v6;
}
