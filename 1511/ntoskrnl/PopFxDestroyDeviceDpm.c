/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1401E9E5C
 * Callers:
 *     PoFxUnregisterDevice @ 0x140634148 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 *     PopFxDestroyDeviceCommon @ 0x1401E9E30 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 240), (PVOID)0x70466F50, 0x20u);
    *(_DWORD *)(a1 + 296) &= ~0x4000u;
  }
  else
  {
    PopFxDestroyDeviceCommon((PVOID *)a2);
  }
}
