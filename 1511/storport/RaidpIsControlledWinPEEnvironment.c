/*
 * XREFs of RaidpIsControlledWinPEEnvironment @ 0x1C0029570
 * Callers:
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001554 (RaUnitAtaPassThroughValidateInput.c)
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidpIsControlledWinPEEnvironment()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0;
  ZwClose(KeyHandle);
  return 1;
}
