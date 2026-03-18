/*
 * XREFs of _GetAncestor @ 0x14013EA2C
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14013E448 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x14013E810 (NtUserShutdownBlockReasonCreate.c)
 *     HasMessageRootWindow @ 0x140269CBC (HasMessageRootWindow.c)
 * Callees:
 *     GetMessageWindow @ 0x140046B50 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 */

_QWORD *__fastcall GetAncestor(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r8
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // r8
  int v15; // edx
  char v16; // dl
  __int64 v17; // rax
  __int64 DesktopWindow; // rax
  __int64 v19; // r8
  __int64 MessageWindow; // rax
  _QWORD *v21; // r8

  v2 = a1[3];
  v3 = 0LL;
  if ( v2 )
    v3 = *(_QWORD **)(v2 + 112);
  if ( a1 == v3 && a2 == 4 )
    return a1;
  v4 = 0LL;
  if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 8);
    if ( v5 )
      v4 = *(_QWORD **)(v5 + 24);
  }
  if ( a1 != v4 )
  {
    v6 = 0LL;
    if ( v2 )
      v6 = *(_QWORD **)(v2 + 112);
    if ( a1 != v6 && a1[13] )
    {
      v7 = a2 - 1;
      if ( !v7 )
        return (_QWORD *)a1[13];
      v8 = v7 - 1;
      if ( v8 )
      {
        v15 = v8 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            while ( a1[13] )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              if ( v19 == DesktopWindow )
                break;
              MessageWindow = GetMessageWindow((__int64)a1);
              if ( a1 == (_QWORD *)MessageWindow )
                break;
              a1 = v21;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v16 = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
            if ( !v16 )
              break;
            v17 = 13LL;
            if ( v16 != 64 )
              v17 = 15LL;
            if ( !a1[v17] )
              break;
            a1 = (_QWORD *)a1[v17];
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v9 = a1[3];
          v10 = 0LL;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( v11 )
              v10 = *(_QWORD *)(v11 + 24);
          }
          v12 = a1[13];
          if ( v12 == v10 )
            break;
          v14 = 0LL;
          if ( v9 )
            v14 = *(_QWORD *)(v9 + 112);
          if ( v12 == v14 )
            break;
          a1 = (_QWORD *)a1[13];
        }
      }
      return a1;
    }
  }
  return 0LL;
}
