/*
 * XREFs of PopThreadGuardedObject @ 0x1C004C300
 * Callers:
 *     ??1AUTO_TGO@@MEAA@XZ @ 0x1C001CA10 (--1AUTO_TGO@@MEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0025650 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     GdiThreadCallout @ 0x1C005A6A0 (GdiThreadCallout.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF74 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00AF640 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00B12F0 (--1XEPALOBJ2@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00B7284 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00B783C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00BE514 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
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
