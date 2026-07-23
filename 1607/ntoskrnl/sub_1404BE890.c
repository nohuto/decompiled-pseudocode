/*
 * XREFs of sub_1404BE890 @ 0x1404BE890
 * Callers:
 *     ExpHwidProcessInterface @ 0x1404BE6E8 (ExpHwidProcessInterface.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x14015C5B0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x14015CB50 (ZwQuerySymbolicLinkObject.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 */

__int64 __fastcall sub_1404BE890(UNICODE_STRING *a1, _DWORD *a2, _QWORD *a3)
{
  int v5; // ebx
  int v6; // edi
  void *v7; // rdi
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
            v7 = *(void **)&a2[2 * v6 + 2];
            ObfReferenceObject(v7);
            if ( !v7 )
              goto LABEL_7;
            *a3 = v7;
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
