/*
 * XREFs of FxStubDriverUnload @ 0x1C0002610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C000B158 && qword_1C000B158 != FxStubDriverUnload )
    qword_1C000B158();
  FxStubDriverUnloadCommon();
}
