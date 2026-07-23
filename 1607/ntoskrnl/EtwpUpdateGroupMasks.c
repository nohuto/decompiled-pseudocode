/*
 * XREFs of EtwpUpdateGroupMasks @ 0x1404962BC
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x140496220 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     EtwpLogGroupMask @ 0x140496518 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140496594 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x14049673C (EtwpLogAlwaysPresentRundown.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404967A0 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x140496E88 (EtwpMapEnableFlags.c)
 *     EtwpCCSwapStop @ 0x1404D2660 (EtwpCCSwapStop.c)
 *     EtwpCCSwapStart @ 0x140546E24 (EtwpCCSwapStart.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  _BYTE *v6; // rax
  __int64 v7; // rdx
  _BYTE *v8; // rsi
  unsigned int v9; // r13d
  __int64 v10; // r12
  char *v11; // rsi
  int v12; // eax
  int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // r11
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ebp
  char v19; // r12
  int updated; // r15d
  __int64 v21; // r8
  int v23; // eax
  int v24; // eax
  _BYTE v25[32]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v26[32]; // [rsp+40h] [rbp-68h] BYREF

  v2 = a2;
  v4 = a2;
  LOBYTE(a2) = 1;
  EtwpMapEnableFlags(v4, a2);
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( (v5 & 1) != 0 || (v5 & 0x10) != 0 )
      *(_DWORD *)v2 |= 0x200u;
    if ( (v5 & 0x402) != 0 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
  }
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 86), 0LL, 0);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 86, v6, (ULONG_PTR)(a1 + 86));
  if ( v8 )
    v8[26] |= 1u;
  v9 = *((unsigned __int8 *)a1 + 818);
  v10 = 32LL * *((unsigned __int8 *)a1 + 818);
  v11 = (char *)&EtwpGroupMasks + v10;
  if ( (_UNKNOWN *)((char *)&EtwpGroupMasks + v10) )
  {
    v12 = *((_DWORD *)v11 + 1);
    if ( (v12 & 4) != 0 )
    {
      if ( v11 )
      {
        if ( (v12 & 0x100) != 0 )
        {
          if ( !v2 || (v23 = *(_DWORD *)(v2 + 4), (v23 & 4) == 0) || (v23 & 0x100) == 0 )
          {
            LOBYTE(v7) = 1;
            EtwpCCSwapStop(*((unsigned int *)a1 + 50), v7);
LABEL_13:
            v14 = (_DWORD *)v2;
            v15 = 8LL;
            do
            {
              v16 = *(_DWORD *)((char *)v14 + (_QWORD)&EtwpGroupMasks + v10 - v2);
              v17 = v16 & ~*v14;
              *(_DWORD *)&v26[(_QWORD)v14 - v2] = *v14 & ~v16;
              *(_DWORD *)&v25[(_QWORD)v14++ - v2] = v17;
              --v15;
            }
            while ( v15 );
            v18 = *(_DWORD *)a1;
            EtwpLogGroupMask(*(unsigned int *)a1, v11, 32LL);
            if ( (*((_DWORD *)a1 + 3) & 0x400) != 0 )
            {
              v19 = 1;
            }
            else
            {
              v19 = 0;
              EtwpKernelTraceRundown(v25, v18, 0LL);
            }
            *(_OWORD *)v11 = *(_OWORD *)v2;
            *((_OWORD *)v11 + 1) = *(_OWORD *)(v2 + 16);
            updated = EtwpUpdateKernelGroupMasks(v18, v9);
            if ( updated >= 0 )
            {
              EtwpLogGroupMask(v18, v2, 5LL);
              if ( !v19 || (a1[102] & 2) != 0 )
              {
                LOBYTE(v21) = 1;
                EtwpKernelTraceRundown(v26, v18, v21);
              }
            }
            EtwpLogAlwaysPresentRundown(v18);
            goto LABEL_21;
          }
        }
      }
    }
  }
  if ( !v2 )
    goto LABEL_13;
  v13 = *(_DWORD *)(v2 + 4);
  if ( (v13 & 4) == 0 )
    goto LABEL_13;
  if ( (v13 & 0x100) == 0 )
    goto LABEL_13;
  if ( v11 )
  {
    v24 = *((_DWORD *)v11 + 1);
    if ( (v24 & 4) != 0 && (v24 & 0x100) != 0 )
      goto LABEL_13;
  }
  updated = EtwpCCSwapStart(*((unsigned int *)a1 + 50));
  if ( updated >= 0 )
    goto LABEL_13;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
  KeAbPostRelease((ULONG_PTR)(a1 + 86));
  return (unsigned int)updated;
}
