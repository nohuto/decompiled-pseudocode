/*
 * XREFs of PiUEventNotifyDeviceInstanceChange @ 0x1403EF800
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

__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  int v4; // edx
  const WCHAR *v5; // rsi
  __int128 *v6; // r15
  unsigned int v7; // ebp
  _QWORD **v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // r13
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v2 = 0;
  v12 = 0LL;
  v4 = v1 - 4;
  if ( !v4 || (unsigned int)(v4 - 6) <= 1 )
  {
    v5 = (const WCHAR *)(a1 + 120);
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v6 = &v12;
    *(_QWORD *)&v12 = (char *)&PiUEventDevInstanceClientList + 16 * (unsigned int)PiUEventHashStringIntoBucket(v5);
    v7 = 0;
    *((_QWORD *)&v12 + 1) = &unk_14031FDF0;
    do
    {
      v8 = *(_QWORD ***)v6;
      v9 = **(_QWORD ***)v6;
      while ( v9 != v8 )
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
        if ( v7 || !wcsicmp(v5, *(const wchar_t **)(v10[3] + 16LL)) )
        {
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v10) )
            v2 = PiUEventNotifyClient(a1, v10);
        }
      }
      ++v7;
      v6 = (__int128 *)((char *)v6 + 8);
    }
    while ( v7 < 2 );
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  return v2;
}
