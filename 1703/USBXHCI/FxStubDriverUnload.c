/*
 * XREFs of FxStubDriverUnload @ 0x1C00107C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void FxStubDriverUnload()
{
  if ( qword_1C00464D8 && qword_1C00464D8 != FxStubDriverUnload )
    qword_1C00464D8();
  FxStubDriverUnloadCommon();
}
