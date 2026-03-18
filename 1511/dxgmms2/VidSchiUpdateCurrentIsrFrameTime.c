/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C0014AD8
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CF40 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C0012ED0 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001C3D8 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

LARGE_INTEGER __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  ULONGLONG GpuClockCounter; // rdi
  LARGE_INTEGER result; // rax
  LONGLONG v7; // rbx
  LARGE_INTEGER v9; // rdx
  signed __int64 v10; // rax
  LARGE_INTEGER v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  ADAPTER_RENDER *v14; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-48h] BYREF
  LARGE_INTEGER v16; // [rsp+28h] [rbp-40h]
  struct _DXGK_GPUCLOCKDATA v17; // [rsp+30h] [rbp-38h] BYREF

  GpuClockCounter = 0LL;
  result.QuadPart = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 14716), 0);
  LODWORD(v7) = a3 != 0;
  if ( result.LowPart )
  {
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(a2 + 14696) )
      *(union _LARGE_INTEGER *)(a2 + 14696) = PerformanceFrequency;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 14728), 0LL, 0LL);
    v11 = v16;
    v12 = v10;
    v13 = *(_QWORD *)(a2 + 14640);
    result.QuadPart = v16.QuadPart - v13;
    if ( v12 )
    {
      if ( result.QuadPart > v12 )
      {
        result.QuadPart /= v12;
        v9.QuadPart = (v16.QuadPart - v13) % v12;
        v7 = (v16.QuadPart - v13) / v12;
        if ( !a3 )
        {
          if ( !result.LowPart )
            return result;
          v11.QuadPart = v13 + v12 * result.QuadPart;
        }
      }
    }
  }
  else
  {
    if ( !a3 )
      return result;
    result = KeQueryPerformanceCounter(&PerformanceFrequency);
    v11 = result;
    if ( !*(_QWORD *)(a2 + 14696) )
    {
      result = PerformanceFrequency;
      *(union _LARGE_INTEGER *)(a2 + 14696) = PerformanceFrequency;
    }
  }
  if ( (_DWORD)v7 )
  {
    *(_DWORD *)(a2 + 14648) += v7;
    *(LARGE_INTEGER *)(a2 + 14640) = v11;
    if ( *(_BYTE *)(a2 + 8) )
    {
      v14 = *(ADAPTER_RENDER **)(a1 + 8);
      memset(&v17, 0, 24);
      result.QuadPart = ADAPTER_RENDER::DdiCalibrateGpuClock(v14, v9.LowPart, v12, &v17);
      if ( (result.LowPart & 0x80000000) == 0 )
        GpuClockCounter = v17.GpuClockCounter;
    }
    *(_QWORD *)(a2 + 14656) = GpuClockCounter;
  }
  return result;
}
