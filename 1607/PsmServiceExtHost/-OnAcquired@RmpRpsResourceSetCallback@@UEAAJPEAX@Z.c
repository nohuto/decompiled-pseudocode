/*
 * XREFs of ?OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x180015BF0
 * Callers:
 *     ?OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ @ 0x180012580 (-OnAcquired@ResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpsResourceSetCallback::OnAcquired(RmpRpsResourceSetCallback *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 1) + 32LL))(*((_QWORD *)this + 1), a2);
}
