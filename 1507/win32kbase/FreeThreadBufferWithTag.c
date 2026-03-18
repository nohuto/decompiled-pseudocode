/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C000B380
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0053200 (NtGdiOpenDCW.c)
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00B27E0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00B28A0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00B2C60 (-vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8 (IsWin32FreePoolImplSupported_0.c)
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
