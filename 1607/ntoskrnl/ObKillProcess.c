/*
 * XREFs of ObKillProcess @ 0x14045D694
 * Callers:
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140074CB8 (IoSetThreadHardErrorMode.c)
 *     ExDestroyHandleTable @ 0x14045F0FC (ExDestroyHandleTable.c)
 *     ExSweepHandleTable @ 0x14045F330 (ExSweepHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  void *v1; // rsi
  BOOLEAN v3; // bl

  v1 = *(void **)(a1 + 1048);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1048) = 0LL;
    ExDestroyHandleTable(v1);
  }
}
