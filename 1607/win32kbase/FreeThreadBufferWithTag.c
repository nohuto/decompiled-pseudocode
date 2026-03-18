/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C006EA90
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 *     FreeTmpBuffer @ 0x1C006EA70 (FreeTmpBuffer.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00BFC70 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00BFD30 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C00E0 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
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
