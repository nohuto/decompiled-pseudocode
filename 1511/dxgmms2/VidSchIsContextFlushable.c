/*
 * XREFs of VidSchIsContextFlushable @ 0x1C008B770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsContextFlushable(__int64 a1)
{
  return !*(_DWORD *)(a1 + 772)
      && (!*(_DWORD *)(a1 + 776) || !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 940LL));
}
