/*
 * XREFs of ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x180071A2C
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180005668 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180025F70 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x180077664 (WPP_SF__guid_d.c)
 */

__int64 __fastcall CGainStage::AddGainStageReference(CGainStage *this)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_11d137dc2c7e5e4c147e050d3a8a7805_Traceguids,
      (char *)this + 16,
      *((_DWORD *)this + 9) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 9);
}
