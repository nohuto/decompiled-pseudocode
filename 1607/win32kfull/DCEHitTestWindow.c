/*
 * XREFs of DCEHitTestWindow @ 0x1C01DB530
 * Callers:
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C0127B40 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     QueryInertiaInfo @ 0x1C022A1F0 (QueryInertiaInfo.c)
 * Callees:
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01DADBC (-DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z.c)
 *     BuildVertexList @ 0x1C01DB324 (BuildVertexList.c)
 *     DCEInverseTransform @ 0x1C01DB628 (DCEInverseTransform.c)
 */

__int64 __fastcall DCEHitTestWindow(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  int *v8; // rcx
  int *v9; // r8
  float v10; // xmm6_4
  float v11; // xmm7_4
  int v12; // esi
  unsigned int v13; // edi
  _OWORD v15[12]; // [rsp+20h] [rbp-118h] BYREF

  v7 = 0;
  if ( (unsigned int)NlsNullProc(a1) )
  {
    v10 = (float)*v9;
    v11 = (float)v9[1];
    BuildVertexList((__int64)v15, v8);
    v12 = 0;
    v13 = 0;
    while ( !(unsigned int)DCEPointInTriangle((struct _D3DVERTEX *)&v15[2 * v13], v10, v11) )
    {
      ++v12;
      v13 += 3;
      if ( v13 >= 6 )
        return v7;
    }
    if ( (unsigned int)DCEInverseTransform(a1, &v15[2 * (unsigned int)(3 * v12)], a4, a3) )
      return 1;
  }
  return v7;
}
