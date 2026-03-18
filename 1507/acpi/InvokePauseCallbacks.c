/*
 * XREFs of InvokePauseCallbacks @ 0x1C0046DE8
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C005A0F8;
    if ( (__int64 *)qword_1C005A0F8 == &qword_1C005A0F8 )
      break;
    v1 = *(_QWORD *)qword_1C005A0F8;
    if ( *(__int64 **)(qword_1C005A0F8 + 8) != &qword_1C005A0F8 || *(_QWORD *)(v1 + 8) != qword_1C005A0F8 )
      __fastfail(3u);
    qword_1C005A0F8 = *(_QWORD *)qword_1C005A0F8;
    *(_QWORD *)(v1 + 8) = &qword_1C005A0F8;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
