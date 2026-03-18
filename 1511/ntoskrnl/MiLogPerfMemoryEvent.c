/*
 * XREFs of MiLogPerfMemoryEvent @ 0x1401D2920
 * Callers:
 *     MiLogMapFileEvent @ 0x140621288 (MiLogMapFileEvent.c)
 *     MiLogMemResetInfo @ 0x140623740 (MiLogMemResetInfo.c)
 *     MiLogSectionObjectEvent @ 0x140623CDC (MiLogSectionObjectEvent.c)
 *     MiLogVirtualRotateEvent @ 0x140623E5C (MiLogVirtualRotateEvent.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiLogPerfMemoryEvent(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]
  int v8; // [rsp+3Ch] [rbp-1Ch]

  v8 = 0;
  v6 = a3;
  v7 = a4;
  return EtwTraceKernelEvent((int)&v6, 1, a2, a1, a5 | 0x11000200u);
}
