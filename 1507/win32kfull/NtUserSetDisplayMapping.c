/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C021FEC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     _SetDisplayMapping @ 0x1C01CD43C (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( !gbEnforceUIPI || (unsigned int)*(_QWORD *)(v5 + 832) > 0x1FFF )
  {
    EnterDeviceInfoListCrit_(v5);
    v6 = HMValidateHandle(a1, 19);
    v7 = v6;
    if ( v6 && *(_DWORD *)(v6 + 316) )
    {
      if ( (*(_BYTE *)(v6 + 64) & 0x40) != 0 )
      {
        UserSetLastError(5);
      }
      else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v6 + 416) + 24LL) - 7) > 1 )
      {
        v13 = ValidateHmonitor(a2);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v7 + 416);
          v4 = 1;
          if ( *(_QWORD *)(v14 + 264) != v13 )
            v4 = SetDisplayMapping((struct tagHID_POINTER_DEVICE_INFO *)v14, v13);
          v9 = *(_QWORD *)(v7 + 416);
          *(_DWORD *)(v9 + 884) = 1;
        }
        goto LABEL_11;
      }
      v8 = 5;
    }
    else
    {
      UserSetLastError(6);
      v8 = 6;
    }
    UserSetLastError(v8);
LABEL_11:
    LeaveDeviceInfoListCrit_(v9);
    goto LABEL_12;
  }
  EtwTraceUIPISystemError(v5, 0LL, 10LL);
  UserSetLastError(5);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v4;
}
