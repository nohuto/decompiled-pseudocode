/*
 * XREFs of RtlpHeapGenerateRandomValue32 @ 0x180058680
 * Callers:
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18005802C (RtlpHeapGenerateRandomValue64.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180054B10 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x1800587F0 (RtlRunOnceBeginInitialize.c)
 *     RtlpInitRandomExVector @ 0x180094CB0 (RtlpInitRandomExVector.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 */

__int64 RtlpHeapGenerateRandomValue32()
{
  NTSTATUS v0; // eax
  __int32 v1; // r8d
  int v2; // ecx
  unsigned int v5; // r8d
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_180145F48
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180145F48, 4u, 0LL) < 0 )
  {
    dword_180145F48 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&RtlpRandomExInit, 0, 0LL);
  if ( v0 >= 0 )
  {
    if ( v0 != 259 )
      goto LABEL_13;
    if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_13;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_13;
      v7 = 2;
    }
  }
  else
  {
    v7 = 0;
  }
  RtlReportCriticalFailure((unsigned int)v0, &v7);
LABEL_13:
  dword_180145F48 = (2147483629 * (unsigned __int64)(unsigned int)dword_180145F48 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180145F48);
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
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    LODWORD(_RDX) = 0;
  }
  v5 = _RDX ^ v1;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v5);
  return v5;
}
