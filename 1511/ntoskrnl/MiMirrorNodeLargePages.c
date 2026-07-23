/*
 * XREFs of MiMirrorNodeLargePages @ 0x140117EE4
 * Callers:
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400B4BC4 (RtlSetBitsEx.c)
 */

void __fastcall MiMirrorNodeLargePages(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r14
  __int64 i; // r15
  __int64 j; // rbp
  unsigned int v8; // r12d
  __int64 v9; // rcx
  _QWORD **v10; // rdi
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r11
  volatile signed __int32 *v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp+8h]

  v3 = qword_1402FFD68;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = qword_1402FFD68 + 1336LL * (unsigned __int16)KeNumberNodes;
  v18 = v5;
  while ( v3 < v5 )
  {
    if ( !a2 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 1328), &LockHandle);
    for ( i = 0LL; i <= 2; i += 2LL )
    {
      for ( j = 0LL; j <= 1; ++j )
      {
        v8 = 0;
        if ( !MmNumberOfChannels )
          continue;
        v9 = i + j;
        do
        {
          v10 = (_QWORD **)(v3 + 16 * (v8 + 4 * v9 + 1));
          v11 = *v10;
          if ( *v10 == v10 )
            goto LABEL_19;
          do
          {
            v12 = 512LL;
            v13 = (__int64)(v11 + 0xB000000000LL) / 48;
            v14 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v13 >> 5);
            if ( (v13 & 0x1F) + 512 <= 0x20 )
            {
              v16 = 0;
LABEL_31:
              _InterlockedAnd(v14, ~v16);
              goto LABEL_14;
            }
            if ( (v13 & 0x1F) == 0
              || (_InterlockedAnd(v14, ~(((1 << (32 - (v13 & 0x1F))) - 1) << (v13 & 0x1F))),
                  ++v14,
                  v12 = 512LL - (32 - (unsigned int)(v13 & 0x1F)),
                  v12 >= 0x20) )
            {
              v15 = v12 >> 5;
              v12 += -32LL * (v12 >> 5);
              do
              {
                *v14++ = 0;
                --v15;
              }
              while ( v15 );
            }
            if ( v12 )
            {
              v16 = (1 << v12) - 1;
              goto LABEL_31;
            }
LABEL_14:
            if ( a2 )
            {
              if ( *(_QWORD *)(a3 + 24) )
                RtlClearBitsEx((__int64)&stru_1402FEC98, (__int64)(v11 + 0xB000000000LL) / 48, 0x200uLL);
            }
            else
            {
              RtlSetBitsEx((__int64)&stru_1402FEC98, (__int64)(v11 + 0xB000000000LL) / 48, 0x200uLL);
            }
            v11 = (_QWORD *)*v11;
          }
          while ( v11 != v10 );
          v9 = i + j;
LABEL_19:
          ++v8;
        }
        while ( v8 < MmNumberOfChannels );
      }
    }
    v5 = v18;
    if ( !a2 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 += 1336LL;
  }
}
