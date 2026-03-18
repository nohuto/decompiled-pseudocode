/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1403E295C (ExpWnfGenerateStateName.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(_QWORD *a1, unsigned __int64 *a2)
{
  int v2; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  NTSTATUS v14; // eax
  __int64 v15; // rbx
  unsigned __int64 *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // r8
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-20h] BYREF
  int v25; // [rsp+58h] [rbp-18h]
  unsigned __int64 v26; // [rsp+5Ch] [rbp-14h]

  v2 = 0;
  KeyHandle = 0LL;
  NameStoreRegistryRoot = 0;
  v6 = PsAttachSiloToCurrentThread(a1);
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, a1, &v21);
  v7 = v21;
  Data = *(_QWORD *)(v21 + 40);
  if ( Data )
    goto LABEL_2;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1LL, &KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_7;
  v11 = (unsigned __int64 *)(v21 + 32);
  v12 = KeAbPreAcquire(v21 + 32, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v2 = 1;
  if ( *(_QWORD *)(v7 + 40) )
    goto LABEL_2;
  v14 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v14;
  if ( v14 < 0 )
  {
    if ( v14 != -1073741772 )
      goto LABEL_17;
LABEL_2:
    v8 = v21;
    do
      v9 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24));
    while ( !v9 );
    Data = *(_QWORD *)(v7 + 40);
    if ( v9 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1LL, &KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_6;
      }
      if ( !v2 )
      {
        v16 = (unsigned __int64 *)(v21 + 32);
        v17 = KeAbPreAcquire(v21 + 32, 0LL, 0LL);
        v18 = v17;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
          ExfAcquirePushLockExclusiveEx(v16, v17, (ULONG_PTR)v16);
        if ( v18 )
          *(_BYTE *)(v18 + 26) |= 1u;
        v2 = 1;
      }
      if ( v9 <= *(_QWORD *)(v7 + 40) )
        goto LABEL_5;
      v19 = *(_QWORD *)(v7 + 40) + 100LL;
      Data = v19;
      if ( v19 < v9 )
        Data = v19 + 100 * ((v9 - v19 - 1) / 0x64) + 100;
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_6:
        if ( !v2 )
          goto LABEL_7;
        goto LABEL_17;
      }
      _InterlockedExchange64((volatile __int64 *)(v7 + 40), Data);
    }
LABEL_5:
    *a2 = v9;
    goto LABEL_6;
  }
  if ( v25 == 8 )
  {
    Data = v26;
    _InterlockedExchange64((volatile __int64 *)(v21 + 24), v26);
    _InterlockedExchange64((volatile __int64 *)(v7 + 40), Data);
    goto LABEL_2;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_17:
  v15 = v21;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 32));
  KeAbPostRelease(v15 + 32);
LABEL_7:
  PsDereferenceMonitorContextServerSilo(v21);
  PsDetachSiloFromCurrentThread(v6);
  return (unsigned int)NameStoreRegistryRoot;
}
