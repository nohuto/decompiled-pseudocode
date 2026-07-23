/*
 * XREFs of WheaReportHwError @ 0x140230000
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     WheapAddToDumpFile @ 0x1402302F8 (WheapAddToDumpFile.c)
 *     WheapAllocErrorRecord @ 0x140230334 (WheapAllocErrorRecord.c)
 *     WheapApplyThresholdChecks @ 0x1402303DC (WheapApplyThresholdChecks.c)
 *     WheapAttemptErrorRecovery @ 0x1402304D4 (WheapAttemptErrorRecovery.c)
 *     WheapCompressErrorRecord @ 0x140230588 (WheapCompressErrorRecord.c)
 *     WheapFreeErrorRecord @ 0x1402306B0 (WheapFreeErrorRecord.c)
 *     WheapGetErrorSource @ 0x1402306D4 (WheapGetErrorSource.c)
 *     WheapGenerateETWEvents @ 0x140230F14 (WheapGenerateETWEvents.c)
 *     WheapWorkQueueAddItem @ 0x1402310CC (WheapWorkQueueAddItem.c)
 */

__int64 __fastcall WheaReportHwError(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned int v4; // ebp
  _QWORD *WheaInfo; // r13
  __int64 v6; // rcx
  __int64 ErrorSource; // rax
  unsigned int v8; // edx
  unsigned int v9; // r10d
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r9
  int v15; // r15d
  int v16; // ecx
  int v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 == 3 )
    return 0LL;
  v4 = 0;
  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo || (v6 = WheaInfo[1]) == 0 || !*(_DWORD *)(v6 + 4) )
  {
    if ( v1 <= 1 )
      KeBugCheckEx(0x124u, *(int *)(a1 + 28), 0LL, 0LL, 0LL);
    return 0LL;
  }
  ErrorSource = WheapGetErrorSource(v6, *(unsigned int *)(a1 + 24));
  v10 = ErrorSource;
  if ( !ErrorSource )
  {
    if ( v9 <= 1 && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 9uLL, *(int *)(a1 + 28), v8, 0LL);
    return 3221225664LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)(ErrorSource + 24));
  if ( *(_DWORD *)(a1 + 20) == 2 && !(unsigned __int8)WheapApplyThresholdChecks(ErrorSource) )
    return 0LL;
  v11 = WheapAllocErrorRecord(v10, &v17);
  v12 = v11;
  if ( !v11 )
  {
    ++*(_DWORD *)(v10 + 16);
    if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
      KeBugCheckEx(0x122u, 0xAuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
    return 3221225626LL;
  }
  v13 = v10 + 89;
  v14 = (unsigned int)(v17 - 40);
  *(_DWORD *)(v11 + 24) ^= (*(_DWORD *)(v11 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 4;
  *(_DWORD *)(v11 + 24) ^= (*(_DWORD *)(v11 + 24) ^ (*(_DWORD *)(a1 + 12) >> 2)) & 8;
  v15 = (*((__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))&unk_140341640 + 6 * *(int *)(v10 + 40)))(
          v10 + 89,
          a1,
          v11 + 40,
          v14,
          *(_QWORD *)(v10 + 56));
  if ( v15 >= 0 )
  {
    if ( (*(_BYTE *)(v12 + 144) & 2) != 0 )
    {
      WheapCompressErrorRecord(3LL, v12 + 40);
      goto LABEL_25;
    }
    if ( !WheapPolicyIgnoreDummyWrite )
    {
      WheapCompressErrorRecord(0LL, v12 + 40);
      PshedWriteErrorRecord(1LL, *(unsigned int *)(v12 + 60), v12 + 40);
    }
    v16 = *(_DWORD *)(a1 + 20);
    if ( v16 == 1 )
    {
      PshedFinalizeErrorRecord(v12 + 40, v13);
      WheapCompressErrorRecord(3LL, v12 + 40);
    }
    else
    {
      if ( (unsigned int)(v16 - 2) <= 1 )
      {
        PshedFinalizeErrorRecord(v12 + 40, v13);
        WheapCompressErrorRecord(3LL, v12 + 40);
LABEL_40:
        WheapWorkQueueAddItem(WheaInfo[2], v12);
        return v4;
      }
      if ( v16 )
      {
        WheapFreeErrorRecord(v12);
        return (unsigned int)-1073741811;
      }
      PshedFinalizeErrorRecord(v12 + 40, v13);
      WheapAttemptErrorRecovery(v12 + 40);
      WheapCompressErrorRecord(3LL, v12 + 40);
      if ( *(_DWORD *)(v12 + 52) == 2 )
      {
        *(_DWORD *)(v12 + 144) |= 1u;
LABEL_25:
        if ( (*(_DWORD *)(v12 + 24) & 1) != 0 )
        {
          if ( LODWORD(WheapDispatchPtr.NextDevice) == 1 )
            WheapGenerateETWEvents(v12 + 40);
          WheapFreeErrorRecord(v12);
          return v4;
        }
        goto LABEL_40;
      }
    }
    PshedWriteErrorRecord(0LL, *(unsigned int *)(v12 + 60), v12 + 40);
    WheapAddToDumpFile(v12 + 40, *(unsigned int *)(v12 + 60));
    PshedBugCheckSystem(v13, v12 + 40);
    return v4;
  }
  if ( *(_DWORD *)(a1 + 20) <= 1u && (*(_BYTE *)(a1 + 12) & 1) == 0 )
    KeBugCheckEx(0x122u, 0xBuLL, *(int *)(a1 + 28), *(unsigned int *)(a1 + 24), 0LL);
  WheapFreeErrorRecord(v12);
  return (unsigned int)v15;
}
