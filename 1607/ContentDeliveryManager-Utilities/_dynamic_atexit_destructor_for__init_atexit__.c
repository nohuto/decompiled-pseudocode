/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit__ @ 0x18005D480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 dynamic_atexit_destructor_for__init_atexit__()
{
  void *v0; // rcx
  void (*v1)(void); // rax
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_18008B458;
    if ( (unsigned __int64)qword_18008B458 >= 0xA )
      break;
    v0 = (void *)qword_18008B6C0[qword_18008B458++];
    v1 = (void (*)(void))DecodePointer(v0);
    if ( v1 )
      v1();
  }
  return result;
}
