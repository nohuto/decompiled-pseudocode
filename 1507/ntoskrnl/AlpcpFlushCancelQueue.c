/*
 * XREFs of AlpcpFlushCancelQueue @ 0x1404A3C30
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404A3834 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

void __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  _QWORD **v7; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  _QWORD *v11; // rsi
  ULONG_PTR v12; // r8
  signed __int64 v13; // rax
  bool v14; // cc
  ULONG_PTR BugCheckParameter4; // rax

  v4 = (unsigned __int64 *)(a1 + 136);
  v7 = (_QWORD **)(a1 + 384);
  v8 = KeAbPreAcquire(a1 + 136, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (ULONG_PTR)v4, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *v7;
  while ( v11 != v7 )
  {
    v12 = (ULONG_PTR)(v11 - 10);
    v11 = (_QWORD *)*v11;
    if ( !a2 || *(_QWORD *)(v12 + 56) == a2 )
    {
      **(_QWORD **)(v12 + 88) = *(_QWORD *)(v12 + 80);
      *(_QWORD *)(*(_QWORD *)(v12 + 80) + 8LL) = *(_QWORD *)(v12 + 88);
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v12 + 56) = 0LL;
      *(_QWORD *)(v12 + 64) = 0LL;
      v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v14 = v13 <= 1;
      BugCheckParameter4 = v13 - 1;
      if ( v14 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v12, 0x21uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v12);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
}
