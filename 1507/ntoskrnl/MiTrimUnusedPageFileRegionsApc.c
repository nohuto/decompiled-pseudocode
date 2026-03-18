/*
 * XREFs of MiTrimUnusedPageFileRegionsApc @ 0x1402220BC
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x140225C2C (MiMakePageFilePte.c)
 */

LONG __fastcall MiTrimUnusedPageFileRegionsApc(PRKEVENT Event)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int64 i; // rax
  unsigned __int64 Flink_high; // r8
  ULONG FreePageFileSpace; // ebx
  unsigned int PteTimeStamp; // edi
  __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int NextForwardRunClearCapped; // eax
  unsigned int v11; // eax
  __int64 v13; // rcx
  _DWORD *v14; // r8
  _DWORD *v15; // r9
  unsigned int v16; // edx
  bool j; // zf
  __int64 v18; // rcx
  _DWORD *v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // edx
  bool k; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)&Event[1].Header.Lock;
  v3 = *(_QWORD *)(v1 + 8LL * LODWORD(Event[1].Header.WaitListHead.Flink) + 5344);
  for ( i = ((unsigned __int64)(*(_WORD *)(v3 + 164) & 0xF) << 12) | MiMakePageFilePte(LODWORD(Event[1].Header.WaitListHead.Blink)) & 0xFFFFFFFFFFFF0FFFuLL;
        ;
        i = ((unsigned __int64)(*(_WORD *)(v3 + 164) & 0xF) << 12) | MiMakePageFilePte(FreePageFileSpace + PteTimeStamp) & 0xFFFFFFFFFFFF0FFFuLL )
  {
    Flink_high = HIDWORD(Event[1].Header.WaitListHead.Flink);
    v24 = i;
    FreePageFileSpace = MiFindFreePageFileSpace(v1, &v24, Flink_high, 0LL, 4);
    if ( FreePageFileSpace < HIDWORD(Event[1].Header.WaitListHead.Flink) )
      break;
    PteTimeStamp = MiGetPteTimeStamp(v24);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 192), &LockHandle);
    v8 = *(_QWORD *)(v3 + 128);
    v9 = FreePageFileSpace + PteTimeStamp - 1;
    if ( v9 >= *(_DWORD *)(v8 + 24) )
      goto LABEL_32;
    if ( FreePageFileSpace > 1 )
    {
      v13 = *(_QWORD *)(v8 + 32);
      v14 = (_DWORD *)(v13 + 4 * ((unsigned __int64)PteTimeStamp >> 5));
      v15 = (_DWORD *)(v13 + 4 * ((unsigned __int64)v9 >> 5));
      if ( v14 != v15 )
      {
        for ( j = ((-1 << PteTimeStamp) & *v14) == 0; j; j = *v14 == 0 )
        {
          if ( ++v14 == v15 )
          {
            v16 = 0xFFFFFFFF >> -(char)(FreePageFileSpace + PteTimeStamp);
            goto LABEL_17;
          }
        }
        goto LABEL_32;
      }
      v16 = 0xFFFFFFFF >> (32 - FreePageFileSpace) << PteTimeStamp;
LABEL_17:
      if ( (v16 & *v14) != 0 )
        goto LABEL_32;
    }
    else if ( FreePageFileSpace != 1 || _bittest(*(const signed __int32 **)(v8 + 32), PteTimeStamp) )
    {
      goto LABEL_32;
    }
    if ( v9 < *(_DWORD *)(v8 + 8) )
    {
      if ( FreePageFileSpace > 1 )
      {
        v18 = *(_QWORD *)(v8 + 16);
        v19 = (_DWORD *)(v18 + 4 * ((unsigned __int64)PteTimeStamp >> 5));
        v20 = (_DWORD *)(v18 + 4 * ((unsigned __int64)v9 >> 5));
        if ( v19 == v20 )
        {
          v21 = 0xFFFFFFFF >> (32 - FreePageFileSpace) << PteTimeStamp;
LABEL_31:
          if ( (v21 & *v19) == 0 )
          {
LABEL_10:
            NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(
                                          *(_QWORD *)(v3 + 128) + 24LL,
                                          FreePageFileSpace + PteTimeStamp - 1,
                                          0xFFFFFFFF,
                                          (unsigned int *)&v24);
            if ( NextForwardRunClearCapped > 1 )
            {
              v11 = RtlFindNextForwardRunClearCapped(
                      *(_QWORD *)(v3 + 128) + 8LL,
                      FreePageFileSpace + PteTimeStamp - 1,
                      NextForwardRunClearCapped,
                      (unsigned int *)&v24);
              if ( v11 > 1 )
                FreePageFileSpace = v11 + FreePageFileSpace - 1;
            }
            RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v3 + 128) + 24LL), PteTimeStamp, FreePageFileSpace);
            RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v3 + 128) + 8LL), PteTimeStamp, FreePageFileSpace);
            *(_QWORD *)(v3 + 48) -= FreePageFileSpace;
            *(_QWORD *)(v3 + 24) -= FreePageFileSpace;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            LODWORD(Event[1].Header.WaitListHead.Blink) = PteTimeStamp;
            HIDWORD(Event[1].Header.WaitListHead.Blink) = FreePageFileSpace;
            MiMapPageFileHash(v3, 0LL, 0LL, PteTimeStamp, FreePageFileSpace);
            return KeSetEvent(Event, 0, 0);
          }
        }
        else
        {
          for ( k = ((-1 << PteTimeStamp) & *v19) == 0; k; k = *v19 == 0 )
          {
            if ( ++v19 == v20 )
            {
              v21 = 0xFFFFFFFF >> -(char)(FreePageFileSpace + PteTimeStamp);
              goto LABEL_31;
            }
          }
        }
      }
      else if ( !_bittest(*(const signed __int32 **)(v8 + 16), PteTimeStamp) )
      {
        goto LABEL_10;
      }
    }
LABEL_32:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return KeSetEvent(Event, 0, 0);
}
