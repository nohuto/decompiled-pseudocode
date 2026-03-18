/*
 * XREFs of NtUserCallHwndParamLock @ 0x1C00C5670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndParamLock(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (_DWORD)v4 == 118
    || (_DWORD)v4 == 109
    || (_DWORD)v4 == 114
    || (unsigned int)v4 > 0x77 && (unsigned int)v4 <= 0x79 )
  {
    gbValidateHandleForIL = 0;
  }
  v7 = ValidateHwnd(a1);
  if ( v7 && ((_DWORD)v4 != 116 && (_DWORD)v4 != 103 || (((*(_WORD *)(v7 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v10 = gptiCurrent;
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( (unsigned int)(v4 - 115) <= 8 )
      v6 = ((__int64 (__fastcall *)(__int64, __int64))apfnSimpleCall[v4])(v7, a2);
    ThreadUnlock1(v10, v8);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v6;
}
