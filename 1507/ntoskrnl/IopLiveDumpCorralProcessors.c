/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x1403FEDD4
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1403FEF9C (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1401F8CF8 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1403FF47C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpLockPages @ 0x140677FA8 (IopLiveDumpLockPages.c)
 */

__int64 __fastcall IopLiveDumpCorralProcessors(char *DeferredContext)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v3; // bp
  unsigned __int64 i; // rbx
  unsigned __int64 v5; // rdx
  int v6; // ecx
  int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)DeferredContext + 2) = 0;
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_DWORD *)DeferredContext + 5) = 0;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  IopLiveDumpLockPages();
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, (PGROUP_AFFINITY)DeferredContext + 6);
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 3) = 1;
  IopLiveDumpTraceSystemQuiesceStart();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  DeferredContext[88] = CurrentIrql;
  KeInitializeDpc((PRKDPC)(DeferredContext + 24), (PKDEFERRED_ROUTINE)IopLiveDumpCorralDpc, DeferredContext);
  DeferredContext[25] = 2;
  v3 = 0;
  for ( i = qword_1403D15E8[0]; ; i = qword_1403D15E8[v3] )
  {
    while ( i )
    {
      _BitScanForward64(&v5, i);
      i &= ~(1LL << v5);
      v6 = KiProcessorNumberToIndexMappingTable[64 * v3 + (unsigned __int8)v5];
      if ( v6 == *((_DWORD *)DeferredContext + 28) )
      {
        _InterlockedAdd((volatile signed __int32 *)DeferredContext + 4, 1u);
      }
      else
      {
        v7 = *((_DWORD *)DeferredContext + 4);
        *((_WORD *)DeferredContext + 13) = (char)v6 + 640;
        KeInsertQueueDpc((PRKDPC)(DeferredContext + 24), 0LL, 0LL);
        v8 = 0;
        while ( v7 == *((_DWORD *)DeferredContext + 4) )
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
      }
    }
    if ( ++v3 >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
      break;
  }
  *((_DWORD *)DeferredContext + 5) = *((_DWORD *)DeferredContext + 4);
  IopLiveDumpInitiateCorralStateChange(DeferredContext, 2LL, 0x140000000uLL);
  PoAllProcIntrDisabled = 1;
  result = IopLiveDumpInitiateCorralStateChange(DeferredContext, 3LL, v9);
  *((_DWORD *)DeferredContext + 2) |= 1u;
  return result;
}
