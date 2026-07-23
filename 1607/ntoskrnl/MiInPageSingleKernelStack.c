/*
 * XREFs of MiInPageSingleKernelStack @ 0x140094924
 * Callers:
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiReleaseWsSwapReservationPfn @ 0x140094E68 (MiReleaseWsSwapReservationPfn.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiLogKernelStackEvent @ 0x1401EECBC (MiLogKernelStackEvent.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInPageSingleKernelStack(ULONG_PTR a1, _QWORD *a2)
{
  ULONG_PTR v2; // r14
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // rdi
  BOOL v8; // r13d
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 DemandZeroPte; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  ULONG_PTR v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned int v26; // r12d
  ULONG_PTR v27; // r15
  signed __int64 v28; // rsi
  ULONG_PTR v29; // r9
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r14
  unsigned __int8 v33; // r9
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  _QWORD *v36; // rbx
  __int64 result; // rax
  unsigned __int16 v38; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v39; // [rsp+30h] [rbp-D0h]
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v42; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v43; // [rsp+50h] [rbp-B0h]
  char *v44; // [rsp+58h] [rbp-A8h]
  _QWORD *v45; // [rsp+60h] [rbp-A0h]
  __int16 v46; // [rsp+70h] [rbp-90h] BYREF
  signed __int64 *v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  char v51; // [rsp+98h] [rbp-68h]
  signed __int64 v52; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-28h] BYREF

  v2 = a1;
  v3 = a2[1];
  v4 = KiProcessorBlock[*(unsigned int *)(a1 + 588)];
  v45 = a2;
  v38 = *(_WORD *)(*(_QWORD *)(v4 + 1600) + 146LL);
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = *a2 - 4096LL;
  v42 = v5;
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0;
  v9 = 0LL;
  v10 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  DemandZeroPte = MiMakeDemandZeroPte(4LL, v11, v12, v10);
  if ( v16 != DemandZeroPte )
    v8 = (v16 & 0x800) == 0;
  v17 = MiMakeDemandZeroPte(24LL, v14, v15, v16);
  MiMakeDemandZeroPte(31LL, v18, v19, v17);
  v20 = v5;
  if ( v5 <= v7 )
  {
    v21 = &v53;
    do
    {
      v22 = MI_READ_PTE_LOCK_FREE(v20);
      if ( v22 != v25 && v22 != v23 && v22 != v24 && (v22 & 0x800) == 0 )
      {
        ++v9;
        *v21 = 4096LL;
        *(v21 - 1) = (__int64)(v20 << 25) >> 16;
        v21 += 2;
        if ( v9 == 18 )
          break;
      }
      v20 += 8LL;
    }
    while ( v20 <= v7 );
    if ( v9 > 1 )
      MiPrefetchVirtualMemory(v9, &v52, 1LL, 45LL);
    v2 = a1;
  }
  v26 = 0;
  v27 = ((unsigned __int64)v38 << 57) | 2;
  v28 = (__int64)(v7 << 25) >> 16;
  v43 = v27;
  v44 = (char *)&v46 + 1;
  v53 = 4096LL;
  while ( v7 >= v42 )
  {
    if ( (MI_READ_PTE_LOCK_FREE(v7) & 0x3E0) != 0x3E0 )
      KeBugCheckEx(0x1Au, 0x3451uLL, v7, v2, 0LL);
    v49 = 0LL;
    v50 = 0LL;
    v47 = &v52;
    v30 = *(unsigned int *)(v2 + 588);
    v52 = v28;
    v46 = 4;
    v48 = 1LL;
    v51 = *(_BYTE *)(*(_QWORD *)(KiProcessorBlock[v30] + 1600) + 146LL) + 1;
    MmAccessFault(v27, v28, 0, v29);
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v41 = MI_READ_PTE_LOCK_FREE(v7);
      v31 = v41;
      v32 = MI_GET_PFN_FROM_PTE(&v41);
      v39 = MiLockPageInline(v32);
      if ( v31 != MI_READ_PTE_LOCK_FREE(v7) )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v33);
          v41 = MI_READ_PTE_LOCK_FREE(v7);
          v34 = v41;
          v32 = MI_GET_PFN_FROM_PTE(&v41);
          MiLockPageInline(v32);
        }
        while ( v34 != MI_READ_PTE_LOCK_FREE(v7) );
        v27 = v43;
        v39 = v33;
      }
      *(_QWORD *)v32 = a1 | 1;
      *(_QWORD *)(v32 + 40) = *(_QWORD *)(v32 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
      *(_BYTE *)(v32 + 35) = *(_BYTE *)(v32 + 35) & 0xF8 | 5;
      v35 = MiReleaseWsSwapReservationPfn(v32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v39);
      if ( v35 )
        MiReleasePageFileInfo((struct _KEVENT *)MiSystemPartition, v35, 0);
      v2 = a1;
      v7 -= 8LL;
      v28 -= 4096LL;
      ++v26;
    }
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogKernelStackEvent(v28 + 4096, v26, 1LL);
  v36 = v45;
  result = v45[2];
  if ( *(_QWORD *)(result - 8) != v2 )
  {
    MmFlushAllFilesystemPages(1LL);
    KeBugCheckEx(0x77u, v8, *(_QWORD *)(v36[2] - 8LL), 0LL, v36[2]);
  }
  return result;
}
