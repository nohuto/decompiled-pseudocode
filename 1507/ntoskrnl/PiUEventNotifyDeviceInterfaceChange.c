/*
 * XREFs of PiUEventNotifyDeviceInterfaceChange @ 0x14045F1F0
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14045D8BC (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashGuidIntoBucket @ 0x14000873C (PiUEventHashGuidIntoBucket.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiUEventNotifyClient @ 0x14045F770 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14045FB50 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInterfaceChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // si
  __int128 *v10; // r15
  unsigned int v11; // esi
  _QWORD **v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // rbp
  unsigned __int8 v15; // bl
  signed __int32 v16; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v20 = 0LL;
  v6 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v6 )
    goto LABEL_4;
  v19 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v19 )
    v19 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( !v19 )
  {
LABEL_4:
    v7 = KeAbPreAcquire((ULONG_PTR)&PiUEventClientRegistrationListLock, 0LL, 0LL, a4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventClientRegistrationListLock, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    qword_14034AB68 = (__int64)KeGetCurrentThread();
    dword_14034AB90 = CurrentIrql;
    v10 = &v20;
    *((_QWORD *)&v20 + 1) = &unk_14034AC70;
    v11 = 0;
    *(_QWORD *)&v20 = (char *)&PiUEventDevInterfaceClientList
                    + 16 * (unsigned int)PiUEventHashGuidIntoBucket((unsigned __int8 *)(a1 + 120));
    do
    {
      v12 = *(_QWORD ***)v10;
      v13 = **(_QWORD ***)v10;
      if ( v13 != *(_QWORD **)v10 )
      {
        do
        {
          v14 = v13;
          v13 = (_QWORD *)*v13;
          if ( !v11 )
          {
            v18 = *(_QWORD *)(a1 + 120) - v14[3];
            if ( !v18 )
              v18 = *(_QWORD *)(a1 + 128) - v14[4];
            if ( v18 )
              continue;
          }
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v14) )
            v4 = PiUEventNotifyClient(a1, v14);
        }
        while ( v13 != v12 );
      }
      ++v11;
      v10 = (__int128 *)((char *)v10 + 8);
    }
    while ( v11 < 2 );
    qword_14034AB68 = 0LL;
    v15 = dword_14034AB90;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v16);
    __writecr8(v15);
    KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
  }
  return v4;
}
