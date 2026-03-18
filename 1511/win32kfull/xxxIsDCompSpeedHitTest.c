/*
 * XREFs of xxxIsDCompSpeedHitTest @ 0x1C0066924
 * Callers:
 *     DCESpeedHitTest @ 0x1C0066310 (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C0066700 (SpeedHitTest.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B78C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 * Callees:
 *     xxxClientCallDitThread @ 0x1C0007E60 (xxxClientCallDitThread.c)
 *     WindowHasAnyCompositionTargetWithInputSink @ 0x1C0009B68 (WindowHasAnyCompositionTargetWithInputSink.c)
 *     MagpInverseMagnificationTransformFromPoint @ 0x1C0009F08 (MagpInverseMagnificationTransformFromPoint.c)
 *     MagpAddTransformOutputMagFac @ 0x1C000BED4 (MagpAddTransformOutputMagFac.c)
 *     MagpRemoveTransformOutputMagFac @ 0x1C000BFB8 (MagpRemoveTransformOutputMagFac.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall xxxIsDCompSpeedHitTest(
        struct tagWND *a1,
        int a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _OWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  unsigned int v8; // ebx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD v18[9]; // [rsp+28h] [rbp-79h] BYREF

  v8 = 0;
  *a5 = 0LL;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( !gbNoMoreDITHitTest )
  {
    if ( (unsigned int)IsDwmInputThread() )
    {
      if ( (unsigned int)WindowHasAnyCompositionTargetWithInputSink(a1) )
      {
        memset(v18, 0, sizeof(v18));
        v12 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 32));
        v13 = _mm_cvtsi32_si128(*((_DWORD *)a1 + 33));
        *((_QWORD *)&v18[1] + 1) = *(_QWORD *)a1;
        *(_QWORD *)&v18[1] = a4;
        LODWORD(v18[0]) = a2;
        DWORD1(v18[7]) = 1065353216;
        LODWORD(v18[8]) ^= (LOBYTE(v18[8]) ^ (unsigned __int8)(2 * a3)) & 2;
        LODWORD(v18[6]) = 1065353216;
        HIDWORD(v18[4]) = 1065353216;
        DWORD2(v18[3]) = 1065353216;
        DWORD2(v18[6]) = _mm_cvtepi32_ps(v12).m128_u32[0];
        HIDWORD(v18[6]) = _mm_cvtepi32_ps(v13).m128_u32[0];
        MagpInverseMagnificationTransformFromPoint(&v18[1]);
        MagpAddTransformOutputMagFac((__int64)&v18[3] + 8);
        if ( (unsigned int)xxxClientCallDitThread(*(_QWORD *)(gpDitInfo + 24), v18) )
        {
          MagpRemoveTransformOutputMagFac((float *)&v18[3] + 2);
          *a5 = *(_QWORD *)&v18[2];
          v14 = *(_OWORD *)((char *)&v18[4] + 8);
          *a6 = *(_OWORD *)((char *)&v18[3] + 8);
          v15 = *(_OWORD *)((char *)&v18[5] + 8);
          a6[1] = v14;
          v16 = *(_OWORD *)((char *)&v18[6] + 8);
          a6[2] = v15;
          a6[3] = v16;
          if ( a7 )
            *a7 = -(v18[8] & 1);
          if ( a8 )
            *a8 = DWORD2(v18[7]);
        }
      }
    }
    if ( *a5 )
      return 1;
  }
  return v8;
}
