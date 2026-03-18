/*
 * XREFs of PhysicalToLogicalInPlacePointWithParent @ 0x14008FCC0
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14013774C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1402580B0 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     FixedPointSubPixel @ 0x14008FC8C (FixedPointSubPixel.c)
 */

const struct tagWND *__fastcall PhysicalToLogicalInPlacePointWithParent(const struct tagWND *a1, int *a2, int *a3)
{
  const struct tagWND *result; // rax
  const struct tagWND *v6; // rdi
  float *v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __m128i v13; // xmm0

  result = GetTopLevelOrDpiBoundaryWindow(a1, (__int64)a2, (__int64)a3);
  v6 = result;
  if ( result )
  {
    result = (const struct tagWND *)IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      v7 = (float *)*((_QWORD *)v6 + 27);
      if ( v7 )
      {
        v8 = 1.0 / *v7;
        v9 = 1.0 / v7[5];
        if ( a3 )
        {
          v10 = FixedPointSubPixel(*a3);
          *a2 = (int)(float)((float)((float)(v10 + (float)*a2) - *(float *)(v11 + 48)) * v8);
          v12 = FixedPointSubPixel(a3[1]) + (float)a2[1];
        }
        else
        {
          v13 = _mm_cvtsi32_si128(a2[1]);
          *a2 = (int)(float)((float)((float)*a2 - v7[12]) * v8);
          LODWORD(v12) = _mm_cvtepi32_ps(v13).m128_u32[0];
        }
        result = (const struct tagWND *)(unsigned int)(int)(float)((float)(v12 - v7[13]) * v9);
        a2[1] = (int)result;
      }
    }
  }
  return result;
}
