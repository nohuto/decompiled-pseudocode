/*
 * XREFs of ?RemoveGainStageReference@CGainStage@@QEAAKXZ @ 0x180005840
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180005668 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x180076590 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x180077664 (WPP_SF__guid_d.c)
 */

__int64 __fastcall CGainStage::RemoveGainStageReference(CGainStage *this)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_11d137dc2c7e5e4c147e050d3a8a7805_Traceguids,
      (char *)this + 16,
      *((_DWORD *)this + 9) - 1);
  }
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 9);
}
