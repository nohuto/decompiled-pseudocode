/*
 * XREFs of DbgkCreateThread @ 0x1404580F8
 * Callers:
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsCallImageNotifyRoutines @ 0x140428110 (PsCallImageNotifyRoutines.c)
 *     PsQuerySystemDllInfo @ 0x1404596A4 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14046AF3C (PspReferenceSystemDll.c)
 *     PsReferenceProcessFilePointer @ 0x14046DE90 (PsReferenceProcessFilePointer.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14061AD68 (DbgkpSectionToFileHandle.c)
 */

__int64 __fastcall DbgkCreateThread(_QWORD *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rdi
  bool v4; // r13
  signed __int32 v5; // eax
  int v6; // ecx
  __int64 result; // rax
  void *v8; // rcx
  PIMAGE_NT_HEADERS v9; // rax
  int i; // r14d
  __int64 SystemDllInfo; // r15
  PIMAGE_NT_HEADERS v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  ULONG_PTR v15; // rax
  unsigned __int64 v16; // rdx
  PIMAGE_NT_HEADERS v17; // rax
  void *v18; // rcx
  char v19; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v1 + 32) = a1;
  v3 = a1[23];
  *(_QWORD *)(v1 + 24) = v3;
  v4 = *(_QWORD *)(v3 + 1064) != 0LL;
  *(_BYTE *)v1 = v4;
  _m_prefetchw((const void *)(v3 + 772));
  v5 = _InterlockedOr((volatile signed __int32 *)(v3 + 772), 0x400001u);
  LOBYTE(v6) = v5;
  *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v5;
  if ( (v5 & 0x400000) == 0 )
  {
    if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 64;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
      *(_BYTE *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3;
      v8 = *(void **)(v3 + 960);
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v8;
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
      v9 = RtlImageNtHeader(v8);
      if ( v9 )
        *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v9->OptionalHeader.SizeOfImage;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
      PsReferenceProcessFilePointer(v3, v1 + 8);
      PsCallImageNotifyRoutines(
        *(_BYTE **)(v3 + 1128),
        *(_QWORD *)(v3 + 744),
        v1 + 56,
        *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      for ( i = 0; ; ++i )
      {
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = i;
        if ( i >= 3 )
          break;
        SystemDllInfo = PsQuerySystemDllInfo((unsigned int)i);
        *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = SystemDllInfo;
        if ( SystemDllInfo
          && (i <= 0 || v4 && *(_WORD *)(SystemDllInfo + 2) == (unsigned __int16)PsWow64GetProcessMachine(v3)) )
        {
          *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
          *(_BYTE *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3;
          *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(SystemDllInfo + 24);
          *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
          v12 = RtlImageNtHeader(*(PVOID *)(SystemDllInfo + 24));
          if ( v12 )
            *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v12->OptionalHeader.SizeOfImage;
          *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
          *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
          v13 = PspReferenceSystemDll(SystemDllInfo - 16);
          *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v13;
          v14 = MiSectionControlArea(v13);
          v15 = MiReferenceControlAreaFile(v14);
          *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v15;
          v16 = *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          if ( v16 )
          {
            ObFastDereferenceObject((signed __int64 *)(SystemDllInfo - 16), v16);
            v15 = *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
          PsCallImageNotifyRoutines((_BYTE *)(SystemDllInfo + 8), *(_QWORD *)(v3 + 744), v1 + 56, v15);
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
      }
      v6 = *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    else
    {
      LOBYTE(v6) = v5;
    }
  }
  result = *(_QWORD *)(v3 + 1056);
  if ( result )
  {
    if ( (v6 & 1) != 0 )
    {
      if ( (a1[216] & 4) == 0 )
      {
        memset((void *)(v1 + 112), 0, 0x40uLL);
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
        *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = a1[209];
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 4194328;
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 8;
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 1;
        DbgkpSendApiMessage((PVOID)v3);
      }
    }
    else
    {
      memset((void *)(v1 + 112), 0, 0x60uLL);
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = DbgkpSectionToFileHandle(*(_QWORD *)(v3 + 952));
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_QWORD *)(v3 + 960);
      *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = 0;
      v17 = RtlImageNtHeader(*(PVOID *)(v3 + 960));
      if ( v17 )
      {
        if ( v4 )
          *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v17->OptionalHeader.AddressOfEntryPoint
                                                                               + HIDWORD(v17->OptionalHeader.ImageBase);
        else
          *(_QWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v17->OptionalHeader.ImageBase
                                                                               + v17->OptionalHeader.AddressOfEntryPoint;
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = v17->FileHeader.PointerToSymbolTable;
        *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = v17->FileHeader.NumberOfSymbols;
      }
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 6291512;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 8;
      *(_DWORD *)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 2;
      DbgkpSendApiMessage((PVOID)v3);
      v18 = *(void **)(((unsigned __int64)&v19 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
      if ( v18 )
        ObCloseHandle(v18, 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 433);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages((PVOID)v3, a1, 0LL);
  }
  return result;
}
