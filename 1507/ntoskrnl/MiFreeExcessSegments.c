/*
 * XREFs of MiFreeExcessSegments @ 0x140129184
 * Callers:
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x1400140A8 (MiFreePoolPagesLeft.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
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

  if ( !qword_14034FC68 || !qword_14034FC58 )
    return 0LL;
  v0 = MiFreePoolPagesLeft(6);
  v4 = v1 + v0;
  if ( v1 + v0 > (unsigned __int64)qword_140355368 )
    v4 = qword_140355368;
  if ( (unsigned int)(100 * v1 / v4) > dword_1403D00F4 )
  {
    v9 = 1;
  }
  else
  {
    v5 = MiFreePoolPagesLeft(v2 + 5);
    v8 = v6 + v5;
    if ( v6 + v5 > (unsigned __int64)qword_140355368 )
      v8 = qword_140355368;
    if ( (unsigned int)(100 * v6 / v8) > dword_1403D00F4 )
      ++v7;
    v9 = v7;
  }
  if ( (v9 & v3) != 0 )
    KeSetEvent(&stru_1403541A8, 0, 0);
  return v9;
}
