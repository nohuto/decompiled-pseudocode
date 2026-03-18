/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C0219950
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _SetDisplayMapping @ 0x1C01C89F0 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( !gbEnforceUIPI || (unsigned int)*(_QWORD *)(v5 + 824) > 0x1FFF )
  {
    EnterDeviceInfoListCrit_(v5);
    LOBYTE(v6) = 19;
    v9 = HMValidateHandle(a1, v6, v7, v8);
    v10 = v9;
    if ( v9 && *(_DWORD *)(v9 + 316) )
    {
      if ( (*(_BYTE *)(v9 + 64) & 0x40) != 0 )
      {
        UserSetLastError(5LL);
      }
      else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9 + 480) + 24LL) - 6) > 1 )
      {
        v17 = ValidateHmonitor(a2);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v10 + 480);
          v4 = 1;
          if ( *(_QWORD *)(v18 + 280) != v17 )
            v4 = SetDisplayMapping(v18, v17);
          v13 = *(_QWORD *)(v10 + 480);
          *(_DWORD *)(v13 + 868) = 1;
        }
        goto LABEL_11;
      }
      v11 = 5LL;
    }
    else
    {
      UserSetLastError(6LL);
      v11 = 6LL;
    }
    UserSetLastError(v11);
LABEL_11:
    LeaveDeviceInfoListCrit_(v13, v12);
    goto LABEL_12;
  }
  EtwTraceUIPISystemError(v5, 0LL, 10LL);
  UserSetLastError(5LL);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  UserSessionSwitchLeaveCrit(v15, v14);
  return v4;
}
