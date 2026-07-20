/*
 * XREFs of sub_1400127F8 @ 0x1400127F8
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 * Callees:
 *     sub_14001059C @ 0x14001059C (sub_14001059C.c)
 *     sub_1400123D0 @ 0x1400123D0 (sub_1400123D0.c)
 *     sub_1400124C0 @ 0x1400124C0 (sub_1400124C0.c)
 */

__int64 __fastcall sub_1400127F8(struct _UNICODE_STRING *a1, void *a2)
{
  int v4; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES v8; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF

  Handle = 0LL;
  UnicodeString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)::DestinationString.Buffer + 4);
  v4 = sub_14001059C((__int64)&DestinationString, (__int64)L"SMSS-PFRO", &UnicodeString);
  if ( v4 >= 0 )
  {
    v8.RootDirectory = 0LL;
    v8.Length = 48;
    v8.Attributes = 64;
    v8.ObjectName = a1;
    *(_OWORD *)&v8.SecurityDescriptor = 0LL;
    v4 = sub_1400123D0(&Handle, 0x110000u, &v8);
    if ( v4 >= 0 )
    {
      v4 = sub_1400124C0((const void **)&UnicodeString, Handle, 1);
      if ( v4 >= 0 )
      {
        v4 = sub_1400124C0((const void **)a1, a2, 1);
        if ( v4 >= 0 )
          v4 = 0;
        else
          sub_1400124C0((const void **)a1, Handle, 1);
      }
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v4;
}
