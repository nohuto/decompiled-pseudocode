/*
 * XREFs of EtwpSavePersistedLogger @ 0x1406AA39C
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA744 (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     KsrFreePersistedMemoryBlock_0 @ 0x1400012A8 (KsrFreePersistedMemoryBlock_0.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401E3E60 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x1401E3FC4 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpDelayCreate @ 0x14049553C (EtwpDelayCreate.c)
 *     MmFreeMappingAddress @ 0x14052C764 (MmFreeMappingAddress.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 *     EtwpQueryPersistedMemory @ 0x1406AA2CC (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x1406AAA6C (EtwpTraceSavePersistedLoggerStop.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(_DWORD *a1, __int64 a2)
{
  HANDLE v4; // r14
  int v5; // r12d
  struct _MDL *v6; // r15
  void *v7; // rdi
  __int64 Length; // rsi
  int v9; // ebx
  PMDL Mdl; // rax
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 i; // r8
  unsigned int v15; // r11d
  struct _MDL *v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // edi
  __int64 *v19; // r9
  __int64 v20; // r10
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  char *v23; // rax
  char *Buffer; // rdi
  __int64 v25; // rax
  bool v26; // cf
  _BYTE v28[4]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-75h]
  int v30; // [rsp+58h] [rbp-71h]
  int v31; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v32; // [rsp+60h] [rbp-69h]
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-51h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+80h] [rbp-49h] BYREF
  PVOID MappingAddress; // [rsp+88h] [rbp-41h]
  __int64 v38; // [rsp+90h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-21h] BYREF
  _DWORD FileInformation[10]; // [rsp+B8h] [rbp-11h] BYREF

  v38 = a2;
  FileHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  v30 = 0;
  P = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  Length = (unsigned int)a1[2];
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v9 = -1072037875;
    goto LABEL_37;
  }
  MappingAddress = MmAllocateMappingAddress((unsigned int)Length, 0x4B777445u);
  v7 = MappingAddress;
  if ( !MappingAddress )
  {
    v9 = -1073741670;
    goto LABEL_45;
  }
  Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    Mdl->MdlFlags |= 2u;
    v9 = EtwpQueryPersistedMemory(v11, a2, &P, &v35);
    if ( v9 < 0 )
      goto LABEL_39;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)a1 + (unsigned int)a1[3]));
    v13 = 0LL;
    for ( i = 0LL; (unsigned int)i < v35; i = (unsigned int)(i + 1) )
    {
      v12 = *((_QWORD *)P + i) >> 40;
      if ( !v12 )
        goto LABEL_24;
      v13 += v12;
    }
    if ( v13 << 12 != (_DWORD)Length * a1[1] )
    {
LABEL_24:
      v9 = -1072103376;
      goto LABEL_39;
    }
    LOBYTE(v12) = 1;
    v28[0] = 0;
    v9 = EtwpDelayCreate((__int64)&FileHandle, (__int64)&DestinationString, v28, v12, 0, 1);
    if ( v9 < 0 )
    {
      v4 = FileHandle;
    }
    else
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = 0x2000;
      v4 = FileHandle;
      ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      v15 = 0;
      v16 = v6 + 1;
      v29 = 0;
      v31 = 0;
      v32 = 0;
      if ( a1[1] )
      {
        v17 = (unsigned int)Length >> 12;
        do
        {
          if ( v17 )
          {
            v18 = v29;
            v19 = (__int64 *)v16;
            v20 = v17;
            do
            {
              v21 = P;
              v22 = v18++ + (*((_QWORD *)P + v15) & 0xFFFFFFFFFFLL);
              *v19 = v22;
              if ( v18 == v21[v15] >> 40 )
              {
                ++v15;
                v18 = 0;
              }
              ++v19;
              --v20;
            }
            while ( v20 );
            v29 = v18;
            v7 = MappingAddress;
            v32 = v15;
          }
          v23 = (char *)MmMapLockedPagesWithReservedMapping(v7, 0x4B777445u, v6, MmCached);
          Buffer = v23;
          if ( *(_DWORD *)v23 == (_DWORD)Length )
          {
            if ( *((_DWORD *)v23 + 2) <= *(_DWORD *)v23 )
              *((_DWORD *)v23 + 12) = *((_DWORD *)v23 + 2);
            else
              *((_DWORD *)v23 + 12) = *((_DWORD *)v23 + 1);
            v25 = *((unsigned int *)v23 + 12);
            if ( (unsigned int)v25 > (unsigned int)Length || (unsigned int)v25 <= 0x48 )
            {
              v4 = FileHandle;
            }
            else
            {
              if ( (_DWORD)Length != (_DWORD)v25 )
                memset(&Buffer[v25], 255, (unsigned int)(Length - v25));
              v4 = FileHandle;
              v9 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
              if ( v9 >= 0 )
              {
                ++v30;
                ByteOffset.QuadPart += Length;
              }
            }
          }
          MmUnmapReservedMapping(Buffer, 0x4B777445u, v6);
          v7 = MappingAddress;
          v26 = (unsigned int)(v31 + 1) < a1[1];
          v15 = v32;
          ++v31;
          v16 = v6 + 1;
        }
        while ( v26 );
        v5 = v30;
      }
    }
LABEL_37:
    if ( v4 )
      ZwClose(v4);
    goto LABEL_39;
  }
  v9 = -1073741670;
LABEL_39:
  if ( v7 )
    MmFreeMappingAddress(v7, 0x4B777445u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_45:
  KsrFreePersistedMemoryBlock_0();
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, a1[1], v5, v9);
  return (unsigned int)v9;
}
