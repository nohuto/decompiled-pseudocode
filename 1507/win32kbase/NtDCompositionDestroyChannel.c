/*
 * XREFs of NtDCompositionDestroyChannel @ 0x1C0016010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtDCompositionDestroyChannel(unsigned int a1)
{
  return DirectComposition::CChannel::DestroyHandle(a1);
}
