/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x1C001A42C
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C001A03C (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0040BB0 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // rsi
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // r15
  KIRQL v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rbp
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD **v13; // rax
  _QWORD *v14; // rbx
  IRP *v16; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  PVOID PoolWithTag; // rax
  _QWORD *v22; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 192);
  v23 = &v22;
  v3 = 0;
  v22 = &v22;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v5 = (__int64 *)AcpiThermalList;
  v6 = v4;
  while ( v5 != &AcpiThermalList )
  {
    v7 = v5 - 21;
    v5 = (__int64 *)*v5;
    v8 = v7[23];
    if ( ACPIInternalGetDeviceExtension(*(_QWORD *)(v8 + 40)) == a1 )
    {
      v9 = *(_DWORD *)(v8 + 24);
      if ( v9 == 2703488 )
      {
        if ( _InterlockedExchange64(v7 + 13, 0LL) )
        {
          *(_DWORD *)(a1 + 184) |= 0x20000000u;
          v19 = v7[3];
          *(_OWORD *)v19 = *(_OWORD *)v1;
          *(_OWORD *)(v19 + 16) = *(_OWORD *)(v1 + 16);
          *(_OWORD *)(v19 + 32) = *(_OWORD *)(v1 + 32);
          *(_OWORD *)(v19 + 48) = *(_OWORD *)(v1 + 48);
          *(_OWORD *)(v19 + 64) = *(_OWORD *)(v1 + 64);
          *(_QWORD *)(v19 + 80) = *(_QWORD *)(v1 + 80);
          v7[7] = 88LL;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v9 == 2703512 )
        {
          v20 = v7[3];
          *(_QWORD *)v20 = 0LL;
          *(_QWORD *)(v20 + 8) = 0LL;
          if ( *(_QWORD *)(v1 + 312) )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(v1 + 306), 0x54706341u);
            *(_QWORD *)(v20 + 8) = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_WORD *)v20 = *(_WORD *)(v1 + 304);
              *(_WORD *)(v20 + 2) = *(_WORD *)(v1 + 306);
              memmove(PoolWithTag, *(const void **)(v1 + 312), *(unsigned __int16 *)(v1 + 306));
            }
          }
          v7[7] = 16LL;
        }
        else
        {
          v7[7] = 0LL;
        }
LABEL_7:
        *((_DWORD *)v7 + 12) = 0;
        v10 = v7 + 21;
        v11 = *v10;
        v12 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = (_QWORD **)v23;
        *v10 = &v22;
        v10[1] = v13;
        if ( *v13 != &v22 )
          __fastfail(3u);
        *v13 = v10;
        v23 = v10;
      }
    }
  }
  KeReleaseSpinLock(&AcpiThermalLock, v6);
  v14 = v22;
  while ( v14 != &v22 )
  {
    v16 = (IRP *)(v14 - 21);
    v14 = (_QWORD *)*v14;
    Flink = v16->Tail.Overlay.ListEntry.Flink;
    Blink = v16->Tail.Overlay.ListEntry.Blink;
    if ( (void **)Flink->Blink != &v16->Tail.CompletionKey + 6 || (void **)Blink->Flink != &v16->Tail.CompletionKey + 6 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    IofCompleteRequest(v16, 0);
    v3 = 1;
  }
  return v3;
}
