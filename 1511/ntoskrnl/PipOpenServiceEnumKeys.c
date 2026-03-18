/*
 * XREFs of PipOpenServiceEnumKeys @ 0x1403B9994
 * Callers:
 *     PiProcessDriverInstance @ 0x1403B9744 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140507FA4 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     PiDevCfgVerifyService @ 0x1405117E4 (PiDevCfgVerifyService.c)
 *     PipHardwareConfigActivateService @ 0x140513D6C (PipHardwareConfigActivateService.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PpDevCfgInit @ 0x1407682AC (PpDevCfgInit.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     IopCreateRegistryKeyEx @ 0x1403B9D0C (IopCreateRegistryKeyEx.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043BFA8 (_PnpCtxGetCachedContextBaseKey.c)
 */

NTSTATUS __fastcall PipOpenServiceEnumKeys(UNICODE_STRING *a1, ACCESS_MASK a2, HANDLE *a3, HANDLE *a4, char a5)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-9h] BYREF
  void *v14; // [rsp+48h] [rbp-1h] BYREF
  int v15; // [rsp+50h] [rbp+7h] BYREF
  const wchar_t *v16; // [rsp+58h] [rbp+Fh]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF

  result = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, 6LL, &v14);
  if ( result >= 0 )
  {
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = v14;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = a1;
    result = ZwOpenKey(&KeyHandle, a2, &ObjectAttributes);
    if ( result >= 0 )
    {
      if ( a4 || a5 )
      {
        v15 = 655368;
        v16 = L"Enum";
        if ( a5 )
        {
          v10 = IopCreateRegistryKeyEx(&Handle, KeyHandle, &v15, a2, 1, 0LL);
        }
        else
        {
          Handle = 0LL;
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v10 = ZwOpenKey(&Handle, a2, &ObjectAttributes);
        }
        v11 = v10;
        if ( v10 < 0 )
        {
          ZwClose(KeyHandle);
          return v11;
        }
        if ( a4 )
          *a4 = Handle;
        else
          ZwClose(Handle);
      }
      if ( a3 )
        *a3 = KeyHandle;
      else
        ZwClose(KeyHandle);
      return 0;
    }
  }
  return result;
}
