/*
 * XREFs of ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180030FA0
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18002BF80 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18002D3B8 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x18003193C (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x180031BCC (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180031ECC (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::Realize(CHwBitmapColorSource *this)
{
  unsigned int v1; // ebp
  CMILPoolResource *v3; // rcx
  _OWORD *v4; // rdi
  CMILRefCountBase *v5; // rcx
  int Texture; // eax
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  int v9; // eax
  __int64 v10; // r14
  CMILRefCountBase *v11; // rbx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v12 = 0LL;
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
           (__int64)this + 172,
           (__int64)this + 188)
      && CHwBitmapColorSource::IsRealizationCurrent(this) )
    {
      goto LABEL_7;
    }
  }
  else
  {
    Texture = CHwBitmapColorSource::CreateTexture(this);
    v1 = Texture;
    if ( Texture < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xFE5u);
      goto LABEL_7;
    }
    v4 = (_OWORD *)((char *)this + 172);
    *((_DWORD *)this + 46) = 0;
    *((_DWORD *)this + 45) = 0;
    *((_DWORD *)this + 44) = 0;
    *((_DWORD *)this + 43) = 0;
  }
  v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 26);
  if ( v8 )
    (**v8)(*((_QWORD *)this + 26), &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v12);
  if ( v12 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12) == 1 )
  {
    v10 = *((_QWORD *)this + 26);
    *v4 = *(_OWORD *)((char *)this + 188);
    if ( v10 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 40LL))(v10, (char *)this + 168);
  }
  else
  {
    v9 = CHwBitmapColorSource::FillTexture(this);
    v1 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1000u);
  }
LABEL_7:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v5 )
  {
    do
    {
      v11 = (CMILRefCountBase *)*((_QWORD *)v5 + 33);
      *((_QWORD *)v5 + 33) = 0LL;
      CMILRefCountBase::Release(v5);
      v5 = v11;
    }
    while ( v11 );
  }
  return v1;
}
