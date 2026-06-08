/*
 * XREFs of FxStubDriverUnload @ 0x1C0005B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C0009158 && qword_1C0009158 != FxStubDriverUnload )
    qword_1C0009158();
  FxStubDriverUnloadCommon();
}
