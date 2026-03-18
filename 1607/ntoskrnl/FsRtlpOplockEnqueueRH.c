/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x140078320
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400777A4 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9B20 (FsRtlpRemoveAndCompleteRHIrp.c)
 * Callees:
 *     IoSetOplockPrivateFoExt @ 0x140078384 (IoSetOplockPrivateFoExt.c)
 *     FsRtlpOplockDequeueRH @ 0x140078498 (FsRtlpOplockDequeueRH.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // r10d
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  a2[1] = a1;
  *a2 = v2;
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  memset(v7, 0, 0x30uLL);
  v4 = a2[3];
  v7[5] = a2;
  v5 = IoSetOplockPrivateFoExt(v4, v7);
  if ( v5 < 0 )
    FsRtlpOplockDequeueRH(a2);
  return (unsigned int)v5;
}
