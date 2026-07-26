/*
 * XREFs of ndisMWakeUpDpc @ 0x1C0060A30
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C001B638 (ndisSetWakeUpTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C005E304 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C005E968 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // di
  __int64 Clock; // r14
  char v7; // si
  __int64 v8; // r8
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  __int16 v12; // cx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C008AE58) )
  {
    v7 = 1;
    ndisTraceDpcStart((__int64)FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v9 = *((_DWORD *)FunctionContext + 30);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  *((_DWORD *)FunctionContext + 464) = 656429;
  if ( v9 >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 && !FunctionContext[89] )
  {
    FunctionContext[89] = 1;
    *((_DWORD *)FunctionContext + 465) = 656448;
    *((_QWORD *)FunctionContext + 233) = KeGetCurrentThread();
    if ( (v9 & 0x300000) != 0 )
      goto LABEL_31;
    if ( *(_QWORD *)(*((_QWORD *)FunctionContext + 477) + 120LL) )
    {
      *((_QWORD *)FunctionContext + 65) = 0LL;
      *((_DWORD *)FunctionContext + 464) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)FunctionContext + 477) + 120LL))(*((_QWORD *)FunctionContext
                                                                                            + 3));
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
      *((_DWORD *)FunctionContext + 464) = 656463;
    }
    v10 = *((_DWORD *)FunctionContext + 30);
    if ( (v10 & 0x1000000) != 0 )
      goto LABEL_31;
    if ( v5 )
    {
      ++*((_WORD *)FunctionContext + 893);
      goto LABEL_27;
    }
    if ( (v10 & 0x1000) == 0 )
    {
      v11 = *((_DWORD *)FunctionContext + 1121);
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 2) != 0 )
        {
          if ( *((_QWORD *)FunctionContext + 277) )
            goto LABEL_26;
        }
        else
        {
          v12 = *((_WORD *)FunctionContext + 911);
          if ( v12 )
            *((_WORD *)FunctionContext + 911) = v12 - 1;
          else
            *((_DWORD *)FunctionContext + 1121) = v11 | 2;
        }
      }
    }
    if ( (v10 & 0x800) == 0 )
    {
      v13 = FunctionContext + 128;
      if ( (_QWORD *)*v13 != v13 )
      {
        v14 = *v13 - 64LL;
        if ( v14 )
        {
          v15 = *(_BYTE *)(v14 + 41);
          if ( (v15 & 0x10) != 0 )
          {
            if ( (v15 & 1) != 0 )
            {
LABEL_26:
              ++*((_WORD *)FunctionContext + 892);
LABEL_27:
              if ( *(_QWORD *)(*((_QWORD *)FunctionContext + 477) + 192LL) )
                ndisMQueueWorkItem((__int64)FunctionContext, 3, 0LL);
              goto LABEL_30;
            }
            *(_BYTE *)(v14 + 41) = v15 | 1;
          }
        }
      }
    }
LABEL_30:
    ndisMProcessDeferred((__int64)FunctionContext);
LABEL_31:
    FunctionContext[89] = 0;
    *((_DWORD *)FunctionContext + 465) = 0;
    *((_QWORD *)FunctionContext + 233) = 0LL;
  }
  KeSetEvent((PRKEVENT)(FunctionContext + 1912), 0, 0);
  if ( *((int *)FunctionContext + 30) >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 )
    ndisSetWakeUpTimer((__int64)FunctionContext);
  if ( v7 )
  {
    v17 = WmiGetClock(0LL, 0LL, v16);
    ndisTraceDpcEnd((__int64)FunctionContext, 4u, v17 - Clock);
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  *((_DWORD *)FunctionContext + 464) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
}
