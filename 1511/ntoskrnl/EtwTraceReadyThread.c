/*
 * XREFs of EtwTraceReadyThread @ 0x14020E210
 * Callers:
 *     KiFastReadyThread @ 0x14002AB48 (KiFastReadyThread.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiTimer2Expiration @ 0x1400332A0 (KiTimer2Expiration.c)
 *     KiDirectSwitchThread @ 0x1400844B0 (KiDirectSwitchThread.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  volatile int DpcRequestSummary; // edx
  __int64 v6; // rax
  char v7; // cl
  void (__noreturn *v8)(); // rax
  int v9; // ecx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+34h] [rbp-1Ch]
  char v13; // [rsp+35h] [rbp-1Bh]
  __int16 v14; // [rsp+36h] [rbp-1Ah]
  int *v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+44h] [rbp-Ch]

  v11 = *(_DWORD *)(a1 + 1584);
  v12 = a2;
  v14 = 0;
  v13 = a3;
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  v6 = *(_QWORD *)(a1 + 184);
  LOBYTE(v14) = (DpcRequestSummary & 1 ^ (2 * ((*(_BYTE *)(a1 + 122) & 1) == 0))) & 2 ^ DpcRequestSummary & 1;
  v7 = (v14 ^ (4 * ((*(_DWORD *)(v6 + 572) & 7) != 0))) & 4 ^ v14;
  v8 = *(void (__noreturn **)())(a1 + 1664);
  LOBYTE(v14) = (v7 ^ (8 * (a4 & 1))) & 8 ^ v7;
  v9 = 5249538;
  if ( (a4 & 2) != 0 || v8 == KeSwapProcessOrStack || (char *)v8 == (char *)EtwpLogger )
    v9 = 5245442;
  v17 = 0;
  v15 = &v11;
  v16 = 8;
  return EtwTraceKernelEvent((int)&v15, 1, 0x20000200u, 0x532u, v9);
}
