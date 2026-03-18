/*
 * XREFs of PopDiagTraceHiberStats @ 0x1404F81FC
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x14011A564 (HvlQueryHypervisorTscAdjustment.c)
 *     PopOpenPowerKey @ 0x140127640 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x1403A5880 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1403A58B0 (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x1404F8608 (PopComputeDerivedHiberStats.c)
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
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-B0h]
  _BYTE v23[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v24[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  v1 = KeyHandle;
  if ( v0 < 0 )
    v1 = 0LL;
  KeyHandle = v1;
  qword_1402DE6F0 = PopCaptureTimeOnProcZero();
  v2 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 1524);
  v21 = v2;
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v4 = qword_1402DE6E8 - HypervisorTscAdjustment;
  qword_1402DE710 = HypervisorTscAdjustment;
  v5 = qword_1402DE708 + HypervisorTscAdjustment;
  qword_1402DE6F8 -= v5;
  qword_1402DE718 -= v5;
  qword_1402DE6F0 -= v5;
  qword_1402DE720 -= v5;
  qword_1402DE6E8 = v4;
  qword_1402DE678 = v4 - qword_1402DE680;
  dword_1402DE7EC = dword_1402DE324;
  dword_1402DE7E8 = dword_1402DE3A8;
  dword_1402DE798 = PopQpcTimeInMs(&qword_1402DE5E8, &qword_1402DE5F0);
  qword_1402DE660 = (unsigned int)PopQpcTimeInMs(&qword_1402DE5C8, &qword_1402DE660);
  PopComputeDerivedHiberStats(&qword_1402DE620, v2, v23);
  v6 = (unsigned __int64 *)v24;
  v22 = 47LL;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  Data = v24;
  v9 = &qword_1406A5E10;
  do
  {
    v10 = *(_DWORD *)v9;
    v11 = (__int64 *)v23;
    if ( (*(_DWORD *)v9 & 0x40000000) == 0 )
      v11 = &qword_1402DE620;
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
    v2 = v21;
    v9 += 3;
    p_Reserved->Reserved = 0;
    ++v6;
    p_Reserved += 4;
    --v22;
  }
  while ( v22 );
  qword_1402DE760 /= v2;
  qword_1402DE628 /= v2;
  v16 = qword_1402DE6F0 / v2 - (unsigned int)dword_1402DE668 - (unsigned int)dword_1402DE670;
  qword_1402DE7F0 = v16;
  if ( v1 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_1402DE760, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v1, &DestinationString, 0, 4u, &qword_1402DE628, 4u);
    if ( qword_1402DE788 )
    {
      dword_1402DE304 += PopQpcTimeInMs(&qword_1402DE5D8, &qword_1402DE790);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v1, &DestinationString, 0, 4u, &dword_1402DE304, 4u);
    }
    qword_1402DE7F8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_1402DE7F8, 8u);
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
