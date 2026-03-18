/*
 * XREFs of FxStubDriverUnload @ 0x1C00109D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C00424F8 && qword_1C00424F8 != FxStubDriverUnload )
    qword_1C00424F8();
  FxStubDriverUnloadCommon();
}
