/*
 * XREFs of RtlWow64SuspendThread @ 0x1800D81F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWow64SuspendThread(__int64 a1, __int64 a2)
{
  return RtlWow64SuspendThreadEx(a1, a2, 0LL);
}
