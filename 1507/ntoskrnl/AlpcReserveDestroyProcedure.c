/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x14054CAD8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x140476B58 (AlpcDeleteBlobByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rsi
  signed __int64 BugCheckParameter4; // rax
  char v10; // cl
  int v11; // esi
  signed __int64 v12; // rcx
  _QWORD *v13; // rcx
  unsigned __int64 *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbp
  _QWORD *v19; // rax
  _QWORD *v21; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    v6 = KeAbPreAcquire(v4 - 16, 0LL, 0LL, a4);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 - 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 - 16), v6, v4 - 16, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_BYTE *)(v4 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v4, 0x26uLL, BugCheckParameter4);
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v4);
    v10 = *(_BYTE *)(v4 - 32);
    v11 = 0;
    if ( (v10 & 1) != 0 )
    {
      v11 = 0x10000 - *(__int16 *)(v4 - 30);
      *(_WORD *)(v4 - 30) = 0;
      *(_BYTE *)(v4 - 32) = v10 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
    KeAbPostRelease(v4 - 16);
    if ( v11 > 0 )
    {
      v12 = -v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v11);
      if ( v12 <= 0 )
      {
        if ( v12 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v12);
        AlpcpDestroyBlob(v4);
      }
    }
  }
  v13 = *(_QWORD **)(a1 + 8);
  if ( v13 )
    AlpcDeleteBlobByHandle(v13, *(_QWORD *)(a1 + 16), a1, a4);
  if ( *(_QWORD *)a1 )
  {
    v14 = (unsigned __int64 *)(*(_QWORD *)a1 + 328LL);
    v15 = (_QWORD *)(a1 - 48);
    v16 = KeAbPreAcquire((ULONG_PTR)v14, 0LL, 0LL, a4);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
      ExfAcquirePushLockExclusiveEx(v14, v16, (ULONG_PTR)v14, v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v19 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 != v15 )
    {
      v21 = (_QWORD *)v15[1];
      if ( (_QWORD *)v19[1] != v15 || (_QWORD *)*v21 != v15 )
        __fastfail(3u);
      *v21 = v19;
      v19[1] = v21;
      v15[1] = v15;
      *v15 = v15;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v14);
    KeAbPostRelease((ULONG_PTR)v14);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  return 0LL;
}
