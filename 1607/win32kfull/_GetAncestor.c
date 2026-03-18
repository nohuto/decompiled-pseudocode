/*
 * XREFs of _GetAncestor @ 0x1C00987DC
 * Callers:
 *     HasMessageRootWindow @ 0x1C000D06C (HasMessageRootWindow.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0099D38 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C012E380 (NtUserShutdownBlockReasonCreate.c)
 * Callees:
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     _GetParent @ 0x1C00F878C (_GetParent.c)
 */

__int64 __fastcall GetAncestor(__int64 a1)
{
  __int64 MessageWindow; // rax
  __int64 v2; // rcx
  int v3; // r9d
  __int64 DesktopWindow; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // r9d
  int v9; // r9d
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 Parent; // rax
  __int64 v20; // rax
  __int64 v21; // r9

  MessageWindow = GetMessageWindow(a1);
  if ( v2 == MessageWindow && v3 == 4 )
    return v2;
  DesktopWindow = GetDesktopWindow(v2);
  if ( v5 == DesktopWindow )
    return 0LL;
  v6 = GetMessageWindow(v5);
  if ( v7 == v6 || !*(_QWORD *)(v7 + 88) )
    return 0LL;
  v9 = v8 - 1;
  if ( !v9 )
    return *(_QWORD *)(v7 + 88);
  v11 = v9 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        do
        {
          v13 = GetDesktopWindow(v7);
          if ( v14 == v13 )
            break;
          v15 = GetMessageWindow(v7);
          if ( v7 == v15 )
            break;
          v7 = v16;
        }
        while ( *(_QWORD *)(v16 + 88) );
      }
    }
    else
    {
      while ( 1 )
      {
        Parent = GetParent(v7);
        if ( !Parent )
          break;
        v7 = Parent;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v17 = GetDesktopWindow(v7);
      if ( v18 == v17 )
        break;
      v20 = GetMessageWindow(v7);
      if ( v21 == v20 )
        break;
      v7 = v21;
    }
  }
  return v7;
}
