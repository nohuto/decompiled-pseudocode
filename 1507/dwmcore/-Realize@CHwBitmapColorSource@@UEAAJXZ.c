/*
 * XREFs of ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x18001BE60
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180084350 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180019B7C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x18001C764 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18001C9D0 (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetUniquenessToken@CBitmap@@UEAAJPEAI@Z @ 0x180080530 (-GetUniquenessToken@CBitmap@@UEAAJPEAI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::Realize(CHwBitmapColorSource *this)
{
  unsigned int v1; // ebp
  CMILPoolResource *v3; // rcx
  _OWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(CBitmap *__hidden, unsigned int *); // r14
  int v7; // eax
  CMILRefCountBase *v8; // rcx
  int Texture; // eax
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r14
  int v12; // eax
  __int64 v13; // r14
  CMILRefCountBase *v14; // rbx
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v16 = 0LL;
  v3 = (CMILPoolResource *)*((_QWORD *)this + 20);
  if ( v3 && !*((_BYTE *)v3 + 76) )
  {
    CMILPoolResource::Release(v3);
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v4 = (_OWORD *)((char *)this + 172);
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
           (unsigned int *)this + 43,
           (unsigned int *)this + 47) )
    {
      v5 = *((_QWORD *)this + 26);
      if ( !v5 )
        goto LABEL_11;
      v6 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *))(*(_QWORD *)v5 + 40LL);
      v7 = v6 == CBitmap::GetUniquenessToken
         ? CBitmap::GetUniquenessToken(*((CBitmap **)this + 26), &v15)
         : v6(*((CBitmap **)this + 26), &v15);
      if ( v7 >= 0 && *((_DWORD *)this + 42) == v15 )
        goto LABEL_11;
    }
  }
  else
  {
    Texture = CHwBitmapColorSource::CreateTexture(this);
    v1 = Texture;
    if ( Texture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xFE5u);
      goto LABEL_11;
    }
    v4 = (_OWORD *)((char *)this + 172);
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 43) = 0;
  }
  v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
  if ( v11 )
    (**v11)(*((_QWORD *)this + 26), &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v16);
  if ( v16 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16) == 1 )
  {
    v13 = *((_QWORD *)this + 26);
    *v4 = *(_OWORD *)((char *)this + 188);
    if ( v13 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 40LL))(v13, (char *)this + 168);
  }
  else
  {
    v12 = CHwBitmapColorSource::FillTexture(this);
    v1 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1000u);
  }
LABEL_11:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v8 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v8 )
  {
    do
    {
      v14 = (CMILRefCountBase *)*((_QWORD *)v8 + 33);
      *((_QWORD *)v8 + 33) = 0LL;
      CMILRefCountBase::Release(v8);
      v8 = v14;
    }
    while ( v14 );
  }
  return v1;
}
