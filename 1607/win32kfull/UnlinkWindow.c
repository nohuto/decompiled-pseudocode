/*
 * XREFs of UnlinkWindow @ 0x1C0063380
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ImeSetTopmost @ 0x1C0063C38 (ImeSetTopmost.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C0063580 (GetMessageWindow.c)
 *     DwmAsyncChildUnlink @ 0x1C0063590 (DwmAsyncChildUnlink.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01F65B0 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

struct tagTERMINAL *__fastcall UnlinkWindow(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagTERMINAL *result; // rax
  __int64 v9; // rcx
  void *v10; // rax

  v3 = (unsigned __int8)(*(_BYTE *)(a1 + 288) & 0x10) >> 4;
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  v5 = a2 + 96;
  if ( *(_QWORD *)(a2 + 96) != a1 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( !v6 )
      goto LABEL_7;
    v5 = v6 + 72;
  }
  HMAssignmentLock(v5, *(_QWORD *)(a1 + 72));
LABEL_7:
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 )
  {
    HMAssignmentLock(v7 + 80, *(_QWORD *)(a1 + 80));
    HMAssignmentUnlock(a1 + 72);
  }
  result = (struct tagTERMINAL *)HMAssignmentUnlock(a1 + 80);
  *(_DWORD *)(a1 + 288) &= 0xFFFFFFE7;
  if ( v3 )
  {
    result = (struct tagTERMINAL *)IsWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      result = (struct tagTERMINAL *)IsDesktopWindow(a1);
      if ( !(_DWORD)result )
      {
        result = (struct tagTERMINAL *)GetMessageWindow(v9);
        if ( (struct tagTERMINAL *)a1 != result )
        {
          result = gTermIO;
          if ( a2 != *((_QWORD *)&gTermIO + 1) )
          {
            v10 = (void *)ReferenceDwmApiPort();
            return (struct tagTERMINAL *)DwmAsyncChildUnlink(v10);
          }
        }
      }
    }
  }
  return result;
}
