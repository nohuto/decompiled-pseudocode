/*
 * XREFs of ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001B220
 * Callers:
 *     ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001ABC0 (-DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001984C (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     Template_pqqxxx @ 0x1C001C628 (Template_pqqxxx.c)
 */

void __fastcall ADAPTER_RENDER::PerformClockCalibration(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  __int64 v4; // rax
  unsigned int v5; // edi
  unsigned int j; // ebp
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rax
  _DXGK_GPUCLOCKDATA v11; // [rsp+50h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 232); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(v1 + 1904);
    v5 = 0;
    for ( j = *(unsigned __int16 *)(v4 + 48 * i); v5 < j; ++v5 )
    {
      memset(&v11, 0, 24);
      if ( (unsigned int)ADAPTER_RENDER::DdiCalibrateGpuClock(this, v5, (unsigned int)i, &v11) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v10 + 24) = 29858LL;
        WdLogEvent5_WdAssertion(v10);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_pqqxxx(
          v8,
          v7,
          v9,
          *((_QWORD *)this + 2),
          v5,
          i,
          v11.GpuFrequency,
          v11.GpuClockCounter,
          v11.CpuClockCounter);
    }
    v1 = *((_QWORD *)this + 2);
  }
}
