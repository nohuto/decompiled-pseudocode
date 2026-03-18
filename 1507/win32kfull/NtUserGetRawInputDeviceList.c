/*
 * XREFs of NtUserGetRawInputDeviceList @ 0x1C0007D20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceList(volatile void *Address, unsigned int *a2, int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 i; // rcx
  struct DEVICEINFO *j; // rax
  __int64 v11; // rdx
  struct DEVICEINFO *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _BYTE v19[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v20[32]; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0;
  v7 = -1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
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
      if ( *a2 < v6 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v6;
        UserSetLastError(122LL);
      }
      else
      {
        ProbeForWrite(Address, 16LL * v6, 8u);
        v7 = 0;
        v11 = gpDeviceInfoList;
        while ( v11 )
        {
          v14 = 2LL * v7;
          *((_QWORD *)Address + v14) = *(_QWORD *)v11;
          *((_DWORD *)Address + 2 * v14 + 2) = *(unsigned __int8 *)(v11 + 48);
          v11 = *(_QWORD *)(v11 + 56);
          ++v7;
        }
        v12 = gpRimDevBackedDeviceInfoList;
        while ( v12 )
        {
          v13 = 2LL * v7;
          *((_QWORD *)Address + v13) = *(_QWORD *)v12;
          *((_DWORD *)Address + 2 * v13 + 2) = *((unsigned __int8 *)v12 + 48);
          v12 = (struct DEVICEINFO *)*((_QWORD *)v12 + 7);
          ++v7;
        }
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
    LeaveDeviceInfoListCrit_(v15);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  UserSessionSwitchLeaveCrit(v17, v16);
  return v7;
}
