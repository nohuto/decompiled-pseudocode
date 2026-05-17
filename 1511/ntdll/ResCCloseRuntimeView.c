/*
 * XREFs of ResCCloseRuntimeView @ 0x1800F6E04
 * Callers:
 *     LdrFlushAlternateResourceModules @ 0x180088AE0 (LdrFlushAlternateResourceModules.c)
 *     ResCKeGetCacheIndices @ 0x1800F70EC (ResCKeGetCacheIndices.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     ResCDirectoryFree @ 0x1800F7C24 (ResCDirectoryFree.c)
 *     ResCHitsFree @ 0x1800F7EC8 (ResCHitsFree.c)
 *     ResCSegmentFree @ 0x1800F8124 (ResCSegmentFree.c)
 *     ResCFreeCultureMap @ 0x1800FAF48 (ResCFreeCultureMap.c)
 */

_BOOL8 __fastcall ResCCloseRuntimeView(_QWORD *a1)
{
  __int64 v1; // rbp
  int v3; // edi
  int v5; // eax
  __int64 v6; // rcx
  BOOL v7; // edi
  __int64 v8; // rsi

  v1 = 0LL;
  v3 = 1;
  if ( !a1 )
    return 0LL;
  if ( a1[1] )
  {
    v5 = ResCFreeCultureMap();
    a1[1] = 0LL;
    v3 = v5;
  }
  v6 = a1[2];
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 64) )
    {
      ResCHitsFree();
      *(_QWORD *)(a1[2] + 64LL) = 0LL;
    }
    v1 = *(unsigned int *)(*(_QWORD *)(a1[2] + 24LL) + 68LL);
    v7 = (unsigned int)ResCDirectoryFree() && v3;
    a1[2] = 0LL;
  }
  else
  {
    v7 = 0;
  }
  if ( a1[3] )
  {
    if ( (_DWORD)v1 )
    {
      v8 = 0LL;
      do
      {
        if ( *(_QWORD *)(v8 + a1[3]) )
        {
          v7 = (unsigned int)ResCSegmentFree() && v7;
          *(_QWORD *)(v8 + a1[3]) = 0LL;
        }
        v8 += 8LL;
        --v1;
      }
      while ( v1 );
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1[3]);
    a1[3] = 0LL;
  }
  else
  {
    v7 = 0;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
  return v7;
}
