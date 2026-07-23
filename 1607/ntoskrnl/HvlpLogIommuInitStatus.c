/*
 * XREFs of HvlpLogIommuInitStatus @ 0x1401C0EE8
 * Callers:
 *     HvlPhase2Initialize @ 0x14014CA18 (HvlPhase2Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x1401C1144 (HvlpWriteEventLog.c)
 */

__int64 HvlpLogIommuInitStatus()
{
  _DWORD *v0; // rbx
  __int64 v1; // rax
  PHYSICAL_ADDRESS v2; // r8
  PHYSICAL_ADDRESS v3; // rdx
  _OWORD *v4; // rdi
  __int64 result; // rax
  int LowPart_low; // [rsp+28h] [rbp-E0h] BYREF
  int v7; // [rsp+2Ch] [rbp-DCh] BYREF
  PHYSICAL_ADDRESS v8[4]; // [rsp+30h] [rbp-D8h] BYREF
  PHYSICAL_ADDRESS v9[11]; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  int *v11; // [rsp+B8h] [rbp-50h]
  __int64 v12; // [rsp+C0h] [rbp-48h]
  PHYSICAL_ADDRESS *v13; // [rsp+C8h] [rbp-40h]
  __int64 v14; // [rsp+D0h] [rbp-38h]
  PHYSICAL_ADDRESS *v15; // [rsp+D8h] [rbp-30h]
  __int64 v16; // [rsp+E0h] [rbp-28h]
  PHYSICAL_ADDRESS *v17; // [rsp+E8h] [rbp-20h]
  __int64 v18; // [rsp+F0h] [rbp-18h]
  PHYSICAL_ADDRESS *v19; // [rsp+F8h] [rbp-10h]
  __int64 v20; // [rsp+100h] [rbp-8h]
  PHYSICAL_ADDRESS *v21; // [rsp+108h] [rbp+0h]
  __int64 v22; // [rsp+110h] [rbp+8h]
  _BYTE v23[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v24[2064]; // [rsp+128h] [rbp+20h] BYREF

  memset(&v9[4], 0, 0x30uLL);
  v0 = (_DWORD *)HvlpAcquireHypercallPage(v9, 1, (__int64)v23, 8LL);
  v1 = HvlpAcquireHypercallPage(v8, 2, (__int64)v24, 1032LL);
  v2 = v8[3];
  v3 = v9[3];
  v4 = (_OWORD *)v1;
  *v0 = 5;
  if ( !(unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                            123LL,
                            (PHYSICAL_ADDRESS)v3.QuadPart,
                            (PHYSICAL_ADDRESS)v2.QuadPart) )
  {
    *(_OWORD *)&v9[4].LowPart = *v4;
    *(_OWORD *)&v9[6].LowPart = v4[1];
    *(_OWORD *)&v9[8].LowPart = v4[2];
  }
  HvlpReleaseHypercallPage((__int64)v8);
  HvlpReleaseHypercallPage((__int64)v9);
  LowPart_low = LOBYTE(v9[4].LowPart);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&LowPart_low;
  v7 = BYTE1(v9[4].LowPart);
  v11 = &v7;
  v13 = &v9[5];
  v15 = &v9[6];
  v17 = &v9[7];
  v19 = &v9[8];
  v21 = &v9[9];
  v12 = 4LL;
  v14 = 8LL;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v22 = 8LL;
  result = HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT, 7u, &UserData);
  if ( BYTE1(v9[4].LowPart) && v9[5].QuadPart == 1 )
  {
    if ( v9[8].QuadPart )
      return HvlpWriteEventLog(&HV_EVENTLOG_IOMMU_INIT_POLICY_ENABLE, 0, 0LL);
  }
  return result;
}
