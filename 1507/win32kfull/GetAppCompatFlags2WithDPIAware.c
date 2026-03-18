/*
 * XREFs of GetAppCompatFlags2WithDPIAware @ 0x1C009418C
 * Callers:
 *     GetResizeBorderWidth @ 0x1C000E7E4 (GetResizeBorderWidth.c)
 *     GetWindowFrameMetric @ 0x1C000E7FC (GetWindowFrameMetric.c)
 *     GetWindowBorders @ 0x1C004F1E0 (GetWindowBorders.c)
 *     GetWindowBordersForDpi @ 0x1C0082C64 (GetWindowBordersForDpi.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0093D50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetAppCompatFlags2WithDPIAware()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int v3; // ebx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v0 = 0LL;
  v1 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v1 = *ThreadWin32Thread;
  if ( *(_DWORD *)(v1 + 560) > 0x9900u )
    v3 = 0;
  else
    v3 = *(_DWORD *)(v1 + 576);
  v4 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v4 )
    v0 = *v4;
  if ( (*(_BYTE *)(*(_QWORD *)(v0 + 440) + 224LL) & 8) != 0 )
  {
    v3 &= ~0x2000000u;
  }
  else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0 )
  {
    v3 |= 0x2000000u;
  }
  return v3;
}
