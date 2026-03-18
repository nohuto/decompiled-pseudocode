/*
 * XREFs of ?FillBlurEffect@CBlurLayer@@QEAAJPEAVCDrawingContext@@M@Z @ 0x18018C9E4
 * Callers:
 *     ?UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014FE1C (-UpdateCVI@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180004788 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180123580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CBlurLayer::FillBlurEffect(CBlurLayer *this, struct CDrawingContext *a2, float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 57) + 240LL))(
         *((_QWORD *)a2 + 57),
         8LL,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x41u);
  }
  else
  {
    v7 = CDrawingContext::FlushD2D(a2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x44u);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1), &v13);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x45u);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, 0LL, v13, 1LL);
        v11 = a3 / 3.0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, float *, int))(*(_QWORD *)v12 + 72LL))(v12, 0LL, 0LL, &v11, 4);
        LODWORD(v11) = 2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v12 + 72LL))(v12, 1LL, 0LL, &v11, 4);
        v11 = 0.0;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, float *, int))(*(_QWORD *)v12 + 72LL))(v12, 2LL, 0LL, &v11, 4);
        v9 = CDrawingContext::FillEffect(a2, v12, 0LL, 0LL);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x53u);
      }
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v12 + 112LL))(v12, 0LL, 0LL, 1LL);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v6;
}
