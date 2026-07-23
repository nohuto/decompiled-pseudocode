/*
 * XREFs of DbgkSendSystemDllMessages @ 0x140617F4C
 * Callers:
 *     DbgkCreateThread @ 0x1404580F8 (DbgkCreateThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsQuerySystemDllInfo @ 0x1404596A4 (PsQuerySystemDllInfo.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 */

void __fastcall DbgkSendSystemDllMessages(_QWORD *a1, struct _KEVENT *a2, _DWORD *a3)
{
  _KPROCESS *Process; // r15
  HANDLE *v6; // rdi
  int i; // esi
  __int64 SystemDllInfo; // rbx
  void *v9; // rbx
  PIMAGE_NT_HEADERS v10; // rax
  wchar_t *v11; // r14
  char v12; // [rsp+30h] [rbp-F8h]
  __int64 v13; // [rsp+40h] [rbp-E8h]
  wchar_t *v14; // [rsp+48h] [rbp-E0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-80h] BYREF
  _BYTE v18[48]; // [rsp+B8h] [rbp-70h] BYREF

  if ( a1 )
    Process = (_KPROCESS *)a1[68];
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  v6 = (HANDLE *)(a3 + 12);
  for ( i = 0; i < 3; ++i )
  {
    SystemDllInfo = PsQuerySystemDllInfo(i);
    v13 = SystemDllInfo;
    if ( SystemDllInfo
      && (i <= 0
       || Process[1].ActiveProcessors.Bitmap[7]
       && *(_WORD *)(SystemDllInfo + 2) == (unsigned __int16)PsWow64GetProcessMachine((__int64)Process)) )
    {
      memset(v6, 0, 0x20uLL);
      v14 = 0LL;
      v9 = *(void **)(SystemDllInfo + 24);
      v6[1] = v9;
      if ( a1 && i )
      {
        v12 = 1;
        KiStackAttachProcess(Process, 0, (__int64)v18);
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
        KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
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
