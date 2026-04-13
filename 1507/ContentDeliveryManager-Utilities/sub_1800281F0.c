/*
 * XREFs of sub_1800281F0 @ 0x1800281F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_1800281F0()
{
  void *v0; // rcx
  void (__fastcall *v1)(_QWORD); // rax

  while ( (unsigned __int64)qword_18003A008 < 0xA )
  {
    v0 = (void *)qword_18003A490[qword_18003A008++];
    v1 = (void (__fastcall *)(_QWORD))DecodePointer(v0);
    if ( v1 )
      v1(v1);
  }
}
