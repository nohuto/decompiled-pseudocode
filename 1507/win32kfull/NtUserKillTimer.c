/*
 * XREFs of NtUserKillTimer @ 0x1C007A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C007AA84 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserKillTimer(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  int v6; // r12d
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // r14d
  _QWORD **v10; // rdi
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  int v19; // [rsp+54h] [rbp+Ch]

  EnterCrit(1LL);
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v5 = 0;
    v6 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      v4 = gpAtomickCheckStacks;
      while ( *(_DWORD *)(((unsigned __int64)v5 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v5 >= gdwAtomicCheckLogSize )
          goto LABEL_6;
      }
      v7 = (unsigned __int64)v5 << 6;
      *(_DWORD *)(v7 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v7 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v7 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v7 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v6 = v19;
  }
LABEL_6:
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
    {
      v9 = 0;
      goto LABEL_25;
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = 0;
  v10 = (_QWORD **)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(v8)) & 0x3F));
  v11 = *v10;
  if ( *v10 != v10 )
  {
    while ( 1 )
    {
      if ( *(v11 - 3) == v8 && *(v11 - 2) == a2 )
      {
        v12 = *((_DWORD *)v11 - 16);
        if ( (v12 & 6) == 0 )
        {
          if ( (v12 & 0x40) != 0 )
            break;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
          v4 = *(v11 - 11);
          if ( CurrentProcessWin32Process == *(_QWORD *)(v4 + 384) || !v8 && (*(_BYTE *)(v11 - 8) & 4) == 0 )
            break;
        }
      }
      v11 = (_QWORD *)*v11;
      if ( v11 == v10 )
        goto LABEL_25;
    }
    if ( (unsigned int)HMMarkObjectDestroy(v11 - 14) )
    {
      if ( (*(_DWORD *)(v11 - 8) & 1) != 0 )
        DecTimerCount((struct tagTIMER *)(v11 - 14));
      v14 = *(v11 - 5);
      v15 = (_QWORD *)*(v11 - 4);
      if ( *(_QWORD **)(v14 + 8) != v11 - 5 || (_QWORD *)*v15 != v11 - 5 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *v11;
      v17 = (_QWORD *)v11[1];
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v17 != v11 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      if ( !*(v11 - 3) )
        _bittestandreset(gTimerId, *((_DWORD *)v11 - 4) - 256);
      EtwTraceKillTimer(v11 - 14);
      HMAssignmentUnlock(v11 - 3);
      HMFreeObject(v11 - 14);
    }
    v9 = 1;
  }
LABEL_25:
  --gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v4 = 0LL;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v4 << 6) + gpAtomickCheckStacks) != v6 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= gdwAtomicCheckLogSize )
          goto LABEL_29;
      }
      v4 <<= 6;
      *(_DWORD *)(v4 + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_29:
  UserSessionSwitchLeaveCrit(v4, gpAtomickCheckStacks);
  return v9;
}
