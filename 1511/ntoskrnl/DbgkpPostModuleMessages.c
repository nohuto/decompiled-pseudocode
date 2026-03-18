/*
 * XREFs of DbgkpPostModuleMessages @ 0x1405EEEF0
 * Callers:
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1405EEA74 (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     RtlFindUnicodeSubstring @ 0x1406447B0 (RtlFindUnicodeSubstring.c)
 */

__int64 __fastcall DbgkpPostModuleMessages(_QWORD *Object, PVOID a2, PRKEVENT a3)
{
  __int64 **v6; // rdx
  unsigned int v7; // ecx
  PIMAGE_NT_HEADERS v8; // rax
  NTSTATUS v9; // eax
  HANDLE v10; // rcx
  int v11; // eax
  __int64 result; // rax
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  PIMAGE_NT_HEADERS v15; // rax
  __int64 UnicodeSubstring; // rax
  NTSTATUS v17; // eax
  HANDLE v18; // rcx
  int v19; // eax
  int v20; // [rsp+30h] [rbp-1E8h]
  int v21; // [rsp+30h] [rbp-1E8h]
  __int64 v22; // [rsp+38h] [rbp-1E0h]
  __int64 **v23; // [rsp+40h] [rbp-1D8h]
  char v24[8]; // [rsp+48h] [rbp-1D0h] BYREF
  PVOID P; // [rsp+50h] [rbp-1C8h]
  __int64 **v26; // [rsp+58h] [rbp-1C0h]
  unsigned int *v27; // [rsp+60h] [rbp-1B8h]
  PVOID v28; // [rsp+68h] [rbp-1B0h]
  _QWORD *v29; // [rsp+70h] [rbp-1A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1A0h] BYREF
  PRKEVENT v31; // [rsp+A8h] [rbp-170h]
  __int16 v32; // [rsp+B0h] [rbp-168h] BYREF
  const wchar_t *v33; // [rsp+B8h] [rbp-160h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-158h] BYREF
  HANDLE v35[34]; // [rsp+D0h] [rbp-148h] BYREF

  v29 = Object;
  v28 = a2;
  v31 = a3;
  v26 = (__int64 **)(*(_QWORD *)(Object[127] + 24LL) + 16LL);
  v6 = v26;
  v23 = (__int64 **)*v26;
  v7 = 0;
  v20 = 0;
  while ( v23 != v6 && v7 < DbgkpMaxModuleMsgs )
  {
    if ( v7 > 1 )
    {
      memset(v35, 0, sizeof(v35));
      LODWORD(v35[5]) = 5;
      v35[7] = v23[6];
      v8 = RtlImageNtHeader(v35[7]);
      if ( v8 )
        v35[8] = *(HANDLE *)&v8->FileHeader.PointerToSymbolTable;
      if ( (int)MmGetFileNameForAddress(v8, v24) >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwOpenFile(&v35[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
        v10 = v35[6];
        if ( v9 < 0 )
          v10 = 0LL;
        v35[6] = v10;
        ExFreePoolWithTag(P, 0);
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
        if ( v35[6] )
          ObCloseHandle(v35[6], 0);
      }
    }
    v23 = (__int64 **)*v23;
    v7 = ++v20;
    v6 = v26;
  }
  result = Object[133];
  if ( result )
  {
    v27 = (unsigned int *)(*(unsigned int *)(*(_QWORD *)result + 12LL) + 12LL);
    v13 = v27;
    result = *v27;
    v22 = result;
    v14 = 0;
    v21 = 0;
    while ( (unsigned int *)v22 != v13 && v14 < DbgkpMaxModuleMsgs )
    {
      if ( v14 > 1 )
      {
        memset(v35, 0, sizeof(v35));
        LODWORD(v35[5]) = 5;
        v35[7] = (HANDLE)*(unsigned int *)(v22 + 24);
        v15 = RtlImageNtHeader(v35[7]);
        if ( v15 )
          v35[8] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
        if ( (int)MmGetFileNameForAddress(v15, v24) >= 0 )
        {
          v33 = L"\\System32\\";
          v32 = 20;
          UnicodeSubstring = RtlFindUnicodeSubstring(v24, &v32);
          if ( UnicodeSubstring )
            *(_OWORD *)(UnicodeSubstring + 2) = *(_OWORD *)L"SysWOW64";
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 1600;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v17 = ZwOpenFile(&v35[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
          v18 = v35[6];
          if ( v17 < 0 )
            v18 = 0LL;
          v35[6] = v18;
          ExFreePoolWithTag(P, 0);
        }
        if ( a3 )
        {
          v19 = DbgkpQueueMessage(Object, a2, a3);
        }
        else
        {
          DbgkpSendApiMessage(Object);
          v19 = -1073741823;
        }
        if ( v19 < 0 && v35[6] )
          ObCloseHandle(v35[6], 0);
      }
      result = v22;
      v22 = *(unsigned int *)v22;
      v14 = ++v21;
      v13 = v27;
    }
  }
  return result;
}
