/*
 * XREFs of ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1800040E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

CThreadRefTaker *__fastcall CThreadRefTaker::`scalar deleting destructor'(CThreadRefTaker *this, char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
