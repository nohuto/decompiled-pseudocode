/*
 * XREFs of ExpGetDeviceDataInformation @ 0x1406AB380
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     KseQueryDeviceData @ 0x140535190 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140652418 (KseQueryDeviceDataList.c)
 *     ExpStringCapture @ 0x1406AC6A8 (ExpStringCapture.c)
 *     ExpStringFree @ 0x1406AC790 (ExpStringFree.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpGetDeviceDataInformation(int a1, unsigned __int64 a2, int a3)
{
  PVOID PoolWithQuotaTag; // rsi
  int v6; // ebx
  unsigned int v7; // ebx
  int DeviceData; // eax
  unsigned int v9; // ecx
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Length[2]; // [rsp+60h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  SourceString = 0LL;
  v15 = 0LL;
  PoolWithQuotaTag = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 48 > 0x7FFFFFFF0000LL || a2 + 48 < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v11 = *(_OWORD *)a2;
  v12 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)Length = *(_OWORD *)(a2 + 32);
  v6 = ExpStringCapture(&SourceString, &v11);
  if ( v6 >= 0 )
  {
    if ( a1 != 136 || (v6 = ExpStringCapture(&v15, &v12), v6 >= 0) )
    {
      if ( HIDWORD(Length[0]) )
      {
        if ( !Length[1] )
        {
          v6 = -1073741811;
          goto LABEL_21;
        }
        v7 = HIDWORD(Length[0]);
        ProbeForWrite((volatile void *)Length[1], HIDWORD(Length[0]), 2u);
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x4E494444u);
        if ( !PoolWithQuotaTag )
        {
          v6 = -1073741801;
          goto LABEL_21;
        }
      }
      if ( a1 == 136 )
        DeviceData = KseQueryDeviceData(SourceString, v15, Length, (_DWORD *)Length + 1, PoolWithQuotaTag);
      else
        DeviceData = KseQueryDeviceDataList(
                       (wchar_t *)SourceString,
                       (__int64)PoolWithQuotaTag,
                       HIDWORD(Length[0]),
                       (__int64)Length + 4);
      v6 = DeviceData;
      v9 = HIDWORD(Length[0]);
      *(_QWORD *)(a2 + 32) = Length[0];
      if ( DeviceData >= 0 )
        memmove((void *)Length[1], PoolWithQuotaTag, v9);
    }
  }
LABEL_21:
  ExpStringFree(SourceString);
  ExpStringFree(v15);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0x4E494444u);
  return (unsigned int)v6;
}
