/*
 * XREFs of EtwpUpdateGroupMasks @ 0x14054A404
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x14054A368 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     EtwpLogGroupMask @ 0x14054A654 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x14054A6C8 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14054A870 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpUpdateKernelGroupMasks @ 0x14054A8A8 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x14054AF88 (EtwpMapEnableFlags.c)
 *     EtwpCCSwapStop @ 0x14054B224 (EtwpCCSwapStop.c)
 *     EtwpCCSwapStart @ 0x14056BADC (EtwpCCSwapStart.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // r13d
  __int64 v12; // r12
  char *v13; // rsi
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // r8
  __int64 v17; // r11
  int v18; // edx
  int v19; // eax
  unsigned int v20; // ebp
  char v21; // r12
  int updated; // r15d
  __int64 v23; // r8
  int v25; // eax
  int v26; // eax
  _BYTE v27[32]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v28[32]; // [rsp+40h] [rbp-68h] BYREF

  v2 = a2;
  v4 = a2;
  LOBYTE(a2) = 1;
  EtwpMapEnableFlags(v4, a2);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 4);
    if ( (v6 & 1) != 0 || (v6 & 0x10) != 0 )
      *(_DWORD *)v2 |= 0x200u;
    if ( (v6 & 0x402) != 0 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
  }
  v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 88), 0LL, 0LL, v5);
  v10 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 176, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 88, v7, (ULONG_PTR)(a1 + 88), v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *((unsigned __int8 *)a1 + 834);
  v12 = 32LL * *((unsigned __int8 *)a1 + 834);
  v13 = (char *)&EtwpGroupMasks + v12;
  if ( (_UNKNOWN *)((char *)&EtwpGroupMasks + v12) )
  {
    v14 = *((_DWORD *)v13 + 1);
    if ( (v14 & 4) != 0 )
    {
      if ( v13 )
      {
        if ( (v14 & 0x100) != 0 )
        {
          if ( !v2 || (v25 = *(_DWORD *)(v2 + 4), (v25 & 4) == 0) || (v25 & 0x100) == 0 )
          {
            LOBYTE(v8) = 1;
            EtwpCCSwapStop(*((unsigned int *)a1 + 54), v8);
LABEL_13:
            v16 = (_DWORD *)v2;
            v17 = 8LL;
            do
            {
              v18 = *(_DWORD *)((char *)v16 + (_QWORD)&EtwpGroupMasks + v12 - v2);
              v19 = v18 & ~*v16;
              *(_DWORD *)&v28[(_QWORD)v16 - v2] = *v16 & ~v18;
              *(_DWORD *)&v27[(_QWORD)v16++ - v2] = v19;
              --v17;
            }
            while ( v17 );
            v20 = *(_DWORD *)a1;
            EtwpLogGroupMask(*(unsigned int *)a1, v13, 32LL);
            if ( (*((_DWORD *)a1 + 3) & 0x400) != 0 )
            {
              v21 = 1;
            }
            else
            {
              v21 = 0;
              EtwpKernelTraceRundown(v27, v20, 0LL);
            }
            *(_OWORD *)v13 = *(_OWORD *)v2;
            *((_OWORD *)v13 + 1) = *(_OWORD *)(v2 + 16);
            updated = EtwpUpdateKernelGroupMasks(v20, v11);
            if ( updated >= 0 )
            {
              EtwpLogGroupMask(v20, v2, 5LL);
              if ( !v21 || (a1[104] & 2) != 0 )
              {
                LOBYTE(v23) = 1;
                EtwpKernelTraceRundown(v28, v20, v23);
              }
            }
            EtwpLogAlwaysPresentRundown(v20);
            goto LABEL_21;
          }
        }
      }
    }
  }
  if ( !v2 )
    goto LABEL_13;
  v15 = *(_DWORD *)(v2 + 4);
  if ( (v15 & 4) == 0 )
    goto LABEL_13;
  if ( (v15 & 0x100) == 0 )
    goto LABEL_13;
  if ( v13 )
  {
    v26 = *((_DWORD *)v13 + 1);
    if ( (v26 & 4) != 0 && (v26 & 0x100) != 0 )
      goto LABEL_13;
  }
  updated = EtwpCCSwapStart(*((unsigned int *)a1 + 54));
  if ( updated >= 0 )
    goto LABEL_13;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 88, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 88);
  KeAbPostRelease((ULONG_PTR)(a1 + 88));
  return (unsigned int)updated;
}
