/*
 * XREFs of EtwTraceReadyThread @ 0x140225EF4
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     KiFastReadyThread @ 0x1400F05F8 (KiFastReadyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  int v4; // eax
  volatile int DpcRequestSummary; // edx
  __int64 v7; // rax
  char v8; // cl
  void (__noreturn *v9)(); // rax
  int v10; // ecx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  char v13; // [rsp+34h] [rbp-1Ch]
  char v14; // [rsp+35h] [rbp-1Bh]
  __int16 v15; // [rsp+36h] [rbp-1Ah]
  int *v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]

  v4 = *(_DWORD *)(a1 + 1592);
  v15 = 0;
  v12 = v4;
  v13 = a2;
  v14 = a3;
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  v7 = *(_QWORD *)(a1 + 184);
  LOBYTE(v15) = (DpcRequestSummary & 1 ^ (2 * ((*(_BYTE *)(a1 + 122) & 1) == 0))) & 2 ^ DpcRequestSummary & 1;
  v8 = (v15 ^ (4 * ((*(_DWORD *)(v7 + 572) & 7) != 0))) & 4 ^ v15;
  v9 = *(void (__noreturn **)())(a1 + 1672);
  LOBYTE(v15) = (v8 ^ (8 * (a4 & 1))) & 8 ^ v8;
  v10 = 5249538;
  if ( (a4 & 2) != 0 || v9 == KeSwapProcessOrStack || (char *)v9 == (char *)EtwpLogger )
    v10 = 5245442;
  v18 = 0;
  v16 = &v12;
  v17 = 8;
  return EtwTraceKernelEvent((int)&v16, 1, 0x20000200u, 1330, v10);
}
