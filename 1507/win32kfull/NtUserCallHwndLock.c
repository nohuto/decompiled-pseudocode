/*
 * XREFs of NtUserCallHwndLock @ 0x1C01014D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserCallHwndLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  EnterCrit(1LL);
  v4 = 0LL;
  if ( (_DWORD)v3 == 113
    || (_DWORD)v3 == 108
    || (_DWORD)v3 == 117
    || (unsigned int)v3 > 0x76 && (unsigned int)v3 <= 0x78 )
  {
    gbValidateHandleForIL = 0;
  }
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 && ((_DWORD)v3 != 102 && (_DWORD)v3 != 115 || (((*(_WORD *)(v5 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    v8 = gptiCurrent;
    v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v10;
    v10[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    if ( (unsigned int)(v3 - 101) <= 0xC )
      v4 = ((__int64 (__fastcall *)(__int64))apfnSimpleCall[v3])(v5);
    ThreadUnlock1(v8, v7);
  }
  UserSessionSwitchLeaveCrit(v6, v7);
  return v4;
}
