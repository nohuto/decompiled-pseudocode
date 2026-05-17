/*
 * XREFs of LdrQueryNextListEntry32 @ 0x1800878C0
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 */

__int64 __fastcall LdrQueryNextListEntry32(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  result = LdrpReadMemory(a1, a2, (__int64)&v5, 4LL);
  if ( (int)result >= 0 )
  {
    *a3 = v5;
    return (unsigned int)result;
  }
  return result;
}
