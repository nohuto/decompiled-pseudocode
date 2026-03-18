/*
 * XREFs of PiUEventNotifyDeviceInstancePropertyChange @ 0x140575A40
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1403EF31C (PiUEventProcessEventWorker.c)
 * Callees:
 *     PiUEventHashStringIntoBucket @ 0x140007EEC (PiUEventHashStringIntoBucket.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     PiUEventNotifyClient @ 0x1403F0784 (PiUEventNotifyClient.c)
 *     PiUEventApplyAdditionalFilters @ 0x1403F0920 (PiUEventApplyAdditionalFilters.c)
 */

__int64 __fastcall PiUEventNotifyDeviceInstancePropertyChange(__int64 a1)
{
  unsigned int v1; // ebp
  bool v2; // zf
  __int128 *v4; // r15
  unsigned int v5; // edi
  _QWORD **v6; // r14
  _QWORD *v7; // rbx
  __int64 v9; // r13
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 88) == 9;
  v10 = 0LL;
  if ( v2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v4 = &v10;
    *(_QWORD *)&v10 = (char *)&PiUEventDevInstancePropertyClientList
                    + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v5 = 0;
    *((_QWORD *)&v10 + 1) = &unk_14031FED0;
    do
    {
      v6 = *(_QWORD ***)v4;
      v7 = **(_QWORD ***)v4;
      while ( v7 != v6 )
      {
        v9 = (__int64)v7;
        v7 = (_QWORD *)*v7;
        if ( v5 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(*(_QWORD *)(v9 + 24) + 16LL)) )
        {
          if ( PiUEventApplyAdditionalFilters(a1, v9) )
            v1 = PiUEventNotifyClient(a1, v9);
        }
      }
      ++v5;
      v4 = (__int128 *)((char *)v4 + 8);
    }
    while ( v5 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v1;
}
