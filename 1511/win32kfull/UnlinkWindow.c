/*
 * XREFs of UnlinkWindow @ 0x1C0055CCC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SetWindowGroupBand @ 0x1C0076224 (SetWindowGroupBand.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     ImeSetTopmost @ 0x1C0090288 (ImeSetTopmost.c)
 * Callees:
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0056840 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     DwmAsyncChildUnlink @ 0x1C00D2CAC (DwmAsyncChildUnlink.c)
 */

struct tagTERMINAL *__fastcall UnlinkWindow(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagTERMINAL *result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax

  v3 = (unsigned __int8)(*(_BYTE *)(a1 + 288) & 0x10) >> 4;
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(a1, a1, 0LL, a2);
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
            v14 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
            return (struct tagTERMINAL *)DwmAsyncChildUnlink(v14);
          }
        }
      }
    }
  }
  return result;
}
