/*
 * XREFs of MiInPageSingleKernelStack @ 0x1400DE754
 * Callers:
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400DEB64 (MiReleaseWsSwapReservationPfn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiLogKernelStackEvent @ 0x1401DE3D4 (MiLogKernelStackEvent.c)
 */

__int64 __fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  unsigned __int64 v2; // r14
  BOOL v3; // r13d
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rdi
  unsigned __int16 v10; // r15
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rax
  ULONG_PTR v15; // r15
  signed __int64 v16; // r14
  __int64 v17; // r12
  char *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  unsigned __int8 v22; // r15
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  _QWORD *v25; // rbx
  __int64 result; // rax
  unsigned __int8 v27; // [rsp+30h] [rbp-D0h]
  BOOL v28; // [rsp+34h] [rbp-CCh]
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  char *v33; // [rsp+58h] [rbp-A8h]
  _QWORD *v34; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v35; // [rsp+68h] [rbp-98h]
  __int16 v36; // [rsp+70h] [rbp-90h] BYREF
  signed __int64 *v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  char v41; // [rsp+98h] [rbp-68h]
  signed __int64 v42; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-28h] BYREF

  v2 = a2[1];
  v3 = 0;
  v4 = *a2;
  v5 = 0LL;
  v6 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v34 = a2;
  v28 = 0;
  v7 = *(_QWORD *)(v6 + 1600);
  v8 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((unsigned __int64)(v4 - 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = v8;
  v10 = *(_WORD *)(v7 + 146);
  v11 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v11 != 128 )
  {
    v3 = (v11 & 0x800) == 0;
    v28 = v3;
  }
  v12 = v8;
  if ( v8 <= v9 )
  {
    v13 = &v43;
    do
    {
      v14 = MI_READ_PTE_LOCK_FREE(v12);
      if ( v14 != 128 && v14 != 768 && v14 != 992 && (v14 & 0x800) == 0 )
      {
        *v13 = 4096LL;
        ++v5;
        *(v13 - 1) = (__int64)(v12 << 25) >> 16;
        v13 += 2;
        if ( v5 == 18 )
          break;
      }
      v12 += 8LL;
    }
    while ( v12 <= v9 );
    if ( v5 > 1 )
      MiPrefetchVirtualMemory(v5, (__int64)&v42, 1LL, 45);
  }
  v15 = ((unsigned __int64)v10 << 57) | 2;
  v16 = (__int64)(v9 << 25) >> 16;
  v17 = 0LL;
  v18 = (char *)&v36 + 1;
  v35 = v15;
  v33 = (char *)&v36 + 1;
  v43 = 4096LL;
LABEL_23:
  v32 = v17;
  while ( v9 >= v31 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v9) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v9, a1, 0LL);
    v42 = v16;
    v39 = 0LL;
    v37 = &v42;
    v19 = *(unsigned int *)(a1 + 588);
    v40 = 0LL;
    v36 = 4;
    v38 = 1LL;
    v41 = *(_BYTE *)(*(_QWORD *)(KiProcessorBlock[v19] + 1600) + 146LL) + 1;
    MmAccessFault(v15, v16, 0, (ULONG_PTR)v18);
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v30 = MI_READ_PTE_LOCK_FREE(v9);
      v20 = v30;
      v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v30) - 0x58000000000LL;
      v27 = MiLockPageInline(v21);
      if ( v20 != MI_READ_PTE_LOCK_FREE(v9) )
      {
        v22 = v27;
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v22);
          v30 = MI_READ_PTE_LOCK_FREE(v9);
          v23 = v30;
          v21 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v30) - 0x58000000000LL;
          v22 = MiLockPageInline(v21);
        }
        while ( v23 != MI_READ_PTE_LOCK_FREE(v9) );
        v17 = v32;
        v3 = v28;
        v27 = v22;
        v15 = v35;
      }
      *(_QWORD *)v21 = a1 | 1;
      *(_QWORD *)(v21 + 40) = *(_QWORD *)(v21 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v21 + 35) = *(_BYTE *)(v21 + 35) & 0xF8 | 5;
      v24 = MiReleaseWsSwapReservationPfn(v21);
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v27);
      if ( v24 )
        MiReleasePageFileInfo((__int64)MiSystemPartition, v24, 0);
      v18 = v33;
      v9 -= 8LL;
      v16 -= 4096LL;
      ++v17;
      goto LABEL_23;
    }
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v16 + 4096, (unsigned int)v17, 1LL);
  v25 = v34;
  result = v34[2];
  if ( *(_QWORD *)(result - 8) != a1 )
  {
    MmFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, v3, *(_QWORD *)(v25[2] - 8LL), 0LL, v25[2]);
  }
  return result;
}
