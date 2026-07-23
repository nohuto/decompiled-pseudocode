/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1406637FC
 * Callers:
 *     MiCombineIdenticalPages @ 0x140663C88 (MiCombineIdenticalPages.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x140104E70 (MiReferencePageRuns.c)
 *     KeQueryAffinityThread @ 0x140135904 (KeQueryAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 *     MiHashIsCommon @ 0x1401F9C40 (MiHashIsCommon.c)
 *     MiMapArbitraryPage @ 0x1401F9E68 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1401F9F98 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1401FA254 (MiReleaseArbitraryPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiAllocateCrcList @ 0x1406636D0 (MiAllocateCrcList.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r14
  int v3; // r12d
  __int64 v4; // r15
  unsigned int *v5; // rsi
  unsigned int *v6; // rdi
  unsigned int v7; // r13d
  __int64 *v8; // rax
  __int64 *v9; // r15
  __int64 *v10; // rbx
  unsigned __int64 Mask; // rcx
  __int64 v12; // r11
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  unsigned int *v16; // rdx
  unsigned int *v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // eax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // r8
  ULONG_PTR v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  int v28; // eax
  int v29; // r14d
  __int64 v30; // r10
  unsigned int v32; // [rsp+28h] [rbp-99h]
  int v33; // [rsp+2Ch] [rbp-95h]
  __int64 v34; // [rsp+30h] [rbp-91h]
  SIZE_T v36; // [rsp+40h] [rbp-81h] BYREF
  __int64 v37; // [rsp+48h] [rbp-79h]
  unsigned int *v38; // [rsp+50h] [rbp-71h]
  unsigned int *v39; // [rsp+58h] [rbp-69h]
  int v40; // [rsp+60h] [rbp-61h]
  _QWORD *v41; // [rsp+68h] [rbp-59h]
  unsigned __int64 v42; // [rsp+70h] [rbp-51h]
  __int64 *v43; // [rsp+78h] [rbp-49h]
  struct _GROUP_AFFINITY Affinity; // [rsp+80h] [rbp-41h] BYREF
  __int64 v45; // [rsp+90h] [rbp-31h]
  unsigned int *v46; // [rsp+98h] [rbp-29h]
  unsigned int *v47; // [rsp+A0h] [rbp-21h]
  __int64 v48; // [rsp+A8h] [rbp-19h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-11h]
  __int64 *v50; // [rsp+B8h] [rbp-9h]
  __int64 v51; // [rsp+C0h] [rbp-1h]
  __int64 v52; // [rsp+C8h] [rbp+7h] BYREF
  __int16 v53; // [rsp+D0h] [rbp+Fh]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+D8h] [rbp+17h] BYREF

  v1 = *(__int64 **)a1;
  v2 = 0LL;
  v3 = 0;
  v4 = **(_QWORD **)a1;
  v48 = *(_QWORD *)(a1 + 8);
  v41 = *(_QWORD **)(a1 + 16);
  v40 = *(_DWORD *)(a1 + 40);
  v45 = *(_QWORD *)(a1 + 24);
  v43 = v1;
  CurrentThread = KeGetCurrentThread();
  v51 = v4;
  v5 = (unsigned int *)MiReferencePageRuns(v4, 1u);
  v47 = v5;
  v33 = 0;
  v34 = 0LL;
  v37 = *v5;
  v6 = &v5[4 * v37 + 4];
  v46 = v6;
  KeQueryAffinityThread((__int64)CurrentThread, (__int64)&v52);
  v7 = 0;
  if ( !KeNumberNodes )
    goto LABEL_57;
  do
  {
    v36 = (32LL * *(_QWORD *)(2184LL * v7 + *(_QWORD *)(v4 + 48) + 2056) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v8 = (__int64 *)MiAllocateCrcList(v1, &v36);
    v9 = v8;
    if ( !v8 )
    {
      v3 = -1073741670;
      break;
    }
    v10 = v8;
    v50 = (__int64 *)((char *)v8 + (v36 & 0xFFFFFFFFFFFFFFE0uLL));
    KeQueryNodeActiveAffinity(v7, &Affinity, 0LL);
    Mask = Affinity.Mask;
    if ( Affinity.Group == v53 )
    {
      if ( (Affinity.Mask & v52) != 0 )
        Mask = Affinity.Mask & v52;
      Affinity.Mask = Mask;
    }
    LODWORD(v12) = 0;
    if ( Mask )
    {
      if ( v33 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v33 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      LODWORD(v12) = 0;
    }
    v14 = v37;
    v15 = 0;
    v32 = 0;
    if ( !(_DWORD)v37 )
      goto LABEL_49;
    v16 = v6;
    v17 = v5 + 6;
    v38 = v6;
    v39 = v5 + 6;
    while ( *(unsigned __int8 *)v16 != v7 )
    {
LABEL_43:
      ++v15;
      v16 = (unsigned int *)((char *)v16 + 2);
      v17 += 4;
      v32 = v15;
      v38 = v16;
      v39 = v17;
      if ( v15 >= v14 )
        goto LABEL_46;
    }
    v18 = *((_QWORD *)v17 - 1) - 1LL;
    v42 = *(_QWORD *)v17;
    v19 = 48 * v18 - 0x58000000000LL;
    if ( !v42 )
      goto LABEL_42;
    while ( 2 )
    {
      if ( (!v48 || *(_DWORD *)(v48 + 4) == (_DWORD)v12) && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
      {
        v19 += 48LL;
        ++v18;
        while ( (*(_BYTE *)(v19 + 34) & 7u) <= 1 )
        {
          v20 = MiFreeZeroPageSizeIndex(v19);
          if ( v20 == -1 )
            break;
          v22 = MiLargePageSizes[v20] - (v18 & (MiLargePageSizes[v20] - 1));
          if ( v22 >= v21 )
            goto LABEL_41;
          v18 += v22;
          v19 += 48 * v22;
          v42 = v21 - v22;
        }
        v23 = MiCombineCandidate((__int64)v43, v19);
        LODWORD(v12) = 0;
        LODWORD(v36) = v23;
        if ( v23 )
        {
          if ( !v2 )
          {
            v25 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v24);
            LODWORD(v12) = 0;
            v34 = v25;
            v2 = v25;
            if ( !v25 )
            {
              v3 = -1073741670;
LABEL_41:
              v17 = v39;
              v16 = v38;
              v15 = v32;
              v14 = v37;
LABEL_42:
              if ( v3 < 0 )
                goto LABEL_46;
              goto LABEL_43;
            }
          }
          v26 = (__int64)v43;
          v27 = v41;
          v41[9] = v2;
          v27[8] = v19;
          v28 = MiMapArbitraryPage(v26, v27, 0, 0);
          LODWORD(v12) = 0;
          if ( v28 )
          {
            if ( (*(_BYTE *)(v19 + 34) & 7) == 6 )
              ++*(_QWORD *)(v45 + 16);
            else
              ++*(_QWORD *)(v45 + 24);
            v29 = MiPerformCombineScan(a1, (__int64)v41);
            MiReleaseArbitraryPage((__int64)v41);
            MiReleasePtes((__int64)&qword_1403278B0, v34, 1u);
            v30 = a1;
            v12 = 0LL;
            v34 = 0LL;
            if ( (v40 & 4) != 0 && (_DWORD)v36 == 1 )
              v29 = (unsigned int)MiHashIsCommon(a1, *v10) != 0 ? v29 : 0;
            if ( v29 == 1 && (v10[1] = v18, v10[2] = v12, v10[3] = v12, v10 += 4, v10 == v50) )
            {
              MiProcessCrcList(v30, v9, ((char *)v10 - (char *)v9) >> 5, v7);
              v2 = 0LL;
              LODWORD(v12) = 0;
              v10 = v9;
            }
            else
            {
              v2 = v12;
            }
          }
        }
        if ( --v42 )
          continue;
        goto LABEL_41;
      }
      break;
    }
    v3 = -1073741248;
LABEL_46:
    if ( v10 != v9 )
      MiProcessCrcList(a1, v9, ((char *)v10 - (char *)v9) >> 5, v7);
    v5 = v47;
    v6 = v46;
LABEL_49:
    ExFreePoolWithTag(v9, 0);
    if ( v3 < 0 )
      break;
    ++v7;
    v1 = v43;
    v4 = v51;
  }
  while ( v7 != (unsigned __int16)KeNumberNodes );
  if ( v2 )
    MiReleasePtes((__int64)&qword_1403278B0, v2, 1u);
  if ( v33 == 1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_57:
  MiDereferencePageRuns((__int64)v5);
  return (unsigned int)v3;
}
