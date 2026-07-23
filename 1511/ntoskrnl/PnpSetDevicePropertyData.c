/*
 * XREFs of PnpSetDevicePropertyData @ 0x14051C830
 * Callers:
 *     IoSetDevicePropertyData @ 0x14051C7A0 (IoSetDevicePropertyData.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x1401303C8 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404E5D38 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x14051C9B0 (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x14064993C (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v14; // rax
  UNICODE_STRING String; // [rsp+50h] [rbp-108h] BYREF
  _WORD v16[88]; // [rsp+60h] [rbp-F8h] BYREF

  memset(v16, 0, 170);
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v9 = 0LL;
  if ( !v9 || !*(_QWORD *)(v9 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.Buffer = v16;
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
  v12 = PiPnpRtlSetObjectProperty(v11, *(const WCHAR **)(v9 + 48), 1u, 0LL, (__int64)String.Buffer, a2, a5, a7, a6);
  if ( v12 >= 0 && *(_DWORD *)(a2 + 16) == 2 )
  {
    v14 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v14 )
      v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 == -1073741275 )
    v12 = -1073741772;
  if ( *(int *)(v9 + 300) >= 771 )
    PnpSetDeviceInstancePropertyChangeEvent(v9);
  return (unsigned int)v12;
}
