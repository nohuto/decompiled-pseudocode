/*
 * XREFs of NtUserSetCalibrationData @ 0x1402BBC40
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _SetCalibrationData @ 0x14029AD18 (_SetCalibrationData.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  SIZE_T v5; // rsi
  void *v7; // rdi
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  const struct tagUIPI_INFO *v10; // r8
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  int v13; // ecx
  struct tagTHREADINFO *v14; // rax
  const struct tagUIPI_INFO *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // eax
  __int64 CurrentProcessWow64Process; // rax
  void *v23; // rax
  __int64 v24; // rcx
  _BYTE v27[16]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v28[4]; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v29[4]; // [rsp+58h] [rbp-40h] BYREF

  v5 = a2;
  v7 = 0LL;
  v29[0] = 0x2000;
  v29[1] = -1;
  v29[2] = 0;
  v28[0] = 12288;
  v28[1] = -1;
  v28[2] = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v27);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_29;
  if ( (_DWORD)v5 )
  {
    if ( !a3 )
      goto LABEL_29;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_29;
  }
  if ( a4 == 3 )
  {
    v14 = PtiCurrent(v8);
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*((_QWORD *)v14 + 57) + 864LL),
            (const struct tagUIPI_INFO *)v29,
            v15) )
      goto LABEL_10;
  }
  else
  {
    v9 = PtiCurrent(v8);
    if ( !UIPrivilegeIsolation::CheckAccess(
            (UIPrivilegeIsolation *)(*((_QWORD *)v9 + 57) + 864LL),
            (const struct tagUIPI_INFO *)v28,
            v10) )
    {
LABEL_10:
      v12 = PtiCurrent(v11);
      EtwTraceUIPISystemError(*((_QWORD *)v12 + 57), 0LL, 11LL);
      v13 = 5;
LABEL_30:
      v19 = 0;
      UserSetLastError(v13);
      goto LABEL_31;
    }
  }
  if ( (unsigned int)v5 > 0xCA0 )
  {
LABEL_29:
    v13 = 87;
    goto LABEL_30;
  }
  v16 = HMValidateHandleWithDescriptor(a1, 0x13u);
  v18 = v16;
  if ( !v16 )
  {
LABEL_25:
    UserSetLastError(6);
    v19 = 0;
    goto LABEL_26;
  }
  if ( (*(_DWORD *)(v16 + 168) & 0x2000) == 0 )
  {
    v20 = *(_QWORD *)(v16 + 456);
    if ( (*(_DWORD *)(v16 + 184) & 0x80u) != 0 )
    {
      v21 = *(_DWORD *)(v20 + 24);
      if ( v21 != 6 && v21 != 7 )
      {
        if ( a3 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20, v17);
          ProbeForRead(a3, v5, CurrentProcessWow64Process != 0 ? 1 : 4);
          v23 = (void *)Win32AllocPoolWithQuotaZInit(v5, 1633907541LL);
          v7 = v23;
          if ( !v23 )
            ExRaiseStatus(-1073741801);
          memmove(v23, (const void *)a3, v5);
        }
        v19 = SetCalibrationData(v18, v5, v7, a4);
        goto LABEL_26;
      }
    }
    goto LABEL_25;
  }
  UserSetLastError(6);
  v19 = 0;
  UserSetLastError(0);
LABEL_26:
  if ( v7 && !v19 )
    Win32FreePool(v7);
LABEL_31:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v27);
  UserSessionSwitchLeaveCrit(v24);
  return v19;
}
