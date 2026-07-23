/*
 * XREFs of LdrpCallInitRoutine @ 0x1800188B4
 * Callers:
 *     LdrShutdownProcess @ 0x180006F20 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18000BBF4 (LdrpProcessDetachNode.c)
 *     LdrpCallTlsInitializers @ 0x180012538 (LdrpCallTlsInitializers.c)
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180016100 (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x180072374 (LdrpInitializeNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800D6DB8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogError @ 0x180086104 (LdrpLogError.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800D15F8 (LdrpLogEtwEvent.c)
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
