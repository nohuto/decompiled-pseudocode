/*
 * XREFs of ApplyRimDevBackedDeviceSummaryInfomation @ 0x1C00952BC
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C0094F50 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C003C6C4 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GatherDeviceInfoSummaryInformation @ 0x1C00953F4 (GatherDeviceInfoSummaryInformation.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C0095550 (ApplyGatheredDeviceInfoSummaryInformation.c)
 */

__int64 __fastcall ApplyRimDevBackedDeviceSummaryInfomation(int a1)
{
  int v2; // ebx
  int v3; // r14d
  int v4; // r15d
  int v5; // r12d
  int v6; // r13d
  struct DEVICEINFO *v7; // rdi
  int v8; // eax
  __int64 v10; // rax
  int v11; // [rsp+40h] [rbp-20h] BYREF
  int v12; // [rsp+44h] [rbp-1Ch] BYREF
  int v13; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+4Ch] [rbp-14h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-10h] BYREF
  BOOLEAN IsResourceAcquiredExclusiveLite; // [rsp+A8h] [rbp+48h]
  int v17; // [rsp+B0h] [rbp+50h] BYREF
  int v18; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v14 = 0;
  v4 = 0;
  v5 = 0;
  v17 = 0;
  v6 = 0;
  v18 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    EnterDeviceInfoListCrit_();
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v15, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v7 = gpRimDevBackedDeviceInfoList;
  if ( gpRimDevBackedDeviceInfoList )
  {
    while ( 1 )
    {
      v8 = *((unsigned __int8 *)v7 + 48);
      if ( v8 == a1 )
      {
        GatherDeviceInfoSummaryInformation(
          (_DWORD)v7,
          (unsigned int)&v17,
          (unsigned int)&v18,
          (unsigned int)&v11,
          (__int64)&v12,
          (__int64)&v13,
          (__int64)&v14);
        v2 = v17;
      }
      else
      {
        if ( a1 != 2 )
        {
          if ( a1 )
            goto LABEL_6;
          if ( (_BYTE)v8 != 2 )
            goto LABEL_6;
          v10 = *((_QWORD *)v7 + 52);
          if ( !v10 || (unsigned int)(*(_DWORD *)(v10 + 24) - 1) > 7 )
            goto LABEL_6;
LABEL_13:
          v17 = ++v2;
          goto LABEL_6;
        }
        if ( !(_BYTE)v8 )
          goto LABEL_13;
      }
LABEL_6:
      v7 = (struct DEVICEINFO *)*((_QWORD *)v7 + 7);
      if ( !v7 )
      {
        v3 = v18;
        v4 = v11;
        v5 = v12;
        v6 = v13;
        break;
      }
    }
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v15);
  if ( !IsResourceAcquiredExclusiveLite )
    LeaveDeviceInfoListCrit_();
  return ApplyGatheredDeviceInfoSummaryInformation(a1, v2, v5, v3, v4, v6, v14);
}
