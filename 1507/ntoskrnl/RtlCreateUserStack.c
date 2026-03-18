/*
 * XREFs of RtlCreateUserStack @ 0x1404510C4
 * Callers:
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x14017F2F0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x14017F370 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlCreateUserStack(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        ULONG_PTR RegionSize,
        _QWORD *a6)
{
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  ULONG_PTR v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  NTSTATUS result; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  BOOL v19; // r14d
  NTSTATUS v20; // ebx
  char *v21; // rax
  PIMAGE_NT_HEADERS v22; // rax
  unsigned __int64 SizeOfStackCommit; // rcx
  unsigned __int64 SizeOfStackReserve; // rdx
  ULONG_PTR v25; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR v26; // [rsp+38h] [rbp-80h] BYREF
  PVOID v27; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-70h]
  int ProcessInformation; // [rsp+50h] [rbp-68h] BYREF
  __int64 v30; // [rsp+54h] [rbp-64h]
  int v31; // [rsp+5Ch] [rbp-5Ch]
  unsigned __int64 v32; // [rsp+60h] [rbp-58h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  __int64 v34; // [rsp+70h] [rbp-48h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  v7 = HIBYTE(a4);
  v8 = a4 & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(a4) > 0x40u )
    return -1073741811;
  v9 = 3 * v8;
  v10 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  v11 = a1;
  if ( !a1 || (v12 = a2) == 0 )
  {
    v22 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[18]);
    if ( !v22 )
      return -1073741701;
    if ( v22->OptionalHeader.Magic == 523 )
    {
      SizeOfStackCommit = v22->OptionalHeader.SizeOfStackCommit;
      SizeOfStackReserve = v22->OptionalHeader.SizeOfStackReserve;
    }
    else
    {
      SizeOfStackCommit = HIDWORD(v22->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = LODWORD(v22->OptionalHeader.SizeOfStackReserve);
    }
    v11 = a1;
    if ( !a1 )
      v11 = SizeOfStackCommit;
    v12 = a2;
    if ( !a2 )
      v12 = SizeOfStackReserve;
  }
  if ( !v11 )
    v11 = 0x4000LL;
  if ( v11 >= v12 )
    v12 = (v11 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v13 = ~(v8 - 1);
  v14 = v13 & (v11 + v8 - 1);
  v15 = (v12 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v28 = *(_QWORD *)(v10 + 792);
  if ( v28 && v14 < v28 )
  {
    v14 = v13 & (v28 + v8 - 1);
    v15 = (v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation = v7;
  v30 = 0LL;
  v31 = 0;
  v32 = v15;
  v33 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             &ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v17 = a6;
    *a6 = 0LL;
    v17[1] = 0LL;
    v18 = v34;
    v17[4] = v34;
    v17[2] = v18 + v15;
    BaseAddress = (PVOID)(v15 + v18 - v14);
    v19 = v15 - v14 >= v9;
    RegionSize = v14;
    v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v20 < 0
      || (v21 = (char *)BaseAddress, v17[3] = BaseAddress, v19)
      && (BaseAddress = &v21[-v9],
          v25 = v9,
          v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u),
          v20 < 0) )
    {
      v27 = (PVOID)v17[4];
      v26 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v27, &v26, 0x8000u);
      return v20;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
