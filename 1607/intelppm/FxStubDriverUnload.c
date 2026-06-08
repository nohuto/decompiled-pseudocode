/*
 * XREFs of FxStubDriverUnload @ 0x1C00026D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C000C158 && qword_1C000C158 != FxStubDriverUnload )
    qword_1C000C158();
  FxStubDriverUnloadCommon();
}
