/*
 * XREFs of ExpSetTimeZoneInformation @ 0x1406AC408
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAcquireTimeRefreshLock @ 0x1403EBEE0 (ExAcquireTimeRefreshLock.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406886A0 (RtlpSetTimeZoneInformationWorker.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpSetTimeZoneInformation(_OWORD *a1, int a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  _OWORD *v5; // r8
  unsigned __int64 v6; // rcx
  _OWORD *v7; // rax
  __int64 v8; // rcx
  wchar_t *v9; // rax
  _OWORD *v10; // rcx
  __int64 result; // rax
  NTSTATUS v12; // ebx
  _OWORD ValueData[10]; // [rsp+20h] [rbp-378h] BYREF
  __int64 v14; // [rsp+C0h] [rbp-2D8h]
  int v15; // [rsp+C8h] [rbp-2D0h]
  _BYTE v16[260]; // [rsp+CCh] [rbp-2CCh] BYREF
  wchar_t v17[216]; // [rsp+1D0h] [rbp-1C8h] BYREF

  v2 = a1;
  if ( a2 == 172 )
  {
    v3 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (unsigned __int64)a1 + 172;
    if ( v4 > 0x7FFFFFFF0000LL || v4 < (unsigned __int64)v2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    ValueData[0] = *v2;
    ValueData[1] = v2[1];
    ValueData[2] = v2[2];
    ValueData[3] = v2[3];
    ValueData[4] = v2[4];
    ValueData[5] = v2[5];
    ValueData[6] = v2[6];
    ValueData[7] = v2[7];
    v5 = v2 + 8;
    ValueData[8] = *v5;
    ValueData[9] = v5[1];
    v14 = *((_QWORD *)v5 + 4);
    v15 = *((_DWORD *)v5 + 10);
    memset(v16, 0, 0x100uLL);
    v16[256] = 1;
  }
  else
  {
    if ( a2 != 432 )
      return 3221225476LL;
    v3 = 3LL;
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (unsigned __int64)(a1 + 27);
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v2 )
      MEMORY[0x7FFFFFFF0000] = 0;
    v7 = ValueData;
    v8 = 3LL;
    do
    {
      *v7 = *v2;
      v7[1] = v2[1];
      v7[2] = v2[2];
      v7[3] = v2[3];
      v7[4] = v2[4];
      v7[5] = v2[5];
      v7[6] = v2[6];
      v7 += 8;
      *(v7 - 1) = v2[7];
      v2 += 8;
      --v8;
    }
    while ( v8 );
    *v7 = *v2;
    v7[1] = v2[1];
    v7[2] = v2[2];
  }
  ExAcquireTimeRefreshLock(1u);
  v9 = v17;
  v10 = &ExpTimeZoneInformation;
  do
  {
    *(_OWORD *)v9 = *v10;
    *((_OWORD *)v9 + 1) = v10[1];
    *((_OWORD *)v9 + 2) = v10[2];
    *((_OWORD *)v9 + 3) = v10[3];
    *((_OWORD *)v9 + 4) = v10[4];
    *((_OWORD *)v9 + 5) = v10[5];
    *((_OWORD *)v9 + 6) = v10[6];
    v9 += 64;
    *((_OWORD *)v9 - 1) = v10[7];
    v10 += 8;
    --v3;
  }
  while ( v3 );
  *(_OWORD *)v9 = *v10;
  *((_OWORD *)v9 + 1) = v10[1];
  *((_OWORD *)v9 + 2) = v10[2];
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  result = RtlpSetTimeZoneInformationWorker((wchar_t *)ValueData, 0x1B0u);
  if ( (int)result >= 0 )
  {
    v12 = NtSetSystemTime(0LL, 0LL);
    if ( v12 < 0 )
      RtlpSetTimeZoneInformationWorker(v17, 0x1B0u);
    return (unsigned int)v12;
  }
  return result;
}
