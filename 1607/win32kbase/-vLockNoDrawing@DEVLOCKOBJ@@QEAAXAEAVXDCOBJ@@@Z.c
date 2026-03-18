/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002F3B0
 * Callers:
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // r8
  struct _ERESOURCE *v5; // rdi
  __int64 v6; // rdx
  int v7; // ecx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 1;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (*(_DWORD *)(v4 + 56) & 1) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(this, &LockAcquireShared);
    *((_DWORD *)this + 6) |= 8u;
    v5 = *(struct _ERESOURCE **)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v5;
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *((_QWORD *)this + 2) = v6;
    if ( v5 )
    {
      PsEnterPriorityRegion(this);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    }
    v7 = 11;
    if ( *(PERESOURCE *)this == ghsemGreLock )
      v7 = 2;
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz(v7, v6, v4, *(_QWORD *)this, v7, (__int64)L"hsemTrg");
  }
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
}
