/*
 * XREFs of PushThreadGuardedObject @ 0x1C001CA70
 * Callers:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001CA34 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C005AC00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEE40 (--0-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C00AEE78 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00AEF1C (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0XEPALOBJ2@@QEAA@XZ @ 0x1C00B1298 (--0XEPALOBJ2@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B1E40 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     GrePushThreadGuardedObject @ 0x1C00B32C0 (GrePushThreadGuardedObject.c)
 *     ??0?$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B71E8 (--0-$HmgShareLockResult@VSURFACE@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1C00B7234 (--0-$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B77B8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C00B7804 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00BE4C8 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF254 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PushThreadGuardedObject(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 *v8; // rax
  __int64 v9; // rcx

  v3 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    a1[2] = a2;
    a1[3] = a3;
    if ( ThreadWin32Thread )
    {
      v8 = (__int64 *)(ThreadWin32Thread + 88);
      v9 = *v8;
      *a1 = *v8;
      a1[1] = (__int64)v8;
      if ( *(__int64 **)(v9 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = a1;
      v3 = 1;
      *v8 = (__int64)a1;
    }
    else
    {
      a1[1] = (__int64)a1;
      *a1 = (__int64)a1;
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
