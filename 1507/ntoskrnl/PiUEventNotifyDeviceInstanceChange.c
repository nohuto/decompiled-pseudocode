/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x1404102D8
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

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  unsigned int v5; // r12d
  int v7; // edx
  const WCHAR *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int128 *v12; // r15
  unsigned int v13; // ebp
  _QWORD **v14; // r14
  _QWORD *v15; // rdi
  unsigned __int8 v16; // bl
  signed __int32 v17; // eax
  _QWORD *v19; // r13
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  v5 = 0;
  v20 = 0LL;
  v7 = v4 - 4;
  if ( !v7 || (unsigned int)(v7 - 6) <= 1 )
  {
    v8 = (const WCHAR *)(a1 + 120);
    v9 = KeAbPreAcquire((ULONG_PTR)&PiUEventClientRegistrationListLock, 0LL, 0LL, a4);
    v10 = v9;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiUEventClientRegistrationListLock, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    qword_14034AB68 = (__int64)KeGetCurrentThread();
    dword_14034AB90 = CurrentIrql;
    v12 = &v20;
    *(_QWORD *)&v20 = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v8);
    v13 = 0;
    *((_QWORD *)&v20 + 1) = &unk_14034AD50;
    do
    {
      v14 = *(_QWORD ***)v12;
      v15 = **(_QWORD ***)v12;
      if ( v15 != *(_QWORD **)v12 )
      {
        do
        {
          v19 = v15;
          v15 = (_QWORD *)*v15;
          if ( (v13 || !wcsicmp(v8, *(const wchar_t **)(v19[3] + 16LL)))
            && (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v19) )
          {
            v5 = PiUEventNotifyClient(a1, v19);
          }
        }
        while ( v15 != v14 );
      }
      ++v13;
      v12 = (__int128 *)((char *)v12 + 8);
    }
    while ( v13 < 2 );
    qword_14034AB68 = 0LL;
    v16 = dword_14034AB90;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&PiUEventClientRegistrationListLock, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiUEventClientRegistrationListLock, v17);
    __writecr8(v16);
    KeAbPostRelease((ULONG_PTR)&PiUEventClientRegistrationListLock);
  }
  return v5;
}
