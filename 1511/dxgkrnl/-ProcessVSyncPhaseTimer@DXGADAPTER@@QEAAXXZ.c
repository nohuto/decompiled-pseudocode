/*
 * XREFs of ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C007A36C
 * Callers:
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C008AFC0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C00025F4 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 */

void __fastcall DXGADAPTER::ProcessVSyncPhaseTimer(DXGADAPTER *this)
{
  char *v1; // rbx
  __int64 v3; // r8

  v1 = (char *)this + 2872;
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 2872));
  if ( *((_DWORD *)this + 676) == 1 )
  {
    LOBYTE(v3) = 1;
    DXGADAPTER::DdiControlInterrupt2(this, (struct _DXGKARG_CONTROLINTERRUPT2)0x200000003LL, v3);
  }
  else
  {
    *((_QWORD *)v1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v1, 0LL);
    KeLeaveCriticalRegion();
  }
}
