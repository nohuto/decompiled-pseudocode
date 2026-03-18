/*
 * XREFs of MiStoreEvictThread @ 0x140170980
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForMultipleObjects @ 0x14009F320 (KeWaitForMultipleObjects.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiStoreEvictThread(_DWORD *StartContext)
{
  int v2; // ebx
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rbx
  int v5; // r14d
  unsigned int v6; // eax
  __int64 *v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // si
  unsigned int v10; // edi
  signed __int32 v11; // eax
  _QWORD v12[2]; // [rsp+40h] [rbp-128h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-108h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+F0h] [rbp-78h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  KeWaitForSingleObject(StartContext + 2, WrKernel, 0, 0, 0LL);
  v2 = StartContext[8];
  v3 = *(_QWORD *)StartContext;
  ExFreePoolWithTag(StartContext, 0);
  if ( !v2 )
  {
    KeInitializeTimer2((__int64)v14, 0LL, 0LL, 8);
    v12[1] = -1LL;
    v12[0] = 0LL;
    KeSetTimer2((__int64)v14, -600000000LL, 600000000LL, (__int64)v12);
    Object[1] = v14;
    Object[0] = (PVOID)(v3 + 1080);
    v4 = (volatile signed __int32 *)(v3 + 1152);
    while ( 1 )
    {
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrVirtualMemory, 0, 0, 0LL, &WaitBlockArray) )
        KeResetEvent((PRKEVENT)(v3 + 1080));
      while ( 1 )
      {
        v5 = *(_DWORD *)(v3 + 1056);
        v6 = *(_DWORD *)(v3 + 5336);
        if ( v6 )
        {
          v7 = (__int64 *)(v3 + 5344);
          v8 = v6;
          do
          {
            if ( (*(_BYTE *)(*v7 + 164) & 0x40) != 0 )
              MiStoreEvictPageFile(*v7);
            ++v7;
            --v8;
          }
          while ( v8 );
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3 + 1152);
        }
        else
        {
          v10 = 0;
          if ( _interlockedbittestandset(v4, 0x1Fu) )
            v10 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v3 + 1152));
          while ( 1 )
          {
            v11 = *v4;
            if ( (*v4 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v11 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v4, v11 | 0x40000000, v11);
            if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v10);
          }
        }
        if ( v5 == *(_DWORD *)(v3 + 1056) )
          break;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 1152, retaddr);
        else
          *v4 = 0;
        __writecr8(CurrentIrql);
      }
      if ( v5 )
      {
        *(_DWORD *)(v3 + 1056) = 0;
        KeSetEvent((PRKEVENT)(v3 + 1104), 0, 0);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 1152, retaddr);
      else
        *v4 = 0;
      __writecr8(CurrentIrql);
    }
  }
}
