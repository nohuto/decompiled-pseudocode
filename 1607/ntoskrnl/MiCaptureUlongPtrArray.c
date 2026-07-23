/*
 * XREFs of MiCaptureUlongPtrArray @ 0x14065C2C4
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
      if ( (unsigned __int64)&a2[v4] > 0x7FFFFFFF0000LL || &a2[v4] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
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
      if ( (unsigned __int64)&a2[v6] > 0x7FFFFFFF0000LL || &a2[v6] < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(a1, a2, v6);
  }
  return 0LL;
}
