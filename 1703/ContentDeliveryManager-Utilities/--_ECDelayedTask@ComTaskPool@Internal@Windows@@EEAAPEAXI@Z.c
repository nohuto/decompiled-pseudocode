/*
 * XREFs of ??_ECDelayedTask@ComTaskPool@Internal@Windows@@EEAAPEAXI@Z @ 0x180006180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComTaskPool::CDelayedTask *__fastcall Windows::Internal::ComTaskPool::CDelayedTask::`vector deleting destructor'(
        Windows::Internal::ComTaskPool::CDelayedTask *this,
        char a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 3);
  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CDelayedTask::`vftable';
  if ( v2 )
  {
    v5 = v2[2];
    if ( v5 )
    {
      v2[2] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    operator delete(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
