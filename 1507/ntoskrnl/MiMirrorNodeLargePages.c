/*
 * XREFs of MiMirrorNodeLargePages @ 0x14014CB90
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x14003ED80 (RtlClearBitsEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 */

void __fastcall MiMirrorNodeLargePages(int a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r14
  __int64 i; // r15
  __int64 j; // rbp
  unsigned int v7; // r12d
  __int64 v8; // rcx
  _QWORD **v9; // rdi
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r11
  volatile signed __int32 *v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+18h]

  v2 = qword_140353D28;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = qword_140353D28 + 1336LL * (unsigned __int16)KeNumberNodes;
  v18 = v4;
  while ( v2 < v4 )
  {
    if ( !a1 )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 1328), &LockHandle);
    for ( i = 0LL; i <= 2; i += 2LL )
    {
      for ( j = 0LL; j <= 1; ++j )
      {
        v7 = 0;
        if ( !MmNumberOfChannels )
          continue;
        v8 = i + j;
        do
        {
          v9 = (_QWORD **)(v2 + 16 * (v7 + 4 * v8 + 1));
          v10 = *v9;
          if ( *v9 == v9 )
            goto LABEL_19;
          do
          {
            v11 = 512LL;
            v12 = (__int64)(v10 + 0xB000000000LL) / 48;
            v13 = (volatile signed __int32 *)qword_14034F160->Buffer + (v12 >> 5);
            if ( (v12 & 0x1F) + 512 <= 0x20 )
            {
              v15 = 0;
LABEL_31:
              _InterlockedAnd(v13, ~v15);
              goto LABEL_14;
            }
            if ( (v12 & 0x1F) == 0
              || (_InterlockedAnd(v13, ~(((1 << (32 - (v12 & 0x1F))) - 1) << (v12 & 0x1F))),
                  ++v13,
                  v11 = 512LL - (32 - (unsigned int)(v12 & 0x1F)),
                  v11 >= 0x20) )
            {
              v14 = v11 >> 5;
              v11 += -32LL * (v11 >> 5);
              do
              {
                *v13++ = 0;
                --v14;
              }
              while ( v14 );
            }
            if ( v11 )
            {
              v15 = (1 << v11) - 1;
              goto LABEL_31;
            }
LABEL_14:
            if ( a1 )
            {
              if ( *(_QWORD *)(a2 + 24) )
                RtlClearBitsEx((__int64)qword_14034F158, (__int64)(v10 + 0xB000000000LL) / 48, 0x200uLL);
            }
            else
            {
              RtlSetBitsEx((__int64)qword_14034F158, (__int64)(v10 + 0xB000000000LL) / 48, 0x200uLL);
            }
            v10 = (_QWORD *)*v10;
          }
          while ( v10 != v9 );
          v8 = i + j;
LABEL_19:
          ++v7;
        }
        while ( v7 < MmNumberOfChannels );
      }
    }
    v4 = v18;
    if ( !a1 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    v2 += 1336LL;
  }
}
