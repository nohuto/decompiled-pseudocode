/*
 * XREFs of NtUserGetPointerDevices @ 0x1C00E3F80
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C00E4274 (_GetPointerDeviceInfoProperties.c)
 *     IsPointerDeviceAccessible @ 0x1C00E4484 (IsPointerDeviceAccessible.c)
 */

__int64 __fastcall NtUserGetPointerDevices(unsigned int *a1, char *a2)
{
  int v4; // ebx
  unsigned int v5; // r15d
  __int64 v6; // rcx
  __int64 i; // r9
  struct DEVICEINFO *j; // rcx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int *v15; // rax
  unsigned int v16; // eax
  int v17; // edi
  __int64 v18; // r14
  int PointerDeviceInfoProperties; // r9d
  struct DEVICEINFO *k; // r14
  __int64 v21; // r10
  __int64 v22; // r10
  _BYTE v23[8]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v24[88]; // [rsp+50h] [rbp-58h] BYREF

  v4 = 0;
  v5 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( a1 )
  {
    EnterDeviceInfoListCrit_(v6);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v23, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(_DWORD *)(i + 316) && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(i + 480)) )
        ++v5;
    }
    for ( j = gpRimDevBackedDeviceInfoList; j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
    {
      if ( *((_DWORD *)j + 79) )
      {
        v9 = 0;
        if ( *(_DWORD *)(*((_QWORD *)j + 60) + 24LL) != 7 || (*(_BYTE *)(gptiCurrent + 1098LL) & 1) != 0 )
          v9 = 1;
        if ( v9 )
          ++v5;
      }
    }
    if ( a2 )
    {
      v15 = a1;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        v15 = (unsigned int *)W32UserProbeAddress;
      v16 = *v15;
      if ( v16 < v5 )
      {
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned int *)W32UserProbeAddress;
        *a1 = v5;
        UserSetLastError(122LL);
      }
      else if ( v16 && v5 )
      {
        ProbeForWrite(a2, 1080LL * v5, 8u);
        v17 = v5 - 1;
        v18 = gpDeviceInfoList;
        PointerDeviceInfoProperties = 0;
        while ( v18 && v17 >= 0 && PointerDeviceInfoProperties >= 0 )
        {
          if ( *(_DWORD *)(v18 + 316) && (unsigned int)IsPointerDeviceAccessible(*(_QWORD *)(v18 + 480)) )
          {
            PointerDeviceInfoProperties = GetPointerDeviceInfoProperties(&a2[1080 * v17], v22);
            if ( PointerDeviceInfoProperties < 0 )
            {
LABEL_45:
              UserSetLastError(122LL);
              goto LABEL_16;
            }
            --v17;
          }
          v18 = *(_QWORD *)(v18 + 56);
        }
        for ( k = gpRimDevBackedDeviceInfoList;
              k && v17 >= 0 && PointerDeviceInfoProperties >= 0;
              k = (struct DEVICEINFO *)*((_QWORD *)k + 7) )
        {
          if ( *((_DWORD *)k + 79) && (unsigned int)IsPointerDeviceAccessible(*((_QWORD *)k + 60)) )
          {
            PointerDeviceInfoProperties = GetPointerDeviceInfoProperties(&a2[1080 * v17], v21);
            if ( PointerDeviceInfoProperties < 0 )
              goto LABEL_45;
            --v17;
          }
        }
        v4 = 1;
        if ( (unsigned __int64)a1 >= W32UserProbeAddress )
          a1 = (unsigned int *)W32UserProbeAddress;
        *a1 = v5;
      }
      else
      {
        UserSetLastError(15299LL);
      }
    }
    else
    {
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (unsigned int *)W32UserProbeAddress;
      *a1 = v5;
      v4 = 1;
    }
LABEL_16:
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
    LeaveDeviceInfoListCrit_(v11, v10);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  UserSessionSwitchLeaveCrit(v13, v12);
  return v4;
}
