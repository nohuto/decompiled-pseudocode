/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x1406FDA34
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x140266DAC (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1406FC5FC (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1406FD5B0 (WheapPfaMemoryCheck.c)
 */

void __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v3; // r8
  __int64 v4; // r9
  unsigned int *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbx

  v1 = a1 + 40;
  if ( !WheapPolicyDisableOffline )
  {
    if ( WheapPfaInitialized )
    {
      v3 = *(_WORD *)(a1 + 50);
      if ( v3 )
      {
        if ( *(_DWORD *)(a1 + 52) == 2 && (*(_BYTE *)(a1 + 144) & 1) == 0 )
        {
          v4 = 0LL;
          v5 = (unsigned int *)(a1 + 168);
          while ( (v5[3] & 1) == 0 )
          {
            v4 = (unsigned int)(v4 + 1);
            v5 += 18;
            if ( (unsigned int)v4 >= v3 )
            {
              v5 = (unsigned int *)(v1 + 128);
              break;
            }
          }
          v6 = *((_QWORD *)v5 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
          if ( !v6 )
            v6 = *((_QWORD *)v5 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
          if ( !v6 )
          {
            v7 = *(_DWORD *)(a1 + 24);
            v8 = v1 + *v5;
            if ( (v7 & 4) != 0 )
            {
              if ( (v7 & 8) != 0 && (*(_BYTE *)v8 & 2) != 0 )
              {
                LOBYTE(v1) = 1;
                WheaAttemptPhysicalPageOffline(*(_QWORD *)(v8 + 16) >> 12, v1, 0LL);
              }
            }
            else
            {
              v9 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0LL, v4);
              v12 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
              v13 = v9;
              if ( v12 )
                ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v9, (ULONG_PTR)&WheapPfaLock, v11);
              if ( v13 )
                *(_BYTE *)(v13 + 26) |= 1u;
              WheapPfaMemoryCheck(v10, v8);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
              KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
            }
          }
        }
      }
    }
  }
}
