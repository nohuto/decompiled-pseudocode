/*
 * XREFs of ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x180064900
 * Callers:
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180071230 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioStream::GetStreamChannelVolume(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
      this,
      a2);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) )
  {
    result = 0LL;
    *a3 = *(float *)(*((_QWORD *)this + 13) + 4 * v4);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetStreamChannelVolume", 1300, -2147024809);
    return 2147942487LL;
  }
  return result;
}
