/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x14057082C
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x1405707FC (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140688FE8 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  WCHAR *v16; // [rsp+50h] [rbp-108h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v18[176]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v18, 0, 0xAAuLL);
  v16 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.Buffer = (wchar_t *)v18;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr(&v16, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v16, 3, 0LL, (__int64)String.Buffer, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v16, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
