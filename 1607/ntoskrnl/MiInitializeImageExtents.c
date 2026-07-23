/*
 * XREFs of MiInitializeImageExtents @ 0x14065ACA8
 * Callers:
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 * Callees:
 *     MiDeleteSegmentPages @ 0x14008F7E0 (MiDeleteSegmentPages.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiInitializeImageExtents(__int64 *a1)
{
  __int64 *v1; // rdi
  int FileExtents; // r14d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbp
  __int16 v8; // ax

  v1 = a1 + 16;
  FileExtents = 0;
  v4 = (__int64)(a1 + 16);
  if ( a1 != (__int64 *)-128LL )
  {
    while ( 1 )
    {
      FileExtents = MiAllocateFileExtents(v4, 0, *(_QWORD *)(v4 + 8), *(_DWORD *)(v4 + 44), 0);
      if ( FileExtents < 0 )
        break;
      v4 = *(_QWORD *)(v4 + 16);
      if ( !v4 )
        return (unsigned int)FileExtents;
    }
    v7 = *(_QWORD *)(*a1 + 16);
    if ( v7 )
      *(_QWORD *)(*a1 + 16) = 0LL;
    MiDeleteSegmentPages(a1, v5, v6);
    if ( v7 )
      *(_QWORD *)(*a1 + 16) = v7;
    while ( v1 != (__int64 *)v4 )
    {
      v8 = *((_WORD *)v1 + 17);
      if ( (v8 & 4) != 0 )
        *((_WORD *)v1 + 17) = v8 & 0xFFFB;
      v1 = (__int64 *)v1[2];
    }
  }
  return (unsigned int)FileExtents;
}
