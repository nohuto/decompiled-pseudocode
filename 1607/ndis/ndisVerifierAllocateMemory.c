/*
 * XREFs of ndisVerifierAllocateMemory @ 0x1C0063AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateMemory @ 0x1C0050320 (NdisAllocateMemory.c)
 *     ndisVerifierInjectResourceFailure @ 0x1C0063E88 (ndisVerifierInjectResourceFailure.c)
 */

__int64 __fastcall ndisVerifierAllocateMemory(_QWORD *a1, int a2, __int64 a3, NDIS_PHYSICAL_ADDRESS a4)
{
  UINT v6; // r8d
  UINT v7; // r10d
  char *v8; // rax
  PVOID VirtualAddress; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (ndisFlags & 0x400) != 0 && (unsigned int)(a2 + 40) < 0x28 )
  {
    *a1 = 0LL;
    return 3221225485LL;
  }
  else
  {
    ndisMiniportTrackAlloc = 0LL;
    ndisDriverTrackAlloc = 0LL;
    ndisFlags |= 0x800u;
    if ( (unsigned __int8)ndisVerifierInjectResourceFailure() )
    {
      v8 = 0LL;
    }
    else if ( v6 )
    {
      NdisAllocateMemory(&VirtualAddress, v7, v6, a4);
      v8 = (char *)VirtualAddress;
    }
    else
    {
      v8 = (char *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
                     512LL,
                     v7,
                     1836467278LL,
                     24LL,
                     retaddr);
    }
    *a1 = v8;
    if ( v8 )
    {
      if ( (ndisFlags & 0x400) != 0 )
        *a1 = v8 + 40;
    }
    return *a1 == 0LL ? 0xC0000001 : 0;
  }
}
