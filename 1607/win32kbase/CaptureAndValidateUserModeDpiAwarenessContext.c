/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0035710
 * Callers:
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00352B8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0035330 (LogicalToPhysicalDPIPoint.c)
 *     GreGetStockObject @ 0x1C0035660 (GreGetStockObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0057A18 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00745B4 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  __int64 v1; // r9
  unsigned int *v2; // rdx
  unsigned int v3; // r10d
  unsigned int v4; // r8d

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0;
  if ( v2[1] )
  {
    v4 = *v2;
    if ( *v2 && !(unsigned int)IsValidKernelDpiAwarenessContext(v4) )
      *v2 = v3;
    else
      *(_DWORD *)(v1 + 340) = v4;
    v2[1] = v3;
  }
}
