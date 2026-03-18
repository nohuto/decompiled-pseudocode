/*
 * XREFs of AlpcpSendCloseMessage @ 0x1404A46BC
 * Callers:
 *     AlpcpDeletePort @ 0x1404A30E4 (AlpcpDeletePort.c)
 *     AlpcpClosePort @ 0x1404A3434 (AlpcpClosePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpDispatchCloseMessage @ 0x1404A48A4 (AlpcpDispatchCloseMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

void __fastcall AlpcpSendCloseMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  signed __int64 BugCheckParameter4; // rax
  char v12; // cl
  int v13; // esi
  signed __int64 v14; // rcx
  _QWORD v15[8]; // [rsp+30h] [rbp-58h] BYREF

  memset(v15, 0, sizeof(v15));
  v5 = *(_DWORD *)(a1 + 416);
  v6 = (v5 >> 1) & 3;
  if ( v6 != 1 && (v5 & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || v6 == 2) )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 16) + 72LL), 0LL);
    if ( v7 )
    {
      v8 = KeAbPreAcquire(v7 - 16, 0LL, 0LL, a4);
      v10 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 - 16), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 - 16), v8, v7 - 16, v9);
      if ( v10 )
        *(_BYTE *)(v10 + 26) |= 1u;
      *(_BYTE *)(v7 - 32) |= 1u;
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0x10000uLL) + 0x10000;
      if ( BugCheckParameter4 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v7, 0x26uLL, BugCheckParameter4);
      --*(_WORD *)(v7 - 30);
      *(_DWORD *)(v7 + 248) &= ~0x80000000;
      *(_DWORD *)(v7 + 224) = 3145736;
      *(_BYTE *)(v7 + 228) = 0;
      *(_WORD *)(v7 + 228) |= 5u;
      *(_WORD *)(v7 + 230) = 0;
      v15[0] = a1;
      v15[1] = v7;
      LODWORD(v15[6]) = 0x10000;
      *(_QWORD *)(v7 + 264) = KeGetCurrentThread()->ApcState.Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v7 + 232) = 0LL;
      *(_QWORD *)(v7 + 240) = 0LL;
      if ( (int)AlpcpDispatchCloseMessage(v15) < 0 )
      {
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v7);
        v12 = *(_BYTE *)(v7 - 32);
        v13 = 0;
        if ( (v12 & 1) != 0 )
        {
          v13 = 0x10000 - *(__int16 *)(v7 - 30);
          *(_WORD *)(v7 - 30) = 0;
          *(_BYTE *)(v7 - 32) = v12 & 0xFE;
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v7 - 16));
        KeAbPostRelease(v7 - 16);
        if ( v13 > 0 )
        {
          v14 = -v13 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), -v13);
          if ( v14 <= 0 )
          {
            if ( v14 )
              KeBugCheckEx(0x18u, 0LL, v7, 0x28uLL, v14);
            AlpcpDestroyBlob(v7);
          }
        }
      }
    }
  }
}
