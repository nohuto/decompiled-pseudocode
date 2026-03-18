/*
 * XREFs of GreDwmHasSoftwareCursor @ 0x1C0096FE4
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 *     DwmDestroyDeviceSpecificResources @ 0x1C0097230 (DwmDestroyDeviceSpecificResources.c)
 * Callees:
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C004F98C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C004F9C4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 */

__int64 __fastcall GreDwmHasSoftwareCursor(__int64 a1, struct PDEVOBJ *a2)
{
  int v3; // esi
  unsigned int v4; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (int)a2;
  v4 = 0;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v6, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState
    && (*((_DWORD *)g_pDwmState + 25) || v3)
    && *((_DWORD *)g_pDwmState + 40)
    && (*(_QWORD *)(a1 + 3560) != a1 + 3560 || (*(_DWORD *)(a1 + 56) & 0x20000) != 0) )
  {
    v4 = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v6);
  return v4;
}
