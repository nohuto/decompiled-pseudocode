/*
 * XREFs of AlpcpReleaseAttributes @ 0x1404713BC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

_UNKNOWN **__fastcall AlpcpReleaseAttributes(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v5; // r8
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // r8
  __int64 v9; // rcx
  signed __int64 v10; // rax
  bool v11; // cc
  signed __int64 v12; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbp
  signed __int64 BugCheckParameter4; // rax
  int v18; // r14d
  ULONG_PTR v19; // rbp
  char v20; // cl
  signed __int64 v21; // rcx
  signed __int64 v22; // rdi
  ULONG_PTR v23; // rdi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a1[4];
  if ( v5 )
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v10 <= 1;
    result = (_UNKNOWN **)(v10 - 1);
    if ( v11 )
    {
      if ( result )
        KeBugCheckEx(0x18u, 0LL, v5, 0x21uLL, (ULONG_PTR)result);
      result = (_UNKNOWN **)AlpcpDestroyBlob(v5);
    }
    a1[4] = 0LL;
  }
  v7 = a1[5];
  if ( v7 )
  {
    v13 = *(_QWORD *)(v7 + 16);
    v14 = KeAbPreAcquire(v13 - 16, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 - 16), v14, v13 - 16, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_BYTE *)(v13 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, BugCheckParameter4);
    --*(_DWORD *)(v7 + 76);
    v18 = 0;
    v19 = *(_QWORD *)(v7 + 16);
    v20 = *(_BYTE *)(v19 - 32);
    if ( (v20 & 1) != 0 )
    {
      v18 = 0x10000 - *(__int16 *)(v19 - 30);
      *(_WORD *)(v19 - 30) = 0;
      *(_BYTE *)(v19 - 32) = v20 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v19 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v19 - 16));
    KeAbPostRelease(v19 - 16);
    if ( v18 > 0 )
    {
      v21 = -v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 - 24), -v18);
      if ( v21 <= 0 )
      {
        if ( v21 )
          KeBugCheckEx(0x18u, 0LL, v19, 0x28uLL, v21);
        AlpcpDestroyBlob(v19);
      }
    }
    v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v12 <= 1;
    result = (_UNKNOWN **)(v12 - 1);
    if ( v11 )
    {
      if ( result )
        KeBugCheckEx(0x18u, 0LL, v7, 0x21uLL, (ULONG_PTR)result);
      result = (_UNKNOWN **)AlpcpDestroyBlob(v7);
    }
    a1[5] = 0LL;
  }
  v8 = a1[6];
  if ( v8 )
  {
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v22 <= 1;
    v23 = v22 - 1;
    if ( v11 )
    {
      if ( v23 )
        KeBugCheckEx(0x18u, 0LL, v8, 0x21uLL, v23);
      result = (_UNKNOWN **)AlpcpDestroyBlob(v8);
    }
    a1[6] = 0LL;
  }
  v9 = a1[7];
  if ( v9 )
  {
    if ( (v9 & 1) != 0 )
      result = (_UNKNOWN **)ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFFEuLL));
    a1[7] = 0LL;
  }
  return result;
}
