/*
 * XREFs of sub_140265F48 @ 0x140265F48
 * Callers:
 *     sub_140265DD0 @ 0x140265DD0 (sub_140265DD0.c)
 * Callees:
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 */

int __fastcall sub_140265F48(__int64 a1, char a2, UNICODE_STRING *a3, HANDLE *a4, PULONG Disposition)
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
