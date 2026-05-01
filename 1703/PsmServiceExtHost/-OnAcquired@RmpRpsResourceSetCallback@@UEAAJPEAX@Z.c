/*
 * XREFs of ?OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x1800143B0
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18000FA08 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpsResourceSetCallback::OnAcquired(RmpRpsResourceSetCallback *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 1) + 32LL))(*((_QWORD *)this + 1), a2);
}
