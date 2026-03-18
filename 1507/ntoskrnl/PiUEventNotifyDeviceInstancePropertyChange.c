/*
 * XREFs of PiUEventNotifyDeviceInstancePropertyChange @ 0x1405B2828
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14045D8BC (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140008200 (PiUEventHashStringIntoBucket.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x14045F770 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x14045FB50 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstancePropertyChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  bool v5; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // di
  __int128 *v10; // r14
  unsigned int v11; // edi
  _QWORD **v12; // rsi
  _QWORD *v13; // rbx
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax
  __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 88) == 9;
  v20 = 0LL;
  if ( v5 )
  {
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
    *(_QWORD *)&v20 = (char *)&PiUEventDevInstancePropertyClientList
                    + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v11 = 0;
    *((_QWORD *)&v20 + 1) = &unk_14034AE30;
    do
    {
      v12 = *(_QWORD ***)v10;
      v13 = **(_QWORD ***)v10;
      if ( v13 != *(_QWORD **)v10 )
      {
        do
        {
          v17 = (__int64)v13;
          v13 = (_QWORD *)*v13;
          if ( (v11 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(*(_QWORD *)(v17 + 24) + 16LL)))
            && PiUEventApplyAdditionalFilters(a1, v17) )
          {
            v4 = PiUEventNotifyClient(a1, v17, v18, v19);
          }
        }
        while ( v13 != v12 );
      }
      ++v11;
      v10 = (__int128 *)((char *)v10 + 8);
    }
    while ( v11 < 2 );
    qword_14034AB68 = 0LL;
    v14 = dword_14034AB90;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v15);
    __writecr8(v14);
    KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
  }
  return v4;
}
