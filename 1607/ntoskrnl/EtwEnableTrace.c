/*
 * XREFs of EtwEnableTrace @ 0x1404E4F60
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x1404E4F14 (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x1406A5048 (EtwWmitraceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x14048D828 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  _OWORD *v9; // rdx
  __int16 v10; // r8
  int v11; // r9d
  __int128 *v12; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return EtwpEnableTrace(CurrentServerSiloGlobals[106], v12, v9, v10, v11, a5, a6, a7, a8, 0LL, 0LL);
}
