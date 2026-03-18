/*
 * XREFs of BiCreateKey @ 0x1404FCD80
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BiCreateObject @ 0x14068DAD4 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14068DE24 (BiSetObjectDescription.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     BiZwClose @ 0x14011BBB8 (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14011BBC0 (BiZwSetSecurityObject.c)
 *     BiZwOpenKey @ 0x14011BBCC (BiZwOpenKey.c)
 *     BiZwCreateKey @ 0x14011BBDC (BiZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiCreateKey(void *a1, const WCHAR *a2, ACCESS_MASK a3, unsigned __int8 a4, HANDLE *a5, bool *a6)
{
  const WCHAR *v8; // rax
  unsigned int i; // r14d
  int v10; // ebx
  ACCESS_MASK v11; // r12d
  char v12; // r15
  ULONG v13; // ebx
  void *KeySecurityDescriptor; // rsi
  __int64 v15; // r9
  __int64 v16; // rdx
  NTSTATUS v17; // ebx
  int v19; // [rsp+20h] [rbp-B8h]
  ULONG v20; // [rsp+44h] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-70h] BYREF

  v8 = a2;
  for ( i = 0; ; ++i )
  {
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, v8);
    a3 |= 0x40000u;
    v10 = 64;
    v11 = a3;
    v12 = 0;
    if ( (a4 & 1) != 0 )
    {
      v10 = 192;
      if ( (a3 & 0x60019) != a3 )
      {
        v11 = 0x40000;
        v12 = 1;
      }
    }
    v13 = v10 | 0x200;
    KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
    if ( KeySecurityDescriptor )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = a1;
      ObjectAttributes.Attributes = v13;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = KeySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v17 = BiZwCreateKey(&Handle, v11, &ObjectAttributes, v15, v19, (a4 >> 1) & 1, &v20);
      if ( v17 < 0 )
        goto LABEL_14;
      if ( v12 )
      {
        v17 = BiZwSetSecurityObject(Handle, v16, KeySecurityDescriptor);
        if ( v17 < 0 )
          goto LABEL_14;
        v17 = BiZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        if ( v17 < 0 )
          goto LABEL_14;
        BiZwClose(Handle);
        Handle = KeyHandle;
      }
      if ( a6 )
        *a6 = v20 == 1;
      *a5 = Handle;
LABEL_14:
      if ( v17 >= 0 )
        goto LABEL_15;
      goto LABEL_20;
    }
    v17 = -1073741703;
LABEL_20:
    if ( Handle )
      BiZwClose(Handle);
LABEL_15:
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0);
    if ( v17 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v8 = a2;
  }
  return (unsigned int)v17;
}
