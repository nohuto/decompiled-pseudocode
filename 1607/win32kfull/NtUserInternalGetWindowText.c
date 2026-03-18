/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C0067D10
 * Callers:
 *     <none>
 * Callees:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C0067DE4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C0067E84 (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // ebx

  v3 = a3;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  v10 = 0;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 224) )
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v6 + 24), v6 + 216);
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      v8 = v9 + 216;
      if ( *(_DWORD *)(v9 + 216) )
        v10 = TextCopy(v8, a2, (unsigned int)v3);
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v10;
}
