/*
 * XREFs of ndisAllocateDefaultQueue @ 0x1C00B0168
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisAllocateDefaultQueue(__int64 a1)
{
  PVOID PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x4C8uLL, 0x7571444Eu);
  *(_QWORD *)(a1 + 4432) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x4C8uLL);
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 4432) + 32LL);
  v3[1] = v3;
  *v3 = v3;
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 4432) + 88LL);
  v4[1] = v4;
  *v4 = v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 4432) + 48LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 4432) + 52LL) = 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 4432) + 56LL) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 4432) + 64LL) = a1;
  *(_DWORD *)(*(_QWORD *)(a1 + 4432) + 80LL) = 1;
  return 0LL;
}
