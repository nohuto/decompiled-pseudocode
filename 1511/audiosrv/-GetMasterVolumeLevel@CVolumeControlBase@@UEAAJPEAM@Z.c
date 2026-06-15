/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18006D3E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006D0DC (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  float DB; // xmm0_4
  float *v6; // rdx

  v2 = -2147467261;
  if ( a2 )
  {
    v3 = *((unsigned int *)this + 16);
    if ( v3 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v3));
    *v6 = DB;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v4,
        *(_DWORD *)(v4 + 64),
        DB);
    }
    return 0;
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      -2147467261);
  }
  return v2;
}
