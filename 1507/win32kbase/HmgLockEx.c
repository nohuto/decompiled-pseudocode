/*
 * XREFs of HmgLockEx @ 0x1C003BFB0
 * Callers:
 *     GreLockRegion @ 0x1C0017B80 (GreLockRegion.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005E434 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C006A000 (GreMakeBitmapNonStock.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00AF2A0 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00BE650 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00BE6B0 (EngUnlockDriverObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockEx(int a1, char a2, int a3)
{
  __int64 v3; // rsi
  __int16 v6; // r12d^2
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  signed __int32 v13; // eax
  unsigned int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v16; // ax
  unsigned int v18; // [rsp+2Ch] [rbp-3Ch]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  v6 = HIWORD(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  v7 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v8 = 3LL * (unsigned __int16)a1;
  v9 = (unsigned __int16)a1;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v19);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v11 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v12 = *(_QWORD *)(v11 + 72);
  else
    v12 = 0LL;
LABEL_6:
  _m_prefetchw((const void *)(v7 + 8 * v8 + 8));
  v13 = *(_DWORD *)(v7 + 8 * v8 + 8);
  if ( a3
    || ((v14 = v13 & 0xFFFFFFFE, (v13 & 0xFFFFFFFE) == (v19 & 0xFFFFFFFC)) || !v14 || v12 && v14 == *(_DWORD *)(v12 + 8))
    && (*(_BYTE *)(v7 + 8 * v8 + 15) & 0x20) == 0 )
  {
    while ( (*(_BYTE *)(v7 + 8 * v8 + 15) & 0x40) == 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      if ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8 * v8 + 8), v13 | 1, v13)
        || (*(_BYTE *)(v7 + 8 * v8 + 15) & 0x40) != 0 )
      {
        goto LABEL_6;
      }
      *((_QWORD *)gpentPushLock + v9) = 0LL;
      *(_BYTE *)(v7 + 8 * v8 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v7 + 8 * v8 + 8));
      v18 = *(_DWORD *)(v7 + 8 * v8 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v7 + 8 * v8 + 8), v18);
      v13 = v18;
    }
    ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v9, 0LL);
    if ( *(_BYTE *)(v7 + 8 * v8 + 14) == a2
      && *(_WORD *)(v7 + 8 * v8 + 12) == v6
      && (!a3 || (*(_BYTE *)(v7 + 8 * v8 + 15) & 0x20) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v3 = *(_QWORD *)(v7 + 8 * v8);
      v16 = *(_WORD *)(v3 + 12);
      if ( !v16 || *(struct _KTHREAD **)(v3 + 16) == CurrentThread )
      {
        *(_QWORD *)(v3 + 16) = CurrentThread;
        *(_WORD *)(v3 + 12) = v16 + 1;
      }
      else
      {
        v3 = 0LL;
      }
    }
    if ( (*(_BYTE *)(v7 + 8 * v8 + 15) & 0x40) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v9, 0LL);
    }
    else
    {
      _m_prefetchw((const void *)(v7 + 8 * v8 + 8));
      _InterlockedExchange((volatile __int32 *)(v7 + 8 * v8 + 8), *(_DWORD *)(v7 + 8 * v8 + 8) & 0xFFFFFFFE);
    }
  }
  KeLeaveCriticalRegion();
  return v3;
}
