/*
 * XREFs of DestroyCacheDCEntries @ 0x1C00502A4
 * Callers:
 *     DestroyThreadsObjects @ 0x1C004FEC0 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx

  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
  v6 = (__int64 *)gpDispInfo;
  v7 = (__int64 *)(gpDispInfo + 64);
  v8 = *(_QWORD *)(gpDispInfo + 64);
  if ( v8 )
  {
    do
    {
      if ( a1 == *(_QWORD *)(v8 + 72) && (*(_DWORD *)(v8 + 64) & 0x80000002) == 2 )
        DestroyCacheDC(v7, *(_QWORD *)(v8 + 8));
      if ( v8 == *v7 )
        v7 = (__int64 *)v8;
      v8 = *v7;
    }
    while ( *v7 );
    v6 = (__int64 *)gpDispInfo;
  }
  return GreUnlockVisRgn(*v6, v4, v5);
}
