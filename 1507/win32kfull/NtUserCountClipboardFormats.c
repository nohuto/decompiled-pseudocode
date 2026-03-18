/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C0117320
 * Callers:
 *     <none>
 * Callees:
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 *     CountNumClipFormatForIL @ 0x1C0117370 (CountNumClipFormatForIL.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit(1LL);
  v0 = 0;
  v3 = CheckClipboardAccess();
  if ( v3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 832), v3);
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
