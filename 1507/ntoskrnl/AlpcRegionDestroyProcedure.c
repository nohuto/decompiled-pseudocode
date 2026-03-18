/*
 * XREFs of AlpcRegionDestroyProcedure @ 0x140531AE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

__int64 __fastcall AlpcRegionDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v10; // esi
  char v11; // cl
  signed __int64 v12; // rcx
  signed __int64 v13; // rdi
  bool v14; // cc
  ULONG_PTR v15; // rdi

  v4 = *(_QWORD *)(a1 + 16);
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
  v10 = 0;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  --*(_DWORD *)(v4 + 52);
  v11 = *(_BYTE *)(v4 - 32);
  if ( (v11 & 1) != 0 )
  {
    v10 = 0x10000 - *(__int16 *)(v4 - 30);
    *(_WORD *)(v4 - 30) = 0;
    *(_BYTE *)(v4 - 32) = v11 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v4 - 16));
  KeAbPostRelease(v4 - 16);
  if ( v10 > 0 )
  {
    v12 = -v10 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), -v10);
    if ( v12 <= 0 )
    {
      if ( v12 )
        KeBugCheckEx(0x18u, 0LL, v4, 0x28uLL, v12);
      AlpcpDestroyBlob(v4);
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v14 = v13 <= 1;
  v15 = v13 - 1;
  if ( v14 )
  {
    if ( v15 )
      KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, v15);
    AlpcpDestroyBlob(v4);
  }
  return 0LL;
}
