/*
 * XREFs of ExReArmFastCache @ 0x1406AE194
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 *     sub_1406AF7F8 @ 0x1406AF7F8 (sub_1406AF7F8.c)
 */

__int64 ExReArmFastCache()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  int updated; // edi
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v17[8]; // [rsp+50h] [rbp-38h] BYREF
  int v18[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v1, (ULONG_PTR)&ExpFastCacheUpdateLock);
  if ( v3 )
    v3[26] |= 1u;
  if ( ExpFastCacheReArmed )
  {
    updated = -1073700219;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      updated = sub_1406AF7F8(v5, 0LL);
      if ( updated < 0 )
        break;
      if ( ++v5 >= 5 )
      {
        ExpFastCacheReArmed = 1;
        if ( *(_QWORD *)&qword_140747E48
          || (updated = ExpObtainFastCacheKeyBody((UNICODE_STRING *)&stru_1406E9A88, (PVOID *)&qword_140747E48),
              updated >= 0) )
        {
          v15 = 0LL;
          updated = ExpLicUpdateChecksum((__int64)v16, v6, &v15);
          if ( updated >= 0 )
          {
            v8 = 0LL;
            do
            {
              updated = ExpLicUpdateChecksum((__int64)v17, v8, &v15);
              if ( updated < 0 )
                break;
              v8 = (unsigned int)(v9 + 1);
            }
            while ( (unsigned __int64)(int)v8 < 5 );
          }
          if ( updated >= 0 )
          {
            v20 = 0LL;
            *(_QWORD *)v18 = v7;
            LODWORD(v14) = 24;
            v19 = v15;
            updated = CmSetValueKey(
                        *(__int64 *)&qword_140747E48,
                        (UNICODE_STRING *)&stru_1406E9A78,
                        3,
                        v18,
                        v14,
                        0LL,
                        0);
          }
        }
        break;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return (unsigned int)updated;
}
