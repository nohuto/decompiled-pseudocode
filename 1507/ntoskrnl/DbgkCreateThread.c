/*
 * XREFs of DbgkCreateThread @ 0x14044FA8C
 * Callers:
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PsCallImageNotifyRoutines @ 0x140423B80 (PsCallImageNotifyRoutines.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsQuerySystemDllInfo @ 0x14054B934 (PsQuerySystemDllInfo.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140669708 (DbgkpSectionToFileHandle.c)
 */

__int64 __fastcall DbgkCreateThread(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r13
  signed __int32 v5; // eax
  int v6; // ecx
  __int64 result; // rax
  void *v8; // rcx
  PIMAGE_NT_HEADERS v9; // rax
  int i; // r14d
  __int64 SystemDllInfo; // rax
  __int64 v12; // r15
  PIMAGE_NT_HEADERS v13; // rax
  ULONG_PTR v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int16 v21; // ax
  PIMAGE_NT_HEADERS v22; // rax
  void *v23; // rcx
  __int64 v24; // [rsp+60h] [rbp+0h] BYREF

  v1 = (unsigned __int64 *)((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL);
  v1[6] = a1;
  v3 = *(_QWORD *)(a1 + 184);
  v1[5] = v3;
  v4 = *(_QWORD *)(v3 + 1064);
  v1[1] = v4;
  v1[7] = v4;
  _m_prefetchw((const void *)(v3 + 772));
  v5 = _InterlockedOr((volatile signed __int32 *)(v3 + 772), 0x400001u);
  LOBYTE(v6) = v5;
  *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v5;
  if ( (v5 & 0x400000) == 0 )
  {
    if ( (PspNotifyEnableMask & 1) != 0 || (PerfGlobalGroupMask & 4) != 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                           + 80;
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
      *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 3;
      v8 = *(void **)(v3 + 960);
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v8;
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
      v9 = RtlImageNtHeader(v8);
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v9;
      if ( v9 )
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v9->OptionalHeader.SizeOfImage;
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0;
      PsReferenceProcessFilePointer(v3, v1 + 2);
      PsCallImageNotifyRoutines(
        *(_BYTE **)(v3 + 1120),
        *(_QWORD *)(v3 + 744),
        (__int64)(v1 + 9),
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      for ( i = 0; ; ++i )
      {
        *(_DWORD *)v1 = i;
        if ( i >= 2 )
          break;
        SystemDllInfo = PsQuerySystemDllInfo((unsigned int)i);
        v12 = SystemDllInfo;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = SystemDllInfo;
        if ( SystemDllInfo && (i != 1 || v4) )
        {
          *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
          *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 3;
          *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(SystemDllInfo + 24);
          *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
          v13 = RtlImageNtHeader(*(PVOID *)(SystemDllInfo + 24));
          *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v13;
          if ( v13 )
            *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v13->OptionalHeader.SizeOfImage;
          *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0;
          *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0;
          v14 = ObFastReferenceObject((signed __int64 *)(v12 - 16));
          *v1 = v14;
          if ( !v14 )
          {
            CurrentThread = KeGetCurrentThread();
            *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = CurrentThread;
            --CurrentThread->KernelApcDisable;
            v18 = KeAbPreAcquire(v12 - 8, 0LL, 0LL, v15);
            *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v18;
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 - 8), 17LL, 0LL) )
            {
              ExfAcquirePushLockSharedEx((unsigned __int64 *)(v12 - 8), v18, v12 - 8, v19);
              v18 = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            }
            if ( v18 )
              *(_BYTE *)(v18 + 26) |= 1u;
            *v1 = ObFastReferenceObjectLocked((_QWORD *)(v12 - 16));
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v12 - 8), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v12 - 8));
            KeAbPostRelease(v12 - 8);
            v20 = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
            v21 = *(_WORD *)(v20 + 484) + 1;
            *(_WORD *)(v20 + 484) = v21;
            if ( !v21 && *(_QWORD *)(v20 + 152) != v20 + 152 && !*(_WORD *)(v20 + 486) )
              KiCheckForKernelApcDelivery();
            v14 = *v1;
            v4 = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          }
          v16 = MiSectionControlArea(v14);
          *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = MI_REFERENCE_CONTROL_AREA_FILE(v16);
          if ( *v1 )
            ObFastDereferenceObject((signed __int64 *)(v12 - 16), *v1);
          PsCallImageNotifyRoutines(
            (_BYTE *)(v12 + 8),
            *(_QWORD *)(v3 + 744),
            (__int64)(v1 + 9),
            *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
        }
      }
      v6 = *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
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
      if ( (*(_DWORD *)(a1 + 1724) & 4) == 0 )
      {
        memset(v1 + 18, 0, 0x40uLL);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
        *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *(_QWORD *)(a1 + 1664);
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 4194328;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) = 8;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 1;
        DbgkpSendApiMessage((PVOID)v3);
      }
    }
    else
    {
      memset(v1 + 18, 0, 0x60uLL);
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 0;
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = 0;
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = DbgkpSectionToFileHandle(*(_QWORD *)(v3 + 952));
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *(_QWORD *)(v3 + 960);
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0LL;
      v22 = RtlImageNtHeader(*(PVOID *)(v3 + 960));
      if ( v22 )
      {
        if ( v4 )
          *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = v22->OptionalHeader.AddressOfEntryPoint
                                                                               + HIDWORD(v22->OptionalHeader.ImageBase);
        else
          *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = v22->OptionalHeader.ImageBase
                                                                               + v22->OptionalHeader.AddressOfEntryPoint;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v22->FileHeader.PointerToSymbolTable;
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC) = v22->FileHeader.NumberOfSymbols;
      }
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 6291512;
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x94) = 8;
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 2;
      DbgkpSendApiMessage((PVOID)v3);
      v23 = *(void **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
      if ( v23 )
        ObCloseHandle(v23, 0);
      DbgkSendSystemDllMessages(0LL);
    }
    result = *(unsigned int *)(a1 + 1728);
    if ( (result & 4) != 0 )
      return DbgkpPostModuleMessages((PVOID)v3, (PVOID)a1, 0LL);
  }
  return result;
}
