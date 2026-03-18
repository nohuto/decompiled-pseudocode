/*
 * XREFs of PhysicalToLogicalInPlacePoint @ 0x1C01DC23C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0142A34 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     FixedPointSubPixel @ 0x1C01CA858 (FixedPointSubPixel.c)
 */

__int64 __fastcall PhysicalToLogicalInPlacePoint(__int64 a1, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  struct tagKE *v7; // rcx
  float *v8; // rdx
  float v9; // xmm3_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  __int64 v12; // rdx
  float v13; // xmm0_4
  __m128i v14; // xmm0

  result = GetTopLevelWindow(a1);
  v6 = result;
  if ( result )
  {
    result = IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      if ( *(_QWORD *)(v6 + 272) )
      {
        result = NlsNullProc(v7);
        if ( (_DWORD)result )
        {
          v9 = 1.0 / *v8;
          v10 = 1.0 / v8[5];
          if ( a3 )
          {
            v11 = FixedPointSubPixel(*a3);
            *a2 = (int)(float)((float)((float)(v11 + (float)*a2) - *(float *)(v12 + 48)) * v9);
            v13 = FixedPointSubPixel(a3[1]) + (float)a2[1];
          }
          else
          {
            v14 = _mm_cvtsi32_si128(a2[1]);
            *a2 = (int)(float)((float)((float)*a2 - v8[12]) * v9);
            LODWORD(v13) = _mm_cvtepi32_ps(v14).m128_u32[0];
          }
          result = (unsigned int)(int)(float)((float)(v13 - v8[13]) * v10);
          a2[1] = result;
        }
      }
    }
  }
  return result;
}
