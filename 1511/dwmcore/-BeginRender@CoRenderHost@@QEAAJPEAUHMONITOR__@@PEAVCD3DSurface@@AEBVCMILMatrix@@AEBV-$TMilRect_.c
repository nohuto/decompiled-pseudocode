/*
 * XREFs of ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180103C28
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180104140 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CoRenderHost::BeginRender(__int64 a1, __int64 a2, struct CD3DSurface *a3, __int64 a4, float *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  float v10; // xmm0_4
  float v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  int v19; // eax
  float v21; // [rsp+30h] [rbp-58h]
  _DWORD v22[4]; // [rsp+38h] [rbp-50h] BYREF

  v8 = CoRenderHost::SetDeviceFromSurface((CoRenderHost *)a1, a3);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *a5 + 6291456.25;
    v11 = v10;
    v12 = a5[1];
    v22[0] = (int)(LODWORD(v11) << 10) >> 11;
    v13 = v12 + 6291456.25;
    v14 = v13;
    v15 = a5[2];
    v22[1] = (int)(LODWORD(v14) << 10) >> 11;
    v16 = v15 + 6291456.25;
    v21 = v16;
    v17 = a5[3];
    v22[2] = (int)(LODWORD(v21) << 10) >> 11;
    v18 = v17 + 6291456.25;
    v22[3] = (int)(LODWORD(v18) << 10) >> 11;
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD *, _DWORD))(**(_QWORD **)(a1 + 24)
                                                                                                + 72LL))(
            *(_QWORD *)(a1 + 24),
            a2,
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 136LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 32) + 200LL),
            a4,
            v22,
            LODWORD(v18));
    v9 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xD3u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBEu);
  }
  return v9;
}
