/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C002522C
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0028110 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0034380 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

void __fastcall HmgDecProcessHandleCount(__int64 a1, __int64 a2, int a3)
{
  void *v3; // rbx
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 ProcessWin32Process; // rax
  PEPROCESS Process; // [rsp+48h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    v3 = (void *)(int)a1;
    if ( (_DWORD)a1 != -2147483630 )
    {
      v4 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(a1, a2);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
        LODWORD(v4) = (_DWORD)ghsemHmgr;
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pqz(a1, a2, a3, (_DWORD)v4, 16, (__int64)L"ghsemHmgr");
      if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
        if ( CurrentProcessWin32Process )
          --*(_DWORD *)(CurrentProcessWin32Process + 60);
      }
      else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        if ( ProcessWin32Process )
          --*(_DWORD *)(ProcessWin32Process + 60);
        ObfDereferenceObject(Process);
      }
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v7, &LockRelease, v8, ghsemHmgr, L"ghsemHmgr");
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion();
      }
    }
  }
}
