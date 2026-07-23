/*
 * XREFs of MiInitializeNonPagedPool @ 0x1407A47DC
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140094FC0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x14013CDDC (MiInitializeNonPagedPoolThresholds.c)
 *     MiBuildDynamicRegion @ 0x14013CEB0 (MiBuildDynamicRegion.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
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
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v17; // edx
  __int64 v18; // r8
  PSLIST_HEADER v19; // rbp
  unsigned __int64 v20; // rbx
  unsigned __int64 *p_Region; // r14
  unsigned __int64 *v22; // r12
  ULONG_PTR v23; // rbx
  __int64 *v24; // rcx
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  _SLIST_HEADER *v28; // r14
  __int64 v29; // r12
  unsigned __int64 Region; // rax
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rdi
  __int64 *v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v37; // [rsp+38h] [rbp-A0h]
  __int64 v38; // [rsp+40h] [rbp-98h]
  __int64 v39; // [rsp+50h] [rbp-88h]
  unsigned __int64 v40; // [rsp+60h] [rbp-78h]
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  unsigned __int64 v43; // [rsp+78h] [rbp-60h]
  char *AnyMultiplexedVm; // [rsp+80h] [rbp-58h]
  __int64 v45; // [rsp+E0h] [rbp+8h] BYREF
  int v46; // [rsp+E8h] [rbp+10h] BYREF
  ULONG_PTR v47; // [rsp+F0h] [rbp+18h]
  __int64 v48; // [rsp+F8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  if ( !v3 )
    v3 = 1LL;
  qword_1403277C0 = v3;
  if ( (MiFlags & 1) == 0 && !MmSpecialPoolTag && MmProtectFreedNonPagedPool != 1 )
  {
    v4 = 4;
    dword_140326488[0] = 4;
    if ( qword_140324E10 < 0x80000 )
    {
      if ( qword_140324E10 < 0x40000 )
        goto LABEL_11;
      v4 = 8;
    }
    else
    {
      v4 = 32;
    }
    dword_140326488[0] = v4;
LABEL_11:
    v5 = (unsigned int *)&unk_14032648C;
    v6 = 2LL;
    while ( 1 )
    {
      *v5++ = v4 >> 1;
      if ( !--v6 )
        break;
      v4 = dword_140326488[0];
    }
  }
  v7 = MmPfnDatabase + (MxPfnAllocation << 12);
  v40 = v7;
  v8 = ((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF;
  v43 = v8;
  if ( (((_DWORD)MmPfnDatabase + ((_DWORD)MxPfnAllocation << 12)) & 0x1FFFFF) != 0 )
    v9 = 0x200000 - v8;
  else
    v9 = 0LL;
  v36 = v9;
  qword_1403278A0 = 0x100000000LL;
  v38 = qword_140327F60[0];
  v10 = 0x800000uLL / (unsigned __int16)KeNumberNodes;
  v11 = ((v10 + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v39 = v10 << 9;
  v12 = (((v10 << 9) + 0x7FFF) >> 3) & 0x1FFFFFFFFFFFF000LL;
  v13 = MiReservePtes((__int64)&qword_1403278B0, ((unsigned __int16)KeNumberNodes * (v12 + 2 * v11)) >> 12, 1uLL);
  if ( !v13 )
    return 0LL;
  if ( KeNumberNodes )
  {
    v15 = 8 * (v12 >> 12);
    v41 = v15;
    v16 = 8 * (v11 >> 12);
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
    do
    {
      v19 = qword_1403269F0;
      v20 = 26LL * v17;
      v42 = v17;
      LODWORD(v45) = v17 + 1;
      qword_1403269F0[v20 + 20].Region = v38 + ((v39 * v17) << 12);
      v19[v20 + 21].Alignment = v38 + ((v39 * (v17 + 1)) << 12);
      v37 = v20 * 16;
      MiInitializeDynamicBitmap(&v19[v20 + 23].Region, (__int64)((v13 << 25) - v18) >> 16, v39, 19);
      v48 = 2LL;
      p_Region = &v19[v20 + 24].Region;
      v47 = v15 + v13;
      v22 = &v19[v20 + 21].Region;
      v23 = v47;
      do
      {
        MiInitializeDynamicBitmap(v22, (__int64)(v23 << 25) >> 16, v10, 3);
        v23 += v16;
        *(unsigned __int64 *)((char *)&v19[11].Alignment + v37) = *v22;
        *v22 = 8LL;
        v22 += 2;
        *p_Region++ = 8LL;
        --v48;
      }
      while ( v48 );
      v24 = (__int64 *)((char *)&qword_1403269F0[11].Region + v37);
      v9 = v36;
      v15 = v41;
      v8 = v43;
      v47 = v23;
      v7 = v40;
      v24[9] = (__int64)AnyMultiplexedVm;
      if ( !(unsigned int)MiBuildDynamicRegion(v24, v38 + ((v10 * v42) << 21), v10 << 21) )
        return 0LL;
      v17 = v45;
      v13 = v47;
      v18 = 0LL;
    }
    while ( (unsigned int)v45 < (unsigned __int16)KeNumberNodes );
  }
  if ( v9 )
  {
    v45 = MI_READ_PTE_LOCK_FREE(((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v25 = v45;
    if ( (v45 & 0x80u) == 0LL )
      v9 = 0LL;
  }
  else
  {
    v25 = 0LL;
    v45 = 0LL;
  }
  if ( v9 )
  {
    v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45);
    v27 = (v8 >> 12) + ((v26 >> 12) & 0xFFFFFFFFFLL);
    v28 = &qword_1403269F0[26 * ((unsigned __int8)HIBYTE(*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL)) >> 2)];
    v29 = MiExpandNonPagedPool(
            512,
            0x200uLL,
            (unsigned __int8)HIBYTE(*(_QWORD *)(48 * v27 - 0x57FFFFFFFD8LL)) >> 2,
            ((unsigned __int16)(v8 >> 12) + (unsigned __int16)(v26 >> 12)) & 0x1FF,
            0,
            &v46);
    if ( v29 == -1 )
      return 0LL;
    Region = v28[20].Region;
    v31 = v8 + Region + (v29 << 12);
    v32 = (v31 - Region) >> 12;
    RtlClearBitsEx((__int64)&v28[23].Region, v32, v9 >> 12);
    _bittestandreset64((signed __int64 *)v28[22].Alignment, v32 >> 9);
    v33 = (__int64 *)(((v31 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    *v33 = v25;
    if ( MiPteInShadowRange((unsigned __int64)v33) )
      MiWritePteShadow(v34, v25);
    MiInitializeLargeNonPagedPoolLeafFrames(v35, v27);
    v28[16].Region = v27;
    v28[17].Alignment = v27 | 0x1FF;
  }
  MiInitializeNonPagedPoolThresholds();
  return 1LL;
}
