/*
 * XREFs of MiAllocateFixupVad @ 0x14047F5F8
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x14047F724 (MiInitializePrivateFixupBitmap.c)
 */

_OWORD *__fastcall MiAllocateFixupVad(__int64 a1)
{
  __int64 v2; // rbx
  _OWORD *PoolWithTag; // rax
  _OWORD *v4; // rdi
  unsigned __int64 v5; // rax
  int v6; // ecx
  _OWORD *result; // rax

  v2 = **(_QWORD **)(a1 + 72);
  if ( !**(_QWORD **)(v2 + 96) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  8
                * (((*(_DWORD *)(*(_QWORD *)v2 + 8LL) & 0x3F) != 0)
                 + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v2 + 8LL) >> 6))
                + 160,
                  0x49646156u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = *(_OWORD *)a1;
  PoolWithTag[1] = *(_OWORD *)(a1 + 16);
  PoolWithTag[2] = *(_OWORD *)(a1 + 32);
  PoolWithTag[3] = *(_OWORD *)(a1 + 48);
  PoolWithTag[4] = *(_OWORD *)(a1 + 64);
  PoolWithTag[5] = *(_OWORD *)(a1 + 80);
  PoolWithTag[6] = *(_OWORD *)(a1 + 96);
  PoolWithTag[7] = *(_OWORD *)(a1 + 112);
  *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)(a1 + 128);
  *((_QWORD *)PoolWithTag + 17) = -4096 * ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v2 + 136)) >> 3)
                                + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12)
                                - *(_QWORD *)(*(_QWORD *)v2 + 32LL);
  v5 = MiInitializePrivateFixupBitmap(PoolWithTag + 9, v2);
  v6 = (*((_DWORD *)v4 + 13) ^ v5) & 0x7FFFFFFF;
  *((_BYTE *)v4 + 34) = v5 >> 31;
  *((_DWORD *)v4 + 13) ^= v6;
  result = v4;
  *((_DWORD *)v4 + 12) |= 0x10000u;
  return result;
}
