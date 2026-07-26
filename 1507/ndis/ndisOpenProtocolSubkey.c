/*
 * XREFs of ndisOpenProtocolSubkey @ 0x1C00CDC14
 * Callers:
 *     NdisOpenConfigurationKeyByName @ 0x1C00A5D70 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00B12E0 (NdisOpenConfigurationKeyByIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOpenProtocolSubkey(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  NTSTATUS v4; // ebx
  __int16 v6; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v7[14]; // [rsp+22h] [rbp-4Eh]
  int v8; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v9; // [rsp+38h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  v8 = 6815846;
  KeyHandle = 0LL;
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v6 = 0;
  v2 = a1 + 176;
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)&v7[6] = v2;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(v2 + 2 * v3) );
  ObjectAttributes.Length = 48;
  v6 = 2 * v3;
  ObjectAttributes.RootDirectory = 0LL;
  *(_WORD *)v7 = 2 * v3 + 2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey((PHANDLE)(a1 + 32), 0xBu, &ObjectAttributes);
    if ( v4 < 0 )
      *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
