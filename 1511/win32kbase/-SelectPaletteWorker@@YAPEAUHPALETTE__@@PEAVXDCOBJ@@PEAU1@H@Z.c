/*
 * XREFs of ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004918C
 * Callers:
 *     GreSelectPalette @ 0x1C0049120 (GreSelectPalette.c)
 * Callees:
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023270 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023310 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1C00233B0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     HmgShareLockCheck @ 0x1C0049310 (HmgShareLockCheck.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

HPALETTE __fastcall SelectPaletteWorker(struct XDCOBJ *a1, HPALETTE a2, int a3)
{
  struct _ERESOURCE *v3; // rdi
  HPALETTE v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v12; // rbx
  HPALETTE v13; // rsi
  __int64 v14; // rcx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = ghsemPalette;
  v5 = a2;
  if ( ghsemPalette )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  LOBYTE(a2) = 8;
  v7 = HmgShareLockCheck(v5, a2);
  v11 = *(_QWORD *)a1 == 0LL;
  v12 = v7;
  v21 = v7;
  if ( v11 || !v7 || (*(_DWORD *)(v7 + 24) & 0x100) == 0 )
    goto LABEL_23;
  if ( !a3 )
  {
    hForePID = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v9);
    hForePalette = v5;
  }
  v9 = *(_QWORD *)a1;
  v13 = *(HPALETTE *)(*(_QWORD *)a1 + 88LL);
  if ( v13 != v5 )
  {
    v22 = *(_QWORD *)(v9 + 96);
    if ( (struct _SINGLE_LIST_ENTRY *)v12 == WPP_MAIN_CB.Dpc.DpcListEntry.Next )
      goto LABEL_17;
    v16 = *(_QWORD *)(v9 + 48);
    if ( *(_QWORD *)(v12 + 48) == v16 )
      goto LABEL_17;
    if ( !*(_DWORD *)(v12 + 56) )
    {
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v21);
      *(_QWORD *)(v12 + 48) = v16;
LABEL_17:
      GreAcquireHmgrSemaphore(v9, v8, v10);
      XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v22, a1);
      *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v5;
      *(_QWORD *)(*(_QWORD *)a1 + 96LL) = v12;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xFu;
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      if ( v17 && (struct _SINGLE_LIST_ENTRY *)v12 != WPP_MAIN_CB.Dpc.DpcListEntry.Next )
        *(_QWORD *)(v17 + 168) = v5;
      XEPALOBJ::vAddToList((XEPALOBJ *)&v21, a1);
      GreReleaseHmgrSemaphore(v19, v18, v20);
      goto LABEL_9;
    }
LABEL_23:
    v13 = 0LL;
  }
LABEL_9:
  if ( v12 )
    HmgDecrementShareReferenceCount((_DWORD *)v12);
  if ( v3 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v9, &LockRelease, v10, v3, L"hsem");
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v14);
  }
  return v13;
}
