/*
 * XREFs of ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x18003A7C0
 * Callers:
 *     ?GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z @ 0x18000F1A0 (-GetVolumeRange@CVolumeStrip@@UEAAJIPEAM00@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeRange(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        float *a4,
        float *a5)
{
  unsigned int v5; // ebx
  float *v6; // rcx

  v5 = -2147467261;
  if ( a3 && a4 && a5 )
  {
    if ( a2 == -1 )
      a2 = *((_DWORD *)this + 16);
    if ( a2 < *((_DWORD *)this + 17) )
    {
      if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v6 = (float *)(*((_QWORD *)this + 4) + 56LL * a2);
      v5 = 0;
      *a3 = v6[2];
      *a4 = v6[3];
      *a5 = v6[4];
      return v5;
    }
    v5 = -2147024809;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v5);
  }
  return v5;
}
