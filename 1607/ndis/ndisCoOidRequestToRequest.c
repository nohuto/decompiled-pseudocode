/*
 * XREFs of ndisCoOidRequestToRequest @ 0x1C00F9A60
 * Callers:
 *     NdisCoOidRequest @ 0x1C00F8260 (NdisCoOidRequest.c)
 *     NdisMCmOidRequest @ 0x1C00F9070 (NdisMCmOidRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisCoOidRequestToRequest(
        __int64 (__fastcall **a1)(__int64, __int64, __int64, PVOID),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // esi
  int v12; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    v12 = *(_DWORD *)(a5 + 4);
    v10[6] |= 0x400u;
    v10[8] = v12;
    *((_QWORD *)v10 + 1) = a5;
    if ( *(_DWORD *)(a5 + 4) == 12 )
    {
      v11 = -1073741637;
    }
    else
    {
      v10[10] = *(_DWORD *)(a5 + 32);
      *((_QWORD *)v10 + 6) = *(_QWORD *)(a5 + 40);
      v10[14] = *(_DWORD *)(a5 + 48);
      v10[15] = *(_DWORD *)(a5 + 52);
      v10[16] = *(_DWORD *)(a5 + 56);
      v11 = (*a1)(a2, a3, a4, v10);
      if ( v11 == 259 )
        return v11;
      *(_DWORD *)(a5 + 52) = v10[15];
      *(_DWORD *)(a5 + 56) = v10[16];
    }
    ExFreePoolWithTag(v10, 0);
    return v11;
  }
  return (unsigned int)-1073741670;
}
