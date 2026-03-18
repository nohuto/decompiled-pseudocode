/*
 * XREFs of NtUserSetCalibrationData @ 0x1C021F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     _SetCalibrationData @ 0x1C01D5DD0 (_SetCalibrationData.c)
 */

__int64 __fastcall NtUserSetCalibrationData(__int64 a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  size_t v6; // rsi
  void *v8; // rdi
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
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
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v9 + 832) <= 0x1FFF )
      goto LABEL_11;
  }
  else
  {
    v9 = *(_QWORD *)(gptiCurrent + 376LL);
    if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v9 + 832) <= 0x2FFF )
    {
LABEL_11:
      EtwTraceUIPISystemError(v9, 0LL, 11LL);
      v10 = 5;
LABEL_38:
      v14 = 0;
      UserSetLastError(v10);
      goto LABEL_39;
    }
  }
  if ( (unsigned int)v6 > 0xCA0 )
  {
LABEL_37:
    v10 = 87;
    goto LABEL_38;
  }
  EnterDeviceInfoListCrit_(v9);
  v11 = HMValidateHandle(a1, 19);
  v13 = v11;
  if ( v11 )
  {
    if ( (*(_BYTE *)(v11 + 64) & 0x40) != 0 )
    {
      UserSetLastError(6);
      v14 = 0;
      UserSetLastError(0);
      goto LABEL_33;
    }
    v16 = *(_QWORD *)(v11 + 416);
    if ( *(_DWORD *)(v13 + 308) && (unsigned int)(*(_DWORD *)(v16 + 24) - 7) > 1 )
    {
      if ( a3 )
      {
        if ( (_DWORD)v6 )
        {
          if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v12) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a3 + v6 > W32UserProbeAddress || a3 + v6 < a3 )
            *W32UserProbeAddress = 0;
        }
        v17 = (void *)Win32AllocPoolWithQuota(v6, 1633907541LL);
        v8 = v17;
        if ( !v17 )
          ExRaiseStatus(-1073741801);
        memmove(v17, (const void *)a3, v6);
      }
      v14 = SetCalibrationData(v13, v6, v8, a4);
      goto LABEL_33;
    }
  }
  UserSetLastError(6);
  v14 = 0;
LABEL_33:
  if ( v8 && !v14 )
    Win32FreePool(v8);
  LeaveDeviceInfoListCrit_(v15);
LABEL_39:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
  UserSessionSwitchLeaveCrit(v19, v18);
  return v14;
}
