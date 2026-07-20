/*
 * XREFs of sub_140005A80 @ 0x140005A80
 * Callers:
 *     sub_140005900 @ 0x140005900 (sub_140005900.c)
 * Callees:
 *     sub_140005B80 @ 0x140005B80 (sub_140005B80.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140005A80(__int128 *a1, PVOID *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  int v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r9
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-21h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp+1Fh] BYREF
  _BYTE KeyInformation[16]; // [rsp+88h] [rbp+2Fh] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  LOBYTE(a4) = 1;
  result = sub_140005B80(&KeyHandle, a2, a1, a4);
  if ( result == -1073741790 )
    return -1073741790;
  if ( result != -1073741771 )
    goto LABEL_3;
  v10 = *a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  v18 = v10;
  ObjectAttributes.Attributes = 320;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0x3001Fu, &ObjectAttributes);
  if ( result < 0 )
    return result;
  v11 = NtQueryKey(KeyHandle, KeyFlagsInformation, KeyInformation, 0xCu, &ResultLength);
  if ( v11 < 0 )
  {
    NtClose(KeyHandle);
    return v11;
  }
  if ( (KeyInformation[4] & 3) != 2 )
  {
    NtClose(KeyHandle);
    goto LABEL_5;
  }
  v11 = NtDeleteKey(KeyHandle);
  NtClose(KeyHandle);
  if ( v11 < 0 )
    return v11;
  LOBYTE(v13) = 1;
  result = sub_140005B80(&KeyHandle, v12, a1, v13);
LABEL_3:
  if ( result >= 0 )
  {
    v8 = NtSetValueKey(KeyHandle, &stru_14001F570, 0, 6u, a2[1], *(unsigned __int16 *)a2);
    NtClose(KeyHandle);
    if ( v8 < 0 )
      return v8;
LABEL_5:
    v9 = sub_140005B80(&Handle, v7, a2, 0LL);
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741771 || v9 == -1073741790 )
        return 0;
    }
    else
    {
      NtClose(Handle);
    }
    return v8;
  }
  if ( result == -1073741771 )
    goto LABEL_5;
  return result;
}
