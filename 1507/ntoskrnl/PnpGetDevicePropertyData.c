/*
 * XREFs of PnpGetDevicePropertyData @ 0x1404DB80C
 * Callers:
 *     IoGetDevicePropertyData @ 0x1404DB778 (IoGetDevicePropertyData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x140582570 (PnpCompareInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1406CC9C0 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        __int64 a8)
{
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ObjectProperty; // ebx
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v16; // rax
  unsigned int *v17; // rdx
  UNICODE_STRING String; // [rsp+60h] [rbp-108h] BYREF
  _WORD v19[88]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v19, 0, 170);
  if ( a1 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v10 = 0LL;
  if ( !v10 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    String.Buffer = v19;
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
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(v10 + 48),
                     1u,
                     0LL,
                     (__int64)String.Buffer,
                     a2,
                     a8,
                     (__int64)a6,
                     a5,
                     (__int64)a7,
                     0);
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v16 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v16 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v16 )
    {
      if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
      {
        v17 = *(unsigned int **)(*(_QWORD *)(a1 + 312) + 88LL);
        if ( v17 )
        {
          if ( a7 )
            *a7 = *v17;
          if ( a5 >= *v17 )
          {
            memmove(a6, v17 + 1, *v17);
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
        PnpCompareInterruptInformation(a1, a6, *a7);
      }
    }
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
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return ObjectProperty;
}
