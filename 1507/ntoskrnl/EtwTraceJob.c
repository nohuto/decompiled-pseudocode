/*
 * XREFs of EtwTraceJob @ 0x1406E3A0C
 * Callers:
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     NtTerminateJobObject @ 0x14054DD0C (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14054DD84 (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtOpenJobObject @ 0x1406C4068 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406E42F4 (EtwpCopyJobGuidSafe.c)
 *     EtwpPsProvTraceJob @ 0x1406E4C18 (EtwpPsProvTraceJob.c)
 */

void *__fastcall EtwTraceJob(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // r8d
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+44h] [rbp-34h]
  unsigned int v13; // [rsp+48h] [rbp-30h]
  _BYTE *v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  EtwpCopyJobGuidSafe(v10, a1);
  v16 = 0;
  v14 = v10;
  v11 = v7;
  v12 = v8;
  v13 = a4;
  v15 = 28;
  if ( (dword_1403277E0 & 0x80000) != 0 )
    EtwpPsProvTraceJob(v6, v7, a4, a5);
  return EtwTraceKernelEvent((int)&v14, 1, 0x80000u, a5, 5249284);
}
