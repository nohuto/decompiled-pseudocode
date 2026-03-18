/*
 * XREFs of ExpAeThresholdInitWorker @ 0x140165B28
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

unsigned __int64 __fastcall ExpAeThresholdInitWorker(
        __int64 a1,
        signed __int64 *a2,
        volatile signed __int32 *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rsi
  signed __int32 v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  unsigned __int64 v15; // rax
  unsigned __int64 result; // rax

  v4 = 0LL;
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v10 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  v11 = 1024LL;
  do
  {
    v12 = __rdtsc();
    _m_prefetchw(a2);
    v13 = *a2;
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64(a2, v13 + 1, v13);
    }
    while ( v14 != v13 );
    v15 = __rdtsc();
    result = (((unsigned __int64)HIDWORD(v15) << 32) | (unsigned int)v15) - v12;
    v4 += result;
    --v11;
  }
  while ( v11 );
  _InterlockedIncrement((volatile signed __int32 *)a2 + 34);
  _InterlockedExchangeAdd64(a2 + 16, v4);
  _InterlockedDecrement(a3);
  return result;
}
