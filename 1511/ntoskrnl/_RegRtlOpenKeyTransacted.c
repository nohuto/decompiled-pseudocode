/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x14043BEB8
 * Callers:
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _SysCtxOpenMachine @ 0x14052408C (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x14052423C (_SysCtxOpenControlSet.c)
 *     _RegRtlDeleteTreeInternal @ 0x140531140 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140531290 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlOpenPredefinedKey @ 0x140547890 (_RegRtlOpenPredefinedKey.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwOpenKeyTransacted @ 0x140152820 (ZwOpenKeyTransacted.c)
 *     _RegRtlOpenPredefinedKey @ 0x140547890 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        char a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        HANDLE TransactionHandle)
{
  void *v6; // rbx
  void *v10; // rsi
  NTSTATUS inited; // edi
  int v12; // eax
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *v17; // [rsp+90h] [rbp+30h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v10 = a1;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v17);
    if ( inited < 0 )
      goto LABEL_9;
    v6 = v17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  v12 = 64;
  ObjectAttributes.Length = 48;
  if ( (a3 & 8) != 0 )
    v12 = 320;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v6 )
    v10 = v6;
  ObjectAttributes.Attributes = v12 | 0x200;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = v10;
  if ( !TransactionHandle )
  {
    inited = ZwOpenKey(KeyHandle, a4, &ObjectAttributes);
LABEL_9:
    v6 = v17;
    goto LABEL_10;
  }
  if ( byte_1403352B9 )
  {
    v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_1403352B0;
  }
  else
  {
    v14 = ZwOpenKeyTransacted;
    byte_1403352B9 = 1;
    qword_1403352B0 = (__int64)ZwOpenKeyTransacted;
  }
  if ( v14 )
  {
    inited = v14(KeyHandle, a4, &ObjectAttributes, TransactionHandle);
    if ( inited != -1073741702 )
      goto LABEL_9;
    v6 = v17;
  }
  inited = -1072103420;
LABEL_10:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}
