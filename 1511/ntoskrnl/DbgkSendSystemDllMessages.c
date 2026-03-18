/*
 * XREFs of DbgkSendSystemDllMessages @ 0x1405EE270
 * Callers:
 *     DbgkCreateThread @ 0x140445B24 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x14044704C (PsQuerySystemDllInfo.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  _KPROCESS *Process; // r15
  HANDLE *v6; // rdi
  int i; // r14d
  __int64 SystemDllInfo; // rbx
  void *v9; // rbx
  PIMAGE_NT_HEADERS v10; // rax
  wchar_t *v11; // rsi
  char v12; // [rsp+30h] [rbp-108h]
  __int64 v13; // [rsp+68h] [rbp-D0h]
  wchar_t *v14; // [rsp+70h] [rbp-C8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-88h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v18; // [rsp+C0h] [rbp-78h] BYREF

  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (HANDLE *)(a3 + 12);
  for ( i = 0; i < 2; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v13 = SystemDllInfo;
    if ( SystemDllInfo && (i != 1 || Process[1].ActiveProcessors.Bitmap[7]) )
    {
      memset(v6, 0, 0x20uLL);
      v14 = 0LL;
      v9 = *(void **)(SystemDllInfo + 24);
      v6[1] = v9;
      if ( a1 && i )
      {
        v12 = 1;
        KiStackAttachProcess(Process, 0LL, (__int64)&v18);
      }
      else
      {
        v12 = 0;
      }
      v10 = RtlImageNtHeader(v9);
      if ( v10 )
      {
        *((_DWORD *)v6 + 4) = v10->FileHeader.PointerToSymbolTable;
        *((_DWORD *)v6 + 5) = v10->FileHeader.NumberOfSymbols;
      }
      if ( !a1 )
      {
        v11 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess()
            ? 0LL
            : (wchar_t *)KeGetCurrentThread()->Teb;
        v14 = v11;
        if ( v11 )
        {
          RtlStringCbCopyW(v11 + 2356, 0x20AuLL, *(NTSTRSAFE_PCWSTR *)(v13 + 40));
          *((_QWORD *)v11 + 5) = v11 + 2356;
          v6[3] = v11 + 20;
        }
      }
      if ( v12 )
        KiUnstackDetachProcess(&v18, 0LL);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 1600;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)(v13 + 8);
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(v6, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) < 0 )
        *v6 = 0LL;
      *a3 = 5242920;
      a3[1] = 8;
      a3[10] = 5;
      if ( a1 )
      {
        if ( (int)DbgkpQueueMessage(Process, a1, a2) < 0 && *v6 )
          ObCloseHandle(*v6, 0);
      }
      else
      {
        DbgkpSendApiMessage(Process);
        if ( *v6 )
          ObCloseHandle(*v6, 0);
        if ( v14 )
          *((_QWORD *)v14 + 5) = 0LL;
      }
    }
  }
}
