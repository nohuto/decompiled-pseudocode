/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00CF984
 * Callers:
 *     UnmapDesktop @ 0x1C00CF6E0 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1C00D3310 (FreeDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C00CF930 (GetDesktopView.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rsi
  __int64 v5; // r14
  int v6; // ebp
  _QWORD *DesktopView; // rdi
  _QWORD *v8; // rdx
  _QWORD *i; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    if ( ProcessWin32Process )
    {
      v5 = *((_QWORD *)a2 + 15);
      if ( (unsigned int)PsGetProcessSessionId(PROCESS) == *(_DWORD *)a2 )
      {
        v6 = 0;
      }
      else
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v6 = 1;
      }
      DesktopView = GetDesktopView(ProcessWin32Process, (__int64)a2);
      if ( DesktopView )
      {
        PsGetProcessSessionId(PROCESS);
        MmUnmapViewOfSection(PROCESS, v5 - DesktopView[2]);
        v8 = (_QWORD *)(ProcessWin32Process + 672);
        for ( i = *(_QWORD **)(ProcessWin32Process + 672); i && i != DesktopView; i = (_QWORD *)*i )
          v8 = i;
        *v8 = *DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v6 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
