/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C000F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisSetWakeUpTimer @ 0x1C002497C (ndisSetWakeUpTimer.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C004ADAC (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004AE8C (ndisTraceDpcStart.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        unsigned int *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  __int64 Clock; // r15
  char v5; // si
  char v7; // bp
  char v8; // r14
  int v9; // eax
  KIRQL v10; // r12
  struct _NDIS_REFCOUNT_BLOCK *v11; // rcx
  int v13; // eax
  __int64 v14; // rax

  Clock = 0LL;
  v5 = 0;
  v7 = 1;
  if ( HIBYTE(dword_1C0085018) )
  {
    v8 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v8 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  v9 = FunctionContext[30];
  FunctionContext[464] = 656250;
  if ( v9 < 0 || (FunctionContext[31] & 0x20080000) != 0 )
  {
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    goto LABEL_22;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  FunctionContext[464] = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 562);
  if ( !*((_BYTE *)FunctionContext + 4508) )
  {
    v11 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)FunctionContext + 619);
    if ( v11 )
      ndisReferenceWithTag(v11, 0x51u);
    if ( FunctionContext[1126]++ != -1 )
      goto LABEL_9;
    FunctionContext[1126] = -1;
  }
  v7 = 0;
LABEL_9:
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(12LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, FunctionContext, FunctionContext[1126]);
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 562, v10);
  if ( v7 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
      ndisDereferenceMiniport((__int64)FunctionContext, 0x51u);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 484), CriticalWorkQueue);
    goto LABEL_14;
  }
  v5 = 1;
LABEL_22:
  KeSetEvent((PRKEVENT)(FunctionContext + 478), 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    v13 = FunctionContext[30];
    FunctionContext[464] = 656301;
    if ( v13 >= 0 && (FunctionContext[31] & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
LABEL_14:
  if ( v8 )
  {
    v14 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd(FunctionContext, 4LL, v14 - Clock);
  }
}
