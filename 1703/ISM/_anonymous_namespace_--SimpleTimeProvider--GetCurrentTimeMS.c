/*
 * XREFs of _anonymous_namespace_::SimpleTimeProvider::GetCurrentTimeMS @ 0x180099350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::SimpleTimeProvider::GetCurrentTimeMS(__int64 a1, ULONGLONG *a2)
{
  *a2 = GetTickCount64();
  return 0LL;
}
