/*
 * XREFs of NdisMAllocateSharedMemory @ 0x1C00B0910
 * Callers:
 *     ndisMQueuedAllocateSharedHandler @ 0x1C005BDF0 (ndisMQueuedAllocateSharedHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLq @ 0x1C003F298 (WPP_SF_qLq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __stdcall NdisMAllocateSharedMemory(
        NDIS_HANDLE MiniportAdapterHandle,
        ULONG Length,
        BOOLEAN Cached,
        PVOID *VirtualAddress,
        PNDIS_PHYSICAL_ADDRESS PhysicalAddress)
{
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR v7; // rbx
  char v9; // cl
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // r14
  unsigned int v12; // r15d
  _BOOL8 v13; // rbx
  __int64 v14; // r9
  __int64 (__fastcall *v15)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, __int64); // rax
  __int64 v16; // rax
  ULONG_PTR v17; // r14
  ULONG_PTR v18; // r14
  BOOLEAN v19; // [rsp+70h] [rbp+18h]

  v19 = Cached;
  BugCheckParameter4 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = Length;
  v9 = byte_1C008531C;
  if ( (unsigned __int8)byte_1C008531C >= 4u )
  {
    WPP_SF_qD(0x1Cu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, Length);
    v9 = byte_1C008531C;
    Cached = v19;
  }
  PhysicalAddress->QuadPart = 0LL;
  if ( (*((_DWORD *)MiniportAdapterHandle + 934) & 4) == 0 )
  {
    if ( !BugCheckParameter4 )
      goto LABEL_16;
    v10 = *(_QWORD *)(BugCheckParameter4 + 24);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql >= 2u )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 489),
        "Allocating Shared Memory at raised IRQL");
      KeBugCheckEx(0x7Cu, 1uLL, (ULONG_PTR)MiniportAdapterHandle, v7, CurrentIrql);
    }
    if ( (unsigned int)v7 < 0x48 )
      LODWORD(v7) = 72;
    if ( ndisDmaAlignment + (unsigned int)v7 + 8 < (unsigned int)v7 )
    {
LABEL_16:
      *VirtualAddress = 0LL;
      return;
    }
    v12 = (ndisDmaAlignment + v7 - 1) & ~(ndisDmaAlignment - 1);
    v13 = Cached != 0;
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&SharedMemoryResource, 1u);
    v15 = *(__int64 (__fastcall **)(__int64, __int64, PNDIS_PHYSICAL_ADDRESS, __int64))(*(_QWORD *)(v10 + 8) + 16LL);
    if ( *(_DWORD *)(BugCheckParameter4 + 4 * v13 + 104) < v12 )
    {
      LOBYTE(v14) = v19;
      if ( (unsigned __int64)v12 + 8 >= 0x1000 )
      {
        *VirtualAddress = (PVOID)v15(v10, v12, PhysicalAddress, v14);
LABEL_12:
        if ( *VirtualAddress )
          _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter4 + 72));
        goto LABEL_14;
      }
      v16 = v15(v10, 4096LL, (PNDIS_PHYSICAL_ADDRESS)(BugCheckParameter4 + 112 + 8 * v13), v14);
      *(_QWORD *)(BugCheckParameter4 + 8 * v13 + 88) = v16;
      if ( !v16 )
      {
        *(_DWORD *)(BugCheckParameter4 + 4 * v13 + 104) = 0;
        *VirtualAddress = 0LL;
LABEL_14:
        ExReleaseResourceLite(&SharedMemoryResource);
        KeLeaveCriticalRegion();
        if ( (unsigned __int8)byte_1C008531C >= 4u )
          WPP_SF_qLq(0x1Fu, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, v12);
        return;
      }
      *(_DWORD *)(v16 + 4092) = 0;
      *(_DWORD *)(v16 + 4088) = 1752384590;
      *(_DWORD *)(BugCheckParameter4 + 4 * v13 + 104) = 4088;
    }
    v17 = *(_QWORD *)(BugCheckParameter4 + 8 * v13 + 88);
    if ( *(_DWORD *)(v17 + 4088) != 1752384590 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *((_QWORD *)MiniportAdapterHandle + 489),
        "Overwrote past allocated shared memory");
      KeBugCheckEx(0x7Cu, 2uLL, (ULONG_PTR)MiniportAdapterHandle, v17, BugCheckParameter4);
    }
    ++*(_DWORD *)(v17 + 4092);
    v18 = v17 - *(unsigned int *)(BugCheckParameter4 + 4 * v13 + 104);
    *VirtualAddress = (PVOID)(v18 + 4088);
    PhysicalAddress->QuadPart = *(_QWORD *)(BugCheckParameter4 + 8 * v13 + 112) + (((_DWORD)v18 + 4088) & 0xFFF);
    *(_DWORD *)(BugCheckParameter4 + 4 * v13 + 104) -= v12;
    goto LABEL_12;
  }
  *VirtualAddress = 0LL;
  if ( (unsigned __int8)v9 >= 4u )
    WPP_SF_qD(0x1Du, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)MiniportAdapterHandle, v7);
}
