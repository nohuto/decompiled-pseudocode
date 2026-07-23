/*
 * XREFs of PnpGetDevicePropertyData @ 0x1404DA59C
 * Callers:
 *     IoGetDevicePropertyData @ 0x1404DA508 (IoGetDevicePropertyData.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x140546810 (PnpCompareInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x140688FE8 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ObjectProperty; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  unsigned int *v19; // rdx
  UNICODE_STRING String; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v21[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v21, 0, 0xAAuLL);
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v11 = 0LL;
  if ( !v11 || !*(_QWORD *)(v11 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.Buffer = (wchar_t *)v21;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     *(_QWORD *)(v11 + 48),
                     1,
                     0,
                     (__int64)String.Buffer,
                     a2,
                     a8,
                     (__int64)a6,
                     a5,
                     (__int64)a7,
                     0);
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v18 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v18 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v18 )
    {
      if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
      {
        v19 = *(unsigned int **)(*(_QWORD *)(a1 + 312) + 88LL);
        if ( v19 )
        {
          if ( a7 )
            *a7 = *v19;
          if ( a5 >= *v19 )
          {
            memmove(a6, v19 + 1, *v19);
            ObjectProperty = 0;
          }
          else
          {
            ObjectProperty = -1073741789;
          }
        }
        else
        {
          ObjectProperty = -1073741772;
        }
      }
      else if ( !ObjectProperty )
      {
        PnpCompareInterruptInformation(a1, a6, (unsigned int)*a7);
      }
    }
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return ObjectProperty;
}
