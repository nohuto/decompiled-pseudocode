/*
 * XREFs of NtUserGetPointerDevices @ 0x1C011D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C011D980 (IsPointerDeviceAccessible.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C011D9A0 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rcx
  __int64 i; // r9
  struct DEVICEINFO *j; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int *v13; // rax
  unsigned int v14; // eax
  int v15; // edi
  __int64 v16; // r15
  int PointerDeviceInfoProperties; // r9d
  struct DEVICEINFO *k; // r15
  __int64 v19; // r10
  __int64 v20; // r10
  _BYTE v21[16]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v22[64]; // [rsp+58h] [rbp-40h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  if ( a1 )
  {
    EnterDeviceInfoListCrit_(v6);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v22, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_DWORD *)(i + 308) && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(i + 416)) )
        ++v5;
    }
    for ( j = gpRimDevBackedDeviceInfoList; j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
    {
      if ( *((_DWORD *)j + 77) )
      {
        if ( (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)j + 52)) )
          ++v5;
      }
    }
    if ( a2 )
    {
      v13 = a1;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        v13 = (unsigned int *)W32UserProbeAddress;
      v14 = *v13;
      if ( v14 < v5 )
      {
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned int *)W32UserProbeAddress;
        *a1 = v5;
        UserSetLastError(122);
      }
      else if ( v14 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v15 = v5 - 1;
        v16 = gpDeviceInfoList;
        PointerDeviceInfoProperties = 0;
        while ( v16 && v15 >= 0 && PointerDeviceInfoProperties >= 0 )
        {
          if ( *(_DWORD *)(v16 + 308) && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(v16 + 416)) )
          {
            PointerDeviceInfoProperties = GetPointerDeviceInfoProperties(&a2[1080 * v15], v20);
            if ( PointerDeviceInfoProperties < 0 )
            {
LABEL_43:
              UserSetLastError(122);
              goto LABEL_14;
            }
            --v15;
          }
          v16 = *(_QWORD *)(v16 + 56);
        }
        for ( k = gpRimDevBackedDeviceInfoList;
              k && v15 >= 0 && PointerDeviceInfoProperties >= 0;
              k = (struct DEVICEINFO *)*((_QWORD *)k + 7) )
        {
          if ( *((_DWORD *)k + 77) && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)k + 52)) )
          {
            PointerDeviceInfoProperties = GetPointerDeviceInfoProperties(&a2[1080 * v15], v19);
            if ( PointerDeviceInfoProperties < 0 )
              goto LABEL_43;
            --v15;
          }
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned int *)W32UserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (unsigned int *)W32UserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
LABEL_14:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v22);
    LeaveDeviceInfoListCrit_(v9);
  }
  else
  {
    UserSetLastError(87);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit(v11, v10);
  return v4;
}
