/*
 * XREFs of LdrpCallInitRoutine @ 0x1800188C4
 * Callers:
 *     LdrShutdownProcess @ 0x180006F30 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18000BC04 (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x180012548 (LdrpCallTlsInitializers.c)
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016110 (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x180072384 (LdrpInitializeNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6CF8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800D1538 (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(__int64 a1, int a2, int a3)
{
  __int64 v5; // r8
  char v7; // [rsp+48h] [rbp-28h]

  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
    LdrpLogEtwEvent(5283, a2, 0, (_BYTE)a3, 0LL, 0LL);
  v7 = _guard_dispatch_icall_fptr();
  if ( MEMORY[0x7FFE0384] && (NtCurrentPeb()->TracingFlags & 4) != 0 && (MEMORY[0x7FFE0385] & 0x20) != 0 )
  {
    LOBYTE(v5) = -1;
    LdrpLogEtwEvent(5270, a2, v5, -1, 0LL, 0LL);
  }
  if ( !v7 && a3 == 1 )
  {
    LOBYTE(v5) = 1;
    LdrpLogError(3221225794LL, 5270LL, v5, 0LL);
  }
  return v7;
}
