/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x1400CAEBC
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     IoSetOplockPrivateFoExt @ 0x1400CAF20 (IoSetOplockPrivateFoExt.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // r10d
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a1;
  *a2 = *a1;
  a2[1] = (__int64)a1;
  if ( *(__int64 **)(v2 + 8) != a1 )
    __fastfail(3u);
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  memset(v7, 0, 0x30uLL);
  v4 = a2[3];
  v7[5] = a2;
  v5 = IoSetOplockPrivateFoExt(v4, v7);
  if ( v5 < 0 )
    FsRtlpOplockDequeueRH((__int64)a2);
  return (unsigned int)v5;
}
