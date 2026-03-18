/*
 * XREFs of MiCaptureUlongPtrArray @ 0x1406A5D90
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiCaptureUlongPtrArray(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  size_t v6; // r8

  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
  {
    v4 = 4 * a3;
    if ( 4 * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v4] > MmUserProbeAddress || &a2[v4] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v5 = 0LL;
    if ( (a3 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      do
      {
        a1[v5] = *(unsigned int *)&a2[4 * v5];
        a1[v5 + 1] = *(unsigned int *)&a2[4 * v5 + 4];
        a1[v5 + 2] = *(unsigned int *)&a2[4 * v5 + 8];
        a1[v5 + 3] = *(unsigned int *)&a2[4 * v5 + 12];
        a1[v5 + 4] = *(unsigned int *)&a2[4 * v5 + 16];
        a1[v5 + 5] = *(unsigned int *)&a2[4 * v5 + 20];
        a1[v5 + 6] = *(unsigned int *)&a2[4 * v5 + 24];
        a1[v5 + 7] = *(unsigned int *)&a2[4 * v5 + 28];
        v5 += 8LL;
      }
      while ( v5 < (a3 & 0xFFFFFFFFFFFFFFF8uLL) );
    }
    if ( (a3 & 7) != 0 )
    {
      do
      {
        a1[v5] = *(unsigned int *)&a2[4 * v5];
        ++v5;
      }
      while ( v5 < a3 );
    }
  }
  else
  {
    v6 = 8 * a3;
    if ( v6 )
    {
      if ( ((unsigned __int8)a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v6] > MmUserProbeAddress || &a2[v6] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(a1, a2, v6);
  }
  return 0LL;
}
