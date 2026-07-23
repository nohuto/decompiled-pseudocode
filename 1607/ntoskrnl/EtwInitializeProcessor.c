/*
 * XREFs of EtwInitializeProcessor @ 0x1405531DC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpInitializeStackTracing @ 0x140553288 (EtwpInitializeStackTracing.c)
 *     EtwpInitializeActivityIdSeed @ 0x140553320 (EtwpInitializeActivityIdSeed.c)
 */

__int64 __fastcall EtwInitializeProcessor(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  unsigned int v3; // ebx
  _DWORD *v4; // rsi
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rdi
  PVOID v8; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB40uLL, 0x70777445u);
  v3 = 0;
  *(_QWORD *)(a1 + 24536) = PoolWithTag;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB40uLL);
    *v4 = *(_DWORD *)(a1 + 36);
    EtwpInitializeActivityIdSeed(v4 + 272, *(unsigned int *)(a1 + 36));
    EtwpInitializeStackTracing(v4 + 276, *(unsigned int *)(a1 + 36));
    v5 = v4 + 712;
    v6 = 0LL;
    while ( 1 )
    {
      if ( CCSwapNumLoggersPerClockType[v6] )
      {
        if ( !*v5 )
        {
          v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
          *v5 = v8;
          if ( !v8 )
            break;
        }
      }
      ++v6;
      ++v5;
      if ( v6 >= 4 )
        return v3;
    }
  }
  return (unsigned int)-1073741801;
}
