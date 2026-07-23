/*
 * XREFs of LdrpReadMemory @ 0x18006CAB4
 * Callers:
 *     LdrpGetModuleName @ 0x18006C5B0 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x18006CAA0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006CB50 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x18006CE80 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180087800 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x1800878C0 (LdrQueryNextListEntry32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     LdrpProtectedCopyMemory @ 0x18006CCD0 (LdrpProtectedCopyMemory.c)
 *     RtlpQueryReadVirtualMemory @ 0x18006CD40 (RtlpQueryReadVirtualMemory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall LdrpReadMemory(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, PSIZE_T); // rdi
  __int64 result; // rax
  ULONG_PTR v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  if ( (char *)v4 == (char *)LdrpProtectedCopyMemory )
  {
    result = LdrpProtectedCopyMemory(*a1);
  }
  else if ( v4 == RtlpQueryReadVirtualMemory )
  {
    result = RtlpQueryReadVirtualMemory(*a1, a2, a3, a4, &v7);
  }
  else
  {
    result = v4(*a1, a2, a3, a4, &v7);
  }
  if ( (int)result >= 0 )
    return a4 != v7 ? 0x8000000D : 0;
  return result;
}
