/*
 * XREFs of LdrpReadMemory @ 0x180069374
 * Callers:
 *     LdrpGetModuleName @ 0x180068D70 (LdrpGetModuleName.c)
 *     LdrQueryNextListEntry @ 0x180069240 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180069260 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryInLoadOrderModuleList32 @ 0x180069500 (LdrQueryInLoadOrderModuleList32.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18007FD80 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryNextListEntry32 @ 0x18007FFF0 (LdrQueryNextListEntry32.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BC6D4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     RtlpQueryReadVirtualMemory @ 0x180069410 (RtlpQueryReadVirtualMemory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall LdrpReadMemory(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, PSIZE_T); // rdi
  __int64 result; // rax
  ULONG_PTR v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  if ( v4 == RtlpQueryReadVirtualMemory )
    result = RtlpQueryReadVirtualMemory(*a1, a2, a3, a4, &v7);
  else
    result = v4(*a1, a2, a3, a4, &v7);
  if ( (int)result >= 0 )
    return a4 != v7 ? 0x8000000D : 0;
  return result;
}
