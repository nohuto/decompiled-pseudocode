/*
 * XREFs of ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180007330
 * Callers:
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x180020410 (-Start@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::StartStream(CSharedStreamGroupProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8), a2);
}
