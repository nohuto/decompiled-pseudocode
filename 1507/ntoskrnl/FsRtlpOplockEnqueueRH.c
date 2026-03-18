/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x140073C48
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpOplockDequeueRH @ 0x14006DB24 (FsRtlpOplockDequeueRH.c)
 *     IoSetOplockPrivateFoExt @ 0x140073CAC (IoSetOplockPrivateFoExt.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // r10d
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a1;
  *a2 = *a1;
  a2[1] = (__int64)a1;
  if ( *(__int64 **)(v2 + 8) != a1 )
    __fastfail(3u);
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  memset(v9, 0, 0x30uLL);
  v4 = a2[3];
  v9[5] = a2;
  v7 = IoSetOplockPrivateFoExt(v4, v9);
  if ( v7 < 0 )
    FsRtlpOplockDequeueRH((__int64)a2, v5, v6);
  return (unsigned int)v7;
}
