/*
 * XREFs of ValidateParentDepth @ 0x1C0056948
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ValidateNewParent @ 0x1C004FA4C (ValidateNewParent.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  _QWORD *v9; // rdx

  v2 = a1;
  v3 = 1;
  v4 = 0LL;
  while ( a2 )
  {
    DesktopWindow = GetDesktopWindow(a2, a2);
    if ( v6 == DesktopWindow )
      break;
    a2 = *(_QWORD *)(v6 + 88);
    ++v3;
  }
  v7 = v3;
  if ( v2 && v2[12] != v4 )
  {
    v9 = (_QWORD *)v2[11];
    while ( 1 )
    {
LABEL_9:
      while ( v2[12] )
      {
        v2 = (_QWORD *)v2[12];
        ++v3;
      }
      if ( !v2[9] )
        break;
      v2 = (_QWORD *)v2[9];
    }
    if ( v3 > v7 )
      v7 = v3;
    while ( 1 )
    {
      v2 = (_QWORD *)v2[11];
      --v3;
      if ( v2 == v9 )
        break;
      if ( v2[9] != v4 )
      {
        v2 = (_QWORD *)v2[9];
        goto LABEL_9;
      }
    }
  }
  LOBYTE(v4) = v7 <= gNestedWindowLimit;
  return (unsigned int)v4;
}
