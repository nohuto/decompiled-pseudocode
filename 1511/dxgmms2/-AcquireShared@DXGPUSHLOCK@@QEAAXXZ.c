/*
 * XREFs of ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00113D4
 * Callers:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F0C (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C007A654 (-ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 */

void __fastcall DXGPUSHLOCK::AcquireShared(DXGPUSHLOCK *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(this, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v4 = *((unsigned int *)this + 4);
      if ( (_DWORD)v4 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v2, &EventBlockThread, v3, v4);
    }
    ExAcquirePushLockSharedEx(this, 0LL);
  }
}
