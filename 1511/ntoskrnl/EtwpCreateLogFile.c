/*
 * XREFs of EtwpCreateLogFile @ 0x1404CA224
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     SeImpersonateClientEx @ 0x1404C71E8 (SeImpersonateClientEx.c)
 *     PsRevertThreadToSelf @ 0x1404C722C (PsRevertThreadToSelf.c)
 *     EtwpExpandFileName @ 0x1404C72C8 (EtwpExpandFileName.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpDelayCreate @ 0x1404C99A8 (EtwpDelayCreate.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpSendSessionNotification @ 0x1404CC658 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // r9
  __int128 v7; // xmm0
  char v8; // cl
  char v9; // si
  char v10; // al
  int updated; // r15d
  HANDLE v12; // rsi
  void *v13; // r12
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r14
  __int128 v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // r14
  UNICODE_STRING v22; // xmm1
  char v23[8]; // [rsp+38h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  __int128 v26; // [rsp+58h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+78h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v23[0] = 0;
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
          v15 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
          v16 = v15;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v15, a1 + 704);
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          EtwpExpandFileName(0, (UNICODE_STRING *)(a1 + 168), *(_DWORD *)(a1 + 312), (unsigned __int16 *)(a1 + 152));
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
        }
        v7 = *(_OWORD *)(a1 + 168);
      }
      v8 = v23[0];
      v9 = 0;
      if ( (*(_BYTE *)(a1 + 12) & 4) != 0 )
        v8 = 1;
      v10 = *(_BYTE *)(a1 + 832) & 2;
      v26 = v7;
      if ( v10 )
        v9 = 1;
      v23[0] = v8;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 736) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 720), 0LL);
          v4 = 1;
          if ( updated < 0 )
            goto LABEL_21;
        }
      }
      LOBYTE(v6) = 1;
      updated = EtwpDelayCreate((__int64)&FileHandle, (__int64)&v26, v23, v6, 0, v9);
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
        v13 = *(void **)(a1 + 816);
        if ( v13 )
          EtwpFinalizeHeader(a1, *(void **)(a1 + 816), 0);
        else
          v5 = 1;
        *(_QWORD *)(a1 + 816) = v12;
        if ( *(_QWORD *)(a1 + 208) )
        {
          v17 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
          v18 = v17;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v17, a1 + 704);
          if ( v18 )
            *(_BYTE *)(v18 + 26) |= 1u;
          v19 = *(_OWORD *)(a1 + 200);
          DestinationString = *(UNICODE_STRING *)(a1 + 168);
          *(_OWORD *)(a1 + 168) = v19;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 200), 0LL);
          v12 = FileHandle;
        }
        updated = EtwpUpdateFileHeader(a1, v23[0]);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 816) = v13;
        }
        else
        {
          if ( !v5 )
            EtwpSendSessionNotification(a1, 1LL, 0LL);
          v12 = 0LL;
          FileHandle = 0LL;
          if ( !v13 )
            goto LABEL_21;
          ZwClose(v13);
        }
      }
      if ( v12 )
      {
        ZwClose(v12);
        if ( *(_QWORD *)(a1 + 816) )
        {
          if ( DestinationString.Buffer )
          {
            v20 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
            v21 = v20;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v20, a1 + 704);
            if ( v21 )
              *(_BYTE *)(v21 + 26) |= 1u;
            v22 = DestinationString;
            *(_OWORD *)(a1 + 200) = *(_OWORD *)(a1 + 168);
            *(UNICODE_STRING *)(a1 + 168) = v22;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
            KeAbPostRelease(a1 + 704);
            RtlInitUnicodeString(&DestinationString, 0LL);
          }
        }
      }
LABEL_21:
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 200));
      RtlFreeAnsiString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
