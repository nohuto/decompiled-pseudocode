/*
 * XREFs of NtUserMessageCall @ 0x1C00C5800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v8; // rsi
  int v9; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD v18[4]; // [rsp+40h] [rbp-38h] BYREF

  v8 = a2;
  v9 = 1;
  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      v16 = 0LL;
      goto LABEL_10;
    }
    v18[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v18;
    v18[1] = v14;
    ++*(_DWORD *)(v14 + 8);
  }
  else
  {
    v14 = -1LL;
  }
  if ( (v8 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v16 = 0LL;
    UserSetLastError(87);
  }
  else
  {
    if ( (unsigned int)v8 < 0x400 )
    {
      _mm_lfence();
      if ( !a7 )
        v9 = 0;
      v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))gapfnMessageCall[(unsigned __int8)MessageTable[v8]])(
              v14,
              (unsigned int)v8,
              a3,
              a4,
              a5,
              a6,
              v9);
    }
    else
    {
      v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
              v14,
              (unsigned int)v8,
              a3,
              a4,
              a5);
    }
    v16 = v15;
  }
  if ( v14 != -1 )
    ThreadUnlock1(v13, v12);
LABEL_10:
  UserSessionSwitchLeaveCrit(v13, v12);
  return v16;
}
