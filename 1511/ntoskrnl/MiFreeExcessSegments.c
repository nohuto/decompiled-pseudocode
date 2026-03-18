/*
 * XREFs of MiFreeExcessSegments @ 0x140015B78
 * Callers:
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     MmResourcesAvailable @ 0x140041CA0 (MmResourcesAvailable.c)
 *     MiRemoveUnusedSegments @ 0x140138B1C (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x140014424 (MiFreePoolPagesLeft.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

__int64 MiFreeExcessSegments()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  int v2; // r9d
  int v3; // r10d
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned __int64 v8; // r8
  unsigned int v9; // ebx

  if ( !qword_1402FF7A8 || !qword_1402FF798 )
    return 0LL;
  v0 = MiFreePoolPagesLeft(6);
  v4 = v1 + v0;
  if ( v1 + v0 > (unsigned __int64)qword_140301528 )
    v4 = qword_140301528;
  if ( (unsigned int)(100 * v1 / v4) > dword_140381104 )
  {
    v9 = 1;
  }
  else
  {
    v5 = MiFreePoolPagesLeft(v2 + 5);
    v8 = v6 + v5;
    if ( v6 + v5 > (unsigned __int64)qword_140301528 )
      v8 = qword_140301528;
    if ( (unsigned int)(100 * v6 / v8) > dword_140381104 )
      ++v7;
    v9 = v7;
  }
  if ( (v9 & v3) != 0 )
    KeSetEvent(&stru_140300218, 0, 0);
  return v9;
}
