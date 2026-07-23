/*
 * XREFs of RtlSparseBitmapCtxAllocateArray @ 0x1800515AC
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x18004FC18 (RtlpSparseBitmapCtxCheckRangeArray.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlSparseBitmapCtxAllocateArray(__int64 a1)
{
  void *v2; // rsi
  NTSTATUS v3; // edi
  ULONG_PTR v4; // r14
  size_t v5; // rdi
  void *v6; // rax
  PVOID v7; // rcx
  void *v9; // rax
  PVOID BaseAddress; // [rsp+50h] [rbp+20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+28h] BYREF

  BaseAddress = 0LL;
  v2 = 0LL;
  RegionSize = 8LL * *(unsigned int *)(a1 + 52);
  if ( (*(_BYTE *)(a1 + 72) & 2) == 0 )
  {
    v9 = (void *)(*(__int64 (**)(void))(a1 + 32))();
    BaseAddress = v9;
    if ( !v9 )
      return (unsigned int)-1073741670;
    memset(v9, 0, RegionSize);
    goto LABEL_5;
  }
  v3 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( v3 >= 0 )
  {
    v4 = RegionSize >> 12;
    v5 = 4 * (((RegionSize >> 12) + 31) >> 5);
    v6 = (void *)(*(__int64 (__fastcall **)(size_t))(a1 + 32))(v5);
    v2 = v6;
    if ( v6 )
    {
      memset(v6, 0, v5);
      *(_DWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 24) = v2;
LABEL_5:
      v7 = 0LL;
      *(_QWORD *)(a1 + 8) = BaseAddress;
      v3 = 0;
      BaseAddress = 0LL;
      goto LABEL_6;
    }
    v3 = -1073741670;
  }
  v7 = BaseAddress;
LABEL_6:
  if ( v7 )
  {
    if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      if ( !v2 )
        return (unsigned int)v3;
      v7 = v2;
    }
    (*(void (__fastcall **)(PVOID))(a1 + 40))(v7);
  }
  return (unsigned int)v3;
}
