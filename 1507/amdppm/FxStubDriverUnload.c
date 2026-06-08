/*
 * XREFs of FxStubDriverUnload @ 0x1C00011F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C0009140 && qword_1C0009140 != FxStubDriverUnload )
    qword_1C0009140();
  FxStubDriverUnloadCommon();
}
