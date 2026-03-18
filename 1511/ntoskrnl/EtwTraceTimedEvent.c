/*
 * XREFs of EtwTraceTimedEvent @ 0x1400DF398
 * Callers:
 *     IopTimerDispatch @ 0x140001768 (IopTimerDispatch.c)
 *     KiFinalizeTimer2Disablement @ 0x140031898 (KiFinalizeTimer2Disablement.c)
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     KiExpireTimer2 @ 0x140033E90 (KiExpireTimer2.c)
 *     KiRetireDpcList @ 0x140044110 (KiRetireDpcList.c)
 *     PfHardFaultLog @ 0x1400DF278 (PfHardFaultLog.c)
 *     KiProcessExpiredTimerList @ 0x1401CB088 (KiProcessExpiredTimerList.c)
 *     EtwTraceCpuCacheFlush @ 0x14020DB94 (EtwTraceCpuCacheFlush.c)
 *     EtwpTraceFltTimedIo @ 0x14020F2F4 (EtwpTraceFltTimedIo.c)
 *     PerfInfoLogIpi @ 0x14020F924 (PerfInfoLogIpi.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140044C80 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall EtwTraceTimedEvent(
        unsigned __int16 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  bool v8; // zf
  unsigned __int64 i; // rdi
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+38h] [rbp-40h]
  int v15; // [rsp+3Ch] [rbp-3Ch]
  __int64 v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]

  v6 = EtwpActiveSystemLoggers;
  v16 = a3;
  v17 = a4;
  v18 = 0;
  v8 = !_BitScanForward((unsigned int *)&a3, EtwpActiveSystemLoggers);
  for ( i = a2; !v8; v8 = !_BitScanForward((unsigned int *)&a3, v6) )
  {
    v6 &= v6 - 1;
    v10 = (char *)&EtwpGroupMasks + 32 * (unsigned int)a3;
    if ( v10 )
    {
      if ( ((unsigned int)i & *(_DWORD *)&v10[4 * (i >> 29)] & 0x1FFFFFFF) != 0 )
      {
        v11 = (unsigned __int16)EtwpSystemLogger[2 * a3 + 1];
        v12 = (unsigned __int16)EtwpSystemLogger[2 * a3];
        v15 = 0;
        v14 = 8;
        v13 = a6 + 8 * v11;
        EtwpLogKernelEvent((__int64)&v13, v12, 2LL, a1, a5);
      }
    }
  }
}
