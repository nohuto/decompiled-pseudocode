/*
 * XREFs of WheapPredictiveFailureAnalysis @ 0x1406BBA80
 * Callers:
 *     WheapProcessWorkQueueItem @ 0x140230700 (WheapProcessWorkQueueItem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1406BA650 (WheaAttemptPhysicalPageOffline.c)
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 */

void __fastcall WheapPredictiveFailureAnalysis(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v3; // r8
  unsigned int v4; // r9d
  unsigned int *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rcx
  signed __int8 v11; // cf
  _BYTE *v12; // rbx

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
          v4 = 0;
          v5 = (unsigned int *)(a1 + 168);
          while ( (v5[3] & 1) == 0 )
          {
            ++v4;
            v5 += 18;
            if ( v4 >= v3 )
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
              v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
              v11 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
              v12 = v9;
              if ( v11 )
                ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v9, (ULONG_PTR)&WheapPfaLock);
              if ( v12 )
                v12[26] |= 1u;
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
