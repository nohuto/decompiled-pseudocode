/*
 * XREFs of ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C00D2420
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C00C3B20 (DpiPdoDispatchPnp.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 */

__int64 __fastcall DpiBrightnessQueryInterface(_QWORD *Object, struct _QUERY_INTERFACE *a2)
{
  __int64 v2; // rdi
  unsigned __int16 v6; // cx
  PINTERFACE Interface; // rax

  v2 = Object[8];
  if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS_2, 0x10uLL) == 16
    && a2->Version == 2
    && a2->Size == 88 )
  {
    a2->InterfaceSpecificData = 0LL;
    v6 = *(_WORD *)(v2 + 3048);
    if ( !v6 )
      return 3221225659LL;
    memmove(a2->Interface, (const void *)(v2 + 3048), v6);
  }
  else
  {
    if ( RtlCompareMemory(a2->InterfaceType, &GUID_DEVINTERFACE_BRIGHTNESS, 0x10uLL) != 16 )
      return 3221226098LL;
    if ( a2->Version != 1 )
      return 3221226098LL;
    if ( a2->Size != 56 )
      return 3221226098LL;
    a2->InterfaceSpecificData = 0LL;
    if ( !*(_WORD *)(v2 + 3192) )
      return 3221226098LL;
    Interface = a2->Interface;
    *(_OWORD *)&Interface->Size = *(_OWORD *)(v2 + 3136);
    *(_OWORD *)&Interface->InterfaceReference = *(_OWORD *)(v2 + 3152);
    *(_OWORD *)&Interface[1].Size = *(_OWORD *)(v2 + 3168);
    Interface[1].InterfaceReference = *(PINTERFACE_REFERENCE *)(v2 + 3184);
  }
  ObfReferenceObject(Object);
  return 0LL;
}
