/*
 * XREFs of CmpMoveBiosAliasTable @ 0x140607C78
 * Callers:
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14015A4B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14015BAF0 (ZwDeleteKey.c)
 *     CmDeleteKeyRecursive @ 0x140606EA4 (CmDeleteKeyRecursive.c)
 */

__int64 __fastcall CmpMoveBiosAliasTable(
        void *a1,
        void *a2,
        unsigned int a3,
        int a4,
        wchar_t *Dst,
        __int64 a6,
        unsigned __int16 *KeyValueInformation)
{
  ULONG v10; // esi
  int v11; // r12d
  NTSTATUS v12; // ebx
  ULONG Length; // [rsp+20h] [rbp-C1h]
  HANDLE Handle; // [rsp+30h] [rbp-B1h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-A9h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-A1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-99h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-81h] BYREF
  int v21; // [rsp+90h] [rbp-51h]
  int Data; // [rsp+98h] [rbp-49h] BYREF
  _BYTE KeyInformation[20]; // [rsp+A0h] [rbp-41h] BYREF
  ULONG v24; // [rsp+B4h] [rbp-2Dh]

  KeyHandle = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  Data = a4;
  RtlInitUnicodeString(&DestinationString, L"SerialNumber");
  v10 = 0;
  if ( ZwQueryValueKey(a2, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength) >= 0
    && *((_DWORD *)KeyValueInformation + 1) == 4
    && (v21 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)),
        RtlInitUnicodeString(&DestinationString, L"DockID"),
        ZwQueryValueKey(a2, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x100u, &ResultLength) >= 0)
    && *((_DWORD *)KeyValueInformation + 1) == 4 )
  {
    v11 = *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2));
    RtlInitUnicodeString(&DestinationString, L"Alias");
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    {
      v12 = 0;
      KeyHandle = 0LL;
      goto LABEL_37;
    }
    v12 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
    if ( v12 >= 0 && v24 )
    {
      while ( 1 )
      {
        v12 = ZwEnumerateKey(KeyHandle, v10, KeyBasicInformation, KeyValueInformation, 0xFEu, &ResultLength);
        if ( v12 < 0 )
          goto LABEL_35;
        KeyValueInformation[((unsigned __int64)*((unsigned int *)KeyValueInformation + 3) >> 1) + 8] = 0;
        DestinationString.Length = KeyValueInformation[6];
        DestinationString.MaximumLength = DestinationString.Length + 2;
        DestinationString.Buffer = KeyValueInformation + 8;
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
        if ( v12 < 0 )
          goto LABEL_35;
        RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_34;
        if ( a3 != *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          break;
        RtlInitUnicodeString(&DestinationString, L"DockID");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_34;
        if ( v11 != *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          break;
        RtlInitUnicodeString(&DestinationString, L"SerialNumber");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_34;
        if ( v21 != *(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
          break;
        RtlInitUnicodeString(&DestinationString, L"ProfileNumber");
        ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
        ZwClose(Handle);
        Handle = 0LL;
        RtlInitUnicodeString(&DestinationString, L"Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = a1;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v17, 0x2001Fu, &ObjectAttributes) < 0 )
          goto LABEL_33;
        swprintf_s(Dst, 0x80uLL, L"%04d", a3);
        RtlInitUnicodeString(&DestinationString, Dst);
        ObjectAttributes.RootDirectory = v17;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) < 0 )
        {
          Handle = 0LL;
          goto LABEL_34;
        }
        RtlInitUnicodeString(&DestinationString, L"Cloned");
        v12 = ZwQueryValueKey(
                Handle,
                &DestinationString,
                KeyValueFullInformation,
                KeyValueInformation,
                0x100u,
                &ResultLength);
        if ( v12 < 0 || *((_DWORD *)KeyValueInformation + 1) != 4 )
          goto LABEL_34;
        if ( !*(_DWORD *)((char *)KeyValueInformation + *((unsigned int *)KeyValueInformation + 2)) )
        {
          ZwClose(Handle);
          ZwClose(v17);
          v17 = 0LL;
          goto LABEL_29;
        }
        ZwDeleteKey(Handle);
        ZwClose(Handle);
        ZwClose(v17);
        v17 = 0LL;
        Handle = 0LL;
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&v17, 0x2001Fu, &ObjectAttributes) < 0 )
        {
LABEL_33:
          v17 = 0LL;
          goto LABEL_34;
        }
        swprintf_s(Dst, 0x80uLL, L"%04d", a3);
        v12 = CmDeleteKeyRecursive(v17, Dst, (__int64)KeyValueInformation, 256, Length);
        ZwClose(v17);
        v17 = 0LL;
LABEL_30:
        if ( ++v10 >= v24 )
          goto LABEL_35;
      }
      ZwClose(Handle);
LABEL_29:
      Handle = 0LL;
      goto LABEL_30;
    }
  }
  else
  {
LABEL_34:
    v12 = -1073741492;
  }
LABEL_35:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)v12;
}
