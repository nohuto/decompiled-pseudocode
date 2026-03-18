/*
 * XREFs of ?KeyboardDeviceSpecificCallout@@YAJPEAXPEAU_UNICODE_STRING@@W4_INTERFACE_TYPE@@KPEAPEAU_KEY_VALUE_FULL_INFORMATION@@W4_CONFIGURATION_TYPE@@K34K3@Z @ 0x1C0156FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardDeviceSpecificCallout(
        _BYTE *Context,
        PUNICODE_STRING PathName,
        INTERFACE_TYPE BusType,
        ULONG BusNumber,
        PKEY_VALUE_FULL_INFORMATION *BusInformation,
        CONFIGURATION_TYPE ControllerType,
        ULONG ControllerNumber,
        PKEY_VALUE_FULL_INFORMATION *ControllerInformation,
        CONFIGURATION_TYPE PeripheralType,
        ULONG PeripheralNumber,
        PKEY_VALUE_FULL_INFORMATION *PeripheralInformation)
{
  unsigned int v11; // edx
  PKEY_VALUE_FULL_INFORMATION v13; // rcx
  __int64 DataOffset; // rax
  unsigned int v15; // r9d
  char *v16; // rcx
  __int16 v17; // ax

  v11 = 0;
  if ( !Context[2] )
  {
    v13 = PeripheralInformation[1];
    if ( v13->DataLength )
    {
      DataOffset = v13->DataOffset;
      v15 = *(ULONG *)((char *)&v13->DataLength + DataOffset);
      v16 = (char *)&v13->NameLength + DataOffset;
      if ( v15 )
      {
        while ( *v16 != 5 )
        {
          ++v11;
          v16 += 20;
          if ( v11 >= v15 )
            return 0LL;
        }
        v17 = (*((_WORD *)v16 + 13) >> 4) & 7;
        Context[2] = 1;
        *(_WORD *)Context = v17;
      }
    }
  }
  return 0LL;
}
