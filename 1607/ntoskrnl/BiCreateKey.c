/*
 * XREFs of BiCreateKey @ 0x14053DBE0
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BiCreateObject @ 0x1406D246C (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x1406D27BC (BiSetObjectDescription.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x140125318 (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x14012E5E0 (BiZwOpenKey.c)
 *     BiZwClose @ 0x14012E5E8 (BiZwClose.c)
 *     BiZwSetSecurityObject @ 0x14012E5F0 (BiZwSetSecurityObject.c)
 *     BiZwCreateKey @ 0x14012E604 (BiZwCreateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
 */

__int64 __fastcall BiCreateKey(void *a1, const WCHAR *a2, ACCESS_MASK a3, unsigned __int8 a4, HANDLE *a5, bool *a6)
{
  unsigned __int8 v6; // si
  const WCHAR *v8; // rax
  unsigned int i; // r14d
  int v11; // ebx
  ACCESS_MASK v12; // r12d
  char v13; // r15
  ULONG v14; // ebx
  void *KeySecurityDescriptor; // rsi
  __int64 v16; // r9
  __int64 v17; // rdx
  NTSTATUS v18; // ebx
  int v20; // [rsp+20h] [rbp-B8h]
  ULONG v21; // [rsp+44h] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-70h] BYREF

  v6 = a4;
  v8 = a2;
  for ( i = 0; ; ++i )
  {
    Handle = 0LL;
    RtlInitUnicodeString(&DestinationString, v8);
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    a3 |= 0x40000u;
    v11 = 64;
    v12 = a3;
    v13 = 0;
    if ( (v6 & 1) != 0 )
    {
      v11 = 192;
      if ( (a3 & 0x60019) != a3 )
      {
        v12 = 0x40000;
        v13 = 1;
      }
    }
    v14 = v11 | 0x200;
    KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
    if ( KeySecurityDescriptor )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = a1;
      ObjectAttributes.Attributes = v14;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = KeySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v18 = BiZwCreateKey(&Handle, v12, &ObjectAttributes, v16, v20, (a4 >> 1) & 1, &v21);
      if ( v18 < 0 )
        goto LABEL_14;
      if ( v13 )
      {
        v18 = BiZwSetSecurityObject(Handle, v17, KeySecurityDescriptor);
        if ( v18 < 0 )
          goto LABEL_14;
        v18 = BiZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        if ( v18 < 0 )
          goto LABEL_14;
        BiZwClose(Handle);
        Handle = KeyHandle;
      }
      if ( a6 )
        *a6 = v21 == 1;
      *a5 = Handle;
LABEL_14:
      if ( v18 >= 0 )
        goto LABEL_15;
      goto LABEL_20;
    }
    v18 = -1073741703;
LABEL_20:
    if ( Handle )
      BiZwClose(Handle);
LABEL_15:
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v18 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v6 = a4;
    v8 = a2;
  }
  return (unsigned int)v18;
}
