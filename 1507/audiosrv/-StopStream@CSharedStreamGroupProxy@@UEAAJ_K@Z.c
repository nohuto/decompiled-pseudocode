/*
 * XREFs of ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800299F0
 * Callers:
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x18001DC70 (-Stop@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::StopStream(CSharedStreamGroupProxy *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9), a2);
}
