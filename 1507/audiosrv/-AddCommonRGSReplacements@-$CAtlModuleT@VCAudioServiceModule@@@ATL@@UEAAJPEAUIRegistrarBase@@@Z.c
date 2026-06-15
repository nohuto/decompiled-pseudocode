/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioServiceModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x180069080
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioServiceModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int16 *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &word_1800B1B90);
}
