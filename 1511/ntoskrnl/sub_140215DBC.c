/*
 * XREFs of sub_140215DBC @ 0x140215DBC
 * Callers:
 *     sub_140215C6C @ 0x140215C6C (sub_140215C6C.c)
 * Callees:
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 */

int __fastcall sub_140215DBC(__int64 a1, char a2, UNICODE_STRING *a3, HANDLE *a4, PULONG Disposition)
{
  int result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  if ( !a3 || !Disposition )
    return -1073741811;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *Disposition = 2;
  result = ZwOpenKey(a4, 8u, &ObjectAttributes);
  if ( result < 0 && (a2 & 2) != 0 )
    return ZwCreateKey(a4, 8u, &ObjectAttributes, 0, 0LL, 0, Disposition);
  return result;
}
