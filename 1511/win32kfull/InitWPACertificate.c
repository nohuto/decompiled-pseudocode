/*
 * XREFs of InitWPACertificate @ 0x1C0112410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 InitWPACertificate()
{
  int v0; // ebx
  NTSTATUS v1; // edi
  __int64 v2; // rdx
  __int128 *v3; // r9
  __int64 v4; // rcx
  char *v5; // r8
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // cl
  char v10; // al
  void *KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+94h] [rbp-6Ch]
  __int128 v20; // [rsp+9Ch] [rbp-64h]
  __int128 v21; // [rsp+ACh] [rbp-54h]
  __int128 v22; // [rsp+BCh] [rbp-44h]
  __int128 v23; // [rsp+CCh] [rbp-34h]
  __int128 v24; // [rsp+DCh] [rbp-24h]
  __int128 v25; // [rsp+ECh] [rbp-14h]
  __int128 v26; // [rsp+FCh] [rbp-4h]
  __int128 v27; // [rsp+10Ch] [rbp+Ch]

  v16 = 0LL;
  v17 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\WPA\\478C035F-04BC-48C7-B324-2462D786DAD7-5P-9");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  v0 = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  RtlInitUnicodeString(&DestinationString, &word_1C0153C60);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x90u,
           &ResultLength);
    if ( v1 >= 0 && v19 == 3 )
    {
      v2 = 0LL;
      v3 = &gpbWPACertificateHash;
      gpbWPACertificateHash = v20;
      xmmword_1C0321CC0 = v21;
      xmmword_1C0321CD0 = v22;
      xmmword_1C0321CE0 = v23;
      xmmword_1C0321CF0 = v24;
      xmmword_1C0321D00 = v25;
      xmmword_1C0321D10 = v26;
      xmmword_1C0321D20 = v27;
      do
      {
        v4 = 0LL;
        v5 = (char *)&gpbWPACertificateHash + v2;
        do
        {
          v6 = *v5;
          v5 += 16;
          *((_BYTE *)&v16 + v4) ^= v6;
          KeyValueInformation[v4 - 8] = *((_BYTE *)&v16 + v4);
          ++v4;
        }
        while ( v4 < 8 );
        ++v2;
      }
      while ( v2 < 16 );
      v7 = 0LL;
      do
      {
        v8 = (unsigned int)((unsigned __int64)(127 - v7) >> 3);
        v9 = v0 % 8;
        ++v0;
        v10 = (*((_BYTE *)&v16 + v8) >> v9) & 1;
        v7 = v0;
        *(_BYTE *)v3 = v10;
        v3 = (__int128 *)((char *)v3 + 1);
      }
      while ( (unsigned __int64)v0 < 0x80 );
    }
    ZwClose(KeyHandle);
  }
  return (unsigned int)v1;
}
