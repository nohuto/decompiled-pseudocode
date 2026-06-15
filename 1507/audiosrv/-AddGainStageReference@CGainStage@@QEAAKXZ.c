/*
 * XREFs of ?AddGainStageReference@CGainStage@@QEAAKXZ @ 0x180076F80
 * Callers:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180001258 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x18000ED20 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x18007C374 (WPP_SF__guid_d.c)
 */

__int64 __fastcall CGainStage::AddGainStageReference(CGainStage *this)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF__guid_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_11d137dc2c7e5e4c147e050d3a8a7805_Traceguids,
      (char *)this + 16,
      *((_DWORD *)this + 9) + 1);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 9);
}
