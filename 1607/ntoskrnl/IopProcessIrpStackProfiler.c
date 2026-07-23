/*
 * XREFs of IopProcessIrpStackProfiler @ 0x1400A85F4
 * Callers:
 *     IopIrpStackProfilerDpcRoutine @ 0x1400A83D4 (IopIrpStackProfilerDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopProcessIrpStackProfiler(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // r8
  unsigned int v4; // edx
  int v5; // r9d
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned __int64 *v9; // rcx
  unsigned int v10; // ecx
  _QWORD *v11; // r10
  __int64 v12; // r8
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = 0LL;
  v4 = IopLargeIrpStackLocations;
  v5 = IopMediumIrpStackLocations;
  v6 = 0LL;
  v7 = 0LL;
  if ( (IopIrpStackProfilerFlags & 1) != 0 )
  {
    v8 = 10;
    v9 = (unsigned __int64 *)(a1 + 80);
    do
    {
      if ( *v9 > v2 )
      {
        v4 = v8;
        v2 = *v9;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 0x14 );
    result = (unsigned int)IopIrpStackProfilerMinSizeThreshold;
    if ( v2 < (unsigned int)IopIrpStackProfilerMinSizeThreshold )
      v4 = IopLargeIrpStackLocations;
  }
  v10 = 2;
  if ( (IopIrpStackProfilerFlags & 2) != 0 && v4 > 2 )
  {
    v11 = (_QWORD *)(a1 + 16);
    v12 = 2LL - v4;
    do
    {
      v7 += *v11;
      result = v7 * v12;
      if ( v7 * v12 < v6 )
      {
        v5 = v10;
        v6 = v7 * v12;
      }
      ++v10;
      ++v12;
      ++v11;
    }
    while ( v10 < v4 );
  }
  if ( IopLargeIrpStackLocations != v4 )
    IopLargeIrpStackLocations = v4;
  if ( IopMediumIrpStackLocations != v5 )
    IopMediumIrpStackLocations = v5;
  return result;
}
