/*
 * XREFs of ?Realize@CHwSolidColorTextureSource@@UEAAJXZ @ 0x180142990
 * Callers:
 *     ?Realize@CHwConstantColorSource@@UEAAJXZ @ 0x180142270 (-Realize@CHwConstantColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18013D0E4 (-LockRect@CD3DLockableTexture@@QEAAJPEAU_D3DLOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x180142870 (-CreateLockableTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 *     ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x180149B4C (-Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CHwSolidColorTextureSource::Realize(
        CHwSolidColorTextureSource *this,
        __int64 a2,
        const struct tagRECT *a3,
        enum D3D11_MAP a4)
{
  int v4; // ebp
  int LockableTexture; // eax
  int v7; // eax
  unsigned int v8; // eax
  _D3DLOCKED_RECT v10; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( !*((_QWORD *)this + 13) )
  {
    LockableTexture = CHwSolidColorTextureSource::CreateLockableTexture(this);
    v4 = LockableTexture;
    if ( LockableTexture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LockableTexture, 0x9Bu);
      return (unsigned int)v4;
    }
    *((_BYTE *)this + 112) = 0;
  }
  if ( *((_BYTE *)this + 112) )
    goto LABEL_12;
  v7 = CD3DLockableTexture::LockRect(*((CD3DLockableTexture **)this + 13), &v10, a3, a4);
  v4 = v7;
  if ( v7 >= 0 )
  {
    v8 = Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB((const struct _D3DCOLORVALUE *)((char *)this + 116));
    *(_DWORD *)v10.pBits = v8;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL)
                                                                             + 120LL)
                                                                 + 552LL)
                                                   + 120LL))(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 13) + 16LL) + 120LL) + 552LL),
      *(_QWORD *)(*((_QWORD *)this + 13) + 128LL),
      0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x103u);
  }
  if ( v4 >= 0 )
LABEL_12:
    *((_BYTE *)this + 112) = 1;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA8u);
  return (unsigned int)v4;
}
