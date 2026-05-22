/*
 * XREFs of ?Size@PropertyVector@Input@@UEBAKXZ @ 0x180028640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyVector::Size(Input::PropertyVector *this)
{
  _QWORD *v1; // rbx
  unsigned int i; // esi

  v1 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = 18; v1 != *((_QWORD **)this + 5); ++v1 )
    i += (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 96LL))(*v1);
  return i;
}
