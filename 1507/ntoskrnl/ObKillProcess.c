/*
 * XREFs of ObKillProcess @ 0x14050BA98
 * Callers:
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x140508B40 (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x140508CB0 (ExDestroyHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  void *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(void **)(a1 + 1048);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable((__int64)v1, 0);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1048) = 0LL;
    ExDestroyHandleTable(v1);
  }
}
