/*
 * XREFs of DestroyCacheDCEntries @ 0x1C0042170
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0041EB0 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 *v3; // rdi
  __int64 v4; // rbx

  GreLockVisRgn(*(_QWORD *)gpDispInfo);
  v2 = (_QWORD *)gpDispInfo;
  v3 = (__int64 *)(gpDispInfo + 64);
  v4 = *(_QWORD *)(gpDispInfo + 64);
  if ( v4 )
  {
    do
    {
      if ( a1 == *(_QWORD *)(v4 + 72) && (*(_DWORD *)(v4 + 64) & 0x80000002) == 2 )
        DestroyCacheDC(v3, *(_QWORD *)(v4 + 8));
      if ( v4 == *v3 )
        v3 = (__int64 *)v4;
      v4 = *v3;
    }
    while ( *v3 );
    v2 = (_QWORD *)gpDispInfo;
  }
  return GreUnlockVisRgn(*v2);
}
