/*
 * XREFs of RtlpSparseBitmapRangeArrayCleanup @ 0x1801013F4
 * Callers:
 *     RtlSparseBitmapCtxCleanup @ 0x180100380 (RtlSparseBitmapCtxCleanup.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x1801009D0 (RtlSparseBitmapEnumerateBitmap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RtlpSparseBitmapRangeArrayCleanup(__int64 a1, void *a2, void *a3)
{
  void *v5; // rcx
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+20h] BYREF

  if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
  {
    RegionSize = 0LL;
    BaseAddress = a2;
    result = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( !a3 )
      return result;
    v5 = a3;
  }
  else
  {
    v5 = a2;
  }
  return (*(__int64 (__fastcall **)(void *))(a1 + 40))(v5);
}
