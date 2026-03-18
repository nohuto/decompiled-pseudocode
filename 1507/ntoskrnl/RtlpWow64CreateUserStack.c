/*
 * XREFs of RtlpWow64CreateUserStack @ 0x140546148
 * Callers:
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x14017F370 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, PVOID *a5)
{
  _QWORD *v7; // r14
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rdi
  unsigned __int64 v10; // rsi
  NTSTATUS result; // eax
  char *v12; // rcx
  BOOL v13; // r15d
  NTSTATUS v14; // edi
  char *v15; // rax
  PIMAGE_NT_HEADERS v16; // rax
  PIMAGE_NT_HEADERS v17; // rcx
  unsigned __int64 SizeOfStackReserve_high; // rax
  unsigned int SizeOfStackReserve; // edx
  PVOID BaseAddress; // [rsp+30h] [rbp-A8h] BYREF
  int v21; // [rsp+38h] [rbp-A0h]
  ULONG_PTR v22; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v23; // [rsp+48h] [rbp-90h] BYREF
  PVOID v24[2]; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-78h] BYREF
  _DWORD ProcessInformation[4]; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-60h]
  __int64 v28; // [rsp+80h] [rbp-58h]
  char *v29; // [rsp+88h] [rbp-50h]
  ULONG_PTR v30; // [rsp+90h] [rbp-48h]
  unsigned __int64 v31; // [rsp+E0h] [rbp+8h]

  v31 = a1;
  v7 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v24[1] = v7;
  if ( !a1 || (v8 = a2) == 0 )
  {
    v14 = 0;
    v16 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    v17 = v16;
    if ( v16 )
    {
      SizeOfStackReserve_high = HIDWORD(v16->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = v17->OptionalHeader.SizeOfStackReserve;
      a1 = v31;
      if ( !v31 )
        a1 = SizeOfStackReserve_high;
      v8 = a2;
      if ( !a2 )
        v8 = SizeOfStackReserve;
    }
    else
    {
      v14 = -1073741701;
      v21 = -1073741701;
      v8 = a2;
      a1 = v31;
    }
    if ( v14 < 0 )
      return v14;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v8 )
    v8 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v9 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v8 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v30 = v7[99];
  if ( v30 && v9 < v30 )
  {
    v9 = (v30 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v10 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation[0] = a4;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v27 = v10;
  v28 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v12 = v29;
    a5[7] = v29;
    a5[5] = &v12[v10];
    BaseAddress = &v12[v10 - v9];
    v13 = v10 - v9 >= 0x2000;
    RegionSize = v9;
    v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v14 < 0
      || (v15 = (char *)BaseAddress, a5[6] = BaseAddress, v13)
      && (BaseAddress = v15 - 0x2000,
          v22 = 0x2000LL,
          v14 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v22, 0x1000u, 0x104u),
          v14 < 0) )
    {
      v24[0] = a5[7];
      v23 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v24, &v23, 0x8000u);
      a5[7] = 0LL;
      a5[5] = 0LL;
      a5[6] = 0LL;
      return v14;
    }
    return 0;
  }
  return result;
}
