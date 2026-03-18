/*
 * XREFs of DestroyCacheDCEntries @ 0x1C005C710
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, int a3)
{
  int v4; // r8d
  __int64 *v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rbx

  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
  v5 = (__int64 *)gpDispInfo;
  v6 = (__int64 *)(gpDispInfo + 64);
  v7 = *(_QWORD *)(gpDispInfo + 64);
  if ( v7 )
  {
    do
    {
      if ( a1 == *(_QWORD *)(v7 + 72) && (*(_DWORD *)(v7 + 64) & 0x80000002) == 2 )
        DestroyCacheDC(v6, *(_QWORD *)(v7 + 8), v4);
      if ( v7 == *v6 )
        v6 = (__int64 *)v7;
      v7 = *v6;
    }
    while ( *v6 );
    v5 = (__int64 *)gpDispInfo;
  }
  return GreUnlockVisRgn(*v5);
}
