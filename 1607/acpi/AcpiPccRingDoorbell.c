/*
 * XREFs of AcpiPccRingDoorbell @ 0x1C0052850
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x1C0052410 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0052A2C (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0052AD8 (WriteIoMemRaw.c)
 */

void __fastcall AcpiPccRingDoorbell(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // al
  unsigned int v7; // r8d
  int v8; // edx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rdx
  unsigned __int64 IoMemRaw; // rax
  char v12; // cl
  char v13; // cl
  unsigned __int8 v14; // al
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // cl
  __int64 v18; // r9

  v4 = (KSPIN_LOCK *)(DeferredContext + 520);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DeferredContext + 65);
  v7 = *(_DWORD *)DeferredContext;
  *((_DWORD *)DeferredContext + 128) = 0;
  v8 = (v7 >> 2) & 0xF;
  if ( ((v8 - 7) & 0xFFFFFFF9) == 0 && v8 != 13 )
    *(_DWORD *)DeferredContext = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * (v7 >> 2) - 4)) & 0x3C;
  _InterlockedExchange((volatile __int32 *)DeferredContext + 78, 1);
  KeReleaseSpinLock(v4, v6);
  if ( **((__int16 **)DeferredContext + 5) < 0 )
    _InterlockedIncrement(&AcpiPccSciReferenceCount);
  v9 = DeferredContext[80];
  if ( v9 < 2u )
  {
    IoMemRaw = ReadIoMemRaw(*(_QWORD *)(DeferredContext + 84), v9, (unsigned __int8)DeferredContext[83]);
    v10 = IoMemRaw;
    if ( IoMemRaw )
    {
      v12 = DeferredContext[82];
      if ( v12 )
        v10 = IoMemRaw >> v12;
      v13 = DeferredContext[81];
      if ( (unsigned __int8)v13 < 0x40u )
        v10 &= (1LL << v13) - 1;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v14 = DeferredContext[80];
  v15 = *((_QWORD *)DeferredContext + 7) | v10 & *((_QWORD *)DeferredContext + 8);
  if ( v14 <= 1u )
  {
    if ( DeferredContext[82] )
    {
      v16 = ReadIoMemRaw(*(_QWORD *)(DeferredContext + 84), v14, (unsigned __int8)DeferredContext[83]);
      v17 = DeferredContext[82];
      v18 = (__int64)((1 << DeferredContext[81]) - 1) << v17;
      v15 = v16 & ~v18 | v18 & (v15 << v17);
    }
    WriteIoMemRaw(
      *(_QWORD *)(DeferredContext + 84),
      (unsigned __int8)DeferredContext[80],
      (unsigned __int8)DeferredContext[83],
      v15);
  }
  KeSetTimer((PKTIMER)DeferredContext + 5, (LARGE_INTEGER)-10000LL, (PKDPC)DeferredContext + 6);
}
