/*
 * XREFs of ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AB1B0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180081704 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800827C8 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x180082A14 (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180082D08 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapColorSource::Realize(CHwBitmapColorSource *this)
{
  unsigned int v1; // esi
  CMILPoolResource *v3; // rcx
  _OWORD *v4; // rdi
  CMILRefCountBase *v5; // rcx
  int Texture; // eax
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  int v9; // eax
  __int64 v10; // rcx
  CMILRefCountBase *v11; // rbx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v12 = 0LL;
  v3 = (CMILPoolResource *)*((_QWORD *)this + 20);
  if ( v3 && !*((_BYTE *)v3 + 77) )
  {
    CMILPoolResource::Release(v3);
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v4 = (_OWORD *)((char *)this + 172);
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
           (unsigned int *)this + 43,
           (unsigned int *)this + 47)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xFB9u);
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
    (**v8)(v8, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v12);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFD4u);
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
