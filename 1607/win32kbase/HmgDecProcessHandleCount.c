/*
 * XREFs of HmgDecProcessHandleCount @ 0x1C0036468
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00246C0 (GreSetBrushOwner.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C00285B0 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002A0C0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

void __fastcall HmgDecProcessHandleCount(__int64 a1, int a2, int a3)
{
  void *v3; // rbx
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v9; // rcx
  PEPROCESS Process; // [rsp+48h] [rbp+10h] BYREF

  if ( (_DWORD)a1 )
  {
    v3 = (void *)(int)a1;
    if ( (_DWORD)a1 != -2147483630 )
    {
      v4 = ghsemHmgr;
      if ( ghsemHmgr )
      {
        PsEnterPriorityRegion(a1);
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
        Template_pz(v7, &LockRelease);
      if ( ghsemHmgr )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
        PsLeavePriorityRegion(v9);
      }
    }
  }
}
