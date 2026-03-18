/*
 * XREFs of ExpSetTimeZoneInformation @ 0x1406EF0A4
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAcquireTimeRefreshLock @ 0x14042DB58 (ExAcquireTimeRefreshLock.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406CC07C (RtlpSetTimeZoneInformationWorker.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetTimeZoneInformation(unsigned __int64 a1, int a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rdi
  _OWORD *v4; // rax
  __int64 v5; // rcx
  wchar_t *v6; // rax
  _OWORD *v7; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v9; // ax
  __int64 result; // rax
  NTSTATUS v11; // edi
  _OWORD ValueData[10]; // [rsp+20h] [rbp-378h] BYREF
  __int64 v13; // [rsp+C0h] [rbp-2D8h]
  int v14; // [rsp+C8h] [rbp-2D0h]
  _BYTE v15[260]; // [rsp+CCh] [rbp-2CCh] BYREF
  wchar_t v16[216]; // [rsp+1D0h] [rbp-1C8h] BYREF

  v2 = (_OWORD *)a1;
  if ( a2 == 172 )
  {
    v3 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 172 > MmUserProbeAddress || a1 + 172 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    ValueData[0] = *(_OWORD *)a1;
    ValueData[1] = *(_OWORD *)(a1 + 16);
    ValueData[2] = *(_OWORD *)(a1 + 32);
    ValueData[3] = *(_OWORD *)(a1 + 48);
    ValueData[4] = *(_OWORD *)(a1 + 64);
    ValueData[5] = *(_OWORD *)(a1 + 80);
    ValueData[6] = *(_OWORD *)(a1 + 96);
    ValueData[7] = *(_OWORD *)(a1 + 112);
    ValueData[8] = *(_OWORD *)(a1 + 128);
    ValueData[9] = *(_OWORD *)(a1 + 144);
    v13 = *(_QWORD *)(a1 + 160);
    v14 = *(_DWORD *)(a1 + 168);
    memset(v15, 0, 0x100uLL);
    v15[256] = 1;
  }
  else
  {
    if ( a2 != 432 )
      return 3221225476LL;
    v3 = 3LL;
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 432 > MmUserProbeAddress || a1 + 432 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v4 = ValueData;
    v5 = 3LL;
    do
    {
      *v4 = *v2;
      v4[1] = v2[1];
      v4[2] = v2[2];
      v4[3] = v2[3];
      v4[4] = v2[4];
      v4[5] = v2[5];
      v4[6] = v2[6];
      v4 += 8;
      *(v4 - 1) = v2[7];
      v2 += 8;
      --v5;
    }
    while ( v5 );
    *v4 = *v2;
    v4[1] = v2[1];
    v4[2] = v2[2];
  }
  ExAcquireTimeRefreshLock(1u);
  v6 = v16;
  v7 = &ExpTimeZoneInformation;
  do
  {
    *(_OWORD *)v6 = *v7;
    *((_OWORD *)v6 + 1) = v7[1];
    *((_OWORD *)v6 + 2) = v7[2];
    *((_OWORD *)v6 + 3) = v7[3];
    *((_OWORD *)v6 + 4) = v7[4];
    *((_OWORD *)v6 + 5) = v7[5];
    *((_OWORD *)v6 + 6) = v7[6];
    v6 += 64;
    *((_OWORD *)v6 - 1) = v7[7];
    v7 += 8;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v6 = *v7;
  *((_OWORD *)v6 + 1) = v7[1];
  *((_OWORD *)v6 + 2) = v7[2];
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  result = RtlpSetTimeZoneInformationWorker((wchar_t *)ValueData, 0x1B0u);
  if ( (int)result >= 0 )
  {
    v11 = NtSetSystemTime(0LL, 0LL);
    if ( v11 < 0 )
      RtlpSetTimeZoneInformationWorker(v16, 0x1B0u);
    return (unsigned int)v11;
  }
  return result;
}
