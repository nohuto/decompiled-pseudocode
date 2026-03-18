/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x1404E7890
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x1404E7734 (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     _CmOpenDeviceRegKey @ 0x1404FCD30 (_CmOpenDeviceRegKey.c)
 *     PnpUnicodeStringToWstrFree @ 0x140500F80 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140500FB4 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  NTSTATUS RegistryValue; // ebx
  PVOID v7; // rcx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  result = PnpUnicodeStringToWstr(&P, 0LL, a1);
  if ( (int)result >= 0 )
  {
    RegistryValue = CmOpenDeviceRegKey(PiPnpRtlCtx, (_DWORD)P, 528, 0, 131097, 0, (__int64)&Handle, 0LL);
    PnpUnicodeStringToWstrFree(P, a1);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle, L"CSConfigFlags", 0, &P);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
      {
        v7 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
          *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(v7, 0);
      }
    }
    return (unsigned int)RegistryValue;
  }
  return result;
}
