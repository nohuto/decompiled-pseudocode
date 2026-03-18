/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C0223630
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01D557C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D58D0 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // ecx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( *(_QWORD *)(v5 + 376) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 776) & 0x30) != 0x10 )
  {
    v7 = 5;
LABEL_11:
    UserSetLastError(v7);
    return v6;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v11) < 0 || !v11 )
  {
    v7 = 12;
    goto LABEL_11;
  }
  if ( a2 )
    return (unsigned int)RegisterModernAppThreadForRawKeyboard(v5);
  else
    return (unsigned int)UnregisterModernAppThreadForRawKeyboard(v5);
}
