/*
 * XREFs of NtUserCallHwnd @ 0x1C00C5790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwnd(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  if ( v4 )
  {
    v8 = gptiCurrent;
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    v10[1] = v4;
    ++*(_DWORD *)(v4 + 8);
    if ( (unsigned int)(v2 - 82) <= 6 )
      v7 = ((__int64 (__fastcall *)(__int64))apfnSimpleCall[v2])(v4);
    ThreadUnlock1(v8, v5);
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
