/*
 * XREFs of MiMirrorNodeLargePages @ 0x1401129DC
 * Callers:
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14001757C (RtlSetBitsEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 */

unsigned __int64 *__fastcall MiMirrorNodeLargePages(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v4; // r11d
  unsigned __int64 *result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r13
  __int64 i; // r12
  __int64 j; // r14
  unsigned int v10; // ebp
  __int64 v11; // rcx
  _QWORD **v12; // rdi
  _QWORD *v13; // rsi
  bool v14; // zf
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r10
  char v17; // r9
  volatile signed __int32 *v18; // r8
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // [rsp+20h] [rbp-88h]
  unsigned __int8 CurrentIrql; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-78h]
  unsigned __int64 v24; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v26; // [rsp+B0h] [rbp+8h]
  __int64 v29; // [rsp+C8h] [rbp+20h]

  v3 = qword_1403235B0;
  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (unsigned __int64 *)(unsigned __int16)KeNumberNodes;
  CurrentIrql = 17;
  v24 = qword_1403235B0 + 2184LL * (unsigned __int16)KeNumberNodes;
  if ( qword_1403235B0 >= v24 )
    return result;
  do
  {
    if ( !v4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 2176), &LockHandle);
      v4 = a2;
    }
    result = (unsigned __int64 *)MiLargePageSizes;
    v6 = 0LL;
    v26 = MiLargePageSizes;
    v29 = 0LL;
    v21 = 3LL;
    do
    {
      v7 = *result;
      for ( i = 0LL; i <= 1; ++i )
      {
        for ( j = 0LL; j <= 1; ++j )
        {
          v10 = 0;
          if ( !MmNumberOfChannels )
            continue;
          v11 = j + 2 * (v6 + i);
          v23 = v11;
          do
          {
            v12 = (_QWORD **)(v3 + 16 * (v10 + 4 * v11 + 3));
            v13 = *v12;
            if ( *v12 == v12 )
              goto LABEL_10;
            do
            {
              v15 = v7;
              v16 = (__int64)(v13 + 0xB000000000LL) / 48;
              v17 = v16 & 0x1F;
              v18 = (volatile signed __int32 *)stru_1403270B8.Buffer + (v16 >> 5);
              if ( (v16 & 0x1F) + v7 > 0x20 )
              {
                if ( (v16 & 0x1F) != 0 )
                {
                  _InterlockedAnd(v18, ~(((1 << (32 - (v16 & 0x1F))) - 1) << v17));
                  v15 = v7 - (32 - (unsigned int)(v16 & 0x1F));
                  ++v18;
                }
                if ( v15 >= 0x20 )
                {
                  v20 = v15 >> 5;
                  v15 += -32LL * (v15 >> 5);
                  do
                  {
                    *v18++ = 0;
                    --v20;
                  }
                  while ( v20 );
                }
                if ( v15 )
                {
                  v19 = (1 << v15) - 1;
                  goto LABEL_22;
                }
              }
              else
              {
                if ( v7 != 32 )
                {
                  v19 = ((1 << v7) - 1) << v17;
LABEL_22:
                  _InterlockedAnd(v18, ~v19);
                  goto LABEL_23;
                }
                *v18 = 0;
              }
LABEL_23:
              if ( v4 )
              {
                if ( !*(_QWORD *)(a3 + 24) )
                  goto LABEL_25;
                RtlClearBitsEx((__int64)&stru_1403270A8, (__int64)(v13 + 0xB000000000LL) / 48, v7);
              }
              else
              {
                RtlSetBitsEx((__int64)&stru_1403270A8, (__int64)(v13 + 0xB000000000LL) / 48, v7);
              }
              v4 = a2;
LABEL_25:
              v13 = (_QWORD *)*v13;
            }
            while ( v13 != v12 );
            v11 = v23;
LABEL_10:
            ++v10;
          }
          while ( v10 < MmNumberOfChannels );
          v6 = v29;
        }
      }
      v6 += 2LL;
      result = (unsigned __int64 *)(v26 + 1);
      v29 = v6;
      v14 = v21-- == 1;
      ++v26;
    }
    while ( !v14 );
    if ( !v4 )
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      result = (unsigned __int64 *)CurrentIrql;
      __writecr8(CurrentIrql);
      v4 = a2;
    }
    v3 += 2184LL;
  }
  while ( v3 < v24 );
  return result;
}
