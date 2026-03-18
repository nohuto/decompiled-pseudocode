/*
 * XREFs of xxxSetProcessInitState @ 0x1C0051E40
 * Callers:
 *     xxxInitProcessInfo @ 0x1C0051B44 (xxxInitProcessInfo.c)
 * Callees:
 *     IsAllocateW32ProcessSupported_0 @ 0x1C0001C40 (IsAllocateW32ProcessSupported_0.c)
 *     AllocateW32Process_0 @ 0x1C0001C48 (AllocateW32Process_0.c)
 *     IszzzCalcStartCursorHideSupported_0 @ 0x1C0001C50 (IszzzCalcStartCursorHideSupported_0.c)
 *     zzzCalcStartCursorHide_0 @ 0x1C0001C58 (zzzCalcStartCursorHide_0.c)
 */

__int64 __fastcall xxxSetProcessInitState(PVOID a1, int a2)
{
  __int64 ProcessWin32Process; // rbx
  __int64 result; // rax
  int v6; // eax
  struct _KEVENT *v7; // rcx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_5:
    ++gdwDeferWinEvent;
    v6 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( a2 )
    {
      if ( (v6 & 0x20) == 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v6 | 0x20;
        gdwPUDFlags |= 0x8000000u;
        if ( a1 == gpepCSRSS )
          LOBYTE(a2) = a2 | 0x80;
        if ( (a2 & 0x80u) == 0 )
        {
          if ( (a2 & 0x40) == 0 || (int)IszzzCalcStartCursorHideSupported_0() < 0 )
            goto LABEL_10;
        }
        else
        {
          *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
          if ( (int)IszzzCalcStartCursorHideSupported_0() < 0 )
            goto LABEL_10;
        }
        zzzCalcStartCursorHide_0();
      }
    }
    else if ( (v6 & 8) == 0 )
    {
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v6 & 0xFFFFFFFB;
        if ( (int)IszzzCalcStartCursorHideSupported_0() >= 0 )
          zzzCalcStartCursorHide_0();
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
      v7 = *(struct _KEVENT **)(ProcessWin32Process + 16);
      if ( v7 )
      {
        if ( v7 == (struct _KEVENT *)-1LL )
          goto LABEL_10;
        KeSetEvent(v7, 1, 0);
        ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
      }
      *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    }
LABEL_10:
    --gdwDeferWinEvent;
    return 0LL;
  }
  result = IsAllocateW32ProcessSupported_0();
  if ( (int)result >= 0 )
  {
    result = AllocateW32Process_0();
    if ( (int)result >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(a1);
      goto LABEL_5;
    }
  }
  return result;
}
