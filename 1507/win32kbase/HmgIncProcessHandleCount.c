/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C004AE80
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B2E40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1, int a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  struct _ERESOURCE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 ProcessWin32Process; // rax
  __int64 v17; // rdx
  int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-10h]
  PEPROCESS Process; // [rsp+50h] [rbp+18h] BYREF

  v3 = (void *)(int)a1;
  v4 = 1;
  if ( (_DWORD)a1 && (_DWORD)a1 != -2147483630 )
  {
    v6 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      PsEnterPriorityRegion(a1);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
      LODWORD(v6) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(a1, a2, a3, (_DWORD)v6, 16, (__int64)L"ghsemHmgr");
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8, v7, v9, v10, v21, v22);
      if ( CurrentProcessWin32Process )
      {
        v12 = *(unsigned int *)(CurrentProcessWin32Process + 60);
        if ( (int)v12 >= gProcessHandleQuota )
        {
          v4 = 0;
        }
        else
        {
          v14 = *(_DWORD *)(CurrentProcessWin32Process + 64);
          v12 = (unsigned int)(v12 + 1);
          *(_DWORD *)(CurrentProcessWin32Process + 60) = v12;
          if ( (unsigned int)v12 <= v14 )
            v12 = v14;
          *(_DWORD *)(CurrentProcessWin32Process + 64) = v12;
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      v17 = ProcessWin32Process;
      if ( ProcessWin32Process )
      {
        v18 = *(_DWORD *)(ProcessWin32Process + 60);
        if ( v18 < gProcessHandleQuota )
        {
          v19 = v18 + 1;
          *(_DWORD *)(ProcessWin32Process + 60) = v19;
          v20 = *(_DWORD *)(ProcessWin32Process + 64);
          if ( v19 > v20 )
            v20 = v19;
          *(_DWORD *)(v17 + 64) = v20;
        }
        else
        {
          v4 = 0;
        }
      }
      ObfDereferenceObject(Process);
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v12, &LockRelease, v13, ghsemHmgr);
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion(v15);
    }
  }
  return v4;
}
