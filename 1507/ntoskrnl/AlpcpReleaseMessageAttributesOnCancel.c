/*
 * XREFs of AlpcpReleaseMessageAttributesOnCancel @ 0x14052C618
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

void __fastcall AlpcpReleaseMessageAttributesOnCancel(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // r8
  ULONG_PTR v7; // rsi
  ULONG_PTR v8; // r8
  __int64 v9; // rcx
  signed __int64 v10; // rax
  bool v11; // cc
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rbp
  signed __int64 v17; // rax
  int v18; // r14d
  ULONG_PTR v19; // rbp
  char v20; // cl
  signed __int64 v21; // rcx
  signed __int64 v22; // rax
  ULONG_PTR v23; // rax
  signed __int64 v24; // rdi
  ULONG_PTR v25; // rdi

  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v10 <= 1;
    BugCheckParameter4 = v10 - 1;
    if ( v11 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, BugCheckParameter4);
      AlpcpDestroyBlob(v4);
    }
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 144);
  if ( v7 && (!a2 || (*(_DWORD *)(a1 + 40) & 0x8000) == 0) )
  {
    v13 = *(_QWORD *)(v7 + 16);
    v14 = KeAbPreAcquire(v13 - 16, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 - 16), v14, v13 - 16, v15);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_BYTE *)(v13 - 32) |= 1u;
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
    if ( v17 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v17);
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
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v22 <= 1;
    v23 = v22 - 1;
    if ( v11 )
    {
      if ( v23 )
        KeBugCheckEx(0x18u, 0LL, v7, 0x21uLL, v23);
      AlpcpDestroyBlob(v7);
    }
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 152);
  if ( v8 )
  {
    v24 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v11 = v24 <= 1;
    v25 = v24 - 1;
    if ( v11 )
    {
      if ( v25 )
        KeBugCheckEx(0x18u, 0LL, v8, 0x21uLL, v25);
      AlpcpDestroyBlob(v8);
    }
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 160);
  if ( v9 )
  {
    if ( (v9 & 1) != 0 )
      ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_QWORD *)(a1 + 160) = 0LL;
  }
}
