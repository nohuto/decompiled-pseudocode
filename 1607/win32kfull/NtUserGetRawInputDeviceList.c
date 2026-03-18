/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C0214A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0052A90 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 i; // rcx
  struct DEVICEINFO *j; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DEVICEINFO *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BYTE v20[8]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v21[24]; // [rsp+48h] [rbp-30h] BYREF

  v6 = 0;
  v7 = -1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  if ( a3 == 16 )
  {
    EnterDeviceInfoListCrit_(v8);
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v20, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
    for ( i = gpDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
      ++v6;
    for ( j = gpRimDevBackedDeviceInfoList; j; j = (struct DEVICEINFO *)*((_QWORD *)j + 7) )
      ++v6;
    if ( Address )
    {
      if ( *a2 >= v6 )
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        v7 = 0;
        v11 = gpDeviceInfoList;
        while ( v11 )
        {
          v12 = 2LL * v7;
          *((_QWORD *)Address + v12) = *(_QWORD *)v11;
          *((_DWORD *)Address + 2 * v12 + 2) = *(unsigned __int8 *)(v11 + 48);
          v11 = *(_QWORD *)(v11 + 56);
          ++v7;
        }
        v13 = gpRimDevBackedDeviceInfoList;
        while ( v13 )
        {
          v14 = 2LL * v7;
          *((_QWORD *)Address + v14) = *(_QWORD *)v13;
          *((_DWORD *)Address + 2 * v14 + 2) = *((unsigned __int8 *)v13 + 48);
          v13 = (struct DEVICEINFO *)*((_QWORD *)v13 + 7);
          ++v7;
        }
      }
      else
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL);
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (unsigned int *)W32UserProbeAddress;
      *a2 = v6;
      v7 = 0;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v20);
    LeaveDeviceInfoListCrit_(v16, v15);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit(v18, v17);
  return v7;
}
