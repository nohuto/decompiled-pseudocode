/*
 * XREFs of ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C00F84BC
 * Callers:
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C00F863C (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 * Callees:
 *     ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C00F8620 (-Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z.c)
 */

__int64 __fastcall CoreMessagingK::BufferCache::AllocUninitialized(unsigned __int16 a1, void **a2)
{
  unsigned int v2; // ebx
  struct CoreMessagingK::BufferCache::BufferHeader *v4; // rcx
  struct CoreMessagingK::BufferCache::BufferHeader *v6; // r9
  struct CoreMessagingK::BufferCache::BufferHeader *v7; // rax
  struct CoreMessagingK::BufferCache::BufferHeader *v8; // r8
  _QWORD *v9; // rcx
  unsigned __int16 v10; // di
  _QWORD *PoolWithTag; // rax

  v2 = 0;
  v4 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
  *a2 = 0LL;
  v6 = 0LL;
  v7 = v4;
  v8 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *(_WORD *)v7 >= a1 && *(_WORD *)v7 < *(_WORD *)v4 )
      {
        v4 = v7;
        v6 = v8;
      }
      v8 = v7;
      v7 = (struct CoreMessagingK::BufferCache::BufferHeader *)*((_QWORD *)v7 + 1);
    }
    while ( v7 );
    if ( v4 && *(_WORD *)v4 >= a1 )
    {
      CoreMessagingK::BufferCache::Remove(v4, v6);
LABEL_15:
      *a2 = v9 + 2;
      return v2;
    }
  }
  if ( a1 + 512 >= 0xFFFF )
    v10 = -1;
  else
    v10 = a1 + 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v10 + 16, 0x43424D43u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_WORD *)PoolWithTag = v10;
    PoolWithTag[1] = 0LL;
    goto LABEL_15;
  }
  return (unsigned int)-1073741801;
}
