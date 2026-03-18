/*
 * XREFs of MiLogPerfMemoryEvent @ 0x140213C50
 * Callers:
 *     MiLogMapFileEvent @ 0x1406A091C (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x1406A2A80 (MiLogMemResetInfo.c)
 *     MiLogSectionObjectEvent @ 0x1406A2EF0 (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x1406A3070 (MiLogVirtualRotateEvent.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall MiLogPerfMemoryEvent(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a3;
  v7 = a4;
  return EtwTraceKernelEvent((int)&v6, 1, a2, a1, a5 | 0x11000200u);
}
