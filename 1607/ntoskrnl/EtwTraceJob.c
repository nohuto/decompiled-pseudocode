/*
 * XREFs of EtwTraceJob @ 0x1406A179C
 * Callers:
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     NtTerminateJobObject @ 0x1404E2EBC (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404E2F28 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtOpenJobObject @ 0x14067FFAC (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406A1FCC (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1406A1FE8 (EtwpCopyJobIdSafe.c)
 *     EtwpPsProvTraceJob @ 0x1406A2868 (EtwpPsProvTraceJob.c)
 */

__int64 __fastcall EtwTraceJob(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v5; // r9
  unsigned int v6; // r10d
  int v7; // r8d
  _BYTE v9[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[4]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+44h] [rbp-34h]
  unsigned int v12; // [rsp+48h] [rbp-30h]
  _BYTE *v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v9, a1);
  EtwpCopyJobIdSafe(v10);
  v15 = 0;
  v13 = v9;
  v11 = v7;
  v12 = v6;
  v14 = 28;
  if ( (dword_1402FD540 & 0x80000) != 0 )
    EtwpPsProvTraceJob(v5, v6, a4);
  return EtwTraceKernelEvent((int)&v13, 1, 0x80000u, a4, 5249284);
}
