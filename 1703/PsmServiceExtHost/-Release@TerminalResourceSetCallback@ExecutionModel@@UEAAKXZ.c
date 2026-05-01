/*
 * XREFs of ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x180001850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::Release(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &ExecutionModel::TerminalResourceSetCallback::`vftable';
    if ( *((_QWORD *)this + 2) )
      TpReleaseWork();
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    operator delete(this);
  }
  return v2;
}
