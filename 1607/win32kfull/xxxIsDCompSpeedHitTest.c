/*
 * XREFs of xxxIsDCompSpeedHitTest @ 0x1C00593A0
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     xxxClientCallDitThread @ 0x1C000B888 (xxxClientCallDitThread.c)
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C000D5D4 (MagpInverseMagnificationTransformFromPoint.c)
 *     MagpAddTransformOutputMagFac @ 0x1C000DB34 (MagpAddTransformOutputMagFac.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C000DC28 (MagpRemoveTransformOutputMagFac.c)
 *     WindowHasAnyCompositionTargetWithInputSink @ 0x1C011DC0C (WindowHasAnyCompositionTargetWithInputSink.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall xxxIsDCompSpeedHitTest(
        struct tagWND *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _OWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  int v10; // r13d
  unsigned __int64 v12; // rdx
  struct tagKE *v13; // rcx
  unsigned int v14; // r8d
  __m128i v15; // xmm1
  float v16; // xmm0_4
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // r8d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  _OWORD v25[9]; // [rsp+28h] [rbp-79h] BYREF

  v8 = 0;
  v10 = a2;
  *a5 = 0LL;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( !gbNoMoreDITHitTest
    && (unsigned int)IsDwmInputThread(a1, a2)
    && (unsigned int)WindowHasAnyCompositionTargetWithInputSink(a1) )
  {
    memset(v25, 0, sizeof(v25));
    *((_QWORD *)&v25[1] + 1) = *(_QWORD *)a1;
    *(_QWORD *)&v25[1] = a4;
    LODWORD(v25[0]) = v10;
    DWORD1(v25[8]) = a3 & 3;
    if ( (unsigned int)NlsNullProc(v13, v12, v14) )
    {
      v15 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 33));
      v16 = (float)*((int *)a1 + 32);
      DWORD1(v25[7]) = 1065353216;
      LODWORD(v25[6]) = 1065353216;
      HIDWORD(v25[4]) = 1065353216;
      DWORD2(v25[3]) = 1065353216;
      *((float *)&v25[6] + 2) = v16;
      HIDWORD(v25[6]) = _mm_cvtepi32_ps(v15).m128_u32[0];
    }
    MagpInverseMagnificationTransformFromPoint(&v25[1]);
    MagpAddTransformOutputMagFac((__int64)&v25[3] + 8, v17, v18);
    if ( (unsigned int)xxxClientCallDitThread(*(_QWORD *)(gpDitInfo + 24), v25) )
    {
      MagpRemoveTransformOutputMagFac((__int64)&v25[3] + 8, v19, v20);
      *a5 = *(_QWORD *)&v25[2];
      v21 = *(_OWORD *)((char *)&v25[4] + 8);
      *a6 = *(_OWORD *)((char *)&v25[3] + 8);
      v22 = *(_OWORD *)((char *)&v25[5] + 8);
      a6[1] = v21;
      v23 = *(_OWORD *)((char *)&v25[6] + 8);
      a6[2] = v22;
      a6[3] = v23;
      if ( a7 )
        *a7 = -(v25[8] & 1);
      if ( a8 )
        *a8 = DWORD2(v25[7]);
    }
  }
  LOBYTE(v8) = *a5 != 0LL;
  return v8;
}
