/*
 * XREFs of ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x18008DE74
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::PushWindowMetaDataToRenderTarget(CDrawingContext *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 **); // rdi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  __int64 i; // r15
  __int64 v8; // r13
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64 *, _OWORD *); // rbx
  int v17; // eax
  int v18; // ebx
  __int128 v19; // [rsp+38h] [rbp-59h]
  __int128 v20; // [rsp+48h] [rbp-49h]
  __int128 v21; // [rsp+58h] [rbp-39h]
  _OWORD v22[3]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+17h]
  __int64 *v24; // [rsp+100h] [rbp+6Fh] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 44);
  v24 = 0LL;
  v3 = (**v1)(v1, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v24);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1EECu);
  }
  else
  {
    v5 = *((_DWORD *)this + 1410) - 1;
    for ( i = v5; i >= 0; *(_QWORD *)(*((_QWORD *)this + 702) + 8 * i--) = 0LL )
    {
      LODWORD(v19) = 1;
      v8 = *(_QWORD *)(*((_QWORD *)this + 702) + 8 * i);
      *((_QWORD *)&v21 + 1) = *(_QWORD *)(v8 + 48);
      *((_QWORD *)&v19 + 1) = *(_QWORD *)(v8 + 56);
      v9 = *(float *)(v8 + 24) + 6291456.25;
      LODWORD(v21) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *(float *)(v8 + 28) + 6291456.25;
      DWORD1(v21) = (int)(LODWORD(v10) << 10) >> 11;
      v11 = *(float *)(v8 + 32) + 6291456.25;
      LODWORD(v20) = (int)(LODWORD(v11) << 10) >> 11;
      v12 = *(float *)(v8 + 36) + 6291456.25;
      DWORD1(v20) = (int)(LODWORD(v12) << 10) >> 11;
      v13 = *(float *)(v8 + 40) + 6291456.25;
      DWORD2(v20) = (int)(LODWORD(v13) << 10) >> 11;
      v14 = *(float *)(v8 + 44) + 6291456.25;
      HIDWORD(v20) = (int)(LODWORD(v14) << 10) >> 11;
      v15 = *v24;
      v22[0] = v19;
      v16 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v15 + 216);
      v22[1] = v20;
      v22[2] = v21;
      v23 = 0LL;
      v17 = v16(v24, v22);
      v18 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1F06u);
      if ( !v4 || v4 >= 0 && v18 < 0 )
        v4 = v18;
      CMILCOMBase::InternalRelease((CMILCOMBase *)v8);
    }
  }
  *((_DWORD *)this + 1410) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 702, 8u);
  *((_DWORD *)this + 1424) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 709, 8u);
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
  return (unsigned int)v4;
}
