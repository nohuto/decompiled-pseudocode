/*
 * XREFs of FxDriverEntryWorker @ 0x1C0030898
 * Callers:
 *     FxDriverEntry @ 0x1C0030880 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00307A8 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     DriverEntry @ 0x1C0072000 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  int v5; // eax
  NTSTATUS v6; // ebx
  _QWORD *i; // rbx
  __int64 (__fastcall *v8)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax
  __int64 (*DriverUnload)(void); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  qword_1C005A6C0 = (__int64)DriverObject;
  DestinationString.Buffer = (unsigned __int16 *)&unk_1C005A6D0;
  *(_DWORD *)&DestinationString.Length = 34078720;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &unk_1C005A590, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    v5 = 0;
    WdfDriverMiniportUnloadOverride = *(_QWORD *)(WdfFunctions_01015 + 1608);
    if ( &__KMDF_CLASS_BIND_START > (_UNKNOWN *)&__KMDF_CLASS_BIND_END )
      goto LABEL_5;
    for ( i = &__KMDF_CLASS_BIND_END; i < &__KMDF_CLASS_BIND_END; i += 10 )
    {
      if ( *(_DWORD *)i != 80 )
      {
        v6 = -1073741820;
        goto LABEL_6;
      }
      v8 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *))i[7];
      off_1C005A628 = i;
      v5 = v8
         ? v8(WdfVersionBindClass, &unk_1C005A590, WdfDriverGlobals, i)
         : WdfVersionBindClass(&unk_1C005A590, WdfDriverGlobals, i);
      if ( v5 < 0 )
        break;
    }
    v6 = v5;
    if ( v5 < 0 )
      goto LABEL_6;
    if ( &__KMDF_TYPE_INIT_START > &__KMDF_TYPE_INIT_END )
    {
LABEL_5:
      v6 = -1073741701;
    }
    else
    {
      v6 = DriverEntry(DriverObject, RegistryPath);
      if ( v6 >= 0 )
      {
        if ( WdfDriverGlobals->DisplaceDriverUnload )
        {
          DriverUnload = qword_1C005A6B8;
          if ( DriverObject->DriverUnload )
            DriverUnload = (__int64 (*)(void))DriverObject->DriverUnload;
          qword_1C005A6B8 = DriverUnload;
          DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
        }
        else if ( (WdfDriverGlobals->DriverFlags & 2) != 0 )
        {
          WdfDriverMiniportUnloadOverride = (__int64)FxStubDriverMiniportUnload;
        }
        return 0;
      }
    }
LABEL_6:
    FxStubDriverUnloadCommon();
    return v6;
  }
  return result;
}
