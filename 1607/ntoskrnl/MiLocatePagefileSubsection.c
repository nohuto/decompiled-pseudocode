/*
 * XREFs of MiLocatePagefileSubsection @ 0x14002CBC0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOffsetToProtos @ 0x140032BF0 (MiOffsetToProtos.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiAdvanceVadView @ 0x140095AA8 (MiAdvanceVadView.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x1404A5E08 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocatePagefileSubsection(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned int v7; // r8d
  unsigned int *v8; // rcx

  v3 = *a2;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) == 0 )
    return a1 & -(__int64)(v3 < *(unsigned int *)(a1 + 44));
  v5 = v3 >> 17;
  v6 = (unsigned int)(v3 >> 17);
  v7 = v3 & 0x1FFFF;
  if ( v7 )
    ++v6;
  if ( v6 > *(unsigned int *)(*(_QWORD *)a1 + 96LL) )
    return 0LL;
  v8 = (unsigned int *)(80 * v5 + a1);
  if ( v7 >= (unsigned __int64)v8[11] )
    return 0LL;
  *a2 = v7;
  return (__int64)v8;
}
