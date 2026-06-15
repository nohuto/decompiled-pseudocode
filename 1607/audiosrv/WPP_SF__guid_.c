/*
 * XREFs of WPP_SF__guid_ @ 0x180059BDC
 * Callers:
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180015D80 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$0 @ 0x18003A6CD (_CAudioSession--FinishConstruction_--_1_--catch$0.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18005EC70 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4, 16LL, 0LL);
}
