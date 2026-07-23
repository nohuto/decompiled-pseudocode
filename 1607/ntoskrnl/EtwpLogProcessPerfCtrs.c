/*
 * XREFs of EtwpLogProcessPerfCtrs @ 0x1406A251C
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall EtwpLogProcessPerfCtrs(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+38h] [rbp-31h]
  int v6; // [rsp+3Ch] [rbp-2Dh]
  _QWORD v7[14]; // [rsp+40h] [rbp-29h] BYREF

  memset(v7, 0, 0x68uLL);
  LODWORD(v7[0]) = *(_DWORD *)(a1 + 744);
  v7[2] = *(_QWORD *)(a1 + 816);
  v7[3] = *(_QWORD *)(a1 + 1432) << 12;
  v7[4] = *(_QWORD *)(a1 + 1272) << 12;
  v7[5] = *(_QWORD *)(a1 + 808);
  v2 = *(_QWORD *)(a1 + 800);
  v6 = 0;
  v7[6] = v2;
  v4 = v7;
  v5 = 104;
  return EtwTraceKernelEvent((int)&v4, 1, 1u, 800, 5249026);
}
