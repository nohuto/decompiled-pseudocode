/*
 * XREFs of ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180165B94
 * Callers:
 *     ?Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1801651A0 (-Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x1801657E8 (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 */

void __fastcall CAnalogExclusiveView::UpdateFrameStatistics(RTL_SRWLOCK *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  RTL_SRWLOCK *v2; // rdi
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  int v6; // ecx
  __int128 v7; // xmm1
  __int64 v8; // rcx
  int v9; // eax
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = this + 23;
  AcquireSRWLockShared(this + 23);
  ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo((CAnalogExclusiveView *)this);
  if ( ExclusiveSurfaceInfo )
  {
    v6 = *((_DWORD *)ExclusiveSurfaceInfo + 18);
    v7 = *(_OWORD *)&a2->SyncQPCTime.LowPart;
    v10[0] = *(_OWORD *)&a2->PresentCount;
    LODWORD(v10[0]) = v6;
    v8 = *((_QWORD *)ExclusiveSurfaceInfo + 4);
    v10[1] = v7;
    v9 = NtSetCompositionSurfaceStatistics(v8, (char *)ExclusiveSurfaceInfo + 56, v10);
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9 | 0x10000000, 0x13Cu);
  }
  ReleaseSRWLockShared(v2);
}
