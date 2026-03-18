/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1C00D798C
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00D6490 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00A1A14 (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1C00D7508 (PiRegStateOpenClassKey.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00D7B78 (CmRegUtilCreateWstrKey.c)
 */

int __fastcall PpRegStateUpdateStackCreationSettings(
        const _GUID *DeviceClassGuid,
        STACK_CREATION_SETTINGS *StackCreationSettings)
{
  int result; // eax
  unsigned int v4; // r8d
  __int64 v5; // r9
  int Blink; // eax
  unsigned int *Handle; // rbx
  int inited; // ebx
  ULONG v9; // r9d
  void *v10; // r10
  void *classPropertyKey; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  void *tempDescriptor; // [rsp+80h] [rbp+18h] BYREF
  void *classKey; // [rsp+88h] [rbp+20h] BYREF

  result = PiRegStateOpenClassKey(DeviceClassGuid, (unsigned int)StackCreationSettings, 0, 0LL, &classKey);
  if ( result >= 0 )
  {
    Blink = (int)WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink;
    Handle = PiRegStateSysAllInherittedSecurityDescriptor;
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink) )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &tempDescriptor) < 0 )
      {
        Blink = 2;
        LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink) = 2;
      }
      else
      {
        LODWORD(WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink) = 1;
        ExFreePoolWithTag(tempDescriptor, 0);
        Blink = (int)WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink;
      }
    }
    if ( Blink != 1 )
      Handle = 0LL;
    tempDescriptor = Handle;
    inited = CmRegUtilCreateWstrKey(classKey, (wchar_t *)L"Properties", v4, v5, Handle, 0LL, &classPropertyKey);
    ZwClose(classKey);
    if ( inited >= 0 )
    {
      RtlLengthSecurityDescriptor(StackCreationSettings->SecurityDescriptor);
      inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, (wchar_t *)L"Security");
      if ( inited >= 0 )
        inited = ZwSetValueKey(classPropertyKey, &DestinationString, 0, 3u, v10, v9);
      ZwClose(classPropertyKey);
    }
    return inited;
  }
  return result;
}
