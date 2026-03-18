/*
 * XREFs of FxStubDriverUnload @ 0x1C0037E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C005E738 && qword_1C005E738 != FxStubDriverUnload )
    qword_1C005E738();
  FxStubDriverUnloadCommon();
}
