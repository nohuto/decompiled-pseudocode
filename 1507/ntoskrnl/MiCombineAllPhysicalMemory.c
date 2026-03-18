/*
 * XREFs of MiCombineAllPhysicalMemory @ 0x1402273C8
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406A89D0 (MiCombineIdenticalPages.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiReferencePageRuns @ 0x1401000AC (MiReferencePageRuns.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 *     MiMapArbitraryPage @ 0x14022AC30 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x14022AED0 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x14022B07C (MiReleaseArbitraryPage.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiAllocateCrcList @ 0x1406A8890 (MiAllocateCrcList.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 */

__int64 __fastcall MiCombineAllPhysicalMemory(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rbp
  __int64 *v6; // rdi
  int v7; // r15d
  unsigned int *v8; // r13
  __int64 *v9; // rbx
  int v10; // r14d
  unsigned int *v11; // rsi
  __int64 v12; // rax
  char *v13; // rbp
  char *v14; // rdi
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned int *v18; // rdx
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // r8
  unsigned int v30; // [rsp+40h] [rbp-D8h]
  int v31; // [rsp+44h] [rbp-D4h]
  __int64 *v32; // [rsp+48h] [rbp-D0h]
  unsigned int *v36; // [rsp+68h] [rbp-B0h]
  __int64 v37; // [rsp+70h] [rbp-A8h]
  unsigned int *v38; // [rsp+78h] [rbp-A0h]
  unsigned int *v40; // [rsp+88h] [rbp-90h]
  unsigned __int64 v41; // [rsp+90h] [rbp-88h] BYREF
  unsigned int *v42; // [rsp+98h] [rbp-80h]
  char *v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+A8h] [rbp-70h]
  struct _GROUP_AFFINITY Affinity; // [rsp+B0h] [rbp-68h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-58h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+C8h] [rbp-50h] BYREF

  v4 = 0;
  v5 = *a1;
  v6 = a1;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v44 = v5;
  v8 = (unsigned int *)MiReferencePageRuns(v5, 1u);
  v42 = v8;
  v9 = 0LL;
  v31 = 0;
  v10 = 0;
  v32 = 0LL;
  v37 = *v8;
  v11 = &v8[4 * v37 + 4];
  v40 = v11;
  if ( !KeNumberNodes )
    goto LABEL_51;
  do
  {
    v41 = (32LL * *(_QWORD *)(1336LL * v4 + *(_QWORD *)(v5 + 40) + 1216) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v12 = MiAllocateCrcList(v6, &v41);
    v13 = (char *)v12;
    if ( !v12 )
    {
      v7 = -1073741670;
      break;
    }
    v14 = (char *)v12;
    v43 = (char *)(v12 + (v41 & 0xFFFFFFFFFFFFFFE0uLL));
    KeQueryNodeActiveAffinity(v4, &Affinity, 0LL);
    if ( Affinity.Mask )
    {
      if ( v10 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v31 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v16 = v37;
    v17 = 0;
    v30 = 0;
    if ( !(_DWORD)v37 )
      goto LABEL_42;
    v18 = v11;
    v19 = (unsigned __int64 *)(v8 + 6);
    v38 = v11;
    v36 = v8 + 6;
    while ( *(unsigned __int8 *)v18 != v4 )
    {
LABEL_36:
      ++v17;
      v18 = (unsigned int *)((char *)v18 + 2);
      v19 += 2;
      v30 = v17;
      v38 = v18;
      v36 = (unsigned int *)v19;
      if ( v17 >= v16 )
      {
LABEL_37:
        v23 = a2;
        goto LABEL_38;
      }
    }
    v20 = *v19;
    v21 = *(v19 - 1) - 1;
    v22 = 48 * v21 - 0x58000000000LL;
    if ( !*v19 )
      goto LABEL_35;
    while ( 2 )
    {
      v23 = a2;
      if ( (!a2 || !*(_DWORD *)(a2 + 4)) && (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 1) == 0 )
      {
        v22 += 48LL;
        ++v21;
        while ( (*(_BYTE *)(v22 + 34) & 7u) <= 1 && (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL )
        {
          v24 = 512 - (v21 & 0x1FF);
          if ( v24 >= v20 )
            goto LABEL_34;
          v21 += v24;
          v22 += 48 * v24;
          v20 -= v24;
        }
        if ( (unsigned int)MiCombineCandidate(a1, v22) )
        {
          if ( !v9 )
          {
            v32 = MiReservePtes((__int64)&qword_14034FC70, 1u, v25);
            v9 = v32;
            if ( !v32 )
            {
              v7 = -1073741670;
LABEL_34:
              v19 = (unsigned __int64 *)v36;
              v18 = v38;
              v17 = v30;
              v16 = v37;
LABEL_35:
              if ( v7 < 0 )
                goto LABEL_37;
              goto LABEL_36;
            }
          }
          *(_QWORD *)(a3 + 72) = v9;
          *(_QWORD *)(a3 + 64) = v22;
          if ( (unsigned int)MiMapArbitraryPage(a1, a3, 0LL, 0LL) )
          {
            if ( (*(_BYTE *)(v22 + 34) & 7) == 6 )
              ++*(_QWORD *)(a4 + 16);
            else
              ++*(_QWORD *)(a4 + 24);
            v27 = MiPerformCombineScan(v26, a3, v14);
            MiReleaseArbitraryPage(a3);
            MiReleasePtes((__int64)&qword_14034FC70, v32, 1u);
            v32 = 0LL;
            if ( v27 == 1
              && (*((_QWORD *)v14 + 1) = v21,
                  *((_QWORD *)v14 + 2) = 0LL,
                  *((_QWORD *)v14 + 3) = 0LL,
                  v14 += 32,
                  v14 == v43) )
            {
              MiProcessCrcList(a1, v13, (v14 - v13) >> 5, v4, a3, a2, a4);
              v9 = 0LL;
              v14 = v13;
            }
            else
            {
              v9 = 0LL;
            }
          }
        }
        if ( --v20 )
          continue;
        goto LABEL_34;
      }
      break;
    }
    v7 = -1073741248;
LABEL_38:
    if ( v14 == v13 )
    {
      v11 = v40;
      v8 = v42;
LABEL_42:
      v6 = a1;
      goto LABEL_43;
    }
    v28 = (v14 - v13) >> 5;
    v6 = a1;
    MiProcessCrcList(a1, v13, v28, v4, a3, v23, a4);
    v11 = v40;
    v8 = v42;
LABEL_43:
    ExFreePoolWithTag(v13, 0);
    v10 = v31;
    if ( v7 < 0 )
      break;
    ++v4;
    v5 = v44;
  }
  while ( v4 != (unsigned __int16)KeNumberNodes );
  if ( v9 )
    MiReleasePtes((__int64)&qword_14034FC70, v9, 1u);
  if ( v10 == 1 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_51:
  MiDereferencePageRuns((__int64)v8);
  return (unsigned int)v7;
}
