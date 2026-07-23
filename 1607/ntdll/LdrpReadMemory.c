/*
 * XREFs of LdrpReadMemory @ 0x18006DBF4
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18006D2E0 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x18006D6D0 (LdrQueryNextListEntry32.c)
 *     LdrpGetModuleName @ 0x18006D704 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x18006DBE0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006DC80 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006DED0 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800D08A4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x18006DDE0 (LdrpProtectedCopyMemory.c)
 *     RtlpQueryReadVirtualMemory @ 0x18006DE50 (RtlpQueryReadVirtualMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpReadMemory(__int64 *a1, int a2, int a3, __int64 a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, PSIZE_T); // rax
  __int64 v6; // r10
  __int64 result; // rax
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  v6 = *a1;
  if ( (char *)v4 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(v6);
  }
  else if ( v4 == RtlpQueryReadVirtualMemory )
  {
    result = RtlpQueryReadVirtualMemory(v6, a2, a3, a4, &v8);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64))v4)(v6);
  }
  if ( (int)result >= 0 )
    return a4 != v8 ? 0x8000000D : 0;
  return result;
}
