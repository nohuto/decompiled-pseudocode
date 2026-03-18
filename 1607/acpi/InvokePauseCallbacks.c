/*
 * XREFs of InvokePauseCallbacks @ 0x1C005DEA4
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0074570;
    if ( (__int64 *)qword_1C0074570 == &qword_1C0074570 )
      break;
    v1 = *(_QWORD *)qword_1C0074570;
    if ( *(__int64 **)(qword_1C0074570 + 8) != &qword_1C0074570 || *(_QWORD *)(v1 + 8) != qword_1C0074570 )
      __fastfail(3u);
    qword_1C0074570 = *(_QWORD *)qword_1C0074570;
    *(_QWORD *)(v1 + 8) = &qword_1C0074570;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
