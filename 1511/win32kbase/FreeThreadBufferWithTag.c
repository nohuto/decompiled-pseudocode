/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C0064B70
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00424A0 (NtGdiOpenDCW.c)
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 *     CaptureDriverInfo2W @ 0x1C0081530 (CaptureDriverInfo2W.c)
 *     CaptureDEVMODEW @ 0x1C00844E0 (CaptureDEVMODEW.c)
 *     vFreeDriverInfo2 @ 0x1C00BEAF0 (vFreeDriverInfo2.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 */

__int64 __fastcall FreeThreadBufferWithTag(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 result; // rax

  v1 = (_QWORD *)(a1 - 32);
  if ( a1 != 32 )
  {
    KeEnterCriticalRegion();
    v2 = *v1;
    v3 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v3 != v1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    v1[1] = v1;
    *v1 = v1;
    KeLeaveCriticalRegion();
  }
  result = IsWin32FreePoolImplSupported_0();
  if ( (int)result >= 0 )
    return Win32FreePoolImpl_0();
  return result;
}
