/*
 * XREFs of ndisVerifierAllocateMemoryWithTag @ 0x1C0063BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisVerifierInjectResourceFailure @ 0x1C0063E88 (ndisVerifierInjectResourceFailure.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTag(_LIST_ENTRY **a1, __int64 a2, __int64 a3)
{
  _LIST_ENTRY *v3; // rbp
  __int64 v4; // r9
  int v5; // r14d
  unsigned int v6; // edi
  __int64 v8; // r8
  int v9; // r9d
  _LIST_ENTRY *v10; // rbx
  KIRQL v11; // dl
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  if ( (ndisFlags & 0x400) != 0 )
  {
    v3 = retaddr;
    if ( (int)a2 + 40 < (unsigned int)a2 )
    {
      v6 = -1;
      v4 = 3221225621LL;
    }
    else
    {
      v6 = a2 + 40;
    }
  }
  if ( (unsigned __int8)ndisVerifierInjectResourceFailure(a1, a2, a3, v4) || v9 < 0 )
    v10 = 0LL;
  else
    v10 = (_LIST_ENTRY *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _LIST_ENTRY *))ndisVerifierWdmDispatch
                          + 6))(
                           512LL,
                           v6,
                           v8,
                           24LL,
                           retaddr);
  if ( v10 && (ndisFlags & 0x400) != 0 )
  {
    *a1 = (_LIST_ENTRY *)((char *)v10 + 40);
    memset(v10, 0, 0x28uLL);
    v10[2].Flink = 0LL;
    LODWORD(v10[1].Flink) = v5;
    HIDWORD(v10[1].Flink) = v6;
    v10[1].Blink = v3;
    v11 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
    if ( ndisMiniportTrackAlloc )
    {
      Flink = ndisMiniportTrackAllocList.Flink;
      if ( ndisMiniportTrackAllocList.Flink->Blink != &ndisMiniportTrackAllocList )
        __fastfail(3u);
      v10->Flink = ndisMiniportTrackAllocList.Flink;
      v10->Blink = &ndisMiniportTrackAllocList;
      Flink->Blink = v10;
      ndisMiniportTrackAllocList.Flink = v10;
    }
    else
    {
      v13 = ndisDriverTrackAllocList.Flink;
      if ( ndisDriverTrackAllocList.Flink->Blink != &ndisDriverTrackAllocList )
        __fastfail(3u);
      v10->Flink = ndisDriverTrackAllocList.Flink;
      v10->Blink = &ndisDriverTrackAllocList;
      v13->Blink = v10;
      ndisDriverTrackAllocList.Flink = v10;
    }
    KeReleaseSpinLock(&ndisTrackMemLock, v11);
  }
  else
  {
    *a1 = v10;
  }
  return *a1 == 0LL ? 0xC0000001 : 0;
}
