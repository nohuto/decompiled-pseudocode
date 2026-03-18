/*
 * XREFs of PopDiagTraceHiberStats @ 0x140530FB4
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140114714 (HvlQueryHypervisorTscAdjustment.c)
 *     PopOpenPowerKey @ 0x140132520 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwSetValueKey @ 0x14015A880 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x1403D055C (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1403D058C (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x1405313C0 (PopComputeDerivedHiberStats.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // rdi
  unsigned __int64 v2; // r15
  __int64 HypervisorTscAdjustment; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 *v6; // r14
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rsi
  _BYTE *Data; // r12
  __int64 *v9; // rbx
  int v10; // r8d
  __int64 *v11; // rcx
  unsigned int *v12; // rcx
  unsigned __int64 v13; // rax
  ULONG v14; // r13d
  ULONG DataSize; // r15d
  unsigned __int64 v16; // rax
  REGHANDLE v17; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v22; // [rsp+58h] [rbp-B0h]
  _BYTE v23[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v24[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  v1 = KeyHandle;
  if ( v0 < 0 )
    v1 = 0LL;
  KeyHandle = v1;
  qword_140303990 = PopCaptureTimeOnProcZero();
  v2 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 1524);
  v22 = v2;
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v4 = qword_140303988 - HypervisorTscAdjustment;
  qword_1403039B0 = HypervisorTscAdjustment;
  v5 = qword_1403039A8 + HypervisorTscAdjustment;
  qword_140303998 -= v5;
  qword_1403039B8 -= v5;
  qword_140303990 -= v5;
  qword_1403039C0 -= v5;
  qword_140303988 = v4;
  qword_140303918 = v4 - qword_140303920;
  dword_140303A8C = dword_1403035C4;
  dword_140303A88 = dword_140303648;
  dword_140303A38 = PopQpcTimeInMs(&qword_140303878, &qword_140303880);
  qword_1403038F8 = (unsigned int)PopQpcTimeInMs(&qword_140303848, &qword_140303900);
  PopComputeDerivedHiberStats(&qword_1403038B8, v2, v23);
  v6 = (unsigned __int64 *)v24;
  v21 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v24;
  v9 = &qword_1406EE270;
  do
  {
    v10 = *(_DWORD *)v9;
    v11 = (__int64 *)v23;
    if ( (*(_DWORD *)v9 & 0x40000000) == 0 )
      v11 = &qword_1403038B8;
    v12 = (unsigned int *)((char *)v11 + *(v9 - 1));
    if ( (v10 & 2) != 0 )
      v13 = *(_QWORD *)v12;
    else
      v13 = *v12;
    *v6 = v13;
    if ( v10 < 0 )
      *v6 = v13 / v2;
    if ( (v10 & 0x20) != 0 )
    {
      v14 = 11;
      DataSize = 8;
    }
    else
    {
      v14 = 4;
      DataSize = 4;
    }
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v9 - 2));
      ZwSetValueKey(v1, &DestinationString, 0, v14, Data, DataSize);
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v2 = v22;
    v9 += 3;
    p_Reserved->Reserved = 0;
    ++v6;
    p_Reserved += 4;
    --v21;
  }
  while ( v21 );
  qword_140303A00 /= v2;
  qword_1403038C0 /= v2;
  v16 = qword_140303990 / v2 - (unsigned int)dword_140303908 - (unsigned int)dword_140303910;
  qword_140303A90 = v16;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_140303A00, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_1403038C0, 4u);
    if ( qword_140303A28 )
    {
      dword_1403035A4 += PopQpcTimeInMs(&qword_140303868, &qword_140303A30);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_1403035A4, 4u);
    }
    qword_140303A98 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_140303A98, 8u);
    LOBYTE(v16) = ZwClose(KeyHandle);
  }
  if ( PopDiagHandleRegistered )
  {
    v17 = PopDiagHandle;
    LOBYTE(v16) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v16 )
      LOBYTE(v16) = EtwWrite(v17, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x2Fu, &UserData);
  }
  return v16;
}
