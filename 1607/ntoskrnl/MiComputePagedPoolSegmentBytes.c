/*
 * XREFs of MiComputePagedPoolSegmentBytes @ 0x1401DE28C
 * Callers:
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     MiUnlinkUnusedControlArea @ 0x1401DF28C (MiUnlinkUnusedControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputePagedPoolSegmentBytes(__int64 a1)
{
  __int64 v2; // rdx
  __int64 i; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
    return 64LL;
  v2 = 0LL;
  for ( i = a1 + 128; i; v2 += v4 )
  {
    v4 = *(unsigned int *)(i + 44);
    i = *(_QWORD *)(i + 16);
  }
  v5 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) <= 0xFE0 )
  {
    v6 = v5 + 31;
    goto LABEL_11;
  }
  if ( ((8 * (_WORD)v2) & 0xFFFu) <= 0xFC0 && v5 < 0x10000 )
  {
    v6 = v5 + 15;
LABEL_11:
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    return v7 + 160;
  }
  v7 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  return v7 + 160;
}
