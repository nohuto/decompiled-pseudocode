/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit__ @ 0x18002A080
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 dynamic_atexit_destructor_for__init_atexit__()
{
  void *v0; // rcx
  void (__fastcall *v1)(_QWORD); // rax
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_18003D008;
    if ( (unsigned __int64)qword_18003D008 >= 0xA )
      break;
    v0 = (void *)qword_18003D4F0[qword_18003D008++];
    v1 = (void (__fastcall *)(_QWORD))DecodePointer(v0);
    if ( v1 )
      v1(v1);
  }
  return result;
}
