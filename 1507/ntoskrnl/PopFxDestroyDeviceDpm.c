/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1402379F4
 * Callers:
 *     PoFxUnregisterDevice @ 0x1406B37CC (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PopFxDestroyDeviceCommon @ 0x1402379C8 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 i; // rsi
  __int64 v8; // rbp
  void *v9; // rcx

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x746C6644u);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    pIoFreeIrp(v6);
  if ( *(_QWORD *)(a2 + 624) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 620); i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 624) + 8 * i);
      v9 = *(void **)(v8 + 248);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x4D584650u);
        *(_QWORD *)(v8 + 248) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a2 + 624), 0x4D584650u);
    *(_QWORD *)(a2 + 624) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( (*(_DWORD *)(a1 + 296) & 0x4000) != 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a2 + 248), 0, 0);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
  else
  {
    PopFxDestroyDeviceCommon((PVOID *)a2);
  }
}
