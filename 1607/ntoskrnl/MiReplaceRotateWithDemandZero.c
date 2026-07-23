/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x14010E038
 * Callers:
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiUnmapFrameBuffer @ 0x14010E304 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x14010E43C (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

_BOOL8 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  _KPROCESS *Process; // r9
  unsigned int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  BOOL v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  LONG *v22; // rbx
  KIRQL v23; // al
  KIRQL v25; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v30; // [rsp+44h] [rbp-BCh]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  _QWORD v34[44]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = 0;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = 20LL;
  v30 = 0;
  v29 = 1;
  v32 = 0LL;
  v33 = 0LL;
  v28 = &Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v25 = v10;
  v11 = MiIsProbeActive(v6, ((__int64)(v7 - v6) >> 3) + 1, 3LL) != 0;
  if ( v6 <= v7 )
  {
    while ( 1 )
    {
      do
      {
        if ( (unsigned int)MiUnmapFrameBuffer(v6, a3, v11, &v27) )
          v11 = 1;
        if ( v27 != -1 )
        {
          if ( (_DWORD)v3 && (v12 = 2LL * (unsigned int)(v3 - 1), v13 = v34[2 * (unsigned int)(v3 - 1) + 1], v13 == v27) )
          {
            v14 = v13 + 1;
          }
          else
          {
            v14 = v27 + 1;
            v12 = 2LL * (unsigned int)v3;
            v3 = (unsigned int)(v3 + 1);
            v34[v12] = v27;
          }
          v34[v12 + 1] = v14;
        }
        MiInsertTbFlushEntry((__int64)&v29, (__int64)(v6 << 25) >> 16, 1LL, 0);
        ++v5;
        v6 += 8LL;
      }
      while ( (v6 & 0xFFF) != 0 && v6 <= v7 && (_DWORD)v3 != 22 );
      MiFlushTbList((__int64)&v29, v15, v16, v17);
      if ( (_DWORD)v3 )
      {
        v18 = v34;
        do
        {
          MiDereferenceIoPages(1, *v18, v18[1] - *v18);
          v18 += 2;
          --v3;
        }
        while ( v3 );
      }
      v19 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v8) - 0x58000000000LL;
      MiLockPageAtDpcInline(v19);
      *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) - v5)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = (__int64)v28;
      LOBYTE(v21) = v25;
      MiUnlockWorkingSetExclusive((__int64)v28, v21);
      if ( v6 > v7 )
        break;
      v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v3 = 0LL;
      v5 = 0;
      v22 = MiGetSharedVm(v20);
      v23 = ExAcquireSpinLockExclusive(v22);
      v22[1] = 0;
      v25 = v23;
    }
  }
  return v11;
}
