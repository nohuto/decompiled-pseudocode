/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x14062E2D4
 * Callers:
 *     ExpHwidGetDevicePropertyDataFixed @ 0x1404F710C (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404F7188 (ExpHwidGetDevicePropertyData.c)
 *     IoGetDeviceInterfacePropertyData @ 0x140629E80 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1404FE7B0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140500F80 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140500FB4 (PnpUnicodeStringToWstr.c)
 *     RtlLCIDToCultureName @ 0x140688F04 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v17; // [rsp+60h] [rbp-118h] BYREF
  _BYTE v18[8]; // [rsp+68h] [rbp-110h] BYREF
  _BYTE *v19; // [rsp+70h] [rbp-108h]
  _BYTE v20[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v20, 0, 0xAAuLL);
  v17 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v19 = v20;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v18) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpUnicodeStringToWstr(&v17, 0LL, (unsigned __int16 *)a1);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)v17,
                       3u,
                       0LL,
                       (__int64)v19,
                       a2,
                       a8,
                       a6,
                       a5,
                       a7,
                       0);
  PnpUnicodeStringToWstrFree(v17, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
