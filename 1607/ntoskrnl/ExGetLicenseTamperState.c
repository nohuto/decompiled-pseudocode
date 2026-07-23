/*
 * XREFs of ExGetLicenseTamperState @ 0x1406ADD6C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 */

bool __fastcall ExGetLicenseTamperState(int *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbx
  int v4; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v6; // r9
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h]
  _OWORD v16[3]; // [rsp+50h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_140747B20, v3, (ULONG_PTR)&qword_140747B20);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v16);
    if ( KernelDataProtection < 0 )
    {
      v4 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v6) = -1;
        if ( Data )
        {
          *(_QWORD *)&v13 = 0LL;
          v14 = 0uLL;
          DWORD2(v13) = 4;
          *(_QWORD *)&v15 = 0LL;
          BYTE8(v15) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v13);
          if ( updated
            || (_DWORD)v8
            && (16 * (unsigned __int64)(unsigned int)v8 > v6
             || (updated = ExpLicUpdateChecksum((__int64)qword_1407494C0, v8, &v13)) != 0) )
          {
            *(_QWORD *)&v13 = 0LL;
            updated = 0;
            DWORD2(v13) = 4;
          }
          v16[0] = v13;
          v16[1] = v14;
          v16[2] = v15;
        }
        else
        {
          updated = -1073741811;
        }
        if ( updated >= 0 )
        {
          DWORD2(v16[0]) = 4;
          ExpSetKernelDataProtection((__int64)v16, v6, 0);
        }
      }
    }
    else
    {
      v4 = DWORD2(v16[0]);
    }
  }
  else
  {
    v4 = dword_1407470B4;
  }
  if ( a1 )
    *a1 = v4;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140747B20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140747B20);
  KeAbPostRelease((ULONG_PTR)&qword_140747B20);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v4 != 0;
}
