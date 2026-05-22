/*
 * XREFs of ?Dispose@PropertyVector@Input@@UEAAXXZ @ 0x1800285D0
 * Callers:
 *     ??1PropertyVector@Input@@UEAA@XZ @ 0x18001BD74 (--1PropertyVector@Input@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Input::PropertyVector::Dispose(Input::PropertyVector *this)
{
  __int64 i; // rax
  _QWORD *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rdi

  for ( i = *((_QWORD *)this + 5) - *((_QWORD *)this + 4); i >> 3; i = *((_QWORD *)this + 5) - *((_QWORD *)this + 4) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 4);
    v4 = (void (__fastcall ***)(_QWORD, __int64))*v3;
    memmove(v3, v3 + 1, *((_QWORD *)this + 5) - (_QWORD)(v3 + 1));
    *((_QWORD *)this + 5) -= 8LL;
    if ( v4 )
      (**v4)(v4, 1LL);
  }
}
