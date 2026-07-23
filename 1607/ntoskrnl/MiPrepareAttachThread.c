/*
 * XREFs of MiPrepareAttachThread @ 0x140108EA0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1400AEEB0 (MmQueryCommitReleaseState.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E0E70 (MmReleaseCommitForMemResetPages.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v4; // [rsp+8h] [rbp+8h]

  v4 = *(_DWORD *)(a2 + 184);
  if ( (*(_DWORD *)(a1 + 772) & 0xC00u) < 0xC00 )
    return 0LL;
  if ( *(_QWORD *)(a2 + 96) )
    return 0LL;
  v2 = *(_DWORD *)(a2 + 184) >> 8;
  if ( (v2 & 0xF0) == 0xF0 || *(_QWORD *)(a2 + 128) <= 5uLL )
    return 0LL;
  BYTE1(v4) = v2 & 0xF ^ ((v2 & 0xF0) + 16);
  *(_WORD *)(a2 + 184) = v4;
  return 1LL;
}
