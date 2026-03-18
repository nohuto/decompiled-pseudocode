/*
 * XREFs of FxStubDriverUnload @ 0x1C0030840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnload()
{
  if ( qword_1C005A6B8 && qword_1C005A6B8 != FxStubDriverUnload )
    qword_1C005A6B8();
  FxStubDriverUnloadCommon();
}
