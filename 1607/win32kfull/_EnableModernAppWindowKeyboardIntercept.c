/*
 * XREFs of _EnableModernAppWindowKeyboardIntercept @ 0x1C021DAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     RegisterModernAppThreadForRawKeyboard @ 0x1C01CC74C (RegisterModernAppThreadForRawKeyboard.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01CC7F0 (UnregisterModernAppThreadForRawKeyboard.c)
 */

__int64 __fastcall EnableModernAppWindowKeyboardIntercept(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 0;
  if ( *(_QWORD *)(v5 + 376) != CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 768) & 0x30) != 0x10 )
  {
    v7 = 5LL;
LABEL_11:
    UserSetLastError(v7);
    return v6;
  }
  RtlInitUnicodeString(&DestinationString, L"inputForegroundObservation");
  if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v11) < 0 || !v11 )
  {
    v7 = 12LL;
    goto LABEL_11;
  }
  if ( v2 )
    return (int)RegisterModernAppThreadForRawKeyboard(v5);
  else
    return (int)UnregisterModernAppThreadForRawKeyboard(v5);
}
