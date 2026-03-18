/*
 * XREFs of PopThreadGuardedObject @ 0x1C00648D0
 * Callers:
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0047A90 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     GdiThreadCallout @ 0x1C005C7B0 (GdiThreadCallout.c)
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C00647B4 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00BD79C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00BF1E4 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00C4E28 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00C53F0 (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00CBCCC (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CC9CC (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThreadGuardedObject(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( a1 )
  {
    KeEnterCriticalRegion();
    v2 = *a1;
    v3 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    a1[1] = a1;
    *a1 = a1;
    KeLeaveCriticalRegion();
  }
}
