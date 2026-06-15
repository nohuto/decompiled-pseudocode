/*
 * XREFs of ?StartStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180024330
 * Callers:
 *     ?Start@CAudioStream@@UEAAJXZ @ 0x1800197C0 (-Start@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedStreamGroupProxy::StartStream(CSharedStreamGroupProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 48LL))(*((_QWORD *)this + 8));
}
