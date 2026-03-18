/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C000F4CC
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 *v3; // rdi
  __int64 v4; // rbx
  int v5; // eax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)gpDispInfo);
  v3 = (__int64 *)(gpDispInfo + 64);
  v4 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v4 )
  {
LABEL_8:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
  }
  do
  {
    v5 = *(_DWORD *)(v4 + 64);
    if ( v5 >= 0 )
    {
      if ( (v5 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_12:
      DestroyCacheDC(v3, *(_QWORD *)(v4 + 8));
      goto LABEL_4;
    }
    if ( *(_QWORD *)(v4 + 80) != PsGetCurrentProcessWin32Process() )
      goto LABEL_4;
    if ( a1 )
      goto LABEL_12;
    v2 = 0;
LABEL_4:
    if ( v4 == *v3 )
      v3 = (__int64 *)v4;
    v4 = *v3;
  }
  while ( *v3 );
  if ( v2 )
    goto LABEL_8;
  return GreUnlockVisRgn(*(_QWORD *)gpDispInfo);
}
