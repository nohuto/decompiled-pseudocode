/*
 * XREFs of _ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch$0 @ 0x140028629
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140019B5C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IUnknown_____ptr64_CpuManager::DeviceRegistrations::ListValue_ATL::CElementTraits_IUnknown_____ptr64__ATL::CElementTraits_CpuManager::DeviceRegistrations::ListValue___::NewNode_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
