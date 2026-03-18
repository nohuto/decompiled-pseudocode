/*
 * XREFs of NtUserCountClipboardFormats @ 0x1401AF550
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401AF6D0 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 */

__int64 NtUserCountClipboardFormats()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rcx
  struct tagWINDOWSTATION *v3; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // xmm0_8
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  v1 = 0;
  v3 = CheckClipboardAccess(v0);
  if ( v3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v5 = *(_QWORD *)(CurrentProcessWin32Process + 864);
    v6 = *(_DWORD *)(CurrentProcessWin32Process + 872);
    v8 = v5;
    v9 = v6;
    v1 = CountNumClipFormatForIL(&v8, v3);
  }
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
