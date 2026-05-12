/*
 * XREFs of PortAllocateRegistryBuffer @ 0x1C0011400
 * Callers:
 *     StorPortAllocateRegistryBuffer @ 0x1C00113B0 (StorPortAllocateRegistryBuffer.c)
 * Callees:
 *     memset @ 0x1C0013300 (memset.c)
 */

__int64 __fastcall PortAllocateRegistryBuffer(__int64 a1)
{
  unsigned int v2; // esi
  PVOID PoolWithTag; // rax
  unsigned int v4; // edi

  v2 = *(_DWORD *)(a1 + 48);
  if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
  {
    return (unsigned int)-2147483631;
  }
  else
  {
    if ( v2 > 0x10000 )
      v2 = 0x10000;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x42526C50u);
    v4 = 0;
    if ( PoolWithTag )
    {
      *(_DWORD *)(a1 + 56) |= 2u;
      *(_QWORD *)(a1 + 32) = PoolWithTag;
      *(_DWORD *)(a1 + 40) = v2;
      memset(PoolWithTag, 0, v2);
    }
    else
    {
      *(_DWORD *)(a1 + 40) = 0;
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
