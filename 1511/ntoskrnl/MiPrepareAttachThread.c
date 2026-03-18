/*
 * XREFs of MiPrepareAttachThread @ 0x1400095D0
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPrepareAttachThread(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 772) & 0xC00u) < 0xC00
    || *(_QWORD *)(a2 + 8)
    || (*(_BYTE *)(a2 + 217) & 0xF0) == 0xF0
    || *(_QWORD *)(a2 + 120) <= 5uLL )
  {
    return 0LL;
  }
  *(_BYTE *)(a2 + 217) = *(_BYTE *)(a2 + 217) & 0xF ^ ((*(_BYTE *)(a2 + 217) & 0xF0) + 16);
  return 1LL;
}
