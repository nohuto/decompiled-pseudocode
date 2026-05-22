/*
 * XREFs of ?AddRef@OrientationWatcher@@WBA@EAAKXZ @ 0x1800317D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OrientationWatcher::AddRef(__int64 a1)
{
  return InputInfoSanitizer::AddRef((InputInfoSanitizer *)(a1 - 16));
}
