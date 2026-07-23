/*
 * XREFs of LdrQueryNextListEntry32 @ 0x18006D6D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReadMemory @ 0x18006DBF4 (LdrpReadMemory.c)
 */

__int64 __fastcall LdrQueryNextListEntry32(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  result = LdrpReadMemory(a1, a2, &v5, 4LL);
  if ( (int)result >= 0 )
  {
    *a3 = v5;
    return (unsigned int)result;
  }
  return result;
}
