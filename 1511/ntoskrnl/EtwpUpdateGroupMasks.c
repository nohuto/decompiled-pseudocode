/*
 * XREFs of EtwpUpdateGroupMasks @ 0x140500298
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x1405001FC (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404B8124 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x1404CFC18 (EtwpMapEnableFlags.c)
 *     EtwpLogGroupMask @ 0x1405004F4 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140500568 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140500714 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpCCSwapStop @ 0x140501094 (EtwpCCSwapStop.c)
 *     EtwpCCSwapStart @ 0x140501110 (EtwpCCSwapStart.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(unsigned __int64 *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r13d
  __int64 v9; // r12
  char *v10; // rsi
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // r8
  __int64 v14; // r11
  int v15; // edx
  int v16; // eax
  unsigned int v17; // ebp
  char v18; // r12
  int updated; // r15d
  __int64 v20; // r8
  int v22; // eax
  int v23; // eax
  _BYTE v24[32]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-68h] BYREF

  EtwpMapEnableFlags(a2, 1);
  if ( a2 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( (v4 & 1) != 0 || (v4 & 0x10) != 0 )
      *(_DWORD *)a2 |= 0x200u;
    if ( (v4 & 0x402) != 0 && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
      return 3221225569LL;
  }
  v5 = KeAbPreAcquire((ULONG_PTR)(a1 + 88), 0LL, 0LL);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 176, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 88, v5, (ULONG_PTR)(a1 + 88));
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = *((unsigned __int8 *)a1 + 834);
  v9 = 32LL * *((unsigned __int8 *)a1 + 834);
  v10 = (char *)&EtwpGroupMasks + v9;
  if ( (_UNKNOWN *)((char *)&EtwpGroupMasks + v9) )
  {
    v11 = *((_DWORD *)v10 + 1);
    if ( (v11 & 4) != 0 )
    {
      if ( v10 )
      {
        if ( (v11 & 0x100) != 0 )
        {
          if ( !a2 || (v22 = *(_DWORD *)(a2 + 4), (v22 & 4) == 0) || (v22 & 0x100) == 0 )
          {
            LOBYTE(v6) = 1;
            EtwpCCSwapStop(*((unsigned int *)a1 + 54), v6);
LABEL_13:
            v13 = (_DWORD *)a2;
            v14 = 8LL;
            do
            {
              v15 = *(_DWORD *)((char *)v13 + (_QWORD)&EtwpGroupMasks + v9 - a2);
              v16 = v15 & ~*v13;
              *(_DWORD *)&v25[(_QWORD)v13 - a2] = *v13 & ~v15;
              *(_DWORD *)&v24[(_QWORD)v13++ - a2] = v16;
              --v14;
            }
            while ( v14 );
            v17 = *(_DWORD *)a1;
            EtwpLogGroupMask(*(unsigned int *)a1, v10, 32LL);
            if ( (*((_DWORD *)a1 + 3) & 0x400) != 0 )
            {
              v18 = 1;
            }
            else
            {
              v18 = 0;
              EtwpKernelTraceRundown(v24, v17, 0LL);
            }
            *(_OWORD *)v10 = *(_OWORD *)a2;
            *((_OWORD *)v10 + 1) = *(_OWORD *)(a2 + 16);
            updated = EtwpUpdateKernelGroupMasks(v17, v8);
            if ( updated >= 0 )
            {
              EtwpLogGroupMask(v17, a2, 5LL);
              if ( !v18 || (a1[104] & 2) != 0 )
              {
                LOBYTE(v20) = 1;
                EtwpKernelTraceRundown(v25, v17, v20);
              }
            }
            EtwpLogAlwaysPresentRundown(v17);
            goto LABEL_21;
          }
        }
      }
    }
  }
  if ( !a2 )
    goto LABEL_13;
  v12 = *(_DWORD *)(a2 + 4);
  if ( (v12 & 4) == 0 )
    goto LABEL_13;
  if ( (v12 & 0x100) == 0 )
    goto LABEL_13;
  if ( v10 )
  {
    v23 = *((_DWORD *)v10 + 1);
    if ( (v23 & 4) != 0 && (v23 & 0x100) != 0 )
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
