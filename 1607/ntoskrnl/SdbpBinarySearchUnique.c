/*
 * XREFs of SdbpBinarySearchUnique @ 0x140515140
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x14051409C (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall SdbpBinarySearchUnique(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebx
  int v11; // eax
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a4 = -1;
  v4 = a2 - 1;
  v5 = 0;
  v6 = -1;
  while ( v4 >= v5 )
  {
    v11 = (v4 + v5) / 2;
    v6 = v11;
    if ( v11 < 0 || v11 >= a2 )
      return 0LL;
    memmove(&v13, (const void *)(a1 + 12LL * v11), 8uLL);
    if ( a3 <= v13 )
    {
      v4 = v6 - 1;
      if ( a3 < v13 )
        continue;
    }
    v5 = v6 + 1;
  }
  result = 1LL;
  if ( v5 - v4 <= 1 )
    return 0LL;
  *a4 = v6;
  return result;
}
