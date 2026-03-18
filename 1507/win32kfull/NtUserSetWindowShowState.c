/*
 * XREFs of NtUserSetWindowShowState @ 0x1C0220F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowShowState(__int64 a1, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  LARGE_INTEGER *v8; // r8
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  _QWORD v14[5]; // [rsp+40h] [rbp-28h] BYREF

  EnterCrit(1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 && (((*(_WORD *)(v5 + 66) & 0x3FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    v14[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v14;
    v14[1] = v5;
    ++*(_DWORD *)(v5 + 8);
    if ( !IAMThreadAccessGranted(gptiCurrent) )
    {
      v9 = 5;
LABEL_5:
      UserSetLastError(v9);
LABEL_12:
      ThreadUnlock1(v11, v10);
      goto LABEL_13;
    }
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v9 = 87;
        goto LABEL_5;
      }
      v12 = 16;
    }
    else
    {
      v12 = 17;
    }
    v4 = PostEventMessageEx(
           v8[2].QuadPart,
           *(_QWORD *)(v8[2].QuadPart + 392),
           1u,
           0LL,
           0,
           *v8,
           (LARGE_INTEGER)(v12 | (unsigned __int64)(gdwPUDFlags & 0x10000)),
           0LL);
    goto LABEL_12;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
