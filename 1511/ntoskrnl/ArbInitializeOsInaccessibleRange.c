/*
 * XREFs of ArbInitializeOsInaccessibleRange @ 0x14077036C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall ArbInitializeOsInaccessibleRange(char a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v6[2]; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  int v10; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v11; // [rsp+B8h] [rbp-50h]
  _QWORD Data[10]; // [rsp+C8h] [rbp-40h] BYREF

  LODWORD(v6[0]) = 7733366;
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    ObjectAttributes.Attributes = 576;
    v11 = L"InaccessibleRange";
    ObjectAttributes.RootDirectory = KeyHandle;
    v10 = 2228258;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v10;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
    if ( v3 >= 0 )
    {
      memset(Data, 0, 0x48uLL);
      Data[8] = -1LL;
      ValueName.Buffer = L"PhysicalAddress";
      HIDWORD(Data[3]) = 1;
      HIDWORD(Data[4]) = 1;
      LODWORD(Data[0]) = 72;
      BYTE1(Data[5]) = 3;
      Data[7] = 1LL << a1;
      *(_DWORD *)&ValueName.Length = 1966110;
      v3 = ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, 0x48u);
      if ( v3 >= 0 )
        v3 = 0;
      ZwClose(Handle);
    }
    ZwClose(KeyHandle);
    return v3;
  }
  return result;
}
