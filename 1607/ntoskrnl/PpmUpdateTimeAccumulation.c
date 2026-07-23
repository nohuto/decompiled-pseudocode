/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x14000D030
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14000D000 (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     PpmConvertTime @ 0x14000DBE4 (PpmConvertTime.c)
 */

__int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  result = __rdtsc();
  v7 = result;
  if ( (*(_QWORD *)(a1 + 25320) & 0x8000000000LL) != 0 )
  {
    result = __readmsr(0xDB2u);
    v8 = result;
  }
  else
  {
    v8 = 0LL;
  }
  if ( a3 )
  {
    v9 = a2 - *(_QWORD *)(a1 + 23920);
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23936), a2 - *(_QWORD *)(a1 + 23920));
    if ( (*(_QWORD *)(a1 + 25320) & 0x8000000000LL) != 0 )
    {
      result = PpmConvertTime(v9, v7 - *(_QWORD *)(a1 + 23888), v8 - *(_QWORD *)(a1 + 24000));
      *(_QWORD *)(a1 + 24008) += result;
    }
  }
  *(_QWORD *)(a1 + 23920) = a2;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a1 + 23888);
    if ( v7 > v10 )
    {
      result = v7 - v10;
      *(_QWORD *)(a1 + 23896) += v7 - v10;
    }
  }
  *(_QWORD *)(a1 + 23888) = v7;
  if ( (*(_QWORD *)(a1 + 25320) & 0x8000000000LL) != 0 )
    *(_QWORD *)(a1 + 24000) = v8;
  return result;
}
