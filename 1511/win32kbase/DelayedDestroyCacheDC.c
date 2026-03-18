/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C006A5AC
 * Callers:
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0044600 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1, int a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax

  v4 = 1;
  GreLockVisRgn(*(_QWORD *)gpDispInfo, a2, a3);
  v8 = (__int64 *)(gpDispInfo + 64);
  v9 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v9 )
  {
LABEL_8:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v5, v7);
  }
  do
  {
    v10 = *(_DWORD *)(v9 + 64);
    if ( v10 >= 0 )
    {
      if ( (v10 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_12:
      DestroyCacheDC(v8, *(_QWORD *)(v9 + 8));
      goto LABEL_4;
    }
    if ( *(_QWORD *)(v9 + 80) != PsGetCurrentProcessWin32Process(v6) )
      goto LABEL_4;
    if ( a1 )
      goto LABEL_12;
    v4 = 0;
LABEL_4:
    if ( v9 == *v8 )
      v8 = (__int64 *)v9;
    v9 = *v8;
  }
  while ( *v8 );
  if ( v4 )
    goto LABEL_8;
  return GreUnlockVisRgn(*(_QWORD *)gpDispInfo, v5, v7);
}
