/*
 * XREFs of PfFbBufferListInitialize @ 0x14057208C
 * Callers:
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PfFbBufferListInitialize(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8

  if ( a3 )
  {
    a1[13] = 0LL;
    *((_DWORD *)a1 + 28) = 0;
  }
  else
  {
    memset(a1, 0, 0x80uLL);
  }
  InitializeSListHead((PSLIST_HEADER)a1 + 1);
  InitializeSListHead((PSLIST_HEADER)a1 + 2);
  InitializeSListHead((PSLIST_HEADER)a1 + 3);
  result = *(unsigned int *)(a2 + 12);
  v7 = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 4) = *(_OWORD *)a2;
  if ( (unsigned int)result < 0x30 )
    result = 48LL;
  v8 = *(_QWORD *)(a2 + 32);
  *((_OWORD *)a1 + 5) = v7;
  a1[12] = v8;
  *((_DWORD *)a1 + 19) = result;
  if ( a3 )
    _InterlockedExchange64(a1, 0LL);
  else
    *a1 = 0LL;
  return result;
}
