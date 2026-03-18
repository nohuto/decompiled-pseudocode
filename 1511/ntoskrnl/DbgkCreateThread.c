/*
 * XREFs of DbgkCreateThread @ 0x140445B24
 * Callers:
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PsCallImageNotifyRoutines @ 0x1403F69B0 (PsCallImageNotifyRoutines.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x14044704C (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x140464590 (PspReferenceSystemDll.c)
 *     PsReferenceProcessFilePointer @ 0x1404A995C (PsReferenceProcessFilePointer.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x1405F0A88 (DbgkpSectionToFileHandle.c)
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
  __int64 SystemDllInfo; // rax
  __int64 v12; // r15
  PIMAGE_NT_HEADERS v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  ULONG_PTR v16; // rax
  unsigned __int64 v17; // rdx
  PIMAGE_NT_HEADERS v18; // rax
  void *v19; // rcx
  char v20; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v1 + 24) = a1;
  v3 = a1[23];
  *(_QWORD *)(v1 + 40) = v3;
  v4 = *(_QWORD *)(v3 + 1064) != 0LL;
  *(_BYTE *)v1 = v4;
  _m_prefetchw((const void *)(v3 + 772));
  v5 = _InterlockedOr((volatile signed __int32 *)(v3 + 772), 0x400001u);
  LOBYTE(v6) = v5;
  *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v5;
  if ( (v5 & 0x400000) == 0 )
  {
    if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 64;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
      *(_BYTE *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3;
      v8 = *(void **)(v3 + 960);
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v8;
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
      v9 = RtlImageNtHeader(v8);
      if ( v9 )
        *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v9->OptionalHeader.SizeOfImage;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
      PsReferenceProcessFilePointer(v3, v1 + 8);
      PsCallImageNotifyRoutines(
        *(unsigned __int16 **)(v3 + 1128),
        *(_QWORD *)(v3 + 744),
        v1 + 56,
        *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      for ( i = 0; ; ++i )
      {
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = i;
        if ( i >= 2 )
          break;
        SystemDllInfo = PsQuerySystemDllInfo((unsigned int)i);
        v12 = SystemDllInfo;
        *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = SystemDllInfo;
        if ( SystemDllInfo && (i != 1 || v4) )
        {
          *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0;
          *(_BYTE *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 3;
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(SystemDllInfo + 24);
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
          v13 = RtlImageNtHeader(*(PVOID *)(SystemDllInfo + 24));
          if ( v13 )
            *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v13->OptionalHeader.SizeOfImage;
          *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
          *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
          v14 = PspReferenceSystemDll(v12 - 16);
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v14;
          v15 = MiSectionControlArea(v14);
          v16 = MI_REFERENCE_CONTROL_AREA_FILE(v15);
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v16;
          v17 = *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          if ( v17 )
          {
            ObFastDereferenceObject((signed __int64 *)(v12 - 16), v17);
            v16 = *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
          PsCallImageNotifyRoutines((unsigned __int16 *)(v12 + 8), *(_QWORD *)(v3 + 744), v1 + 56, v16);
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        }
      }
      v6 = *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
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
      if ( (*((_DWORD *)a1 + 431) & 4) == 0 )
      {
        memset((void *)(v1 + 112), 0, 0x40uLL);
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
        *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = a1[208];
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 4194328;
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 8;
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 1;
        DbgkpSendApiMessage((PVOID)v3);
      }
    }
    else
    {
      memset((void *)(v1 + 112), 0, 0x60uLL);
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = DbgkpSectionToFileHandle(*(_QWORD *)(v3 + 952));
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_QWORD *)(v3 + 960);
      *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = 0;
      v18 = RtlImageNtHeader(*(PVOID *)(v3 + 960));
      if ( v18 )
      {
        if ( v4 )
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v18->OptionalHeader.AddressOfEntryPoint
                                                                               + HIDWORD(v18->OptionalHeader.ImageBase);
        else
          *(_QWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v18->OptionalHeader.ImageBase
                                                                               + v18->OptionalHeader.AddressOfEntryPoint;
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = v18->FileHeader.PointerToSymbolTable;
        *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = v18->FileHeader.NumberOfSymbols;
      }
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 6291512;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 8;
      *(_DWORD *)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 2;
      DbgkpSendApiMessage((PVOID)v3);
      v19 = *(void **)(((unsigned __int64)&v20 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
      if ( v19 )
        ObCloseHandle(v19, 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *((unsigned int *)a1 + 432);
    if ( (result & 8) != 0 )
      return DbgkpPostModuleMessages((PVOID)v3, a1, 0LL);
  }
  return result;
}
