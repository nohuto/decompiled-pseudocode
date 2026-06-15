/*
 * XREFs of ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x180064698
 * Callers:
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BC20 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x18005C490 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

__int64 __fastcall CAudioStream::GetMeteringChannelCount(CAudioStream *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x26u,
      (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
      *((_DWORD *)this + 21));
  }
  *a2 = *((_DWORD *)this + 21);
  return 0LL;
}
