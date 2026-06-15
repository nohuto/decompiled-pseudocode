/*
 * XREFs of ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x18006CF00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelCount(CVolumeControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 17);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        this,
        v3);
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
        0x19u,
        (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        -2147467261);
    }
  }
  return v2;
}
