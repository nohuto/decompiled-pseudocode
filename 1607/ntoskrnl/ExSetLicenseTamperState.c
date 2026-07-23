/*
 * XREFs of ExSetLicenseTamperState @ 0x1406AE358
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 *     sub_1404D3608 @ 0x1404D3608 (sub_1404D3608.c)
 */

void __fastcall ExSetLicenseTamperState(int a1)
{
  char v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  int v7; // edi
  int KernelDataProtection; // eax
  unsigned __int64 v9; // r9
  int updated; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // [rsp+20h] [rbp-79h] BYREF
  __int128 v16; // [rsp+30h] [rbp-69h]
  __int128 v17; // [rsp+40h] [rbp-59h]
  _OWORD v18[3]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v19[8]; // [rsp+80h] [rbp-19h] BYREF
  int v20; // [rsp+88h] [rbp-11h]
  _BYTE v21[48]; // [rsp+B0h] [rbp+17h] BYREF

  if ( a1 )
  {
    v2 = 1;
    if ( a1 != 3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140747B20, 0LL, 0);
      v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140747B20, 0LL);
      v6 = v4;
      if ( v5 )
        ExfAcquirePushLockExclusiveEx(&qword_140747B20, v4, (ULONG_PTR)&qword_140747B20);
      if ( v6 )
        v6[26] |= 1u;
      if ( Data )
      {
        KernelDataProtection = ExpGetKernelDataProtection(v18);
        if ( KernelDataProtection < 0 )
        {
          v7 = 4;
          if ( KernelDataProtection == -1073741275 )
          {
            LOBYTE(v9) = -1;
            if ( Data )
            {
              *(_QWORD *)&v15 = 0LL;
              v16 = 0uLL;
              DWORD2(v15) = 4;
              *(_QWORD *)&v17 = 0LL;
              BYTE8(v17) = 1;
              updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v15);
              if ( updated
                || (_DWORD)v11
                && (16 * (unsigned __int64)(unsigned int)v11 > v9
                 || (updated = ExpLicUpdateChecksum((__int64)qword_1407494C0, v11, &v15)) != 0) )
              {
                *(_QWORD *)&v15 = 0LL;
                updated = 0;
                DWORD2(v15) = 4;
              }
              v18[0] = v15;
              v18[1] = v16;
              v18[2] = v17;
            }
            else
            {
              updated = -1073741811;
            }
            if ( updated >= 0 )
            {
              DWORD2(v18[0]) = 4;
              ExpSetKernelDataProtection((__int64)v18, v9, 0);
            }
          }
        }
        else
        {
          v7 = DWORD2(v18[0]);
        }
      }
      else
      {
        v7 = dword_1407470B4;
      }
      dword_1407470B4 = a1;
      v20 = a1;
      if ( v7 )
        v2 = 0;
      ExpSetKernelDataProtection((__int64)v19, 2, 0);
      v21[40] = 0;
      ExpSetKernelDataProtection((__int64)v21, 32, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140747B20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140747B20);
      KeAbPostRelease((ULONG_PTR)&qword_140747B20);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
      if ( v2 )
        sub_1404D3608();
    }
  }
}
