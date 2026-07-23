/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x1405B36D0
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x1405B36A0 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404D83F4 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1406CC9C0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  int v11; // ebx
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  WCHAR *v15; // [rsp+50h] [rbp-108h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-100h] BYREF
  _WORD v17[88]; // [rsp+70h] [rbp-E8h] BYREF

  memset(v17, 0, 170);
  v15 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.Buffer = v17;
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
  v11 = PnpUnicodeStringToWstr(&v15, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(v10, v15, 3, 0LL, (__int64)String.Buffer, a2, a5, a7, a6);
  PnpUnicodeStringToWstrFree(v15, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
