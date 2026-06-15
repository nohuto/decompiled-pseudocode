/*
 * XREFs of ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18007D31C
 * Callers:
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180087B30 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CAudioStream::GetStreamChannelVolume(CAudioStream *this, unsigned int a2, float *a3)
{
  __int64 v4; // rbx
  TraceLoggingHProvider v6; // rcx
  __int64 result; // rax

  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      this,
      a2);
    v6 = WPP_GLOBAL_Control;
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 18) )
  {
    result = 0LL;
    *a3 = *(float *)(*((_QWORD *)this + 12) + 4 * v4);
  }
  else
  {
    if ( v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v6 + 28) & 0x40) != 0
      && *((_BYTE *)v6 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v6 + 2), 0x2Fu, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, -2147024809);
    }
    return 2147942487LL;
  }
  return result;
}
