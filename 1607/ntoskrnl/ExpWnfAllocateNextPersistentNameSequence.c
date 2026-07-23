/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x1406BA04C
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1403F5D2C (ExpWnfGenerateStateName.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403F52A0 (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(__int64 a1, unsigned __int64 *a2)
{
  int v2; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  __int64 v5; // r12
  _QWORD *CurrentServerSiloGlobals; // rax
  char *v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  NTSTATUS v10; // eax
  unsigned __int64 v11; // rsi
  _BYTE *v12; // rax
  _BYTE *v13; // r14
  unsigned __int64 v14; // r8
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-28h] BYREF
  int v20; // [rsp+50h] [rbp-20h]
  unsigned __int64 v21; // [rsp+54h] [rbp-1Ch]

  v2 = 0;
  KeyHandle = 0LL;
  NameStoreRegistryRoot = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = (char *)(CurrentServerSiloGlobals + 111);
  Data = CurrentServerSiloGlobals[116];
  if ( Data )
    goto LABEL_13;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_33;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, v8, (ULONG_PTR)(v7 + 32));
  if ( v9 )
    v9[26] |= 1u;
  v2 = 1;
  if ( *((_QWORD *)v7 + 5) )
    goto LABEL_13;
  v10 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741772 )
      goto LABEL_30;
    do
LABEL_13:
      v11 = _InterlockedIncrement64((volatile signed __int64 *)v7 + 3);
    while ( !v11 );
    Data = *((_QWORD *)v7 + 5);
    if ( v11 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_29;
      }
      if ( !v2 )
      {
        v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v7 + 32), 0LL, 0);
        v13 = v12;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 8, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7 + 4, v12, (ULONG_PTR)(v7 + 32));
        if ( v13 )
          v13[26] |= 1u;
        v2 = 1;
      }
      if ( v11 <= *((_QWORD *)v7 + 5) )
        goto LABEL_28;
      v14 = *((_QWORD *)v7 + 5) + 100LL;
      Data = v14;
      if ( v14 < v11 )
        Data = v14 + 100 * ((v11 - v14 - 1) / 0x64) + 100;
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_29:
        if ( !v2 )
          goto LABEL_33;
        goto LABEL_30;
      }
      _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    }
LABEL_28:
    *a2 = v11;
    goto LABEL_29;
  }
  if ( v20 == 8 )
  {
    Data = v21;
    _InterlockedExchange64((volatile __int64 *)v7 + 3, v21);
    _InterlockedExchange64((volatile __int64 *)v7 + 5, Data);
    goto LABEL_13;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_30:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7 + 4);
  KeAbPostRelease((ULONG_PTR)(v7 + 32));
LABEL_33:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
