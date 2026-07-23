/*
 * XREFs of LdrpMapViewOfSection @ 0x18002F344
 * Callers:
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 * Callees:
 *     RtlAcquirePrivilege @ 0x18007D350 (RtlAcquirePrivilege.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     RtlReleasePrivilege @ 0x180087820 (RtlReleasePrivilege.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpMapViewOfSection(
        HANDLE SectionHandle,
        __int64 a2,
        void *a3,
        char a4,
        PVOID *BaseAddress,
        PSIZE_T a6)
{
  ULONG AllocationType; // ebp
  struct _TEB *v10; // rdi
  PSIZE_T ViewSize; // rax
  PVOID *v12; // r14
  PVOID *v13; // r8
  void *ArbitraryUserPointer; // rbx
  NTSTATUS v15; // eax
  int v16; // esi
  PVOID *MemoryInformation; // [rsp+50h] [rbp-48h] BYREF
  PVOID ReturnedState; // [rsp+B0h] [rbp+18h] BYREF
  int v20; // [rsp+B8h] [rbp+20h]

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      355,
      (unsigned int)"LdrpMapViewOfSection",
      3,
      (__int64)"DLL name: %ws\n",
      a3);
  AllocationType = 0x800000;
  ReturnedState = 0LL;
  if ( !a4 )
  {
    if ( LdrpLargePageDllKeyHandle )
    {
      v20 = 0;
      RtlQueryImageFileKeyOption(LdrpLargePageDllKeyHandle, 4, 0LL);
      if ( v20 )
      {
        if ( RtlAcquirePrivilege((PULONG)&LdrpLockMemoryPrivilege, 1u, 0, &ReturnedState) >= 0 )
          AllocationType = 0x20000000;
      }
    }
  }
  v10 = NtCurrentTeb();
  ViewSize = a6;
  v12 = BaseAddress;
  v13 = BaseAddress;
  ArbitraryUserPointer = v10->NtTib.ArbitraryUserPointer;
  v10->NtTib.ArbitraryUserPointer = a3;
  *v13 = 0LL;
  *ViewSize = 0LL;
  v15 = ZwMapViewOfSection(
          SectionHandle,
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          v13,
          0LL,
          0LL,
          0LL,
          ViewSize,
          ViewShare,
          AllocationType,
          4u);
  v10->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
  v16 = v15;
  if ( AllocationType == 0x20000000 )
  {
    RtlReleasePrivilege(ReturnedState);
    if ( v16 >= 0 )
    {
      ZwQueryVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        *v12,
        MemoryRegionInformation,
        &MemoryInformation,
        0x20uLL,
        0LL);
      if ( MemoryInformation != *v12 )
        *MemoryInformation = *v12;
    }
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      430,
      (unsigned int)"LdrpMapViewOfSection",
      4,
      (__int64)"Status: 0x%08lx\n",
      v16);
  return (unsigned int)v16;
}
