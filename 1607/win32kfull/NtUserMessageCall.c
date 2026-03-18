/*
 * XREFs of NtUserMessageCall @ 0x1C0088580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserMessageCall(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v7; // rdi
  int v9; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(int, int, int, int, __int64, int); // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a2;
  v9 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( ((a1 + 1) & 0xFFFFFFFFFFFEFFFFuLL) != 0 || (unsigned int)(a6 - 695) > 1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      v17 = 0LL;
      goto LABEL_13;
    }
    v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v19;
    v19[1] = v14;
    ++*(_DWORD *)(v14 + 8);
  }
  else
  {
    v14 = -1LL;
  }
  if ( (v7 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v17 = 0LL;
    UserSetLastError(87LL);
  }
  else
  {
    if ( (unsigned int)v7 >= 0x400 )
      goto LABEL_9;
    _mm_lfence();
    if ( !a7 )
      v9 = 0;
    v15 = gapfnMessageCall[(unsigned __int8)MessageTable[v7]];
    if ( (char *)v15 == (char *)NtUserfnDWORD )
LABEL_9:
      v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
              v14,
              (unsigned int)v7,
              a3,
              a4,
              a5);
    else
      v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64, int, int))v15)(
              v14,
              (unsigned int)v7,
              a3,
              a4,
              a5,
              a6,
              v9);
    v17 = v16;
  }
  if ( v14 != -1 )
    ThreadUnlock1(v13, v12);
LABEL_13:
  UserSessionSwitchLeaveCrit(v13, v12);
  return v17;
}
