/*
 * XREFs of HmgLockEx @ 0x1C0025B60
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C0025AB0 (NtGdiCreateCompatibleDC.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00451E8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C005BA6C (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C005DB10 (GreMakeBitmapNonStock.c)
 *     GreLockRegion @ 0x1C007B600 (GreLockRegion.c)
 *     EngDeleteDriverObj @ 0x1C00BF9B0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C00BFAB0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C00BFAE0 (EngUnlockDriverObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgLockEx(int a1, char a2, int a3)
{
  __int64 v3; // rsi
  __int16 v6; // r12d^2
  _DWORD *SystemArgument2; // rbx
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
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v8 = 3LL * (unsigned __int16)a1;
  v9 = (unsigned __int16)a1;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v19);
  if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v11 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
    v12 = *(_QWORD *)(v11 + 72);
  else
    v12 = 0LL;
LABEL_6:
  _m_prefetchw(&SystemArgument2[2 * v8 + 2]);
  v13 = SystemArgument2[2 * v8 + 2];
  if ( a3
    || ((v14 = v13 & 0xFFFFFFFE, (v13 & 0xFFFFFFFE) == (v19 & 0xFFFFFFFC)) || !v14 || v12 && v14 == *(_DWORD *)(v12 + 8))
    && (SystemArgument2[2 * v8 + 3] & 0x20000000) == 0 )
  {
    while ( (SystemArgument2[2 * v8 + 3] & 0x40000000) == 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      if ( v13 != _InterlockedCompareExchange(&SystemArgument2[2 * v8 + 2], v13 | 1, v13)
        || (SystemArgument2[2 * v8 + 3] & 0x40000000) != 0 )
      {
        goto LABEL_6;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v9) = 0LL;
      HIBYTE(SystemArgument2[2 * v8 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[2 * v8 + 2]);
      v18 = SystemArgument2[2 * v8 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[2 * v8 + 2], v18);
      v13 = v18;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v9, 0LL);
    if ( BYTE2(SystemArgument2[2 * v8 + 3]) == a2
      && LOWORD(SystemArgument2[2 * v8 + 3]) == v6
      && (!a3 || (SystemArgument2[2 * v8 + 3] & 0x20000000) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v3 = *(_QWORD *)&SystemArgument2[2 * v8];
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
    if ( (SystemArgument2[2 * v8 + 3] & 0x40000000) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v9);
    }
    else
    {
      _m_prefetchw(&SystemArgument2[2 * v8 + 2]);
      _InterlockedExchange(&SystemArgument2[2 * v8 + 2], SystemArgument2[2 * v8 + 2] & 0xFFFFFFFE);
    }
  }
  KeLeaveCriticalRegion();
  return v3;
}
