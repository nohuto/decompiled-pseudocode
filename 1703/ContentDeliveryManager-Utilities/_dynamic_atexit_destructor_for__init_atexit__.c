/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit__ @ 0x1800758E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__init_atexit__()
{
  void *v0; // rcx
  void (*v1)(void); // rax
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_1800F3988;
    if ( (unsigned __int64)qword_1800F3988 >= 0xA )
      break;
    v0 = (void *)qword_1800F3C20[qword_1800F3988++];
    v1 = (void (*)(void))DecodePointer(v0);
    if ( v1 )
      v1();
  }
  return result;
}
