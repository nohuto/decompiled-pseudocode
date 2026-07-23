/*
 * XREFs of DbgkpPostModuleMessages @ 0x140667690
 * Callers:
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406671DC (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 *     RtlFindUnicodeSubstring @ 0x1406C783C (RtlFindUnicodeSubstring.c)
 */

unsigned int *__fastcall DbgkpPostModuleMessages(_QWORD *Object, PVOID a2, PRKEVENT a3)
{
  __int64 **v6; // rdx
  unsigned int v7; // ecx
  PIMAGE_NT_HEADERS v8; // rax
  NTSTATUS v9; // eax
  HANDLE v10; // rcx
  int v11; // eax
  unsigned int *result; // rax
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  PIMAGE_NT_HEADERS v15; // rax
  BOOLEAN v16; // r8
  PWCHAR UnicodeSubstring; // rax
  NTSTATUS v18; // eax
  HANDLE v19; // rcx
  int v20; // eax
  int v21; // [rsp+30h] [rbp-1E8h]
  int v22; // [rsp+30h] [rbp-1E8h]
  unsigned int *v23; // [rsp+38h] [rbp-1E0h]
  __int64 **v24; // [rsp+40h] [rbp-1D8h]
  UNICODE_STRING FullString; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 **v26; // [rsp+58h] [rbp-1C0h]
  unsigned int *v27; // [rsp+60h] [rbp-1B8h]
  PVOID v28; // [rsp+68h] [rbp-1B0h]
  _QWORD *v29; // [rsp+70h] [rbp-1A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1A0h] BYREF
  PRKEVENT v31; // [rsp+A8h] [rbp-170h]
  UNICODE_STRING SearchString; // [rsp+B0h] [rbp-168h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-158h] BYREF
  HANDLE v34[34]; // [rsp+D0h] [rbp-148h] BYREF

  v29 = Object;
  v28 = a2;
  v31 = a3;
  v26 = (__int64 **)(*(_QWORD *)(Object[127] + 24LL) + 16LL);
  v6 = v26;
  v24 = (__int64 **)*v26;
  v7 = 0;
  v21 = 0;
  while ( v24 != v6 && v7 < DbgkpMaxModuleMsgs )
  {
    if ( v7 > 1 )
    {
      memset(v34, 0, sizeof(v34));
      LODWORD(v34[5]) = 5;
      v34[7] = v24[6];
      v8 = RtlImageNtHeader(v34[7]);
      if ( v8 )
        v34[8] = *(HANDLE *)&v8->FileHeader.PointerToSymbolTable;
      if ( (int)MmGetFileNameForAddress(v8, &FullString) >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = &FullString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwOpenFile(&v34[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
        v10 = v34[6];
        if ( v9 < 0 )
          v10 = 0LL;
        v34[6] = v10;
        ExFreePoolWithTag(FullString.Buffer, 0);
      }
      if ( a3 )
      {
        v11 = DbgkpQueueMessage(Object, a2, a3);
      }
      else
      {
        DbgkpSendApiMessage(Object);
        v11 = -1073741823;
      }
      if ( v11 < 0 )
      {
        if ( v34[6] )
          ObCloseHandle(v34[6], 0);
      }
    }
    v24 = (__int64 **)*v24;
    v7 = ++v21;
    v6 = v26;
  }
  result = (unsigned int *)Object[133];
  if ( result )
  {
    v27 = (unsigned int *)(result[3] + 12LL);
    v13 = v27;
    result = (unsigned int *)*v27;
    v23 = result;
    v14 = 0;
    v22 = 0;
    while ( v23 != v13 && v14 < DbgkpMaxModuleMsgs )
    {
      if ( v14 > 1 )
      {
        memset(v34, 0, sizeof(v34));
        LODWORD(v34[5]) = 5;
        v34[7] = (HANDLE)v23[6];
        v15 = RtlImageNtHeader(v34[7]);
        if ( v15 )
          v34[8] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
        if ( (int)MmGetFileNameForAddress(v15, &FullString) >= 0 )
        {
          SearchString.Buffer = L"\\System32\\";
          SearchString.Length = 20;
          UnicodeSubstring = RtlFindUnicodeSubstring(&FullString, &SearchString, v16);
          if ( UnicodeSubstring )
            *(_OWORD *)(UnicodeSubstring + 1) = *(_OWORD *)L"SysWOW64";
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 1600;
          ObjectAttributes.ObjectName = &FullString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v18 = ZwOpenFile(&v34[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
          v19 = v34[6];
          if ( v18 < 0 )
            v19 = 0LL;
          v34[6] = v19;
          ExFreePoolWithTag(FullString.Buffer, 0);
        }
        if ( a3 )
        {
          v20 = DbgkpQueueMessage(Object, a2, a3);
        }
        else
        {
          DbgkpSendApiMessage(Object);
          v20 = -1073741823;
        }
        if ( v20 < 0 && v34[6] )
          ObCloseHandle(v34[6], 0);
      }
      result = v23;
      v23 = (unsigned int *)*v23;
      v14 = ++v22;
      v13 = v27;
    }
  }
  return result;
}
