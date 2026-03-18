/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x1400869B8
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
