/*
 * XREFs of ACPIInternalRegisterPowerCallBack @ 0x1C00231B0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartACPI @ 0x1C00A9A78 (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIInternalRegisterPowerCallBack(PVOID CallbackContext, PCALLBACK_FUNCTION CallbackFunction)
{
  NTSTATUS v4; // edi
  __int64 v6; // rcx
  const char *v7; // rax
  const char *v8; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-38h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_QWORD *)CallbackContext + 1) & 0x4000000000000000LL) != 0 )
    return 0LL;
  _InterlockedOr64((volatile signed __int64 *)CallbackContext + 1, 0x4000000000000000uLL);
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( v4 < 0 )
  {
    v6 = *((_QWORD *)CallbackContext + 1);
    v7 = (const char *)qword_1C002C340;
    v8 = (const char *)qword_1C002C340;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)*((_QWORD *)CallbackContext + 70);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (const char *)*((_QWORD *)CallbackContext + 71);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xAu,
      0xBu,
      (__int64)&WPP_f6c3ab00a0373aecf4646ee15b0100d4_Traceguids,
      v4,
      (char)CallbackContext,
      v7,
      v8);
    v4 = 0;
    _InterlockedAnd64((volatile signed __int64 *)CallbackContext + 1, 0xBFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExRegisterCallback(CallbackObject, CallbackFunction, CallbackContext);
  }
  return (unsigned int)v4;
}
