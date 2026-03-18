/*
 * XREFs of ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C00F8580
 * Callers:
 *     ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C00F8790 (-CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C00F87D0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z.c)
 * Callees:
 *     ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C00F8620 (-Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z.c)
 */

void __fastcall CoreMessagingK::BufferCache::Free(char *a1)
{
  char *v1; // rbx
  struct CoreMessagingK::BufferCache::BufferHeader *v2; // r11
  struct CoreMessagingK::BufferCache::BufferHeader *v3; // rdx
  int v4; // r10d
  struct CoreMessagingK::BufferCache::BufferHeader *v5; // r8
  struct CoreMessagingK::BufferCache::BufferHeader *v6; // rcx
  PVOID v7; // rcx

  if ( a1 )
  {
    v1 = a1 - 16;
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0;
    v5 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
    v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
    if ( !CoreMessagingK::BufferCache::s_FreeList )
      goto LABEL_10;
    do
    {
      ++v4;
      if ( *(_WORD *)v6 < *(_WORD *)v5 )
      {
        v5 = v6;
        v2 = v3;
      }
      v3 = v6;
      v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)*((_QWORD *)v6 + 1);
    }
    while ( v6 );
    if ( v4 == 2 )
    {
      if ( *(_WORD *)v5 >= *(_WORD *)v1 )
      {
        ExFreePoolWithTag(v1, 0x43424D43u);
        return;
      }
      CoreMessagingK::BufferCache::Remove(v5, v2);
      ExFreePoolWithTag(v7, 0x43424D43u);
      *((_QWORD *)v1 + 1) = CoreMessagingK::BufferCache::s_FreeList;
    }
    else
    {
LABEL_10:
      *((_QWORD *)v1 + 1) = CoreMessagingK::BufferCache::s_FreeList;
    }
    CoreMessagingK::BufferCache::s_FreeList = v1;
  }
}
