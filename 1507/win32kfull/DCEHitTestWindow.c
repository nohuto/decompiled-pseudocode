/*
 * XREFs of DCEHitTestWindow @ 0x1C01E47FC
 * Callers:
 *     DCESpeedHitTest @ 0x1C0065270 (DCESpeedHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00FB2A0 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     QueryInertia @ 0x1C023995C (QueryInertia.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01E4048 (-DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z.c)
 *     BuildVertexList @ 0x1C01E45F0 (BuildVertexList.c)
 *     DCEInverseTransform @ 0x1C01E48EC (DCEInverseTransform.c)
 */

__int64 __fastcall DCEHitTestWindow(int *a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned int v6; // ebx
  float v8; // xmm6_4
  float v9; // xmm7_4
  int v10; // esi
  unsigned int v11; // edi
  _OWORD v13[12]; // [rsp+20h] [rbp-118h] BYREF

  v6 = 0;
  v8 = (float)*a3;
  v9 = (float)a3[1];
  BuildVertexList((__int64)v13, a1);
  v10 = 0;
  v11 = 0;
  while ( !(unsigned int)DCEPointInTriangle((struct _D3DVERTEX *)&v13[2 * v11], v8, v9) )
  {
    ++v10;
    v11 += 3;
    if ( v11 >= 6 )
      return v6;
  }
  if ( (unsigned int)DCEInverseTransform(a1, &v13[2 * (unsigned int)(3 * v10)], a4, a3) )
    return 1;
  return v6;
}
