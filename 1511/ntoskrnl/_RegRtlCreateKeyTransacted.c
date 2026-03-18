/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x140444F38
 * Callers:
 *     _RegRtlCreateTreeTransacted @ 0x140444D58 (_RegRtlCreateTreeTransacted.c)
 *     _PnpCtxRegCreateKey @ 0x14045D0B0 (_PnpCtxRegCreateKey.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateKey @ 0x1401509C0 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140547890 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x14069A5F4 (NtCreateKeyTransacted_Stub.c)
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
  int v16; // ecx
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
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = v16 | 0x200;
  ObjectAttributes.SecurityDescriptor = a5;
  ObjectAttributes.RootDirectory = v13;
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
