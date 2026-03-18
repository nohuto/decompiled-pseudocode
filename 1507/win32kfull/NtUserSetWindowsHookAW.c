/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1C0221090
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetWindowsHookEx @ 0x1C0049CE8 (zzzSetWindowsHookEx.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rcx
  __int64 v9; // rbx

  v3 = a1;
  EnterCrit(1LL);
  v6 = zzzSetWindowsHookEx(0LL, 0LL, gptiCurrent, v3, a2, a3);
  v9 = v6;
  if ( v6 )
  {
    if ( !*(_QWORD *)(v6 + 40) )
    {
      v8 = byte_1C02E2031;
      if ( (byte_1C02E2031[v3] & 8) == 0 )
        v9 = 0LL;
    }
    if ( v9 != -1 && v9 )
      v9 = *(_QWORD *)v9;
  }
  else
  {
    v9 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
