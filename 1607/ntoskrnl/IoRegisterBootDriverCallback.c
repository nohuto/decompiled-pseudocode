/*
 * XREFs of IoRegisterBootDriverCallback @ 0x1405811FC
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 */

PVOID __fastcall IoRegisterBootDriverCallback(PCALLBACK_FUNCTION CallbackFunction, PVOID CallbackContext)
{
  struct _CALLBACK_OBJECT *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( !PnpBootDriverCallbackRegistrationClosed )
  {
    v4 = PnpBootDriverCallbackObject;
    if ( PnpBootDriverCallbackObject )
      return ExRegisterCallback(v4, CallbackFunction, CallbackContext);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\BootDriver");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&PnpBootDriverCallbackObject, &ObjectAttributes, 1u, 1u) >= 0 )
    {
      v4 = PnpBootDriverCallbackObject;
      return ExRegisterCallback(v4, CallbackFunction, CallbackContext);
    }
  }
  return 0LL;
}
