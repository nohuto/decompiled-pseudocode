/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C002A680
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0025350 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002A290 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0034DF0 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     HmgAlloc @ 0x1C0080B30 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B5A60 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1, __int64 a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  struct _ERESOURCE *v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 ProcessWin32Process; // rax
  __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void *)(int)a1;
  v4 = 1;
  if ( (_DWORD)a1 && (_DWORD)a1 != -2147483630 )
  {
    v6 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(a1, a2);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
      LODWORD(v6) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(a1, a2, a3, (_DWORD)v6, 16, (__int64)L"ghsemHmgr");
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
      {
        v9 = *(unsigned int *)(CurrentProcessWin32Process + 60);
        if ( (int)v9 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v11 = *(_DWORD *)(CurrentProcessWin32Process + 64);
          v9 = (unsigned int)(v9 + 1);
          *(_DWORD *)(CurrentProcessWin32Process + 60) = v9;
          if ( (unsigned int)v9 <= v11 )
            v9 = v11;
          *(_DWORD *)(CurrentProcessWin32Process + 64) = v9;
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      v13 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v14 = *(_DWORD *)(ProcessWin32Process + 60);
        if ( v14 < gProcessHandleQuota )
        {
          v15 = v14 + 1;
          *(_DWORD *)(ProcessWin32Process + 60) = v15;
          v16 = *(_DWORD *)(ProcessWin32Process + 64);
          if ( v15 > v16 )
            v16 = v15;
          *(_DWORD *)(v13 + 64) = v16;
        }
        else
        {
          v4 = 0;
        }
      }
      ObfDereferenceObject(Process);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v9, &LockRelease, v10, ghsemHmgr, L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
  }
  return v4;
}
