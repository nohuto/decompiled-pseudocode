/*
 * XREFs of EtwpUpdatePmcCounters @ 0x1406A46A4
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 *     xHalAllocatePmcCounterSet @ 0x140581DE0 (xHalAllocatePmcCounterSet.c)
 *     EtwpAllocatePmcData @ 0x1406A41C0 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcCounters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 i; // rdx
  unsigned int v9; // r15d
  unsigned int j; // edi
  __int64 k; // r14
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( a3 - 1 > 3 || *(_DWORD *)(a1 + 300) == 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 848) || (result = EtwpAllocatePmcData(a1), !(_DWORD)result) )
  {
    v7 = *(_QWORD *)(a1 + 848);
    if ( *(_DWORD *)(v7 + 28) )
    {
      return 3221226243LL;
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v12[8] = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_DWORD *)(v7 + 4 * i) = *(_DWORD *)(a2 + 4 * i);
      }
      v9 = 0;
      for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
      {
        v9 = off_1402F24E0();
        if ( v9 )
          break;
      }
      if ( v9 )
      {
        for ( k = 0LL; (unsigned int)k < j; k = (unsigned int)(k + 1) )
        {
          off_1402F24F0(*(POPLOCK *)(v7 + 8 * k + 32));
          *(_QWORD *)(v7 + 8 * k + 32) = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 28) = a3;
        _InterlockedOr(v12, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x800u);
      }
      return v9;
    }
  }
  return result;
}
