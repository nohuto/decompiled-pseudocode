/*
 * XREFs of ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0090440
 * Callers:
 *     ImeSetTopmost @ 0x1C0090288 (ImeSetTopmost.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 */

struct tagWND *__fastcall GetLastTopMostWindowNoIME(struct tagWND *a1)
{
  __int64 DesktopWindow; // rax
  __int64 v2; // r11
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r8

  DesktopWindow = GetDesktopWindow((__int64)a1);
  v3 = 0LL;
  if ( !DesktopWindow )
    return 0LL;
  v4 = *(_QWORD *)(DesktopWindow + 96);
  if ( !v4 )
    return 0LL;
  do
  {
    if ( (*(_BYTE *)(v4 + 48) & 8) == 0 )
      break;
    v5 = *(_QWORD *)(v4 + 152);
    v6 = v4;
    if ( (*(_BYTE *)(v5 + 86) & 1) != 0 || *(_WORD *)(v5 + 8) == *(_WORD *)(gpsi + 882LL) )
    {
      while ( v2 != v6 )
      {
        v6 = *(_QWORD *)(v6 + 104);
        if ( !v6 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v3 = v4;
    }
    v4 = *(_QWORD *)(v4 + 72);
  }
  while ( v4 );
  return (struct tagWND *)v3;
}
