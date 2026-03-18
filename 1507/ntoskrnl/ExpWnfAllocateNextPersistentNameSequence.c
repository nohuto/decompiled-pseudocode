/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x140409ACC
 * Callers:
 *     ExpWnfGenerateStateName @ 0x1405010A8 (ExpWnfGenerateStateName.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404FE6FC (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  NTSTATUS NameStoreRegistryRoot; // ebx
  unsigned __int64 v7; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  signed __int8 v11; // cf
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+48h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+54h] [rbp-1Ch]

  v4 = 0;
  Data = ExpWnfPermanentNameSequenceNumberPool;
  KeyHandle = 0LL;
  NameStoreRegistryRoot = 0;
  if ( ExpWnfPermanentNameSequenceNumberPool )
    goto LABEL_2;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1LL, &KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    return (unsigned int)NameStoreRegistryRoot;
  v10 = KeAbPreAcquire((ULONG_PTR)&ExpWnfPermanentNameSequenceNumberLock, 0LL, 0LL, v9);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfPermanentNameSequenceNumberLock, 0LL);
  v12 = v10;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(
      &ExpWnfPermanentNameSequenceNumberLock,
      v10,
      (ULONG_PTR)&ExpWnfPermanentNameSequenceNumberLock,
      a4);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v4 = 1;
  if ( ExpWnfPermanentNameSequenceNumberPool )
    goto LABEL_2;
  v13 = ZwQueryValueKey(
          KeyHandle,
          (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x18u,
          &ResultLength);
  NameStoreRegistryRoot = v13;
  if ( v13 < 0 )
  {
    if ( v13 != -1073741772 )
      goto LABEL_16;
    do
LABEL_2:
      v7 = _InterlockedIncrement64(&ExpWnfPermanentNameSequenceNumber);
    while ( !v7 );
    Data = ExpWnfPermanentNameSequenceNumberPool;
    if ( v7 > ExpWnfPermanentNameSequenceNumberPool )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1LL, &KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_5;
      }
      if ( !v4 )
      {
        v14 = KeAbPreAcquire((ULONG_PTR)&ExpWnfPermanentNameSequenceNumberLock, 0LL, 0LL, a4);
        v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfPermanentNameSequenceNumberLock, 0LL);
        v16 = v14;
        if ( v11 )
          ExfAcquirePushLockExclusiveEx(
            &ExpWnfPermanentNameSequenceNumberLock,
            v14,
            (ULONG_PTR)&ExpWnfPermanentNameSequenceNumberLock,
            v15);
        if ( v16 )
          *(_BYTE *)(v16 + 26) |= 1u;
        v4 = 1;
      }
      if ( v7 <= ExpWnfPermanentNameSequenceNumberPool )
        goto LABEL_4;
      Data = ExpWnfPermanentNameSequenceNumberPool + 100;
      if ( ExpWnfPermanentNameSequenceNumberPool + 100 < v7 )
        Data = ExpWnfPermanentNameSequenceNumberPool
             + 100
             + 100 * ((v7 - (ExpWnfPermanentNameSequenceNumberPool + 100) - 1) / 0x64)
             + 100;
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_5:
        if ( !v4 )
          return (unsigned int)NameStoreRegistryRoot;
        goto LABEL_16;
      }
      _InterlockedExchange64(&ExpWnfPermanentNameSequenceNumberPool, Data);
    }
LABEL_4:
    *a1 = v7;
    goto LABEL_5;
  }
  if ( v21 == 8 )
  {
    Data = v22;
    _InterlockedExchange64(&ExpWnfPermanentNameSequenceNumber, v22);
    _InterlockedExchange64(&ExpWnfPermanentNameSequenceNumberPool, v22);
    goto LABEL_2;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_16:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&ExpWnfPermanentNameSequenceNumberLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfPermanentNameSequenceNumberLock);
  KeAbPostRelease((ULONG_PTR)&ExpWnfPermanentNameSequenceNumberLock);
  return (unsigned int)NameStoreRegistryRoot;
}
