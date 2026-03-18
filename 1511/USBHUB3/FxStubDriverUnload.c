/*
 * XREFs of FxStubDriverUnload @ 0x1C0034D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C005A6D8 && qword_1C005A6D8 != FxStubDriverUnload )
    qword_1C005A6D8();
  FxStubDriverUnloadCommon();
}
