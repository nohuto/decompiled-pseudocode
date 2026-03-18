/*
 * XREFs of InvalidateInertiaInfo @ 0x1C00098D0
 * Callers:
 *     NtUserReportInertia @ 0x1C0009820 (NtUserReportInertia.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01F0F5C (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InvalidateInertiaInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (dword_1C0328AE8 & 1) != 0 && a2 == qword_1C0328A68 && a1 == gInertiaInfo )
    dword_1C0328AE8 &= ~1u;
  return result;
}
