/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x18006CFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006D0DC (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevel(CVolumeControlBase *this, unsigned int a2, float *a3)
{
  unsigned int v3; // ebx
  float DB; // xmm0_4
  float *v5; // r8

  if ( a2 >= *((_DWORD *)this + 17) )
  {
    v3 = -2147024809;
LABEL_5:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Fu,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v3);
    }
    return v3;
  }
  v3 = 0;
  if ( !a3 )
  {
    v3 = -2147467261;
    goto LABEL_5;
  }
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * a2));
  *v5 = DB;
  return v3;
}
