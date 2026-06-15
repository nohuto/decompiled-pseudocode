/*
 * XREFs of ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x180024310
 * Callers:
 *     ?Stop@CAudioStream@@UEAAJXZ @ 0x180019760 (-Stop@CAudioStream@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedStreamGroupProxy::StopStream(CSharedStreamGroupProxy *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8));
}
