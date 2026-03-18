/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003B190 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPalette @ 0x1C005A950 (GreSelectPalette.c)
 *     GreRestoreDCInternal @ 0x1C00BF7E0 (GreRestoreDCInternal.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003AAC8 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003AB68 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C003AC00 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  struct _ERESOURCE *v3; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int64 v13; // rbx
  HPALETTE v14; // rsi
  __int64 v15; // rcx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+20h] [rbp-38h]
  __int64 v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = (struct _ERESOURCE *)ghsemPalette;
  if ( ghsemPalette )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  v7 = HmgShareLockCheck((int)a2, 8);
  v12 = *(_QWORD *)a1 == 0LL;
  v13 = v7;
  v24 = v7;
  if ( v12 || !v7 || (*(_DWORD *)(v7 + 24) & 0x100) == 0 )
    goto LABEL_23;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v22, v23);
    hForePalette = a2;
  }
  v9 = *(_QWORD *)a1;
  v14 = *(HPALETTE *)(*(_QWORD *)a1 + 88LL);
  if ( v14 != a2 )
  {
    v25 = *(_QWORD *)(v9 + 96);
    if ( (struct PALETTE *)v13 == ppalDefault )
      goto LABEL_17;
    v17 = *(_QWORD *)(v9 + 48);
    if ( *(_QWORD *)(v13 + 48) == v17 )
      goto LABEL_17;
    if ( !*(_DWORD *)(v13 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v24);
      *(_QWORD *)(v13 + 48) = v17;
LABEL_17:
      GreAcquireHmgrSemaphore(v9, v8, v10);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v25, a1);
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = a2;
      *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v13;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xFu;
      v18 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      if ( v18 && (struct PALETTE *)v13 != ppalDefault )
        *(_QWORD *)(v18 + 168) = a2;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v24, a1);
      GreReleaseHmgrSemaphore(v20, v19, v21);
      goto LABEL_9;
    }
LABEL_23:
    v14 = 0LL;
  }
LABEL_9:
  if ( v13 )
    HmgDecrementShareReferenceCount((_DWORD *)v13);
  if ( v3 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v9, &LockRelease, v10, v3);
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v15);
  }
  return v14;
}
