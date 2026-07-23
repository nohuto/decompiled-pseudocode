/*
 * XREFs of EtwTraceJob @ 0x1406A18D4
 * Callers:
 *     NtTerminateJobObject @ 0x1404C5E20 (NtTerminateJobObject.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404C5E8C (PspTerminateAllProcessesInJobHierarchy.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 *     NtOpenJobObject @ 0x140680090 (NtOpenJobObject.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1406A2104 (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1406A2120 (EtwpCopyJobIdSafe.c)
 *     EtwpPsProvTraceJob @ 0x1406A29A0 (EtwpPsProvTraceJob.c)
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
  if ( (dword_1402FD520 & 0x80000) != 0 )
    EtwpPsProvTraceJob(v5, v6, a4);
  return EtwTraceKernelEvent((int)&v13, 1, 0x80000u, a4, 5249284);
}
