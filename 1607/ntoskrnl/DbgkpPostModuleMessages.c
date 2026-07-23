/*
 * XREFs of DbgkpPostModuleMessages @ 0x140618BD4
 * Callers:
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140618758 (DbgkpPostFakeProcessCreateMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 *     VslGetSecurePebAddress @ 0x1406209E0 (VslGetSecurePebAddress.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
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
  NTSTATUS v16; // eax
  HANDLE v17; // rcx
  int v18; // eax
  int v19; // [rsp+30h] [rbp-1E8h]
  int v20; // [rsp+30h] [rbp-1E8h]
  __int64 **v21; // [rsp+38h] [rbp-1E0h]
  __int64 v22; // [rsp+40h] [rbp-1D8h]
  __int64 v23; // [rsp+48h] [rbp-1D0h]
  __int64 **v24; // [rsp+50h] [rbp-1C8h]
  unsigned int *v25; // [rsp+58h] [rbp-1C0h]
  char v26[8]; // [rsp+60h] [rbp-1B8h] BYREF
  PVOID P; // [rsp+68h] [rbp-1B0h]
  _QWORD *v28; // [rsp+70h] [rbp-1A8h]
  PVOID v29; // [rsp+78h] [rbp-1A0h]
  PRKEVENT v30; // [rsp+80h] [rbp-198h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-160h] BYREF
  HANDLE v33[34]; // [rsp+D0h] [rbp-148h] BYREF

  v28 = Object;
  v29 = a2;
  v30 = a3;
  v23 = Object[127];
  if ( Object[90] && (int)VslGetSecurePebAddress(Object) < 0 )
    v23 = Object[127];
  v24 = (__int64 **)(*(_QWORD *)(v23 + 24) + 16LL);
  v6 = v24;
  v21 = (__int64 **)*v24;
  v7 = 0;
  v19 = 0;
  while ( v21 != v6 && v7 < DbgkpMaxModuleMsgs )
  {
    if ( v7 > 1 )
    {
      memset(v33, 0, sizeof(v33));
      LODWORD(v33[5]) = 5;
      v33[7] = v21[6];
      v8 = RtlImageNtHeader(v33[7]);
      if ( v8 )
        v33[8] = *(HANDLE *)&v8->FileHeader.PointerToSymbolTable;
      if ( (int)MmGetFileNameForAddress(v8, v26) >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 1600;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v26;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwOpenFile(&v33[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
        v10 = v33[6];
        if ( v9 < 0 )
          v10 = 0LL;
        v33[6] = v10;
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
        if ( v33[6] )
          ObCloseHandle(v33[6], 0);
      }
    }
    v21 = (__int64 **)*v21;
    v7 = ++v19;
    v6 = v24;
  }
  result = Object[133];
  if ( result )
  {
    v25 = (unsigned int *)(*(unsigned int *)(*(_QWORD *)result + 12LL) + 12LL);
    v13 = v25;
    result = *(unsigned int *)(*(unsigned int *)(*(_QWORD *)result + 12LL) + 0xCLL);
    v22 = *v25;
    v14 = 0;
    v20 = 0;
    while ( (unsigned int *)v22 != v13 && v14 < DbgkpMaxModuleMsgs )
    {
      if ( v14 > 1 )
      {
        memset(v33, 0, sizeof(v33));
        LODWORD(v33[5]) = 5;
        v33[7] = (HANDLE)*(unsigned int *)(v22 + 24);
        v15 = RtlImageNtHeader(v33[7]);
        if ( v15 )
          v33[8] = *(HANDLE *)&v15->FileHeader.PointerToSymbolTable;
        if ( (int)MmGetFileNameForAddress(v15, v26) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 1600;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v26;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v16 = ZwOpenFile(&v33[6], 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
          v17 = v33[6];
          if ( v16 < 0 )
            v17 = 0LL;
          v33[6] = v17;
          ExFreePoolWithTag(P, 0);
        }
        if ( a3 )
        {
          v18 = DbgkpQueueMessage(Object, a2, a3);
        }
        else
        {
          DbgkpSendApiMessage(Object);
          v18 = -1073741823;
        }
        if ( v18 < 0 && v33[6] )
          ObCloseHandle(v33[6], 0);
      }
      result = v22;
      v22 = *(unsigned int *)v22;
      v14 = ++v20;
      v13 = v25;
    }
  }
  return result;
}
