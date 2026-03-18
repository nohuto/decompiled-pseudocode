/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140102EA0
 * Callers:
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     MiUnmapFrameBuffer @ 0x140103140 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140103284 (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

_BOOL8 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _KPROCESS *Process; // r13
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  volatile LONG *v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rbp
  BOOL v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  ULONG_PTR *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r8
  KIRQL v22; // [rsp+20h] [rbp-288h]
  __int64 v24; // [rsp+28h] [rbp-280h] BYREF
  volatile LONG *v25; // [rsp+30h] [rbp-278h]
  int v26; // [rsp+40h] [rbp-268h] BYREF
  __int16 v27; // [rsp+44h] [rbp-264h]
  __int64 v28; // [rsp+48h] [rbp-260h]
  __int64 v29; // [rsp+50h] [rbp-258h]
  __int64 v30; // [rsp+58h] [rbp-250h]
  _QWORD v31[44]; // [rsp+100h] [rbp-1A8h] BYREF

  v3 = 0LL;
  v4 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 0;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = 20LL;
  v27 = 0;
  v8 = (volatile LONG *)&Process[1].IdealNode[12];
  v29 = 0LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = 0LL;
  v25 = v8;
  v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = 1;
  v22 = ExAcquireSpinLockExclusive(v8);
  v11 = MiIsProbeActive(v7, ((__int64)(v9 - v7) >> 3) + 1, 3LL) != 0;
  if ( v7 <= v9 )
  {
    while ( 1 )
    {
      do
      {
        if ( (unsigned int)MiUnmapFrameBuffer(v7, v4, v11, &v24) )
          v11 = 1;
        if ( v24 != -1 )
        {
          if ( (_DWORD)v3 && (v12 = 2LL * (unsigned int)(v3 - 1), v13 = v31[2 * (unsigned int)(v3 - 1) + 1], v13 == v24) )
          {
            v14 = v13 + 1;
          }
          else
          {
            v14 = v24 + 1;
            v12 = 2LL * (unsigned int)v3;
            v3 = (unsigned int)(v3 + 1);
            v31[v12] = v24;
          }
          v31[v12 + 1] = v14;
        }
        MiInsertTbFlushEntry((__int64)&v26, (__int64)(v7 << 25) >> 16, 1LL, 0);
        ++v6;
        v7 += 8LL;
      }
      while ( (v7 & 0xFFF) != 0 && v7 <= v9 && (_DWORD)v3 != 22 );
      MiFlushTbList((__int64)&v26, v15);
      if ( (_DWORD)v3 )
      {
        v16 = v31;
        do
        {
          MiDereferenceIoPages(1, *v16, v16[1] - *v16);
          v16 += 2;
          --v3;
        }
        while ( v3 );
        v8 = v25;
      }
      v17 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v10) - 0x58000000000LL;
      MiLockPageAtDpcInline(v17, v18, v19);
      *(_QWORD *)(v17 + 24) ^= (*(_QWORD *)(v17 + 24) ^ (*(_QWORD *)(v17 + 24) - v6)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockWorkingSetExclusive((__int64)v8, v22, v20);
      if ( v7 > v9 )
        break;
      v3 = 0LL;
      v6 = 0;
      v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v4 = a3;
      v22 = ExAcquireSpinLockExclusive(v8);
    }
  }
  return v11;
}
