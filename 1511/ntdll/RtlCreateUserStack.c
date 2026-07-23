/*
 * XREFs of RtlCreateUserStack @ 0x1800832E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     RtlFreeUserStack @ 0x180085C50 (RtlFreeUserStack.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1800A5440 (NtSetInformationProcess.c)
 */

NTSTATUS __cdecl RtlCreateUserStack(
        SIZE_T CommittedStackSize,
        SIZE_T MaximumStackSize,
        ULONG_PTR ZeroBits,
        SIZE_T PageSize,
        ULONG_PTR ReserveAlignment,
        PINITIAL_TEB InitialTeb)
{
  SIZE_T v6; // r15
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // r12
  struct _PEB *v10; // r13
  SIZE_T SizeOfStackCommit; // rdi
  SIZE_T SizeOfStackReserve; // rbx
  PIMAGE_NT_HEADERS v13; // rax
  NTSTATUS result; // eax
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  PINITIAL_TEB v19; // rsi
  char *v20; // rcx
  _BOOL8 v21; // r14
  int v22; // ebx
  char *v23; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v25; // [rsp+38h] [rbp-70h] BYREF
  ULONG_PTR MinimumStackCommit; // [rsp+40h] [rbp-68h]
  _DWORD ProcessInformation[4]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  ULONG_PTR v29; // [rsp+60h] [rbp-48h]
  char *v30; // [rsp+68h] [rbp-40h]
  ULONG_PTR v33; // [rsp+C0h] [rbp+18h]
  PVOID BaseAddress; // [rsp+C8h] [rbp+20h] BYREF

  v33 = ZeroBits;
  v6 = HIBYTE(PageSize);
  v7 = PageSize & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(PageSize) > 0x40u )
    return -1073741811;
  if ( !v7 )
    return -1073741811;
  v8 = ReserveAlignment;
  if ( !ReserveAlignment || ReserveAlignment < v7 )
    return -1073741811;
  v9 = 3 * v7;
  v10 = NtCurrentPeb();
  SizeOfStackCommit = CommittedStackSize;
  SizeOfStackReserve = MaximumStackSize;
  if ( !CommittedStackSize || !MaximumStackSize )
  {
    v13 = RtlImageNtHeader(v10->ImageBaseAddress);
    if ( !v13 )
      return -1073741701;
    if ( !CommittedStackSize )
      SizeOfStackCommit = v13->OptionalHeader.SizeOfStackCommit;
    if ( !MaximumStackSize )
      SizeOfStackReserve = v13->OptionalHeader.SizeOfStackReserve;
    ZeroBits = v33;
  }
  if ( !SizeOfStackCommit )
    SizeOfStackCommit = 0x4000LL;
  if ( SizeOfStackCommit >= SizeOfStackReserve )
    SizeOfStackReserve = (SizeOfStackCommit + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v15 = ~(v7 - 1);
  v16 = v15 & (v7 + SizeOfStackCommit - 1);
  v17 = ~(v8 - 1);
  v18 = v17 & (v8 + SizeOfStackReserve - 1);
  MinimumStackCommit = v10->MinimumStackCommit;
  if ( MinimumStackCommit && v16 < MinimumStackCommit )
  {
    v16 = v15 & (v7 + MinimumStackCommit - 1);
    v18 = v17 & (((v16 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL) + v8 - 1);
  }
  ProcessInformation[0] = v6;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v28 = v18;
  v29 = ZeroBits;
  result = NtSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v19 = InitialTeb;
    InitialTeb->OldInitialTeb.OldStackBase = 0LL;
    v19->OldInitialTeb.OldStackLimit = 0LL;
    v20 = v30;
    v19->StackAllocationBase = v30;
    v19->StackBase = &v20[v18];
    BaseAddress = &v20[v18 - v16];
    v21 = v18 - v16 >= v9;
    RegionSize = v16;
    v22 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v22 < 0
      || (v23 = (char *)BaseAddress, v19->StackLimit = BaseAddress, v21)
      && (BaseAddress = &v23[-v9],
          v25 = v9,
          v22 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u),
          v22 < 0) )
    {
      RtlFreeUserStack(v19->StackAllocationBase);
      return v22;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
