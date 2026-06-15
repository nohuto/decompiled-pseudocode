/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1800014B8
 * Callers:
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180024430 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     _CDuckingManager::QueueDuckingWorkItem_::_1_::dtor$0 @ 0x180025040 (_CDuckingManager--QueueDuckingWorkItem_--_1_--dtor$0.c)
 *     _CApplication::CreateInstance_::_1_::dtor$0 @ 0x180025276 (_CApplication--CreateInstance_--_1_--dtor$0.c)
 *     _CProcess::CreateInstance_::_1_::dtor$0 @ 0x1800254D9 (_CProcess--CreateInstance_--_1_--dtor$0.c)
 *     _CApplicationManager::CreateInstance_::_1_::dtor$0 @ 0x180025747 (_CApplicationManager--CreateInstance_--_1_--dtor$0.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$1 @ 0x180025B51 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$1.c)
 *     _TsSessionIdAddEndpointVolumeReference_::_1_::dtor$0 @ 0x180025D32 (_TsSessionIdAddEndpointVolumeReference_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
