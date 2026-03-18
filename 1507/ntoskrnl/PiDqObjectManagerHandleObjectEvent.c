/*
 * XREFs of PiDqObjectManagerHandleObjectEvent @ 0x140542A88
 * Callers:
 *     PiPnpRtlObjectEventDispatch @ 0x14043C09C (PiPnpRtlObjectEventDispatch.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140542C64 (PiDqObjectActionQueueEntryCreate.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140681F74 (PiDqDeleteUserObjectFromLoadedHives.c)
 */

void __fastcall PiDqObjectManagerHandleObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  char v5; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r12
  int v11; // ecx
  unsigned __int8 v12; // si
  signed __int32 v13; // eax
  _QWORD *v14; // rcx
  _QWORD *v15; // r8
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
    PiDqDeleteUserObjectFromLoadedHives(
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
      *(unsigned int *)(*(_QWORD *)(a2 + 8) + 28LL));
  v8 = KeAbPreAcquire(a1 + 104, 0LL, 0LL, a4);
  v9 = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)(a1 + 104), 0) )
    ExpAcquireFastMutexContended(a1 + 104, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  *(_QWORD *)(a1 + 112) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 152) = CurrentIrql;
  if ( (*(_DWORD *)(a1 + 228) & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    v4 = PiDqObjectActionQueueEntryCreate(a2, &v16);
    if ( v4 < 0 )
    {
      *(_DWORD *)(a1 + 228) |= 2u;
    }
    else
    {
      v14 = v16;
      v15 = *(_QWORD **)(a1 + 216);
      *v16 = a1 + 208;
      v14[1] = v15;
      if ( *v15 != a1 + 208 )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(a1 + 216) = v14;
    }
  }
  v11 = *(_DWORD *)(a1 + 228);
  if ( (v11 & 1) == 0 && (*(_QWORD *)(a1 + 208) != a1 + 208 || v4 < 0) )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 228) = v11 | 1;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  v12 = *(_BYTE *)(a1 + 152);
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 104), 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)(a1 + 104), v13);
  __writecr8(v12);
  KeAbPostRelease(a1 + 104);
  if ( v5 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
