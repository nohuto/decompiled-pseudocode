/*
 * XREFs of SearchFntCacheNewLink @ 0x14031B5E0
 * Callers:
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1401C61E8 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     EngFntCacheAllocInternal @ 0x14029054C (EngFntCacheAllocInternal.c)
 *     ?PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z @ 0x14031B4AC (-PutFntCacheDrvAndFileInfo@@YAXKPEAUHDEV__@@KPEAPEAUFONTFILEVIEW@@K@Z.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1401F8FF4 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x14031B6A8 (bFntCacheCreateHLink.c)
 */

__int64 __fastcall SearchFntCacheNewLink(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = *(_QWORD *)(v3 + 19592);
  SearchFNTCacheHlink(a1, &v8, *(_QWORD *)(v4 + 8));
  v6 = v8;
  if ( !v8 )
  {
    if ( *(_DWORD *)(v4 + 16) < *(_DWORD *)(v5 + 12) && (unsigned int)bFntCacheCreateHLink(a1) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 19592) + 8LL) + 80 * (*(unsigned int *)(*(_QWORD *)(v3 + 19592) + 16LL) + 4LL);
      *(_DWORD *)v6 = a1;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = -1;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      ++*(_DWORD *)(*(_QWORD *)(v3 + 19592) + 16LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(v3 + 19592) + 24LL) |= 2u;
    }
  }
  return v6;
}
