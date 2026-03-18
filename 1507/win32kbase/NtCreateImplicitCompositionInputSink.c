/*
 * XREFs of NtCreateImplicitCompositionInputSink @ 0x1C0018CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtCreateImplicitCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, void **a2)
{
  return _CreateCompositionInputSink(a1, 1, a2);
}
