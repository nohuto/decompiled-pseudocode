/*
 * XREFs of MiExtendPagingFileMaximum @ 0x140221290
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x140127E08 (MiDerefPageFileSpaceBitmaps.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiExtendPagingFileMaximum(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _RTL_BITMAP *v3; // r12
  __int64 v7; // rsi
  unsigned int v8; // r15d
  void *v9; // rdx
  unsigned __int64 v10; // rdi
  size_t v11; // rbx
  unsigned int v12; // r15d
  ULONG v13; // edx
  ULONG v14; // r15d
  __int128 v15; // xmm1
  _DWORD *v16; // rbx
  _KPROCESS *Process; // rcx
  _QWORD *v18; // r12
  unsigned int v19; // r15d
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned int v28; // esi
  unsigned __int64 PteShadow; // rax
  __int64 v30; // r9
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int8 SpinLock; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  _DWORD *v36[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v37; // [rsp+50h] [rbp-28h]
  __int64 v38; // [rsp+60h] [rbp-18h]
  unsigned __int64 v39; // [rsp+C0h] [rbp+48h]
  void *v40; // [rsp+C8h] [rbp+50h]
  unsigned __int64 v41; // [rsp+D0h] [rbp+58h] BYREF
  unsigned __int64 v42; // [rsp+D8h] [rbp+60h]

  v41 = a3;
  v3 = (_RTL_BITMAP *)(a2 + 8);
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  KeAcquireInStackQueuedSpinLock(a1 + 24, &LockHandle);
  v7 = a1[16];
  v8 = *(_DWORD *)(v7 + 8);
  if ( a3 )
  {
    v9 = (void *)(((a1[22] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v10 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v40 = v9;
    v42 = (((4LL * v8) & 0xFFF) != 0) + ((4 * (unsigned __int64)v8) >> 12);
    v11 = 8 * v42;
    memmove((void *)v10, v9, 8 * v42);
    memset(v40, 0, v11);
  }
  else
  {
    v40 = 0LL;
    v10 = 0LL;
    v42 = 0LL;
  }
  v12 = 8 * (((v8 & 0x3F) != 0) + (v8 >> 6));
  memmove(*(void **)(a2 + 16), *(const void **)(v7 + 16), v12);
  memmove(*(void **)(a2 + 32), *(const void **)(v7 + 32), v12);
  v13 = *(_DWORD *)(v7 + 8);
  v14 = 8 * v12 - v13;
  if ( v14 )
  {
    RtlSetBits(v3, v13, v14);
    RtlSetBits((PRTL_BITMAP)(a2 + 24), *(_DWORD *)(v7 + 24), v14);
  }
  a1[1] = v3->SizeOfBitMap;
  v15 = *(_OWORD *)(v7 + 16);
  v36[1] = *(_DWORD **)(v7 + 8);
  v36[0] = (_DWORD *)v7;
  v38 = *(_QWORD *)(v7 + 32);
  v37 = v15;
  v16 = MiDerefPageFileSpaceBitmaps((__int64)a1, v36, 1);
  a1[16] = a2;
  a1[22] = v41;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v18 = v40;
  if ( v40 )
  {
    v19 = v42;
    if ( v42 )
    {
      v20 = v42;
      v39 = v42;
      v21 = 0xFFFFFFFFFLL;
      v22 = 0x58000000000LL;
      v23 = 0x8000000000000000uLL;
      do
      {
        v24 = *(_QWORD *)v10;
        if ( v10 + 0x90482413000LL <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(Process, v24) && (v24 & 1) != 0 && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v25 = *(_QWORD *)&Process[2].ProcessLock;
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 8 * ((v10 >> 3) & 0x1FF));
              if ( (v26 & 0x20) != 0 )
                v24 |= 0x20uLL;
              if ( (v26 & 0x42) != 0 )
                v24 |= 0x42uLL;
            }
          }
          v20 = v39;
        }
        v41 = v24;
        if ( (v24 & 1) != 0 )
        {
          if ( (unsigned __int64)&STACK[0x904824130D0] <= 0x7F8 )
            v24 = MiReadPteShadow(&v41, v24);
          v27 = 48 * (v21 & (v24 >> 12)) - v22;
          if ( (v23 | *(_QWORD *)(v27 + 8)) != v10 )
          {
            SpinLock = KeGetCurrentIrql();
            __writecr8(2uLL);
            v28 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v28);
                  v23 = 0x8000000000000000uLL;
                }
              }
              while ( (*(_QWORD *)(v27 + 24) & v23) != 0 );
            }
            KeAcquireInStackQueuedSpinLock(a1 + 24, &LockHandle);
            PteShadow = *(_QWORD *)v10;
            if ( v10 + 0x90482413000LL <= 0x7F8 )
              PteShadow = MiReadPteShadow(v10, *(_QWORD *)v10);
            v41 = PteShadow;
            if ( (PteShadow & 1) != 0 )
            {
              if ( (unsigned __int64)&STACK[0x904824130D0] <= 0x7F8 )
                PteShadow = MiReadPteShadow(&v41, PteShadow);
              v30 = 0xFFFFFFFFFLL;
              if ( v27 == 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL
                && (*(_QWORD *)(v27 + 8) | 0x8000000000000000uLL) != v10 )
              {
                v31 = (unsigned __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                v32 = *v31;
                if ( (unsigned __int64)(v31 + 0x12090482600LL) <= 0x7F8 )
                  v32 = MiReadPteShadow(v31, *v31);
                v33 = v30 & (*(_QWORD *)(v27 + 40) ^ (v32 >> 12));
                *(_QWORD *)(v27 + 8) = v10;
                *(_QWORD *)(v27 + 40) ^= v33;
              }
            }
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(SpinLock);
            v23 = 0x8000000000000000uLL;
            v21 = 0xFFFFFFFFFLL;
            v22 = 0x58000000000LL;
          }
          v20 = v39;
        }
        v10 += 8LL;
        v39 = --v20;
      }
      while ( v20 );
      v19 = v42;
      v18 = v40;
    }
    MiReleasePtes((__int64)&qword_14034FC70, v18, v19);
  }
}
