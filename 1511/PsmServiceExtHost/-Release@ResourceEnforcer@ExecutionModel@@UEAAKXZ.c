/*
 * XREFs of ?Release@ResourceEnforcer@ExecutionModel@@UEAAKXZ @ 0x18003F150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceEnforcer::Release(ExecutionModel::ResourceEnforcer *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &ExecutionModel::ResourceEnforcer::`vftable';
    operator delete(this);
  }
  return v1;
}
