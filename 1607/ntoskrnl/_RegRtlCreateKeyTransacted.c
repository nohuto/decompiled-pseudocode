/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x1404DD8A0
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x1404DD804 (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x140512D88 (_PnpCtxRegCreateKey.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x14057C0D4 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x1406E09D8 (NtCreateKeyTransacted_Stub.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        char *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        PHANDLE KeyHandle,
        PULONG Disposition,
        HANDLE a9)
{
  void *v9; // rbx
  void *v13; // rsi
  NTSTATUS inited; // edi
  int v15; // r9d
  int v16; // eax
  int v18; // [rsp+20h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *v21; // [rsp+B0h] [rbp+30h] BYREF

  v9 = 0LL;
  v21 = 0LL;
  v13 = a1;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v21);
    if ( inited < 0 )
      goto LABEL_11;
    v9 = v21;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_12;
  v16 = 192;
  if ( (a3 & 8) != 0 )
    v16 = 448;
  if ( a6 )
    v16 |= 2u;
  ObjectAttributes.Length = 48;
  if ( v9 )
    v13 = v9;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.RootDirectory = v13;
  ObjectAttributes.Attributes = v16 | 0x200;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = a5;
  if ( a9 )
  {
    inited = NtCreateKeyTransacted_Stub((int)KeyHandle, a4, (int)&ObjectAttributes, v15, v18, a3, a9, Disposition);
    if ( inited == -1073741702 )
      inited = -1072103420;
  }
  else
  {
    inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
  }
LABEL_11:
  v9 = v21;
LABEL_12:
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)inited;
}
