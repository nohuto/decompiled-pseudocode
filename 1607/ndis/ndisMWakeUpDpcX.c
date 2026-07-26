/*
 * XREFs of ndisMWakeUpDpcX @ 0x1C000F6E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ndisSetWakeUpTimer @ 0x1C001B638 (ndisSetWakeUpTimer.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisMWakeUpDpcX(
        PVOID SystemSpecific1,
        unsigned int *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // di
  __int64 Clock; // r12
  char v7; // r14
  char v8; // r15
  int v9; // eax
  KIRQL v10; // r13
  __int64 v11; // rdi
  _WORD *v12; // rdx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r10
  unsigned __int8 v19; // r9
  _BYTE *v20; // rcx
  unsigned __int8 v21; // cl
  int v22; // eax
  __int64 v23; // rax

  v5 = 0;
  Clock = 0LL;
  v7 = 1;
  if ( HIBYTE(dword_1C008AE58) )
  {
    v8 = 1;
    ndisTraceDpcStart(FunctionContext, 4LL);
    Clock = WmiGetClock(0LL, 0LL, v15);
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
    goto LABEL_42;
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  FunctionContext[464] = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)FunctionContext + 562);
  if ( !*((_BYTE *)FunctionContext + 4508) )
  {
    v11 = *((_QWORD *)FunctionContext + 619);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 1) )
      {
        if ( *(_BYTE *)(v11 + 1) == 1 )
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 5320), 1u);
      }
      else
      {
        v12 = 0LL;
        if ( _bittestandset((signed __int32 *)(v11 + 24), 0x13u) )
        {
          v16 = *(_QWORD *)(v11 + 8);
          v17 = -1;
          if ( !v16 )
            goto LABEL_50;
          v18 = *(_BYTE *)(v11 + 3);
          v19 = 0;
          if ( !v18 )
            goto LABEL_50;
          do
          {
            v20 = (_BYTE *)(v16 + 2LL * v19);
            if ( *v20 == 83 )
            {
              if ( v20[1] != 0xFF )
              {
                ++v20[1];
                goto LABEL_9;
              }
            }
            else if ( !v20[1] )
            {
              v12 = (_WORD *)(v16 + 2LL * v19);
            }
            ++v19;
          }
          while ( v19 < v18 );
          if ( v12 )
          {
            *v12 = 339;
          }
          else
          {
LABEL_50:
            if ( !*(_BYTE *)(v11 + 1) )
            {
              v21 = *(_BYTE *)(v11 + 3);
              if ( v21 == 0xFF )
              {
                ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)v11);
                *(_BYTE *)(v11 + 1) = 2;
              }
              else
              {
                if ( (unsigned int)v21 + 2 <= 0xFF )
                  v17 = v21 + 2;
                ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)v11, v17);
              }
            }
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v11);
          }
        }
      }
    }
LABEL_9:
    if ( FunctionContext[1126]++ != -1 )
      goto LABEL_10;
    FunctionContext[1126] = -1;
  }
  v7 = 0;
LABEL_10:
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(12LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, FunctionContext, FunctionContext[1126]);
  KeReleaseSpinLock((PKSPIN_LOCK)FunctionContext + 562, v10);
  if ( v7 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)FunctionContext + 492, 1, 0) )
      ndisDereferenceMiniport((__int64)FunctionContext);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(FunctionContext + 484), CriticalWorkQueue);
    goto LABEL_15;
  }
  v5 = 1;
LABEL_42:
  KeSetEvent((PRKEVENT)(FunctionContext + 478), 0, 0);
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
    *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
    v22 = FunctionContext[30];
    FunctionContext[464] = 656301;
    if ( v22 >= 0 && (FunctionContext[31] & 0x20080000) == 0 )
      ndisSetWakeUpTimer(FunctionContext);
    *((_QWORD *)FunctionContext + 65) = 0LL;
    FunctionContext[464] = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  }
LABEL_15:
  if ( v8 )
  {
    v23 = WmiGetClock(0LL, 0LL, v14);
    ndisTraceDpcEnd(FunctionContext, 4LL, v23 - Clock);
  }
}
