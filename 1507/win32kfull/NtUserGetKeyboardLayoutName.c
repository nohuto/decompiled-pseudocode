/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C00FD430
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  EnterSharedCrit(1LL);
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 400);
  if ( v5 )
  {
    if ( a1 >= W32UserProbeAddress )
      a1 = W32UserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)a1;
    String.Buffer = *(PWSTR *)(a1 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v5 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v5 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v5 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v2 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
