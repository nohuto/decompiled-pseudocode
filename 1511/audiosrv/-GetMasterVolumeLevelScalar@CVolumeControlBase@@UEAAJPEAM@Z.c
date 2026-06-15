/*
 * XREFs of ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18003A6D0
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z @ 0x18000F150 (-GetMasterVolumeLevelScalar@CVolumeStrip@@UEAAJPEAM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18003A838 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow_0 @ 0x180048C4A (pow_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevelScalar(CVolumeControlBase *this, float *a2)
{
  unsigned int v2; // edi
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  double v7; // xmm0_8
  double v8; // xmm0_8
  float v9; // xmm1_4

  v2 = 0;
  if ( a2 )
  {
    v5 = *((unsigned int *)this + 16);
    if ( v5 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    v6 = *((_QWORD *)this + 4) + 56 * v5;
    v7 = pow_0(10.0, *(float *)(v6 + 4) / 20.0);
    v8 = (CVolumeUnit::TaperFromScalar((CVolumeUnit *)v6, v7, *(double *)(v6 + 40)) - *(double *)(v6 + 24))
       / (*(double *)(v6 + 32) - *(double *)(v6 + 24));
    if ( v8 >= 1.0 )
      v8 = DOUBLE_1_0;
    if ( v8 <= 0.0 )
      v8 = 0.0;
    v9 = v8;
    *a2 = v9;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        this,
        *((_DWORD *)this + 16),
        v9);
    }
  }
  else
  {
    v2 = -2147467261;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        -2147467261);
    }
  }
  return v2;
}
