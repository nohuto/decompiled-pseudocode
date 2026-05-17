/*
 * XREFs of LdrQueryInLoadOrderModuleList32 @ 0x18006CE80
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList32(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  result = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))a1[2])(*a1, 26LL, &v9);
  if ( (int)result >= 0 )
  {
    if ( !v9 )
      return 0LL;
    result = LdrpReadMemory(a1, v9 + 12, (__int64)&v8, 4LL);
    if ( (int)result >= 0 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      *a2 = v8 + 12LL;
      if ( a3 )
        *a3 = v7 + 28;
      return (unsigned int)result;
    }
  }
  return result;
}
