/*
 * XREFs of HmgShareLock @ 0x1C005C9B0
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0038E50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreMarkUndeletableDC @ 0x1C0044580 (GreMarkUndeletableDC.c)
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 *     bMigrateSurfaceForConversion @ 0x1C005B360 (bMigrateSurfaceForConversion.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     GreMarkDCUnreadable @ 0x1C006D6A0 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C007F670 (GreMarkDeletableDC.c)
 *     bInitICM @ 0x1C013A470 (bInitICM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgShareLock(int a1, char a2)
{
  __int64 v2; // rsi
  __int16 v4; // ebp^2
  _DWORD *SystemArgument2; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  signed __int32 v8; // eax
  unsigned int v10; // [rsp+2Ch] [rbp-2Ch]
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
  v6 = 3LL * (unsigned __int16)a1;
  v7 = (unsigned __int16)a1;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v11);
  _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
  v8 = SystemArgument2[2 * v6 + 2];
  if ( (SystemArgument2[2 * v6 + 3] & 0x20000000) != 0 )
    goto LABEL_17;
  while ( (SystemArgument2[2 * v6 + 3] & 0x40000000) == 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_9:
      _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
      v8 = SystemArgument2[2 * v6 + 2];
      if ( (SystemArgument2[2 * v6 + 3] & 0x20000000) != 0 )
        goto LABEL_17;
    }
    else
    {
      if ( v8 != _InterlockedCompareExchange(&SystemArgument2[2 * v6 + 2], v8 | 1, v8)
        || (SystemArgument2[2 * v6 + 3] & 0x40000000) != 0 )
      {
        goto LABEL_9;
      }
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v7) = 0LL;
      HIBYTE(SystemArgument2[2 * v6 + 3]) |= 0x40u;
      _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
      v10 = SystemArgument2[2 * v6 + 2] & 0xFFFFFFFE;
      _InterlockedExchange(&SystemArgument2[2 * v6 + 2], v10);
      v8 = v10;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7, 0LL);
  if ( BYTE2(SystemArgument2[2 * v6 + 3]) == a2 && LOWORD(SystemArgument2[2 * v6 + 3]) == v4 )
  {
    v2 = *(_QWORD *)&SystemArgument2[2 * v6];
    ++*(_DWORD *)(v2 + 8);
  }
  if ( (SystemArgument2[2 * v6 + 3] & 0x40000000) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v7);
  }
  else
  {
    _m_prefetchw(&SystemArgument2[2 * v6 + 2]);
    _InterlockedExchange(&SystemArgument2[2 * v6 + 2], SystemArgument2[2 * v6 + 2] & 0xFFFFFFFE);
  }
LABEL_17:
  KeLeaveCriticalRegion();
  return v2;
}
