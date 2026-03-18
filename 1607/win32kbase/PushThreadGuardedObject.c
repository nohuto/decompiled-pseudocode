/*
 * XREFs of PushThreadGuardedObject @ 0x1C0064820
 * Callers:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002E230 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0047AC0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00647D8 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00BCEC0 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCEF8 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00BCF30 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00BCF68 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00BF18C (--0XEPALOBJ2@@QEAA@XZ.c)
 *     GrePushThreadGuardedObject @ 0x1C00C0870 (GrePushThreadGuardedObject.c)
 *     ??0?$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00C4D70 (--0-$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00C4DBC (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00C536C (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00C53B8 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00CBC80 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PushThreadGuardedObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v3 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    v7 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
    a1[2] = a2;
    a1[3] = a3;
    if ( v7 )
    {
      v9 = (_QWORD *)(v7 + 88);
      v10 = *(_QWORD *)(v7 + 88);
      if ( *(_QWORD *)(v10 + 8) != v7 + 88 )
        __fastfail(3u);
      *a1 = v10;
      v3 = 1;
      a1[1] = v9;
      *(_QWORD *)(v10 + 8) = a1;
      *v9 = a1;
    }
    else
    {
      a1[1] = a1;
      *a1 = a1;
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
