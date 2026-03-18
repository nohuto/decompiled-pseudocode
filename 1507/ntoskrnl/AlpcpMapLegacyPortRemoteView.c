/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x1405820A8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(unsigned __int64 *Object, __int64 a2, _QWORD *a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v13; // r12d
  ULONG_PTR v14; // rdx
  char v15; // cl
  int v16; // r14d
  signed __int64 v17; // rcx
  signed __int64 v18; // rdi
  bool v19; // cc
  ULONG_PTR v20; // rdi
  ULONG_PTR v22; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 40);
  v8 = *(_QWORD *)(v4 + 16);
  v9 = KeAbPreAcquire(v8 - 16, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 - 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 - 16), v9, v8 - 16, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  *(_BYTE *)(v8 - 32) |= 1u;
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0x10000uLL) + 0x10000;
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v8, 0x26uLL, BugCheckParameter4);
  v13 = AlpcpCreateView(v8, Object, &v22, v10);
  if ( v13 >= 0 )
  {
    v14 = v22;
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    *(_DWORD *)a3 = 24;
    a3[2] = *(_QWORD *)(v14 + 40);
    a3[1] = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(a2 + 40) = v14;
    ++*(_DWORD *)(v14 + 76);
    --*(_DWORD *)(v4 + 76);
  }
  v15 = *(_BYTE *)(v8 - 32);
  v16 = 0;
  if ( (v15 & 1) != 0 )
  {
    v16 = 0x10000 - *(__int16 *)(v8 - 30);
    *(_WORD *)(v8 - 30) = 0;
    *(_BYTE *)(v8 - 32) = v15 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v8 - 16));
  KeAbPostRelease(v8 - 16);
  if ( v16 > 0 )
  {
    v17 = -v16 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), -v16);
    if ( v17 <= 0 )
    {
      if ( v17 )
        KeBugCheckEx(0x18u, 0LL, v8, 0x28uLL, v17);
      AlpcpDestroyBlob(v8);
    }
  }
  if ( *(_QWORD *)(a2 + 40) != v4 )
  {
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v19 = v18 <= 1;
    v20 = v18 - 1;
    if ( v19 )
    {
      if ( v20 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, v20);
      AlpcpDestroyBlob(v4);
    }
  }
  return (unsigned int)v13;
}
