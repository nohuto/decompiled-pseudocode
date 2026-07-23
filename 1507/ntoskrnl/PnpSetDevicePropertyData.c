/*
 * XREFs of PnpSetDevicePropertyData @ 0x140597994
 * Callers:
 *     IoSetDevicePropertyData @ 0x140597904 (IoSetDevicePropertyData.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x14015FDC0 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404D83F4 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x140597B2C (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1406CC9C0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  int v12; // ebx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v16; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-108h] BYREF
  _WORD v18[88]; // [rsp+60h] [rbp-F8h] BYREF

  memset(v18, 0, 170);
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v9 = 0LL;
  if ( !v9 || !*(_QWORD *)(v9 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.Buffer = v18;
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
  v12 = PiPnpRtlSetObjectProperty(v11, *(const WCHAR **)(v9 + 48), 1, 0LL, (__int64)String.Buffer, a2, a5, a7, a6);
  if ( v12 >= 0 && *(_DWORD *)(a2 + 16) == 2 )
  {
    v16 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v16 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v16 )
      v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v12 == -1073741275 )
    v12 = -1073741772;
  if ( *(int *)(v9 + 300) >= 771 )
    PnpSetDeviceInstancePropertyChangeEvent(v9);
  return (unsigned int)v12;
}
