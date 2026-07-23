/*
 * XREFs of IopCreateVpb @ 0x14057DE7C
 * Callers:
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140623DA4 (IoVerifyVolume.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopCreateVpb(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x20627056u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  *(_DWORD *)v3 = 6291466;
  result = 0LL;
  v3[2] = a1;
  *(_QWORD *)(a1 + 56) = v3;
  return result;
}
