/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0
 * Callers:
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSelectPalette @ 0x1C0049120 (GreSelectPalette.c)
 *     bDeleteDCInternal @ 0x1C006BEB0 (bDeleteDCInternal.c)
 *     GreSelectBrush @ 0x1C006E460 (GreSelectBrush.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0070EB0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreSelectPen @ 0x1C00B3090 (GreSelectPen.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0031910 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  __int64 v2; // r12
  __int64 v3; // rsi
  __int16 v4; // r13d^2
  _DWORD *SystemArgument2; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  signed __int32 v12; // eax
  unsigned int v13; // edx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  int v16; // ebx
  unsigned int v17; // [rsp+2Ch] [rbp-4Ch]
  int v18; // [rsp+88h] [rbp+10h] BYREF

  v2 = *((int *)this + 3);
  v3 = 0LL;
  v4 = WORD1(a2);
  if ( (unsigned __int16)a2 < (unsigned int)gcMaxHmgr )
  {
    SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
    v7 = (unsigned __int16)a2;
    v8 = 3LL * (unsigned __int16)a2;
    CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v18);
    if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && (v10 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
      v11 = *(_QWORD *)(v10 + 72);
    else
      v11 = 0LL;
LABEL_6:
    _m_prefetchw(&SystemArgument2[2 * v8 + 2]);
    v12 = SystemArgument2[2 * v8 + 2];
    if ( !v2 )
    {
      if ( (v13 = v12 & 0xFFFFFFFE, (v12 & 0xFFFFFFFE) != (v18 & 0xFFFFFFFC))
        && v13
        && (!v11 || v13 != *(_DWORD *)(v11 + 8))
        || (SystemArgument2[2 * v8 + 3] & 0x20000000) != 0 )
      {
        KeLeaveCriticalRegion();
        *(_QWORD *)this = 0LL;
        return;
      }
    }
    while ( (SystemArgument2[2 * v8 + 3] & 0x40000000) == 0 )
    {
      if ( (v12 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_6;
      }
      if ( v12 != _InterlockedCompareExchange(&SystemArgument2[2 * v8 + 2], v12 | 1, v12)
        || (SystemArgument2[2 * v8 + 3] & 0x40000000) != 0 )
      {
        goto LABEL_6;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v7) = 0LL;
      HIBYTE(SystemArgument2[2 * v8 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[2 * v8 + 2]);
      v17 = SystemArgument2[2 * v8 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[2 * v8 + 2], v17);
      v12 = v17;
    }
    ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7, 0LL);
    if ( BYTE2(SystemArgument2[2 * v8 + 3]) == 1
      && LOWORD(SystemArgument2[2 * v8 + 3]) == v4
      && (!(_DWORD)v2 || (SystemArgument2[2 * v8 + 3] & 0x20000000) != 0) )
    {
      CurrentThread = KeGetCurrentThread();
      v3 = *(_QWORD *)&SystemArgument2[2 * v8];
      v15 = *(_WORD *)(v3 + 12);
      if ( !v15 || *(struct _KTHREAD **)(v3 + 16) == CurrentThread )
      {
        *(_QWORD *)(v3 + 16) = CurrentThread;
        *(_WORD *)(v3 + 12) = v15 + 1;
      }
      else
      {
        v3 = 0LL;
      }
    }
    if ( (SystemArgument2[2 * v8 + 3] & 0x40000000) != 0 )
    {
      ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7);
    }
    else
    {
      _m_prefetchw(&SystemArgument2[2 * v8 + 2]);
      _InterlockedExchange(&SystemArgument2[2 * v8 + 2], SystemArgument2[2 * v8 + 2] & 0xFFFFFFFE);
    }
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 3)
      && ((*(_DWORD *)(*(_QWORD *)(v3 + 48) + 56LL) & 0x8000) == 0
       || (v16 = *(_DWORD *)(v3 + 2504), v16 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
      || !(unsigned int)XDCOBJ::bSaveAttributes(this) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
}
