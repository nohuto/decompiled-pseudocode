/*
 * XREFs of EtwTraceTimedEvent @ 0x140083664
 * Callers:
 *     PfHardFaultLog @ 0x140083758 (PfHardFaultLog.c)
 *     KiRetireDpcList @ 0x1400A4C50 (KiRetireDpcList.c)
 *     KiFinalizeTimer2Disablement @ 0x1400F443C (KiFinalizeTimer2Disablement.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KiExpireTimer2 @ 0x1400F5400 (KiExpireTimer2.c)
 *     IopTimerDispatch @ 0x140130388 (IopTimerDispatch.c)
 *     KiProcessExpiredTimerList @ 0x140209C50 (KiProcessExpiredTimerList.c)
 *     EtwTraceCpuCacheFlush @ 0x14025CE00 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x14025E61C (EtwpTraceFltTimedIo.c)
 *     PerfInfoLogIpi @ 0x14025EC4C (PerfInfoLogIpi.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A57F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceTimedEvent(unsigned __int16 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // ebx
  bool v8; // zf
  unsigned __int64 i; // rdi
  void *result; // rax
  char *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+3Ch] [rbp-3Ch]
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]

  v6 = EtwpActiveSystemLoggers;
  v17 = a3;
  v18 = a4;
  v19 = 0;
  v8 = !_BitScanForward((unsigned int *)&a3, EtwpActiveSystemLoggers);
  for ( i = a2; !v8; v8 = !_BitScanForward((unsigned int *)&a3, v6) )
  {
    v6 &= v6 - 1;
    result = &EtwpGroupMasks;
    v11 = (char *)&EtwpGroupMasks + 32 * (unsigned int)a3;
    if ( v11 )
    {
      result = (void *)(i >> 29);
      if ( ((unsigned int)i & *(_DWORD *)&v11[4 * (i >> 29)] & 0x1FFFFFFF) != 0 )
      {
        v12 = (unsigned __int16)EtwpSystemLogger[2 * a3 + 1];
        v13 = (unsigned __int16)EtwpSystemLogger[2 * a3];
        v16 = 0;
        v15 = 8;
        v14 = a6 + 8 * v12;
        result = (void *)EtwpLogKernelEvent((unsigned int)&v14, v13, 2, a1, a5);
      }
    }
  }
  return result;
}
