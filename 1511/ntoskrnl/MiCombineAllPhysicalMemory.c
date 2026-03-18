/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x140129C30
 * Callers:
 *     MiCombineIdenticalPages @ 0x14050E19C (MiCombineIdenticalPages.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiReferencePageRuns @ 0x1400BFDB4 (MiReferencePageRuns.c)
 *     MiDereferencePageRuns @ 0x1400BFEC0 (MiDereferencePageRuns.c)
 *     KeQueryNodeActiveAffinity @ 0x1400F69BC (KeQueryNodeActiveAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FF1C8 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400FF490 (KeSetSystemGroupAffinityThread.c)
 *     MiMapArbitraryPage @ 0x140129AC0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x14012A464 (MiPerformCombineScan.c)
 *     KeQueryAffinityThread @ 0x14012B9A4 (KeQueryAffinityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x14050E9B4 (MiAllocateCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 *v5; // r14
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  unsigned int *v8; // r13
  _QWORD *v9; // r12
  unsigned int v10; // r15d
  __int64 v11; // rax
  void *v12; // rbp
  char *v13; // r13
  unsigned __int64 Mask; // rcx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int *v18; // rdx
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // rcx
  char v24; // al
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdi
  int v32; // r12d
  _QWORD *v33; // rsi
  char *v34; // r12
  int v36; // [rsp+40h] [rbp-108h]
  unsigned int v37; // [rsp+44h] [rbp-104h]
  int v38; // [rsp+48h] [rbp-100h]
  unsigned int v39; // [rsp+4Ch] [rbp-FCh]
  _QWORD *v40; // [rsp+50h] [rbp-F8h]
  unsigned __int64 *v43; // [rsp+68h] [rbp-E0h]
  int v44; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int *v45; // [rsp+78h] [rbp-D0h]
  __int64 v46; // [rsp+80h] [rbp-C8h]
  unsigned int *v47; // [rsp+88h] [rbp-C0h]
  __int64 v48; // [rsp+90h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp-B0h] BYREF
  unsigned __int64 v50; // [rsp+A8h] [rbp-A0h] BYREF
  char *v51; // [rsp+B0h] [rbp-98h]
  __int64 v52; // [rsp+B8h] [rbp-90h]
  char *v53; // [rsp+C0h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-80h]
  unsigned int *v55; // [rsp+D0h] [rbp-78h]
  __int64 CurrentIrql; // [rsp+D8h] [rbp-70h]
  _QWORD *v57; // [rsp+E0h] [rbp-68h]
  __int64 v58; // [rsp+E8h] [rbp-60h] BYREF
  __int16 v59; // [rsp+F0h] [rbp-58h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+F8h] [rbp-50h] BYREF

  v4 = *a1;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  v48 = a4;
  v57 = a3;
  v36 = 0;
  CurrentThread = KeGetCurrentThread();
  v52 = v4;
  v8 = (unsigned int *)MiReferencePageRuns(v4, 1u);
  v45 = v8;
  v38 = 0;
  v40 = 0LL;
  v9 = 0LL;
  v46 = *v8;
  v55 = &v8[4 * v46 + 4];
  KeQueryAffinityThread(CurrentThread, &v58);
  v10 = 0;
  v37 = 0;
  if ( !KeNumberNodes )
    goto LABEL_57;
  do
  {
    v50 = (32LL * *(_QWORD *)(1336LL * v10 + *(_QWORD *)(v52 + 40) + 1216) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v11 = MiAllocateCrcList(v5, &v50);
    v51 = (char *)v11;
    v12 = (void *)v11;
    if ( !v11 )
    {
      v36 = -1073741670;
      break;
    }
    v13 = (char *)v11;
    v53 = (char *)(v11 + (v50 & 0xFFFFFFFFFFFFFFE0uLL));
    KeQueryNodeActiveAffinity(v10, &Affinity, 0LL);
    Mask = Affinity.Mask;
    if ( Affinity.Group == v59 )
    {
      if ( (Affinity.Mask & v58) != 0 )
        Mask = Affinity.Mask & v58;
      Affinity.Mask = Mask;
    }
    if ( Mask )
    {
      if ( v38 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v38 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v16 = v46;
    v17 = 0;
    v39 = 0;
    if ( !(_DWORD)v46 )
      goto LABEL_46;
    v18 = v55;
    v19 = (unsigned __int64 *)(v45 + 6);
    v43 = (unsigned __int64 *)(v45 + 6);
    v47 = v55;
    while ( *(unsigned __int8 *)v18 != v10 )
    {
LABEL_42:
      ++v17;
      v18 = (unsigned int *)((char *)v18 + 2);
      v19 += 2;
      v39 = v17;
      v47 = v18;
      v43 = v19;
      if ( v17 >= v16 )
      {
LABEL_43:
        v23 = a2;
        goto LABEL_44;
      }
    }
    v20 = *v19;
    v21 = *(v19 - 1) - 1;
    v22 = 48 * v21 - 0x58000000000LL;
    if ( !*v19 )
    {
LABEL_41:
      v10 = v37;
      goto LABEL_42;
    }
    while ( 1 )
    {
      v23 = a2;
      if ( a2 )
      {
        if ( *(_DWORD *)(a2 + 4) )
          break;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) != 0 )
        break;
      v24 = *(_BYTE *)(v22 + 82);
      v22 += 48LL;
      ++v21;
      if ( (v24 & 7u) <= 1 )
      {
        do
        {
          if ( (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFELL )
            break;
          v25 = 512 - (v21 & 0x1FF);
          if ( v25 >= v20 )
            goto LABEL_40;
          v21 += v25;
          v20 -= v25;
          v22 += 48 * v25;
        }
        while ( (*(_BYTE *)(v22 + 34) & 7u) <= 1 );
      }
      if ( (unsigned int)MiCombineCandidate(a1, v22) )
      {
        if ( !v9 )
        {
          v40 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 1u, v26);
          v9 = v40;
          if ( !v40 )
          {
            v36 = -1073741670;
            goto LABEL_43;
          }
        }
        v7[9] = v9;
        v7[8] = v22;
        if ( (unsigned int)MiMapArbitraryPage((__int64)a1, v7, 0LL, 0) )
        {
          if ( (*(_BYTE *)(v22 + 34) & 7) == 6 )
            ++*(_QWORD *)(v6 + 16);
          else
            ++*(_QWORD *)(v6 + 24);
          v28 = MiPerformCombineScan(v27, v7, v13);
          v31 = v7[6];
          v32 = v28;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v44 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v44, v29, v30);
            while ( (*(_QWORD *)(v31 + 24) & 0x8000000000000000uLL) != 0 );
          }
          v7[6] = 0LL;
          v33 = (_QWORD *)v7[7];
          *v33 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v33) )
            MiWritePteShadow(v33, 0LL);
          v7 = v57;
          v57[7] = 0LL;
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8((unsigned __int8)CurrentIrql);
          MiReleasePtes((__int64)&qword_1402FF7B0, v40, 1u);
          v6 = v48;
          v40 = 0LL;
          if ( v32 == 1 )
          {
            *((_QWORD *)v13 + 1) = v21;
            *((_QWORD *)v13 + 2) = 0LL;
            *((_QWORD *)v13 + 3) = 0LL;
            v13 += 32;
            if ( v13 == v53 )
            {
              v34 = v51;
              MiProcessCrcList(a1, v51, (v13 - v51) >> 5, v37, v7, a2, v6);
              v13 = v34;
            }
          }
          v9 = 0LL;
        }
      }
      if ( !--v20 )
      {
LABEL_40:
        v16 = v46;
        v17 = v39;
        v18 = v47;
        v19 = v43;
        goto LABEL_41;
      }
    }
    v36 = -1073741248;
LABEL_44:
    v12 = v51;
    v10 = v37;
    v5 = a1;
    if ( v13 != v51 )
      MiProcessCrcList(a1, v51, (v13 - v51) >> 5, v37, v7, v23, v6);
LABEL_46:
    ExFreePoolWithTag(v12, 0);
    if ( v36 < 0 )
      break;
    v37 = ++v10;
  }
  while ( v10 != (unsigned __int16)KeNumberNodes );
  if ( v9 )
    MiReleasePtes((__int64)&qword_1402FF7B0, v9, 1u);
  if ( v38 == 1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  v8 = v45;
LABEL_57:
  MiDereferencePageRuns((__int64)v8);
  return (unsigned int)v36;
}
