/*
 * XREFs of EtwpCreateLogFile @ 0x140494FA8
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpSendSessionNotification @ 0x140494084 (EtwpSendSessionNotification.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14049553C (EtwpDelayCreate.c)
 *     PsRevertThreadToSelf @ 0x1404A4FF0 (PsRevertThreadToSelf.c)
 *     SeImpersonateClientEx @ 0x1404B464C (SeImpersonateClientEx.c)
 *     EtwpExpandFileName @ 0x1404D0974 (EtwpExpandFileName.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r13
  char v5; // r12
  __int128 v6; // xmm0
  bool v7; // al
  bool v8; // zf
  char v9; // si
  NTSTATUS updated; // r15d
  HANDLE v11; // rsi
  __int64 v12; // rdx
  void *v13; // r12
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  _BYTE *v17; // rax
  _BYTE *v18; // r14
  __int128 v19; // xmm1
  _BYTE *v20; // rax
  _BYTE *v21; // r14
  UNICODE_STRING v22; // xmm1
  bool v23; // [rsp+38h] [rbp-39h]
  HANDLE FileHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  __int128 v26; // [rsp+58h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+78h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 820), 0xFFFFFFFC);
    if ( *(_QWORD *)(a1 + 160) || *(_QWORD *)(a1 + 192) )
    {
      if ( *(_QWORD *)(a1 + 192) )
      {
        v6 = *(_OWORD *)(a1 + 184);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
        {
          v15 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
          v16 = v15;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v15, a1 + 688);
          if ( v16 )
            v16[26] |= 1u;
          EtwpExpandFileName(0LL, a1 + 152, *(unsigned int *)(a1 + 296), a1 + 136);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
          KeAbPostRelease(a1 + 688);
        }
        v6 = *(_OWORD *)(a1 + 152);
      }
      v7 = (*(_BYTE *)(a1 + 12) & 4) != 0;
      v8 = (*(_BYTE *)(a1 + 816) & 2) == 0;
      v26 = v6;
      v9 = !v8;
      v23 = v7;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 720) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 704), 0LL);
          v5 = 1;
          if ( updated < 0 )
            goto LABEL_17;
        }
      }
      updated = EtwpDelayCreate((__int64)&FileHandle, 0, v9);
      if ( v5 == 1 )
        PsRevertThreadToSelf(KeGetCurrentThread());
      if ( updated < 0 )
      {
        v11 = FileHandle;
      }
      else
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v11 = FileHandle;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
        v13 = *(void **)(a1 + 800);
        if ( v13 )
          EtwpFinalizeHeader(a1, *(void **)(a1 + 800), 0);
        else
          v4 = 1;
        *(_QWORD *)(a1 + 800) = v11;
        if ( *(_QWORD *)(a1 + 192) )
        {
          v17 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
          v18 = v17;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v17, a1 + 688);
          if ( v18 )
            v18[26] |= 1u;
          v19 = *(_OWORD *)(a1 + 184);
          DestinationString = *(UNICODE_STRING *)(a1 + 152);
          *(_OWORD *)(a1 + 152) = v19;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
          KeAbPostRelease(a1 + 688);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
          v11 = FileHandle;
        }
        LOBYTE(v12) = v23;
        updated = EtwpUpdateFileHeader(a1, v12);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 800) = v13;
        }
        else
        {
          if ( !v4 )
            EtwpSendSessionNotification(a1, 1u, 0);
          v11 = 0LL;
          FileHandle = 0LL;
          if ( !v13 )
            goto LABEL_17;
          ZwClose(v13);
        }
      }
      if ( v11 )
      {
        ZwClose(v11);
        if ( *(_QWORD *)(a1 + 800) )
        {
          if ( DestinationString.Buffer )
          {
            v20 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
            v21 = v20;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v20, a1 + 688);
            if ( v21 )
              v21[26] |= 1u;
            v22 = DestinationString;
            *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
            *(UNICODE_STRING *)(a1 + 152) = v22;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
            KeAbPostRelease(a1 + 688);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
      }
LABEL_17:
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
      RtlFreeAnsiString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
