/*
 * XREFs of ?CalcDeviceTransformDelta@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18012FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::CalcDeviceTransformDelta(
        CTreeEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v3; // eax
  __m128i v4; // xmm2
  int v5; // eax
  __int128 v6; // xmm1
  int v7; // eax
  __int64 v8; // r8
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-10h]

  v16 = dword_1801EAD50;
  v3 = *((_DWORD *)this + 5);
  v13 = xmmword_1801EAD20;
  v15 = xmmword_1801EAD40;
  v12 = CMILMatrix::Identity;
  v4 = _mm_cvtsi32_si128(-v3);
  v5 = *((_DWORD *)this + 4);
  v14 = xmmword_1801EAD30;
  CMILMatrix::Translate((CMILMatrix *)&v12, (float)-v5, _mm_cvtepi32_ps(v4).m128_f32[0], 0.0);
  v6 = v13;
  v7 = v16;
  *(_OWORD *)v8 = v12;
  v9 = v14;
  *(_OWORD *)(v8 + 16) = v6;
  v10 = v15;
  *(_OWORD *)(v8 + 32) = v9;
  *(_OWORD *)(v8 + 48) = v10;
  *(_DWORD *)(v8 + 64) = v7;
  return 0LL;
}
