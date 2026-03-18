/*
 * XREFs of SpbCheckPwnd @ 0x1C000C958
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107888 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     SpbCheckRect @ 0x1C00097BC (SpbCheckRect.c)
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  __int64 v1; // rdx
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v5; // rbp
  __int64 i; // rbx

  v1 = gpDispInfo;
  v3 = *(_QWORD **)(gpDispInfo + 72LL);
  if ( v3 )
  {
    do
    {
      v5 = (_QWORD *)*v3;
      for ( i = v3[1]; i; i = *(_QWORD *)(i + 88) )
      {
        if ( a1 == (struct tagWND *)i )
          FreeSpb((__int64)v3);
      }
      v3 = v5;
    }
    while ( v5 );
    v1 = gpDispInfo;
  }
  result = *(_QWORD *)v1;
  if ( *(_QWORD *)(*(_QWORD *)v1 + 72LL) )
    return SpbCheckRect(a1, (struct tagRECT *)a1 + 7, 0);
  return result;
}
