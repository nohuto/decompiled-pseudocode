/*
 * XREFs of HmgShareLock @ 0x1C0004350
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0035490 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0039878 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreMarkUndeletableDC @ 0x1C0054AC0 (GreMarkUndeletableDC.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 *     bMigrateSurfaceForConversion @ 0x1C005DCB0 (bMigrateSurfaceForConversion.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C006985C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreMarkDeletableDC @ 0x1C0070790 (GreMarkDeletableDC.c)
 *     GreMarkDCUnreadable @ 0x1C007E1F0 (GreMarkDCUnreadable.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF174 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF368 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF450 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgShareLock(int a1, char a2)
{
  __int64 v2; // rsi
  __int16 v4; // ebp^2
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r14
  signed __int32 v8; // eax
  unsigned int v10; // [rsp+2Ch] [rbp-2Ch]
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v4 = HIWORD(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  v6 = 3LL * (unsigned __int16)a1;
  v7 = (unsigned __int16)a1;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v11);
  _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
  v8 = *(_DWORD *)(v5 + 8 * v6 + 8);
  if ( (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x20) != 0 )
    goto LABEL_17;
  while ( (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x40) == 0 )
  {
    if ( (v8 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_9:
      _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
      v8 = *(_DWORD *)(v5 + 8 * v6 + 8);
      if ( (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x20) != 0 )
        goto LABEL_17;
    }
    else
    {
      if ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8 * v6 + 8), v8 | 1, v8)
        || (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x40) != 0 )
      {
        goto LABEL_9;
      }
      *((_QWORD *)gpentPushLock + v7) = 0LL;
      *(_BYTE *)(v5 + 8 * v6 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
      v10 = *(_DWORD *)(v5 + 8 * v6 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v5 + 8 * v6 + 8), v10);
      v8 = v10;
    }
  }
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v7, 0LL);
  if ( *(_BYTE *)(v5 + 8 * v6 + 14) == a2 && *(_WORD *)(v5 + 8 * v6 + 12) == v4 )
  {
    v2 = *(_QWORD *)(v5 + 8 * v6);
    ++*(_DWORD *)(v2 + 8);
  }
  if ( (*(_BYTE *)(v5 + 8 * v6 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v7, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v5 + 8 * v6 + 8));
    _InterlockedExchange((volatile __int32 *)(v5 + 8 * v6 + 8), *(_DWORD *)(v5 + 8 * v6 + 8) & 0xFFFFFFFE);
  }
LABEL_17:
  KeLeaveCriticalRegion();
  return v2;
}
