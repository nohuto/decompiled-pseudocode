/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C007A654
 * Callers:
 *     VidMmETWAllocationHandle @ 0x1C001C670 (VidMmETWAllocationHandle.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00113D4 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // rbx
  struct DXGPROCESS *Current; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rdi

  v3 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v5 = (a2 >> 6) & 0xFFFFFF;
  if ( v5 < *((_DWORD *)Current + 58)
    && (v6 = *((_QWORD *)Current + 27),
        v7 = *(_DWORD *)(v6 + 16LL * v5 + 8),
        ((a2 >> 26) & 0x30) == (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x30))
    && (v7 & 0x1000) == 0
    && (v7 & 0xF) != 0
    && (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0xF) == 5 )
  {
    v8 = *(_QWORD *)(v6 + 16LL * v5);
  }
  else
  {
    v8 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    return *(_QWORD *)(v8 + 24);
  return v3;
}
