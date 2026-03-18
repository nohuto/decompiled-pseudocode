/*
 * XREFs of NtUserSetCalibrationData @ 0x1C0219310
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     _SetCalibrationData @ 0x1C01CCCF0 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  size_t v6; // rsi
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
  if ( !a1 || (unsigned int)(a4 - 1) > 2 )
    goto LABEL_37;
  if ( (_DWORD)v6 )
  {
    if ( !a3 )
      goto LABEL_37;
  }
  else if ( a3 || a4 == 1 )
  {
    goto LABEL_37;
  }
  if ( a4 == 3 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v9 + 824) <= 0x1FFF )
      goto LABEL_11;
  }
  else
  {
    v9 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v9 + 824) <= 0x2FFF )
    {
LABEL_11:
      EtwTraceUIPISystemError(v9, 0LL, 11LL);
      v10 = 5LL;
LABEL_38:
      v17 = 0;
      UserSetLastError(v10);
      goto LABEL_39;
    }
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_37:
    v10 = 87LL;
    goto LABEL_38;
  }
  EnterDeviceInfoListCrit_(v9);
  LOBYTE(v11) = 19;
  v14 = HMValidateHandle(a1, v11, v12, v13);
  v16 = v14;
  if ( v14 )
  {
    if ( (*(_BYTE *)(v14 + 64) & 0x40) != 0 )
    {
      UserSetLastError(6LL);
      v17 = 0;
      UserSetLastError(0LL);
      goto LABEL_33;
    }
    v21 = *(_QWORD *)(v14 + 480);
    if ( *(_DWORD *)(v16 + 316) && (unsigned int)(*(_DWORD *)(v21 + 24) - 6) > 1 )
    {
      if ( a3 )
      {
        if ( (_DWORD)v6 )
        {
          if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a3 + v6 > W32UserProbeAddress || a3 + v6 < a3 )
            *W32UserProbeAddress = 0;
        }
        v22 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v22;
        if ( !v22 )
          ExRaiseStatus(-1073741801);
        memmove(v22, (const void *)a3, v6);
      }
      v17 = SetCalibrationData(v16, (unsigned int)v6, v8, a4);
      goto LABEL_33;
    }
  }
  UserSetLastError(6LL);
  v17 = 0;
LABEL_33:
  if ( v8 && !v17 )
    Win32FreePool(v8, v18, v20);
  LeaveDeviceInfoListCrit_(v19, v18);
LABEL_39:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
  UserSessionSwitchLeaveCrit(v24, v23);
  return v17;
}
