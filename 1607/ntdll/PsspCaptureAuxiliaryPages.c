/*
 * XREFs of PsspCaptureAuxiliaryPages @ 0x180067334
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180059150 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     ZwReadVirtualMemory @ 0x1800A6C00 (ZwReadVirtualMemory.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __fastcall PsspCaptureAuxiliaryPages(__int64 a1, void *a2, int a3, PVOID *a4)
{
  int v6; // ebx
  int v8; // edi
  NTSTATUS result; // eax
  NTSTATUS v10; // esi
  _OWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  PVOID BaseAddress; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-20h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF

  v6 = 0;
  if ( !is_mul_ok(0x1000uLL, 1uLL) )
    return -1073741675;
  v8 = a3 & 0x20000000;
  if ( (a3 & 0x20000000) != 0 )
  {
    BaseAddress = 0LL;
    RegionSize = 64LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
  }
  else
  {
    BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
    if ( !BaseAddress )
      return -1073741670;
  }
  MaximumSize.QuadPart = 4096LL;
  v10 = NtCreateSection(
          &SectionHandle,
          0xF0007u,
          (POBJECT_ATTRIBUTES)&stru_18010CE18,
          &MaximumSize,
          4u,
          0x8000000u,
          0LL);
  if ( v10 >= 0 )
  {
    Buffer = 0LL;
    RegionSize = 0LL;
    v10 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &Buffer,
            0LL,
            0LL,
            0LL,
            &RegionSize,
            ViewShare,
            0,
            4u);
    if ( v10 >= 0 )
    {
      v11 = Buffer;
      memset(BaseAddress, 0, 0x40uLL);
      v12 = 2147352576LL;
      if ( *a4 == (PVOID)2147352576 )
      {
        v13 = 14LL;
        do
        {
          *v11 = *(_OWORD *)v12;
          v11[1] = *(_OWORD *)(v12 + 16);
          v11[2] = *(_OWORD *)(v12 + 32);
          v11[3] = *(_OWORD *)(v12 + 48);
          v11[4] = *(_OWORD *)(v12 + 64);
          v11[5] = *(_OWORD *)(v12 + 80);
          v11[6] = *(_OWORD *)(v12 + 96);
          v11 += 8;
          v14 = *(_OWORD *)(v12 + 112);
          v12 += 128LL;
          *(v11 - 1) = v14;
          --v13;
        }
        while ( v13 );
        *(_QWORD *)v11 = *(_QWORD *)v12;
      }
      else if ( ZwReadVirtualMemory(a2, *a4, v11, 0x1000uLL, 0LL) < 0 )
      {
LABEL_12:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
        *(_DWORD *)(a1 + 888) = v6;
        *(_DWORD *)(a1 + 4) |= v8 != 0 ? 4 : 2;
        *(_QWORD *)(a1 + 896) = SectionHandle;
        *(_QWORD *)(a1 + 904) = BaseAddress;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( ZwQueryVirtualMemory(a2, *a4, MemoryBasicInformation, (char *)BaseAddress + 8, 0x30uLL, 0LL) >= 0 )
      {
        v6 = 1;
        *(_QWORD *)BaseAddress = *a4;
        *((_QWORD *)BaseAddress + 7) = MEMORY[0x7FFE0014];
      }
      goto LABEL_12;
    }
    NtClose(SectionHandle);
  }
  if ( v8 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  else
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return v10;
}
