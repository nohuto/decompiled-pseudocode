/*
 * XREFs of ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800BA440
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushWindowMetaDataToRenderTarget(CDrawingContext *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  __int64 i; // rsi
  __int64 v7; // r15
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64 *, _OWORD *); // rax
  int v16; // eax
  int v17; // r14d
  __int128 v18; // [rsp+38h] [rbp-59h]
  __int128 v19; // [rsp+48h] [rbp-49h]
  __int128 v20; // [rsp+58h] [rbp-39h]
  _OWORD v21[3]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+17h]
  __int64 *v23; // [rsp+100h] [rbp+6Fh] BYREF

  v23 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 54))(
         *((_QWORD *)this + 54),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v23);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1F0Bu);
  }
  else
  {
    v4 = *((_DWORD *)this + 1590) - 1;
    for ( i = v4; i >= 0; *(_QWORD *)(*((_QWORD *)this + 792) + 8 * i--) = 0LL )
    {
      LODWORD(v18) = 1;
      v7 = *(_QWORD *)(*((_QWORD *)this + 792) + 8 * i);
      *((_QWORD *)&v20 + 1) = *(_QWORD *)(v7 + 48);
      *((_QWORD *)&v18 + 1) = *(_QWORD *)(v7 + 56);
      v8 = *(float *)(v7 + 24) + 6291456.25;
      LODWORD(v20) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *(float *)(v7 + 28) + 6291456.25;
      DWORD1(v20) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *(float *)(v7 + 32) + 6291456.25;
      LODWORD(v19) = (int)(LODWORD(v10) << 10) >> 11;
      v11 = *(float *)(v7 + 36) + 6291456.25;
      DWORD1(v19) = (int)(LODWORD(v11) << 10) >> 11;
      v12 = *(float *)(v7 + 40) + 6291456.25;
      DWORD2(v19) = (int)(LODWORD(v12) << 10) >> 11;
      v13 = *(float *)(v7 + 44) + 6291456.25;
      HIDWORD(v19) = (int)(LODWORD(v13) << 10) >> 11;
      v14 = *v23;
      v21[0] = v18;
      v15 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v14 + 224);
      v21[1] = v19;
      v22 = 0LL;
      v21[2] = v20;
      v16 = v15(v23, v21);
      v17 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1F25u);
      if ( !v3 || v3 >= 0 && v17 < 0 )
        v3 = v17;
      CMILCOMBase::InternalRelease((CMILCOMBase *)v7);
    }
  }
  *((_DWORD *)this + 1590) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6336, 8u);
  *((_DWORD *)this + 1604) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6392, 8u);
  if ( v23 )
    (*(void (__fastcall **)(__int64 *))(*v23 + 16))(v23);
  return (unsigned int)v3;
}
