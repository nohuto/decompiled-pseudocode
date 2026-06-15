/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180065164
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x180072030 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3)
{
  __int64 v4; // rdi

  v4 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x21u,
      (__int64)&WPP_56c0583fd767319afe66d4370de2ea71_Traceguids,
      this,
      a2,
      a3);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 20) )
  {
    *(float *)(*((_QWORD *)this + 13) + 4 * v4) = a3;
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 128LL))(this);
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CAudioStream::SetStreamChannelVolume", 1329, -2147024809);
    return 2147942487LL;
  }
}
