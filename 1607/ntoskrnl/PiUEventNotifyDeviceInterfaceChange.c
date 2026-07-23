/*
 * XREFs of PiUEventNotifyDeviceInterfaceChange @ 0x140488F5C
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140489744 (PiUEventProcessEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PiUEventHashGuidIntoBucket @ 0x140085E98 (PiUEventHashGuidIntoBucket.c)
 *     PiUEventNotifyClient @ 0x14048A9FC (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14048AB98 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInterfaceChange(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v3; // rax
  __int128 *v4; // r15
  unsigned int v5; // esi
  _QWORD **v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rbp
  __int64 v11; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v12 = 0LL;
  v3 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v3 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v11 )
  {
LABEL_4:
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = &v12;
    *((_QWORD *)&v12 + 1) = &unk_14031FD30;
    v5 = 0;
    *(_QWORD *)&v12 = (char *)&PiUEventDevInterfaceClientList
                    + 16 * (unsigned int)PiUEventHashGuidIntoBucket((unsigned __int8 *)(a1 + 120));
    do
    {
      v6 = *(_QWORD ***)v4;
      v7 = **(_QWORD ***)v4;
      while ( v7 != v6 )
      {
        v9 = v7;
        v7 = (_QWORD *)*v7;
        if ( !v5 )
        {
          v8 = *(_QWORD *)(a1 + 120) - v9[3];
          if ( !v8 )
            v8 = *(_QWORD *)(a1 + 128) - v9[4];
          if ( v8 )
            continue;
        }
        if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v9) )
          v1 = PiUEventNotifyClient(a1, v9);
      }
      ++v5;
      v4 = (__int128 *)((char *)v4 + 8);
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
