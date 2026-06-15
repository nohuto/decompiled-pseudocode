/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x18006EF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x18006EFDC (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetVolumeLimitScalar(CVolumeControlBase *this, float a2)
{
  int v2; // edi
  unsigned int v3; // ebx

  v2 = 0;
  v3 = 0;
  if ( *((_DWORD *)this + 17) )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v3 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v2 = CVolumeUnit::SetVolumeLimitScalar((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v3), a2);
      if ( v2 < 0 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 17) )
        return (unsigned int)v2;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        v2);
    }
  }
  return (unsigned int)v2;
}
