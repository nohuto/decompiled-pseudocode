/*
 * XREFs of SdbpBinarySearchFirst @ 0x140514490
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x14051409C (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall SdbpBinarySearchFirst(__int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // edi
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  *a4 = -1;
  v4 = a2 - 1;
  v5 = 0;
  v15 = 0LL;
  v14[0] = 0LL;
  v10 = 0;
  if ( (int)(a2 - 1) >= 0 )
  {
    while ( 1 )
    {
      v11 = (v4 + v10) / 2;
      v12 = v11;
      if ( v11 < 0 || v11 >= a2 )
        break;
      memmove(&v15, (const void *)(a1 + 12LL * v11), 8uLL);
      if ( a3 < v15 )
      {
        v4 = v12 - 1;
      }
      else if ( a3 == v15 )
      {
        if ( !v12 || (v4 = v12 - 1, memmove(v14, (const void *)(a1 + 12LL * (v12 - 1)), 8uLL), v14[0] != a3) )
        {
          v5 = 1;
          *a4 = v12;
          return v5;
        }
      }
      else
      {
        v10 = v12 + 1;
      }
      if ( v4 < v10 )
        return v5;
    }
  }
  return 0LL;
}
