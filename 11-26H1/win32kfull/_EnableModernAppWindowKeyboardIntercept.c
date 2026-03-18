/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x14028B034
 * Callers:
 *     NtUserEnableModernAppWindowKeyboardIntercept @ 0x1402B19B0 (NtUserEnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x14029ABCC (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x14029AC88 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0;
  DestinationString = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v7 + 456) != v6 || (*(_BYTE *)(v6 + 808) & 0x30) != 0x10 && !(unsigned int)IsImmersiveBroker(v6) )
  {
    v8 = 5;
LABEL_14:
    UserSetLastError(v8);
    return v2;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v12) < 0 || !v12 )
  {
    v8 = 12;
    goto LABEL_14;
  }
  if ( a2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v7);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v7);
}
