/*
 * XREFs of ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x180081C14
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x180078350 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180078CD0 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioStream::GetMeteringChannelCount(CAudioStream *this, unsigned int *a2)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x3Fu,
      (__int64)&WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      *((_DWORD *)this + 21));
  }
  *a2 = *((_DWORD *)this + 21);
  return 0LL;
}
