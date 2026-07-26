/*
 * XREFs of ndisFreeSharedMemory @ 0x1C00D2C9C
 * Callers:
 *     NdisMFreeSharedMemory @ 0x1C005F400 (NdisMFreeSharedMemory.c)
 *     ndisMQueuedFreeSharedHandler @ 0x1C00D2E30 (ndisMQueuedFreeSharedHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005F880 (ndisDereferenceDmaAdapter.c)
 */

void __fastcall ndisFreeSharedMemory(ULONG_PTR BugCheckParameter2, unsigned int a2, char a3, ULONG_PTR a4, __int64 a5)
{
  _QWORD *v5; // rbx
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64, __int64, ULONG_PTR, char); // r12
  unsigned int v11; // edi
  _BOOL8 v13; // rdx
  char BugCheckParameter4; // [rsp+20h] [rbp-28h]
  char BugCheckParameter4a; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD **)(BugCheckParameter2 + 504);
  v9 = v5[3];
  if ( !v9 )
  {
    v9 = v5[16];
    if ( !v9 )
      return;
    v5[3] = v9;
  }
  v10 = *(void (__fastcall **)(__int64, __int64, __int64, ULONG_PTR, char))(*(_QWORD *)(v9 + 8) + 24LL);
  if ( a2 < 0x48 )
    a2 = 72;
  v11 = ~(ndisDmaAlignment - 1) & (a2 + ndisDmaAlignment - 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
  if ( (unsigned __int64)v11 + 8 < 0x1000 )
  {
    if ( *(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFF8) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3912),
        "Freeing shared memory not allocated");
      KeBugCheckEx(0x7Cu, 3uLL, BugCheckParameter2, a4 & 0xFFFFFFFFFFFFF000uLL, a4);
    }
    if ( (*(_DWORD *)((a4 & 0xFFFFFFFFFFFFF000uLL) + 0xFFC))-- == 1 )
    {
      LODWORD(a5) = a5 & 0xFFFFF000;
      BugCheckParameter4a = a3;
      v10(v9, 4096LL, a5, a4 & 0xFFFFFFFFFFFFF000uLL, BugCheckParameter4a);
      v13 = a3 != 0;
      if ( (a4 & 0xFFFFFFFFFFFFF000uLL) == v5[v13 + 11] )
      {
        *((_DWORD *)v5 + v13 + 26) = 0;
        v5[v13 + 11] = 0LL;
      }
    }
  }
  else
  {
    BugCheckParameter4 = a3;
    v10(v9, v11, a5, a4, BugCheckParameter4);
  }
  ndisDereferenceDmaAdapter(v5);
  ExReleaseResourceLite(&SharedMemoryResource);
  KeLeaveCriticalRegion();
}
