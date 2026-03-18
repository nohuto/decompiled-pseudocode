/*
 * XREFs of sub_140459F24 @ 0x140459F24
 * Callers:
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401812F0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x140181870 (ZwQuerySymbolicLinkObject.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_140459F24(UNICODE_STRING *a1, _DWORD *a2, _QWORD *a3)
{
  int v5; // ebx
  int v6; // edi
  void *v8; // rdi
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE LinkHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING LinkTarget; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  char v14; // [rsp+2A0h] [rbp+1A0h] BYREF

  ObjectAttributes.ObjectName = a1;
  LinkHandle = 0LL;
  *(_DWORD *)&LinkTarget.Length = 34078720;
  ObjectAttributes.Length = 48;
  LinkTarget.Buffer = (wchar_t *)&v14;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    if ( v5 >= 0 )
    {
      v6 = 0;
      if ( *a2 )
      {
        while ( 1 )
        {
          v9 = 0;
          v5 = ObQueryNameStringMode(*(char **)&a2[2 * v6 + 2], (__int64)&String2, 0x21Au, &v9, 0);
          if ( v5 < 0 )
            break;
          if ( RtlEqualUnicodeString(&LinkTarget, &String2, 1u) )
          {
            v8 = *(void **)&a2[2 * v6 + 2];
            ObfReferenceObject(v8);
            if ( !v8 )
              goto LABEL_7;
            *a3 = v8;
            break;
          }
          if ( (unsigned int)++v6 >= *a2 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v5 = -1073741772;
      }
    }
  }
  if ( LinkHandle )
    ZwClose(LinkHandle);
  return (unsigned int)v5;
}
