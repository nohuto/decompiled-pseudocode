/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x14054B004
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsEnumProcesses @ 0x14041C0E4 (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x14041C13C (EtwpProcessEnumCallback.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpIsStackWalkingEnabled @ 0x14054B110 (EtwpIsStackWalkingEnabled.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  _QWORD v11[8]; // [rsp+20h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  v11[0] = a1;
  HIDWORD(v11[3]) = a2;
  LOBYTE(v11[7]) = a3;
  v6 = EtwpAcquireLoggerContextByLoggerId(a2, 0);
  if ( !v6 )
    return 3221226134LL;
  v8 = 1283LL;
  if ( !a3 )
    v8 = 1284LL;
  BYTE2(v11[7]) = EtwpIsStackWalkingEnabled(v6, v8, v7, v6);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(v9 + 12) & 0x2000000) != 0 )
    v11[1] = &EtwpObjectTypeFilter[10 * *(unsigned __int8 *)(v9 + 834)];
  EtwpReleaseLoggerContext((unsigned int *)v9, 0);
  v11[2] = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x74777445u);
  if ( v11[2] )
    LOWORD(v11[3]) = 0x2000;
  EtwpProcessEnumCallback((ULONG_PTR)PsIdleProcess, (__int64)v11);
  PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpProcessEnumCallback, (__int64)v11);
  if ( v11[2] )
    ExFreePoolWithTag((PVOID)v11[2], 0);
  if ( v11[5] )
    ExFreePoolWithTag((PVOID)v11[5], 0);
  return 0LL;
}
