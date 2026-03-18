/*
 * XREFs of InvalidateInertiaInfo @ 0x1C000E084
 * Callers:
 *     NtUserReportInertia @ 0x1C000DFA0 (NtUserReportInertia.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01E6DF0 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C032CC78 & 1) != 0 && a2 == qword_1C032CBF8 && a1 == gInertiaInfo )
    dword_1C032CC78 &= ~1u;
  return result;
}
