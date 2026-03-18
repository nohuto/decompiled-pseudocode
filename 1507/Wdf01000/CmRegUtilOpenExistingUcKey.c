/*
 * XREFs of CmRegUtilOpenExistingUcKey @ 0x1C00D51DC
 * Callers:
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00D5234 (CmRegUtilOpenExistingWstrKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CmRegUtilOpenExistingUcKey(
        void *BaseHandle,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        void **Handle)
{
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES objectAttributes; // [rsp+20h] [rbp-38h] BYREF
  void *newHandle; // [rsp+60h] [rbp+8h] BYREF

  *Handle = 0LL;
  objectAttributes.Length = 48;
  objectAttributes.RootDirectory = BaseHandle;
  objectAttributes.Attributes = 576;
  objectAttributes.ObjectName = KeyName;
  *(_OWORD *)&objectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&newHandle, DesiredAccess, &objectAttributes);
  if ( result >= 0 )
    *Handle = newHandle;
  return result;
}
