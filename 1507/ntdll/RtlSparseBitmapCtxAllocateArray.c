/*
 * XREFs of RtlSparseBitmapCtxAllocateArray @ 0x180058B8C
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x180055040 (RtlpSparseBitmapCtxCheckRangeArray.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlSparseBitmapCtxAllocateArray(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // r15
  ULONG_PTR v4; // rsi
  bool v5; // zf
  NTSTATUS v6; // esi
  ULONG_PTR v7; // r14
  size_t v8; // rsi
  void *v9; // rax
  PVOID v10; // r14
  void *v12; // rax
  PVOID BaseAddress; // [rsp+60h] [rbp+30h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp+38h] BYREF

  v1 = *(unsigned int *)(a1 + 52);
  v2 = 0LL;
  BaseAddress = 0LL;
  v4 = 8 * v1;
  v5 = (*(_BYTE *)(a1 + 72) & 2) == 0;
  RegionSize = v4;
  if ( v5 )
  {
    v12 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR))(a1 + 32))(v4);
    BaseAddress = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    memset(v12, 0, RegionSize);
    goto LABEL_5;
  }
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( v6 >= 0 )
  {
    v7 = RegionSize >> 12;
    v8 = 4 * (((RegionSize >> 12) + 31) >> 5);
    v9 = (void *)(*(__int64 (__fastcall **)(size_t))(a1 + 32))(v8);
    v2 = v9;
    if ( v9 )
    {
      memset(v9, 0, v8);
      *(_DWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = v2;
LABEL_5:
      v10 = 0LL;
      *(_QWORD *)(a1 + 8) = BaseAddress;
      v6 = 0;
      BaseAddress = 0LL;
      goto LABEL_6;
    }
    v6 = -1073741670;
  }
  v10 = BaseAddress;
LABEL_6:
  if ( v10 )
  {
    if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      if ( v2 )
        (*(void (__fastcall **)(void *))(a1 + 40))(v2);
    }
    else
    {
      (*(void (__fastcall **)(PVOID))(a1 + 40))(v10);
    }
  }
  return (unsigned int)v6;
}
