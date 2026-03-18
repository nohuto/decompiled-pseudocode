/*
 * XREFs of ACPIInternalRegisterPowerCallBack @ 0x1C001B858
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C001AE80 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartACPI @ 0x1C0086FA4 (ACPIInitStartACPI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIInternalRegisterPowerCallBack(
        volatile signed __int64 *CallbackContext,
        PCALLBACK_FUNCTION CallbackFunction)
{
  NTSTATUS v4; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+70h] [rbp+8h] BYREF

  if ( (*CallbackContext & 0x4000000000000000LL) != 0 )
    return 0LL;
  _InterlockedOr64(CallbackContext, 0x4000000000000000uLL);
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( v4 < 0 )
  {
    v4 = 0;
    _InterlockedAnd64(CallbackContext, 0xBFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExRegisterCallback(CallbackObject, CallbackFunction, (PVOID)CallbackContext);
  }
  return (unsigned int)v4;
}
