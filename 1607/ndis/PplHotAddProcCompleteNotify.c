/*
 * XREFs of PplHotAddProcCompleteNotify @ 0x1C0073DC4
 * Callers:
 *     ndisDmaAddCpuNotify @ 0x1C004BBC8 (ndisDmaAddCpuNotify.c)
 * Callees:
 *     PplpFreeOneLookasideList @ 0x1C0073F70 (PplpFreeOneLookasideList.c)
 */

ULONG __fastcall PplHotAddProcCompleteNotify(unsigned int *a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  ULONG result; // eax
  ULONG v7; // r9d
  _QWORD *v8; // rsi
  unsigned int v9; // ecx
  ULONG v10; // edx
  __int64 v11; // rdi

  v2 = *((_QWORD *)a1 + 4);
  v4 = *a1;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v7 = result;
  if ( (unsigned int)v4 <= result )
  {
    v8 = (_QWORD *)(v2 + 8 * v4);
    if ( *v8 )
    {
      v9 = 0;
      v10 = v4;
      do
      {
        result = v10;
        if ( !*(_QWORD *)(v2 + 8LL * v10) )
          break;
        ++v9;
        ++v10;
      }
      while ( v10 <= v7 );
      if ( a2 >= 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v9);
      }
      else
      {
        result = v9 + v4;
        if ( (unsigned int)v4 < v9 + (unsigned int)v4 )
        {
          v11 = v9;
          do
          {
            result = PplpFreeOneLookasideList(*v8, a1[3]);
            *v8++ = 0LL;
            --v11;
          }
          while ( v11 );
        }
      }
    }
  }
  return result;
}
