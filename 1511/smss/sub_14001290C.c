/*
 * XREFs of sub_14001290C @ 0x14001290C
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_1400123D0 @ 0x1400123D0 (sub_1400123D0.c)
 *     sub_1400124C0 @ 0x1400124C0 (sub_1400124C0.c)
 *     sub_14001277C @ 0x14001277C (sub_14001277C.c)
 */

__int64 __fastcall sub_14001290C(struct _UNICODE_STRING *a1, void *a2)
{
  int v4; // ebx
  HANDLE Handle; // [rsp+20h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+28h] [rbp-21h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+58h] [rbp+Fh] BYREF

  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtQueryAttributesFile(&ObjectAttributes, &FileInformation);
  if ( v4 >= 0 )
  {
    if ( (FileInformation.FileAttributes & 0x10) != 0 )
    {
      v4 = -1073741638;
    }
    else if ( (FileInformation.FileAttributes & 1) != 0 )
    {
      v4 = sub_1400123D0(&Handle, 0x100100u, &ObjectAttributes);
      if ( v4 >= 0 )
      {
        v4 = sub_14001277C(Handle, FileInformation.FileAttributes & 0xFFFFFFFE);
        if ( v4 >= 0 )
        {
          NtClose(Handle);
          Handle = 0LL;
          v4 = sub_1400124C0((const void **)a1, a2, 1);
          if ( v4 < 0 )
          {
            if ( sub_1400123D0(&Handle, 0x110100u, &ObjectAttributes) >= 0 )
              sub_14001277C(Handle, FileInformation.FileAttributes);
          }
          else
          {
            v4 = 0;
          }
        }
      }
    }
    else
    {
      v4 = -1073741823;
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v4;
}
