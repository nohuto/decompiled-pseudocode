/*
 * XREFs of ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C00205A4
 * Callers:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002BAC0 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00D4D9C (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00D5548 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C00D55F8 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N000@Z @ 0x1C00D5748 (-ForceRender@CSystemChannel@DirectComposition@@QEAAJ_N000@Z.c)
 * Callees:
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1C00314A4 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 */

bool __fastcall DirectComposition::CBatch::GetPayloadWritePointer(
        DirectComposition::CBatchSharedMemoryPool **this,
        unsigned __int64 a2,
        void **a3)
{
  void *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11

  v4 = DirectComposition::CBatchSharedMemoryPool::UseSpace(this[12], a2);
  if ( v4 )
  {
    *(_QWORD *)(v5 + 112) += v6;
    *a3 = v4;
    LOBYTE(v4) = 1;
  }
  return (char)v4;
}
