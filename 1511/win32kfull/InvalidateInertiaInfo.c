/*
 * XREFs of InvalidateInertiaInfo @ 0x1C000CC30
 * Callers:
 *     NtUserReportInertia @ 0x1C000CB80 (NtUserReportInertia.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01F0EBC (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C032B998 & 1) != 0 && a2 == qword_1C032B918 && a1 == gInertiaInfo )
    dword_1C032B998 &= ~1u;
  return result;
}
