/*
 * XREFs of MiInitializeNonPagedPool @ 0x14074D3B8
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140016F80 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     MiBuildDynamicRegion @ 0x140132FA0 (MiBuildDynamicRegion.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x1401331EC (MiInitializeNonPagedPoolThresholds.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeNonPagedPool()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // eax
  unsigned int *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  ULONG_PTR v14; // r13
  __int64 result; // rax
  unsigned int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  PSLIST_HEADER v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  char *v23; // r12
  __int64 v24; // r14
  char *v25; // rsi
  unsigned __int64 v26; // r15
  char *v27; // rsi
  unsigned __int64 *v28; // r12
  __int64 *v29; // rcx
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  _SLIST_HEADER *v33; // r13
  __int64 v34; // r14
  unsigned __int64 Region; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdi
  __int64 *v39; // r14
  _DWORD *v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+30h] [rbp-88h]
  PSLIST_HEADER v42; // [rsp+38h] [rbp-80h]
  unsigned __int64 v43; // [rsp+40h] [rbp-78h]
  __int64 v44; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  unsigned __int64 v46; // [rsp+58h] [rbp-60h]
  unsigned __int64 v47; // [rsp+60h] [rbp-58h]
  __int64 v48; // [rsp+68h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp+8h] BYREF
  char v50; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v52; // [rsp+D8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  qword_1402FF6C0 = v3;
  if ( (MiFlags & 1) == 0 && !MmSpecialPoolTag && MmProtectFreedNonPagedPool != 1 )
  {
    v4 = 4;
    dword_1402FE188[0] = 4;
    if ( qword_140301390 < 0x80000 )
    {
      if ( qword_140301390 < 0x40000 )
        goto LABEL_11;
      v4 = 8;
    }
    else
    {
      v4 = 32;
    }
    dword_1402FE188[0] = v4;
LABEL_11:
    v5 = (unsigned int *)&unk_1402FE18C;
    v6 = 2LL;
    while ( 1 )
    {
      *v5++ = v4 >> 1;
      if ( !--v6 )
        break;
      v4 = dword_1402FE188[0];
    }
  }
  v7 = MmPfnDatabase + (MxPfnAllocation << 12);
  v43 = v7;
  v8 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  v46 = v8;
  if ( (((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF) != 0 )
    v9 = 0x200000 - v8;
  else
    v9 = 0LL;
  v51 = v9;
  qword_1402FF7A0 = 0x100000000LL;
  v10 = 0x800000uLL / (unsigned __int16)KeNumberNodes;
  v41 = v10;
  v11 = v10 << 9;
  v48 = v10 << 9;
  v12 = ((v10 + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v13 = (((v10 << 9) + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v14 = MiReservePtes((__int64)&qword_1402FF7B0, ((unsigned __int16)KeNumberNodes * (v13 + 2 * v12)) >> 12, 1uLL);
  result = 0LL;
  if ( v14 )
  {
    v16 = 0;
    if ( KeNumberNodes )
    {
      v17 = 8 * (v13 >> 12);
      v18 = 8 * (v12 >> 12);
      v47 = v10 << 21;
      v44 = v17;
      do
      {
        v19 = qword_1402FE6C0;
        v20 = 26LL * v16;
        v45 = v16;
        v21 = (v11 * v16 - 0x200000000LL) << 12;
        v22 = v16 + 1;
        v42 = qword_1402FE6C0;
        LODWORD(v49) = v22;
        v52 = v20 * 16;
        qword_1402FE6C0[v20 + 20].Region = v21;
        v19[v20 + 21].Alignment = (v11 * v22 - 0x200000000LL) << 12;
        MiInitializeDynamicBitmap(&v19[v20 + 23].Region, (__int64)(v14 << 25) >> 16, v11, 19);
        v23 = (char *)&v19[21].HeaderX64 + 8;
        v14 += v17;
        v24 = 2LL;
        v25 = (char *)&v19[24].HeaderX64 + 8;
        v26 = v52;
        v27 = &v25[v20 * 16];
        v28 = (unsigned __int64 *)&v23[v20 * 16];
        do
        {
          MiInitializeDynamicBitmap(v28, (__int64)(v14 << 25) >> 16, v41, 3);
          v14 += v18;
          *(unsigned __int64 *)((char *)&v42[11].Alignment + v26) = *v28;
          *v28 = 8LL;
          v28 += 2;
          *(_QWORD *)v27 = 8LL;
          v27 += 8;
          --v24;
        }
        while ( v24 );
        v29 = (__int64 *)((char *)&qword_1402FE6C0[11].Region + v52);
        v7 = v43;
        v17 = v44;
        v9 = v51;
        v8 = v46;
        v29[9] = (__int64)&dword_1402FF980;
        if ( !(unsigned int)MiBuildDynamicRegion(v29, (v41 * v45 - 0x1000000) << 21, v47) )
          return 0LL;
        v16 = v49;
        v11 = v48;
      }
      while ( (unsigned int)v49 < (unsigned __int16)KeNumberNodes );
    }
    if ( v9 )
    {
      v49 = MI_READ_PTE_LOCK_FREE((__int64 *)(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL));
      v30 = v49;
      v31 = MI_READ_PTE_LOCK_FREE(&v49);
      v32 = (v8 >> 12) + ((v31 >> 12) & 0xFFFFFFFFFLL);
      v33 = &qword_1402FE6C0[26 * ((unsigned __int8)HIBYTE(*(_QWORD *)(48 * v32 - 0x57FFFFFFFD8LL)) >> 2)];
      LODWORD(v40) = 0;
      v34 = MiExpandNonPagedPool(
              512,
              512LL,
              (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v32 - 0x57FFFFFFFD8LL)) >> 2,
              ((v8 >> 12) + (v31 >> 12)) & 0x1FF,
              v40,
              (unsigned __int64)&v50);
      if ( v34 == -1 )
        return 0LL;
      Region = v33[20].Region;
      v36 = v8 + Region + (v34 << 12);
      v37 = (v36 - Region) >> 12;
      RtlClearBitsEx((__int64)&v33[23].Region, v37, v9 >> 12);
      _bittestandreset64((signed __int64 *)v33[22].Alignment, v37 >> 9);
      v38 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v39 = (__int64 *)(((v36 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      *v39 = v30;
      if ( MiPteInShadowRange((__int64)v39) )
        MiWritePteShadow((__int64)v39, v30);
      MiInitializeLargeNonPagedPoolLeafFrames(v38, v32);
      v33[16].Region = v32;
      v33[17].Alignment = v32 | 0x1FF;
    }
    MiInitializeNonPagedPoolThresholds();
    return 1LL;
  }
  return result;
}
