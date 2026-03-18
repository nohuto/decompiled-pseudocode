/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x14053EC08
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x14053EBD8 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x14064993C (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v14[8]; // [rsp+58h] [rbp-100h] BYREF
  _WORD *v15; // [rsp+60h] [rbp-F8h]
  _WORD v16[88]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v16, 0, 170);
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v15 = v16;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v14) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v15 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr(&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(v10, v13, 3u, 0LL, (__int64)v15, a2, a5, a7, a6);
  PnpUnicodeStringToWstrFree(v13, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
