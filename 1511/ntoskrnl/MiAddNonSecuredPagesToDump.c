/*
 * XREFs of MiAddNonSecuredPagesToDump @ 0x1401D5B64
 * Callers:
 *     MmGetDumpRange @ 0x1401D6330 (MmGetDumpRange.c)
 * Callees:
 *     MiIsPageSecured @ 0x1401D3FF0 (MiIsPageSecured.c)
 */

__int64 __fastcall MiAddNonSecuredPagesToDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // r9d
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 result; // rax
  __int64 v11; // r8

  v3 = a3;
  v4 = 0;
  if ( a3 )
  {
    v6 = a2 + 1;
    v7 = 48 * a2 - 0x58000000000LL;
    do
    {
      if ( MiIsPageSecured(v7) )
      {
        if ( v8 )
        {
          result = (*a1)(a1, v9, v8, 258LL);
          v4 = result;
          if ( (int)result < 0 )
            return result;
        }
        v9 = v6;
        v11 = 0LL;
      }
      else
      {
        v11 = v8 + 1;
      }
      v7 += 48LL;
      ++v6;
      --v3;
    }
    while ( v3 );
    if ( v11 )
      return (unsigned int)(*a1)(a1, v9, v11, 258LL);
  }
  return v4;
}
