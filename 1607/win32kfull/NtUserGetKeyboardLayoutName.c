/*
 * XREFs of NtUserGetKeyboardLayoutName @ 0x1C012A7B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutName(unsigned __int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct _UNICODE_STRING String; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5) + 392);
  if ( v8 )
  {
    if ( a1 >= W32UserProbeAddress )
      a1 = W32UserProbeAddress;
    *(_DWORD *)&String.Length = *(_DWORD *)a1;
    String.Buffer = *(PWSTR *)(a1 + 8);
    ProbeForWrite(String.Buffer, String.MaximumLength, 2u);
    if ( (*(_WORD *)(v8 + 42) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v8 + 40), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v8 + 112), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        UserSetLastError(87LL);
        goto LABEL_11;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v2 = 1;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v2;
}
