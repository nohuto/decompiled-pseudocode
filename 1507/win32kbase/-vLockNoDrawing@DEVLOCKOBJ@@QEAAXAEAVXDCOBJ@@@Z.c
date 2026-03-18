/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0027050
 * Callers:
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // r8
  PERESOURCE v5; // r9
  struct _ERESOURCE *v6; // rdi
  __int64 v7; // rdx
  int v8; // ecx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    v5 = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
    {
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
      v5 = ghsemDynamicModeChange;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(this, &LockAcquireShared, v4, v5);
    *((_DWORD *)this + 6) |= 8u;
    v6 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v6;
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *((_QWORD *)this + 2) = v7;
    if ( v6 )
    {
      PsEnterPriorityRegion(this);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
    }
    v8 = 11;
    if ( *(PERESOURCE *)this == ghsemGreLock )
      v8 = 2;
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(v8, v7, v4, *(_QWORD *)this, v8, (__int64)L"hsemTrg");
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
}
