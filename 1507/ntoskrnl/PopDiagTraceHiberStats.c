/*
 * XREFs of PopDiagTraceHiberStats @ 0x140566F50
 * Callers:
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     HvlQueryHypervisorTscAdjustment @ 0x140148C64 (HvlQueryHypervisorTscAdjustment.c)
 *     PopOpenPowerKey @ 0x14015A76C (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     PopQpcTimeInMs @ 0x1403EF040 (PopQpcTimeInMs.c)
 *     PopCaptureTimeOnProcZero @ 0x1403EF070 (PopCaptureTimeOnProcZero.c)
 *     PopComputeDerivedHiberStats @ 0x14056736C (PopComputeDerivedHiberStats.c)
 */

char PopDiagTraceHiberStats()
{
  int v0; // eax
  HANDLE v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // r15
  __int64 HypervisorTscAdjustment; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  HANDLE v8; // rdi
  unsigned __int64 *v9; // r14
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rsi
  _BYTE *Data; // r12
  __int64 *v12; // rbx
  int v13; // r8d
  __int64 *v14; // rcx
  unsigned int *v15; // rcx
  unsigned __int64 v16; // rax
  ULONG v17; // r13d
  ULONG DataSize; // r15d
  unsigned __int64 v19; // rax
  REGHANDLE v20; // rbx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-B0h]
  _BYTE v26[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v27[384]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1F8h] [rbp+F0h] BYREF

  v0 = PopOpenPowerKey((__int64)&KeyHandle);
  v1 = KeyHandle;
  if ( v0 < 0 )
    v1 = 0LL;
  KeyHandle = v1;
  v2 = PopCaptureTimeOnProcZero();
  v3 = 0LL;
  qword_14032ECB0 = v2;
  if ( (_DWORD)KeNumberProcessors_0 )
    v3 = KiProcessorBlock[0];
  v24 = 1000LL * *(unsigned int *)(v3 + 1524);
  v4 = v24;
  HypervisorTscAdjustment = HvlQueryHypervisorTscAdjustment();
  v6 = qword_14032ECA8 - HypervisorTscAdjustment;
  qword_14032ECD0 = HypervisorTscAdjustment;
  v7 = qword_14032ECC8 + HypervisorTscAdjustment;
  qword_14032ECB8 -= v7;
  qword_14032ECD8 -= v7;
  qword_14032ECB0 -= v7;
  qword_14032ECE0 -= v7;
  qword_14032ECA8 = v6;
  qword_14032EC38 = v6 - qword_14032EC40;
  dword_14032EDAC = dword_14032E8E4;
  dword_14032EDA8 = dword_14032E968;
  dword_14032ED58 = PopQpcTimeInMs(&qword_14032EBA8, &qword_14032EBB0);
  qword_14032EC20 = (unsigned int)PopQpcTimeInMs(&qword_14032EB88, &qword_14032EC20);
  PopComputeDerivedHiberStats(&qword_14032EBE0, v4, v26);
  v8 = KeyHandle;
  v9 = (unsigned __int64 *)v27;
  p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
  v25 = 47LL;
  Data = v27;
  v12 = &qword_140725FF0;
  do
  {
    v13 = *(_DWORD *)v12;
    v14 = (__int64 *)v26;
    if ( (*(_DWORD *)v12 & 0x40000000) == 0 )
      v14 = &qword_14032EBE0;
    v15 = (unsigned int *)((char *)v14 + *(v12 - 1));
    if ( (v13 & 2) != 0 )
      v16 = *(_QWORD *)v15;
    else
      v16 = *v15;
    *v9 = v16;
    if ( v13 < 0 )
      *v9 = v16 / v4;
    if ( (v13 & 0x20) != 0 )
    {
      v17 = 11;
      DataSize = 8;
    }
    else
    {
      v17 = 4;
      DataSize = 4;
    }
    if ( v8 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)*(v12 - 2));
      ZwSetValueKey(v8, &DestinationString, 0, v17, Data, DataSize);
    }
    *(_QWORD *)&p_Reserved[-3].Reserved = Data;
    p_Reserved[-1].Reserved = DataSize;
    Data += 8;
    v4 = v24;
    v12 += 3;
    p_Reserved->Reserved = 0;
    ++v9;
    p_Reserved += 4;
    --v25;
  }
  while ( v25 );
  qword_14032ED20 /= v4;
  qword_14032EBE8 /= v4;
  v19 = qword_14032ECB0 / v4 - (unsigned int)dword_14032EC28 - (unsigned int)dword_14032EC30;
  qword_14032EDB0 = v19;
  if ( v8 )
  {
    RtlInitUnicodeString(&DestinationString, L"KernelResumeIoCpuTime");
    ZwSetValueKey(v8, &DestinationString, 0, 4u, &qword_14032ED20, 4u);
    RtlInitUnicodeString(&DestinationString, L"HiberIoCpuTime");
    ZwSetValueKey(v8, &DestinationString, 0, 4u, &qword_14032EBE8, 4u);
    if ( qword_14032ED48 )
    {
      dword_14032E8C4 += PopQpcTimeInMs(&qword_14032EB98, &qword_14032ED50);
      RtlInitUnicodeString(&DestinationString, L"HybridBootAnimationTime");
      ZwSetValueKey(v8, &DestinationString, 0, 4u, &dword_14032E8C4, 4u);
    }
    qword_14032EDB8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    RtlInitUnicodeString(&DestinationString, L"ResumeCompleteTimestamp");
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &qword_14032EDB8, 8u);
    LOBYTE(v19) = ZwClose(KeyHandle);
  }
  if ( PopDiagHandleRegistered )
  {
    v20 = PopDiagHandle;
    LOBYTE(v19) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_HIBER_STATS);
    if ( (_BYTE)v19 )
      LOBYTE(v19) = EtwWrite(v20, &POP_ETW_EVENT_HIBER_STATS, 0LL, 0x2Fu, &UserData);
  }
  return v19;
}
