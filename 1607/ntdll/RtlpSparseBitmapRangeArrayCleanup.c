/*
 * XREFs of RtlpSparseBitmapRangeArrayCleanup @ 0x1801014B4
 * Callers:
 *     RtlSparseBitmapCtxCleanup @ 0x180100440 (RtlSparseBitmapCtxCleanup.c)
 *     RtlSparseBitmapEnumerateBitmap @ 0x180100A90 (RtlSparseBitmapEnumerateBitmap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpSparseBitmapRangeArrayCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 72) & 2) != 0 )
  {
    result = ZwFreeVirtualMemory();
    if ( !a3 )
      return result;
    a2 = a3;
  }
  return (*(__int64 (__fastcall **)(__int64))(a1 + 40))(a2);
}
