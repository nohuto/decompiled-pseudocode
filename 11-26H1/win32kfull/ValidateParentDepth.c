/*
 * XREFs of ValidateParentDepth @ 0x14012DAD4
 * Callers:
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r11
  _QWORD *v4; // r9
  unsigned int i; // r10d
  __int64 v6; // r11
  unsigned int v7; // edi
  _QWORD *v9; // rax
  unsigned int v10; // eax

  v2 = 0;
  v3 = a2;
  v4 = a1;
  for ( i = 1; v3; ++i )
  {
    if ( (unsigned int)IsDesktopWindow(v3) )
      break;
    v3 = *(_QWORD *)(v6 + 104);
  }
  v7 = i;
  if ( v4 && v4[14] )
  {
    a1 = v4;
    while ( 1 )
    {
      while ( v4[14] )
      {
        v4 = (_QWORD *)v4[14];
        ++i;
      }
      v9 = (_QWORD *)v4[11];
      if ( !v9 )
        break;
LABEL_10:
      v4 = v9;
    }
    v10 = i;
    if ( i <= v7 )
      v10 = v7;
    v7 = v10;
    while ( 1 )
    {
      v4 = (_QWORD *)v4[13];
      --i;
      if ( v4 == a1 )
        break;
      v9 = (_QWORD *)v4[11];
      if ( v9 )
        goto LABEL_10;
    }
  }
  LOBYTE(v2) = v7 <= *(_DWORD *)(W32GetUserSessionState(a1, a2) + 63224);
  return v2;
}
