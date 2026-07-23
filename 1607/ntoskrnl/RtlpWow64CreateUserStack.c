/*
 * XREFs of RtlpWow64CreateUserStack @ 0x1404B6458
 * Callers:
 *     PspWow64SetupUserStack @ 0x1404B63C8 (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x14015A4F0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x14015A570 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x14015A5B0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v7; // r14
  NTSTATUS v8; // edi
  PIMAGE_NT_HEADERS v9; // rax
  PIMAGE_NT_HEADERS v10; // rcx
  unsigned __int64 SizeOfStackReserve_high; // rax
  unsigned int SizeOfStackReserve; // edx
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // rsi
  NTSTATUS result; // eax
  __int64 v17; // rcx
  BOOL v18; // r15d
  char *v19; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-A8h] BYREF
  int v21; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v22; // [rsp+40h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-90h] BYREF
  ULONG_PTR v24; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR v25; // [rsp+58h] [rbp-80h] BYREF
  PVOID v26; // [rsp+60h] [rbp-78h] BYREF
  _DWORD ProcessInformation[4]; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-60h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+88h] [rbp-50h]
  ULONG_PTR v31; // [rsp+90h] [rbp-48h]
  unsigned __int64 v32; // [rsp+E0h] [rbp+8h]

  v32 = a1;
  v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v22 = v7;
  if ( !a1 || (v13 = a2) == 0 )
  {
    v8 = 0;
    v9 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    v10 = v9;
    if ( v9 )
    {
      SizeOfStackReserve_high = HIDWORD(v9->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = v10->OptionalHeader.SizeOfStackReserve;
      a1 = v32;
      if ( !v32 )
        a1 = SizeOfStackReserve_high;
      v13 = a2;
      if ( !a2 )
        v13 = SizeOfStackReserve;
    }
    else
    {
      v8 = -1073741701;
      v21 = -1073741701;
      v13 = a2;
      a1 = v32;
    }
    if ( v8 < 0 )
      return v8;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v13 )
    v13 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v14 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = (v13 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v31 = *(_QWORD *)(v7 + 792);
  if ( v31 && v14 < v31 )
  {
    v14 = (v31 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v15 = (v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation[0] = a4;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v28 = v15;
  v29 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v17 = v30;
    *(_QWORD *)(a5 + 56) = v30;
    *(_QWORD *)(a5 + 40) = v17 + v15;
    BaseAddress = (PVOID)(v15 + v17 - v14);
    v18 = v15 - v14 >= 0x2000;
    RegionSize = v14;
    v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v8 >= 0 )
    {
      v19 = (char *)BaseAddress;
      *(_QWORD *)(a5 + 48) = BaseAddress;
      if ( !v18 )
        return 0;
      BaseAddress = v19 - 0x2000;
      v24 = 0x2000LL;
      v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v24, 0x1000u, 0x104u);
      if ( v8 >= 0 )
        return 0;
    }
    v26 = *(PVOID *)(a5 + 56);
    v25 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v26, &v25, 0x8000u);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_QWORD *)(a5 + 48) = 0LL;
    return v8;
  }
  return result;
}
