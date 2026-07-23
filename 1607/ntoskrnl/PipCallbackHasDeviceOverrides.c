/*
 * XREFs of PipCallbackHasDeviceOverrides @ 0x1406295D0
 * Callers:
 *     PipFindDeviceOverrideEntry @ 0x14050DC78 (PipFindDeviceOverrideEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 */

char __fastcall PipCallbackHasDeviceOverrides(void *a1, __int64 a2)
{
  char v2; // bl
  NTSTATUS v4; // edi
  int v5; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-29h] BYREF
  _BYTE KeyInformation[20]; // [rsp+70h] [rbp+7h] BYREF
  int v11; // [rsp+84h] [rbp+1Bh]

  v2 = 0;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a2;
  KeyHandle = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v4 == -2147483643 )
      v4 = 0;
    if ( v4 >= 0 && (v5 = v11) != 0 )
    {
      *(_QWORD *)(a2 + 16) = KeyHandle;
      *(_DWORD *)(a2 + 24) = v5;
    }
    else
    {
      v4 = -1073741823;
      ZwClose(KeyHandle);
    }
    if ( v4 >= 0 )
      return 1;
  }
  return v2;
}
