/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x14050074C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     PsEnumProcesses @ 0x14050085C (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x1405008B4 (EtwpProcessEnumCallback.c)
 *     EtwpIsStackWalkingEnabled @ 0x14050107C (EtwpIsStackWalkingEnabled.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, unsigned int a2, char a3)
{
  unsigned int *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD v11[8]; // [rsp+20h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[0] = a1;
  HIDWORD(v11[3]) = a2;
  LOBYTE(v11[7]) = a3;
  v6 = EtwpAcquireLoggerContextByLoggerId(0LL, a2, 0);
  if ( !v6 )
    return 3221226134LL;
  v8 = 1283LL;
  if ( !a3 )
    v8 = 1284LL;
  BYTE2(v11[7]) = EtwpIsStackWalkingEnabled(v6, v8, v7, v6);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(v9 + 12) & 0x2000000) != 0 )
    v11[1] = &EtwpObjectTypeFilter[10 * *(unsigned __int8 *)(v9 + 834)];
  EtwpReleaseLoggerContext(0LL, (unsigned int *)v9, 0);
  v11[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74777445u);
  if ( v11[2] )
    LOWORD(v11[3]) = 0x2000;
  EtwpProcessEnumCallback((ULONG_PTR)PsIdleProcess);
  PsEnumProcesses(EtwpProcessEnumCallback, v11);
  if ( v11[2] )
    ExFreePoolWithTag((PVOID)v11[2], 0);
  if ( v11[5] )
    ExFreePoolWithTag((PVOID)v11[5], 0);
  return 0LL;
}
