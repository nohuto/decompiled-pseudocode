/*
 * XREFs of ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C00F8620
 * Callers:
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C00F84BC (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C00F8580 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::BufferCache::Remove(
        struct CoreMessagingK::BufferCache::BufferHeader *a1,
        struct CoreMessagingK::BufferCache::BufferHeader *a2)
{
  if ( a2 )
    *((_QWORD *)a2 + 1) = *((_QWORD *)a1 + 1);
  else
    CoreMessagingK::BufferCache::s_FreeList = (PVOID)*((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = 0LL;
}
