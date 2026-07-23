/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x140120C84
 * Callers:
 *     MiPurgeZeroList @ 0x140120B70 (MiPurgeZeroList.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  KSPIN_LOCK *v4; // r12
  int v5; // eax
  unsigned __int64 *v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r14
  unsigned __int64 v9; // r11
  unsigned int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rdx
  volatile signed __int32 **v15; // rdi
  _QWORD *v16; // r13
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 **v18; // r10
  volatile signed __int32 **v19; // r9
  volatile signed __int32 **v20; // rax
  volatile signed __int32 **v21; // rax
  unsigned __int8 v22; // al
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-78h]
  __int64 *v24; // [rsp+28h] [rbp-70h]
  unsigned __int64 v25; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+10h]
  __int64 v29; // [rsp+B0h] [rbp+18h]
  __int64 v30; // [rsp+B0h] [rbp+18h]
  _QWORD *v31; // [rsp+B8h] [rbp+20h]
  _QWORD *v32; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 48);
  result = (unsigned __int16)KeNumberNodes;
  v3 = v1 + 2184LL * (unsigned __int16)KeNumberNodes;
  if ( v1 < v3 )
  {
    v4 = (KSPIN_LOCK *)(v1 + 2176);
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v4, &LockHandle);
      v5 = MmNumberOfChannels;
      v6 = (unsigned __int64 *)MiLargePageSizes;
      v7 = 0;
      v24 = MiLargePageSizes;
      v28 = 0;
      v8 = 0LL;
      do
      {
        v9 = *v6;
        v25 = *v6;
        if ( *(_QWORD *)(v8 + v1) )
        {
          v10 = 0;
          if ( v5 )
          {
            do
            {
              v11 = 0LL;
              v12 = v8 + v10;
              v29 = 0LL;
              v13 = v1 + 16 * (v12 + 7);
              v14 = (_QWORD *)(v1 + 8 * (v12 + 106));
              v15 = (volatile signed __int32 **)(v1 + 16 * (v12 + 3));
              v16 = (_QWORD *)(v1 + 8 * (v12 + 102));
              v31 = v14;
              do
              {
                v17 = *v15;
                if ( *v15 != (volatile signed __int32 *)v15 )
                {
                  while ( 1 )
                  {
                    v18 = *(volatile signed __int32 ***)v17;
                    if ( _interlockedbittestandset64(v17 + 6, 0x3FuLL) )
                      break;
                    *((_BYTE *)v17 + 34) = *((_BYTE *)v17 + 34) & 0xF8 | 1;
                    _InterlockedAnd64((volatile signed __int64 *)v17 + 3, 0x7FFFFFFFFFFFFFFFuLL);
                    v19 = *(volatile signed __int32 ***)v17;
                    v20 = (volatile signed __int32 **)*((_QWORD *)v17 + 1);
                    if ( *(volatile signed __int32 **)(*(_QWORD *)v17 + 8LL) != v17 || *v20 != v17 )
                      __fastfail(3u);
                    *v20 = (volatile signed __int32 *)v19;
                    v19[1] = (volatile signed __int32 *)v20;
                    v21 = *(volatile signed __int32 ***)(v13 + 8);
                    if ( *v21 != (volatile signed __int32 *)v13 )
                      __fastfail(3u);
                    *((_QWORD *)v17 + 1) = v21;
                    *(_QWORD *)v17 = v13;
                    *v21 = v17;
                    *(_QWORD *)(v13 + 8) = v17;
                    ++*(_QWORD *)(v8 + v1 + 8);
                    --*(_QWORD *)(v8 + v1);
                    ++*v14;
                    --*v16;
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1792), -(__int64)v9);
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1856), v9);
                    v17 = (volatile signed __int32 *)v18;
                    if ( v18 == v15 )
                      goto LABEL_13;
                  }
                  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                  __writecr8(CurrentIrql);
                  v30 = v29 - 1;
                  v15 -= 16;
                  v32 = v31 - 8;
                  v13 -= 128LL;
                  v16 -= 8;
                  v22 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  CurrentIrql = v22;
                  KeAcquireInStackQueuedSpinLockAtDpcLevel(v4, &LockHandle);
                  v14 = v32;
                  v11 = v30;
                  v9 = v25;
                }
LABEL_13:
                ++v11;
                v14 += 8;
                v15 += 16;
                v29 = v11;
                v13 += 128LL;
                v31 = v14;
                v16 += 8;
              }
              while ( v11 <= 1 );
              v5 = MmNumberOfChannels;
              ++v10;
            }
            while ( v10 < MmNumberOfChannels );
            v6 = (unsigned __int64 *)v24;
            v7 = v28;
          }
        }
        ++v7;
        ++v6;
        v8 += 16LL;
        v28 = v7;
        v24 = (__int64 *)v6;
      }
      while ( v7 < 3 );
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v1 += 2184LL;
      v4 += 273;
    }
    while ( v1 < v3 );
  }
  return result;
}
