/*
 * XREFs of FxStubDriverUnload @ 0x1C0003440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C000D990 && qword_1C000D990 != FxStubDriverUnload )
    qword_1C000D990();
  FxStubDriverUnloadCommon();
}
