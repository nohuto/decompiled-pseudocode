/*
 * XREFs of FxStubDriverUnload @ 0x1C0034FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C005B6F8 && qword_1C005B6F8 != FxStubDriverUnload )
    qword_1C005B6F8();
  FxStubDriverUnloadCommon();
}
