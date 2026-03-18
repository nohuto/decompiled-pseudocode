/*
 * XREFs of FxStubDriverUnload @ 0x1C000FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C00444D8 && qword_1C00444D8 != FxStubDriverUnload )
    qword_1C00444D8();
  FxStubDriverUnloadCommon();
}
