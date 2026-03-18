/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x1405702EC
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x1405702BC (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140500F80 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140500FB4 (PnpUnicodeStringToWstr.c)
 *     RtlLCIDToCultureName @ 0x140688F04 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
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
  _BYTE v17[8]; // [rsp+58h] [rbp-100h] BYREF
  _BYTE *v18; // [rsp+60h] [rbp-F8h]
  _BYTE v19[176]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v19, 0, 0xAAuLL);
  v16 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v18 = v19;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v17) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr(&v16, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(PiPnpRtlCtx, v16, 3, 0, (__int64)v18, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v16, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
