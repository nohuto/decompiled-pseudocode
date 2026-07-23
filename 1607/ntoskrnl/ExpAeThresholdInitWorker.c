/*
 * XREFs of ExpAeThresholdInitWorker @ 0x140140FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpAeMeasureContention @ 0x140141094 (ExpAeMeasureContention.c)
 */

__int64 __fastcall ExpAeThresholdInitWorker(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int64 v4; // rdi
  signed __int32 v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // r9
  _BYTE v13[16]; // [rsp+70h] [rbp+70h] BYREF

  v4 = 0LL;
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    *(_DWORD *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL) = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      KeYieldProcessorEx((_DWORD *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFC0uLL));
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  v10 = 1024LL;
  do
  {
    result = ExpAeMeasureContention(a2, a2, a3, v10);
    v4 += result;
    v10 = v12 - 1;
  }
  while ( v10 );
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 136));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 128), v4);
  _InterlockedDecrement(a3);
  return result;
}
