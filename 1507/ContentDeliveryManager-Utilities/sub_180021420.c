/*
 * XREFs of sub_180021420 @ 0x180021420
 * Callers:
 *     sub_180028130 @ 0x180028130 (sub_180028130.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x18002621C (--3@YAXPEAX@Z.c)
 */

_QWORD **__fastcall sub_180021420(_QWORD **a1, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rax

  v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD *))(*a1[1] + 16LL))(a1[1]);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
