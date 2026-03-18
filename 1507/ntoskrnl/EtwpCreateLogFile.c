/*
 * XREFs of EtwpCreateLogFile @ 0x1404AC23C
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1404AC7C0 (EtwpDelayCreate.c)
 *     SeImpersonateClientEx @ 0x14053C5D0 (SeImpersonateClientEx.c)
 *     EtwpExpandFileName @ 0x14055903C (EtwpExpandFileName.c)
 *     PsRevertThreadToSelf @ 0x14055CF88 (PsRevertThreadToSelf.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // r9
  __int128 v7; // xmm0
  bool v8; // cl
  char v9; // al
  char v10; // si
  NTSTATUS updated; // r15d
  HANDLE v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r9
  void *v15; // r12
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r14
  __int128 v23; // xmm1
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  UNICODE_STRING v28; // xmm1
  bool v29; // [rsp+38h] [rbp-39h]
  HANDLE FileHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  __int128 v32; // [rsp+58h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+78h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFFC);
    if ( *(_QWORD *)(a1 + 176) || *(_QWORD *)(a1 + 208) )
    {
      if ( *(_QWORD *)(a1 + 208) )
      {
        v7 = *(_OWORD *)(a1 + 200);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
        {
          v17 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, v6);
          v19 = v17;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v17, a1 + 704, v18);
          if ( v19 )
            *(_BYTE *)(v19 + 26) |= 1u;
          EtwpExpandFileName(0LL, a1 + 168, *(unsigned int *)(a1 + 312), a1 + 152);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
        }
        v7 = *(_OWORD *)(a1 + 168);
      }
      v8 = (*(_BYTE *)(a1 + 12) & 4) != 0;
      v9 = *(_BYTE *)(a1 + 832) & 2;
      v32 = v7;
      v10 = v9 != 0;
      v29 = v8;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 736) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 720), 0LL);
          v4 = 1;
          if ( updated < 0 )
            goto LABEL_17;
        }
      }
      updated = EtwpDelayCreate((__int64)&FileHandle, 0, v10);
      if ( v4 == 1 )
        PsRevertThreadToSelf(KeGetCurrentThread());
      if ( updated < 0 )
      {
        v12 = FileHandle;
      }
      else
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v12 = FileHandle;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
        v15 = *(void **)(a1 + 816);
        if ( v15 )
          EtwpFinalizeHeader(a1, *(void **)(a1 + 816), 0);
        else
          v5 = 1;
        *(_QWORD *)(a1 + 816) = v12;
        if ( *(_QWORD *)(a1 + 208) )
        {
          v20 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, v14);
          v22 = v20;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v20, a1 + 704, v21);
          if ( v22 )
            *(_BYTE *)(v22 + 26) |= 1u;
          v23 = *(_OWORD *)(a1 + 200);
          DestinationString = *(UNICODE_STRING *)(a1 + 168);
          *(_OWORD *)(a1 + 168) = v23;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 200), 0LL);
          v12 = FileHandle;
        }
        LOBYTE(v13) = v29;
        updated = EtwpUpdateFileHeader(a1, v13);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 816) = v15;
        }
        else
        {
          if ( !v5 )
            EtwpSendSessionNotification(a1, 1u, 0);
          v12 = 0LL;
          FileHandle = 0LL;
          if ( !v15 )
            goto LABEL_17;
          ZwClose(v15);
        }
      }
      if ( v12 )
      {
        ZwClose(v12);
        if ( *(_QWORD *)(a1 + 816) )
        {
          if ( DestinationString.Buffer )
          {
            v25 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, v24);
            v27 = v25;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v25, a1 + 704, v26);
            if ( v27 )
              *(_BYTE *)(v27 + 26) |= 1u;
            v28 = DestinationString;
            *(_OWORD *)(a1 + 200) = *(_OWORD *)(a1 + 168);
            *(UNICODE_STRING *)(a1 + 168) = v28;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
            KeAbPostRelease(a1 + 704);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
      }
LABEL_17:
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 200));
      RtlFreeAnsiString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
