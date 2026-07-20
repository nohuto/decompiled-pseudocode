/*
 * XREFs of sub_140005900 @ 0x140005900
 * Callers:
 *     sub_140009D20 @ 0x140009D20 (sub_140009D20.c)
 * Callees:
 *     sub_140005A80 @ 0x140005A80 (sub_140005A80.c)
 *     sub_140013170 @ 0x140013170 (sub_140013170.c)
 */

__int64 sub_140005900()
{
  bool v0; // r12
  _DWORD *v1; // rbx
  unsigned int v2; // r14d
  const UNICODE_STRING *v3; // rbx
  struct _UNICODE_STRING *v4; // r15
  struct _UNICODE_STRING *p_DestinationString; // rsi
  int v6; // edi
  USHORT MaximumLength; // di
  USHORT v9; // si
  WCHAR *Heap; // rax
  WCHAR *v11; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  _DWORD *KeyInformation; // [rsp+D0h] [rbp+77h] BYREF

  ObjectAttributes.Length = 48;
  KeyInformation = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)aTv;
  v0 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
  {
    KeyInformation = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 0x218uLL);
    v1 = KeyInformation;
    if ( !KeyInformation )
      return 3221225495LL;
    if ( NtEnumerateKey(KeyHandle, 0, KeyBasicInformation, &KeyInformation, 8u, &ResultLength) >= 0 )
      v0 = v1[3] != 6 || *((_WORD *)v1 + 8) != 120 || *((_WORD *)v1 + 9) != 56 || *((_WORD *)v1 + 10) != 54;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, KeyInformation);
  v2 = 0;
  v3 = &stru_140014E60;
  while ( 1 )
  {
    v4 = (struct _UNICODE_STRING *)&v3[1];
    p_DestinationString = (struct _UNICODE_STRING *)v3;
    if ( v0 )
      break;
LABEL_8:
    v6 = sub_140005A80(p_DestinationString, v4);
    if ( v0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, p_DestinationString->Buffer);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v4->Buffer);
    }
    if ( v6 >= 0 )
    {
      ++v2;
      v3 += 2;
      if ( v2 < 0x3D )
        continue;
    }
    return (unsigned int)v6;
  }
  MaximumLength = v3->MaximumLength;
  v9 = v3[1].MaximumLength;
  Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, MaximumLength);
  DestinationString.Length = 0;
  DestinationString.Buffer = Heap;
  DestinationString.MaximumLength = MaximumLength;
  v11 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
  v13.Buffer = v11;
  v13.Length = 0;
  v13.MaximumLength = v9;
  if ( !DestinationString.Buffer )
    return 3221225495LL;
  if ( v11 )
  {
    RtlCopyUnicodeString(&DestinationString, v3);
    RtlCopyUnicodeString(&v13, v3 + 1);
    sub_140013170(&unk_14001B600, &unk_14001B610, &DestinationString);
    sub_140013170(&unk_14001B600, &unk_14001B610, &v13);
    p_DestinationString = &DestinationString;
    v4 = &v13;
    goto LABEL_8;
  }
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return 3221225495LL;
}
