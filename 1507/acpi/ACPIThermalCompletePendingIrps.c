/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x1C001A1EC
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041100 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // r15
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // rsi
  KIRQL v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  _QWORD **v13; // rcx
  _QWORD *v14; // rbx
  IRP *v16; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v19; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v20; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 192);
  v20 = &v19;
  v3 = 0;
  v19 = &v19;
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
      if ( *(_DWORD *)(v8 + 24) != 2703488 )
      {
        v7[7] = 0LL;
        goto LABEL_7;
      }
      if ( _InterlockedExchange64(v7 + 13, 0LL) )
      {
        *(_DWORD *)(a1 + 184) |= 0x20000000u;
        v9 = v7[3];
        *(_OWORD *)v9 = *(_OWORD *)v1;
        *(_OWORD *)(v9 + 16) = *(_OWORD *)(v1 + 16);
        *(_OWORD *)(v9 + 32) = *(_OWORD *)(v1 + 32);
        *(_OWORD *)(v9 + 48) = *(_OWORD *)(v1 + 48);
        *(_OWORD *)(v9 + 64) = *(_OWORD *)(v1 + 64);
        *(_QWORD *)(v9 + 80) = *(_QWORD *)(v1 + 80);
        v7[7] = 88LL;
LABEL_7:
        v10 = v7 + 21;
        *((_DWORD *)v7 + 12) = 0;
        v11 = v7[21];
        v12 = (__int64 *)v7[22];
        if ( *(__int64 **)(v11 + 8) != v7 + 21 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = (_QWORD **)v20;
        *v10 = &v19;
        v7[22] = (__int64)v13;
        if ( *v13 != &v19 )
          __fastfail(3u);
        *v13 = v10;
        v20 = v7 + 21;
      }
    }
  }
  KeReleaseSpinLock(&AcpiThermalLock, v6);
  v14 = v19;
  while ( v14 != &v19 )
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
