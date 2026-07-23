/*
 * XREFs of RtlpHeapGenerateRandomValue32 @ 0x180042338
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180041760 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180042144 (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18002AAD0 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x180042420 (RtlRunOnceBeginInitialize.c)
 *     RtlpInitRandomExVector @ 0x180096430 (RtlpInitRandomExVector.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 */

__int64 RtlpHeapGenerateRandomValue32()
{
  NTSTATUS v0; // eax
  __int32 v1; // r8d
  int v2; // ecx
  unsigned int v5; // r8d
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_180153048
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180153048, 4u, 0LL) < 0 )
  {
    dword_180153048 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&RtlpRandomExInit, 0, 0LL);
  if ( v0 < 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( v0 != 259 )
      goto LABEL_4;
    if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 2;
    }
  }
  RtlReportCriticalFailure((unsigned int)v0, &v7, 1LL);
LABEL_4:
  dword_180153048 = (2147483629 * (unsigned __int64)(unsigned int)dword_180153048 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180153048);
  if ( MEMORY[0x7FFE0290] )
  {
    v2 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      v8 = _RDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v2 >= 0xA )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(_RDX) = 0;
  }
  v5 = _RDX ^ v1;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v5);
  return v5;
}
