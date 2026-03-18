/*
 * XREFs of ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C014573C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01453D0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0012848 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0012874 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GatherDeviceInfoSummaryInformation @ 0x1C0145874 (GatherDeviceInfoSummaryInformation.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C01459D0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 */

__int64 __fastcall ApplyRimDevBackedDeviceSummaryInfomation(int a1)
{
  int v2; // ebx
  int v3; // r14d
  int v4; // r15d
  int v5; // r12d
  int v6; // r13d
  __int64 v7; // rcx
  struct DEVICEINFO *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12; // rax
  int v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+44h] [rbp-1Ch] BYREF
  int v15; // [rsp+48h] [rbp-18h] BYREF
  int v16; // [rsp+4Ch] [rbp-14h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+A8h] [rbp+48h]
  int v19; // [rsp+B0h] [rbp+50h] BYREF
  int v20; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v16 = 0;
  v4 = 0;
  v5 = 0;
  v19 = 0;
  v6 = 0;
  v20 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_(v7);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v17, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v8 = gpRimDevBackedDeviceInfoList;
  if ( gpRimDevBackedDeviceInfoList )
  {
    while ( 1 )
    {
      v9 = *((unsigned __int8 *)v8 + 48);
      if ( v9 == a1 )
      {
        GatherDeviceInfoSummaryInformation(
          (_DWORD)v8,
          (unsigned int)&v19,
          (unsigned int)&v20,
          (unsigned int)&v13,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v16);
        v2 = v19;
      }
      else
      {
        if ( a1 != 2 )
        {
          if ( a1 )
            goto LABEL_6;
          if ( (_BYTE)v9 != 2 )
            goto LABEL_6;
          v12 = *((_QWORD *)v8 + 52);
          if ( !v12 || (unsigned int)(*(_DWORD *)(v12 + 24) - 1) > 7 )
            goto LABEL_6;
LABEL_13:
          v19 = ++v2;
          goto LABEL_6;
        }
        if ( !(_BYTE)v9 )
          goto LABEL_13;
      }
LABEL_6:
      v8 = (struct DEVICEINFO *)*((_QWORD *)v8 + 7);
      if ( !v8 )
      {
        v3 = v20;
        v4 = v13;
        v5 = v14;
        v6 = v15;
        break;
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v17);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_(v10);
  return ApplyGatheredDeviceInfoSummaryInformation(a1, v2, v5, v3, v4, v6, v16);
}
