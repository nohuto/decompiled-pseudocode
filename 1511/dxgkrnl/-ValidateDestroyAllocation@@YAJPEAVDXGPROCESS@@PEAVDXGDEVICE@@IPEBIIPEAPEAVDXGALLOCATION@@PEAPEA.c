/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0064390
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0065DC4 (-Assign@DXGRESOURCEREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0065E00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0065F40 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall ValidateDestroyAllocation(
        struct _KTHREAD **a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct DXGALLOCATION **a6,
        struct DXGRESOURCE **a7)
{
  char *v7; // rbx
  const unsigned int *v8; // r14
  unsigned int v9; // r12d
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // edi
  struct _KTHREAD *v18; // r8
  int v19; // edx
  struct DXGRESOURCE *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _EX_RUNDOWN_REF *v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // r14d
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _KTHREAD *v31; // r8
  __int64 v32; // rax
  ULONG_PTR j; // rsi
  unsigned int v34; // edx
  __int64 v35; // rax
  struct _KTHREAD *v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rax
  struct _KTHREAD *v39; // r8
  int v40; // edx
  ULONG_PTR i; // rdx
  unsigned int v42; // r8d
  __int64 v43; // rax
  struct _KTHREAD *v44; // r10
  int v45; // r9d
  struct DXGALLOCATION **v46; // rsi
  __int64 v47; // rdi
  unsigned int v48; // ebx
  struct _KTHREAD *v49; // r8
  int v50; // edx
  struct DXGALLOCATION *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct _EX_RUNDOWN_REF *v55; // rcx
  ULONG_PTR v56; // rax
  struct _KTHREAD *v57; // r9
  int v58; // r8d
  struct DXGGLOBAL *v59; // rax
  __int64 v60; // rax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v62; // rax
  int CurrentProcessSessionId; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  struct _KTHREAD *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // edi
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rbx
  _QWORD *v75; // rax
  char *v76; // rcx
  __int64 v77; // rcx
  struct DXGGLOBAL *v78; // rax
  __int64 v79; // rax
  struct _KTHREAD *v80; // rbx
  __int64 v81; // rax
  int v82; // edi
  __int64 *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  struct _KTHREAD *v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // edi
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rbx
  _QWORD *v94; // rax
  const unsigned int *v95; // r10
  __int64 v96; // rsi
  unsigned int v97; // edx
  __int64 v98; // rax
  struct _KTHREAD *v99; // r9
  __int64 v100; // rdi
  __int64 v101; // rax
  _QWORD *v102; // rax
  struct _EX_RUNDOWN_REF *v104; // [rsp+20h] [rbp-50h] BYREF
  char v105[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v106; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR Count; // [rsp+38h] [rbp-38h]
  char *v108; // [rsp+40h] [rbp-30h]
  __int64 v109; // [rsp+90h] [rbp+20h] BYREF
  char v110; // [rsp+A0h] [rbp+30h]
  const unsigned int *v111; // [rsp+A8h] [rbp+38h]

  v111 = a4;
  v7 = (char *)(a1 + 24);
  v8 = a4;
  v9 = 0;
  v11 = a3;
  v109 = 0LL;
  v108 = (char *)(a1 + 24);
  if ( a1 != (struct _KTHREAD **)-192LL && a1[25] == KeGetCurrentThread() )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v13);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v7, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *((_DWORD *)v7 + 4);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockExclusiveEx(v7, 0LL);
  }
  *((_QWORD *)v7 + 1) = KeGetCurrentThread();
  if ( !(_DWORD)v11 )
  {
    v110 = 0;
    Count = 0LL;
    if ( a5 )
    {
      v46 = a6;
      while ( 1 )
      {
        v47 = *v8;
        v48 = (*v8 >> 6) & 0xFFFFFF;
        if ( v48 < *((_DWORD *)a1 + 58)
          && (v49 = a1[27],
              v50 = *((_DWORD *)v49 + 4 * v48 + 2),
              (((unsigned int)v47 >> 26) & 0x30) == (*((_BYTE *)v49 + 16 * v48 + 8) & 0x30))
          && (v50 & 0x1000) == 0
          && (v50 & 0xF) != 0
          && (*((_BYTE *)v49 + 16 * v48 + 8) & 0xF) == 5 )
        {
          v51 = (struct DXGALLOCATION *)*((_QWORD *)v49 + 2 * v48);
        }
        else
        {
          v51 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v104, v51);
        v55 = v104;
        if ( !v104 )
          break;
        if ( (struct DXGDEVICE *)v104[1].Count != a2 )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v104, v52, v53, v54);
          v27 = -1073741811;
          v94[3] = a2;
          v94[4] = v104;
          v94[5] = v104[1].Count;
          v94[6] = -1073741811LL;
          goto LABEL_123;
        }
        if ( !v110 )
        {
          Count = v104[5].Count;
          v110 = 1;
        }
        v56 = v104[5].Count;
        if ( v56 != Count || v56 && (*(_DWORD *)(v56 + 4) & 1) != 0 )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdWarning(v104, v52, v53, v54);
          v27 = -1073741811;
          v94[4] = -1073741811LL;
          goto LABEL_122;
        }
        if ( v48 < *((_DWORD *)a1 + 58) )
        {
          v57 = a1[27];
          v58 = *((_DWORD *)v57 + 4 * v48 + 2);
          if ( (((unsigned int)v47 >> 26) & 0x30) == (*((_BYTE *)v57 + 16 * v48 + 8) & 0x30)
            && (v58 & 0x1000) == 0
            && (v58 & 0xF) != 0 )
          {
            *((_DWORD *)v57 + 4 * (((unsigned int)v47 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
            v55 = v104;
          }
        }
        *v46 = (struct DXGALLOCATION *)v55;
        if ( v55 )
          ExReleaseRundownProtection(v55 + 11);
        v59 = DXGGLOBAL::m_pGlobal;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v60 = WdLogNewEntry5_WdAssertion(v55);
          *(_QWORD *)(v60 + 24) = 1016LL;
          WdLogEvent5_WdAssertion(v60);
          v59 = DXGGLOBAL::m_pGlobal;
        }
        if ( *((_DWORD *)v59 + 231) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v62 = WdLogNewEntry5_WdAssertion(v55);
            *(_QWORD *)(v62 + 24) = 92LL;
            WdLogEvent5_WdAssertion(v62);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          if ( CurrentProcessSessionId )
          {
            if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
              {
                v66 = *ThreadWin32Thread;
                if ( v66 )
                {
                  if ( *(_QWORD *)(v66 + 80) )
                  {
                    v67 = KeGetCurrentThread();
                    if ( !v67 )
                    {
                      v68 = WdLogNewEntry5_WdAssertion(v65);
                      *(_QWORD *)(v68 + 24) = 92LL;
                      WdLogEvent5_WdAssertion(v68);
                    }
                    v71 = PsGetCurrentProcessSessionId();
                    if ( v71
                      && (unsigned int)PsGetThreadSessionId(v67) == v71
                      && (v73 = PsGetThreadWin32Thread(v67)) != 0
                      && *(_QWORD *)v73 )
                    {
                      v74 = *(_QWORD *)(*(_QWORD *)v73 + 80LL);
                    }
                    else
                    {
                      v74 = 0LL;
                    }
                    if ( *(_DWORD *)(v74 + 136) )
                    {
                      v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v70, v69, v72);
                      v75[3] = 275LL;
                      v75[4] = 25LL;
                      v75[5] = *(int *)(v74 + 136);
                      v75[6] = 0LL;
                      v75[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v75);
                    }
                  }
                }
              }
            }
          }
        }
        ++v9;
        ++v8;
        ++v46;
        if ( v9 >= a5 )
          goto LABEL_98;
      }
      v94 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v52, v53, v54);
      v27 = -1073741811;
      v94[4] = v47;
      v94[5] = -1073741811LL;
LABEL_122:
      v94[3] = a2;
LABEL_123:
      WdLogEvent5_WdWarning(v94);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v104);
      v25 = (struct _EX_RUNDOWN_REF *)v109;
      goto LABEL_124;
    }
LABEL_98:
    v25 = (struct _EX_RUNDOWN_REF *)v109;
LABEL_99:
    v27 = 0;
    goto LABEL_100;
  }
  v17 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v17 < *((_DWORD *)a1 + 58)
    && (v18 = a1[27],
        v19 = *((_DWORD *)v18 + 4 * v17 + 2),
        (((unsigned int)v11 >> 26) & 0x30) == (*((_BYTE *)v18 + 16 * v17 + 8) & 0x30))
    && (v19 & 0x1000) == 0
    && (v19 & 0xF) != 0
    && (*((_BYTE *)v18 + 16 * v17 + 8) & 0xF) == 4 )
  {
    v20 = (struct DXGRESOURCE *)*((_QWORD *)v18 + 2 * v17);
  }
  else
  {
    v20 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v105, v20);
  DXGRESOURCEREFERENCE::Assign((DXGRESOURCEREFERENCE *)&v109, (const struct DXGRESOURCEREFERENCE *)v105);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v105);
  v25 = (struct _EX_RUNDOWN_REF *)v109;
  if ( !v109 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    v27 = -1073741811;
    v26[3] = a2;
    v26[4] = v11;
    v26[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    goto LABEL_100;
  }
  if ( *(struct DXGDEVICE **)(v109 + 8) == a2 )
  {
    if ( v17 < *((_DWORD *)a1 + 58) )
    {
      v39 = a1[27];
      v40 = *((_DWORD *)v39 + 4 * v17 + 2);
      if ( (((unsigned int)v11 >> 26) & 0x30) == (*((_BYTE *)v39 + 16 * v17 + 8) & 0x30)
        && (v40 & 0x1000) == 0
        && (v40 & 0xF) != 0 )
      {
        *((_DWORD *)v39 + 4 * (((unsigned int)v11 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
      }
    }
    for ( i = v25[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v42 = *(_DWORD *)(i + 16);
      if ( v42 )
      {
        v43 = (v42 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v43 < *((_DWORD *)a1 + 58) )
        {
          v44 = a1[27];
          v45 = *((_DWORD *)v44 + 4 * v43 + 2);
          if ( ((v42 >> 26) & 0x30) == (*((_BYTE *)v44 + 16 * v43 + 8) & 0x30)
            && (v45 & 0x1000) == 0
            && (v45 & 0xF) != 0 )
          {
            *((_DWORD *)v44 + 4 * ((v42 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
    }
    *a7 = (struct DXGRESOURCE *)v25;
    goto LABEL_99;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
  v27 = -1073741811;
  v28[3] = a2;
  v28[4] = v25;
  v28[5] = v25[1].Count;
  v28[6] = -1073741811LL;
  WdLogEvent5_WdWarning(v28);
  v106 = 0LL;
  DXGRESOURCEREFERENCE::Assign((DXGRESOURCEREFERENCE *)&v109, (const struct DXGRESOURCEREFERENCE *)&v106);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v106);
  v25 = (struct _EX_RUNDOWN_REF *)v109;
  if ( v109 )
  {
    if ( *(struct DXGDEVICE **)(v109 + 8) != a2 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v30 + 24) = 6810LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v17 < *((_DWORD *)a1 + 58) )
    {
      v31 = a1[27];
      if ( (((unsigned int)v11 >> 26) & 0x30) == (*((_BYTE *)v31 + 16 * v17 + 8) & 0x30)
        && (*((_DWORD *)v31 + 4 * v17 + 2) & 0xF) != 0 )
      {
        if ( (*((_DWORD *)v31 + 4 * (((unsigned int)v11 >> 6) & 0xFFFFFF) + 2) & 0x1000) == 0 )
        {
          v32 = WdLogNewEntry5_WdAssertion(((unsigned int)v11 >> 26) & 0x30);
          *(_QWORD *)(v32 + 24) = 188LL;
          WdLogEvent5_WdAssertion(v32);
        }
        *((_DWORD *)a1[27] + 4 * (((unsigned int)v11 >> 6) & 0xFFFFFF) + 2) &= ~0x1000u;
      }
    }
    for ( j = v25[3].Count; j; j = *(_QWORD *)(j + 64) )
    {
      v34 = *(_DWORD *)(j + 16);
      if ( v34 )
      {
        v35 = (v34 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v35 < *((_DWORD *)a1 + 58) )
        {
          v36 = a1[27];
          if ( ((v34 >> 26) & 0x30) == (*((_BYTE *)v36 + 16 * v35 + 8) & 0x30)
            && (*((_DWORD *)v36 + 4 * v35 + 2) & 0xF) != 0 )
          {
            v37 = 2LL * ((v34 >> 6) & 0xFFFFFF);
            if ( (*((_DWORD *)v36 + 4 * ((v34 >> 6) & 0xFFFFFF) + 2) & 0x1000) == 0 )
            {
              v38 = WdLogNewEntry5_WdAssertion((v34 >> 26) & 0x30);
              *(_QWORD *)(v38 + 24) = 188LL;
              WdLogEvent5_WdAssertion(v38);
            }
            *((_DWORD *)a1[27] + 2 * v37 + 2) &= ~0x1000u;
          }
        }
      }
    }
    goto LABEL_100;
  }
LABEL_124:
  if ( v9 )
  {
    v95 = v111;
    v96 = v9;
    do
    {
      v97 = *v95;
      v98 = (*v95 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v98 < *((_DWORD *)a1 + 58) )
      {
        v99 = a1[27];
        if ( ((v97 >> 26) & 0x30) == (*((_BYTE *)v99 + 16 * v98 + 8) & 0x30)
          && (*((_DWORD *)v99 + 4 * v98 + 2) & 0xF) != 0 )
        {
          v100 = 2LL * ((v97 >> 6) & 0xFFFFFF);
          if ( (*((_DWORD *)v99 + 4 * ((v97 >> 6) & 0xFFFFFF) + 2) & 0x1000) == 0 )
          {
            v101 = WdLogNewEntry5_WdAssertion((v97 >> 26) & 0x30);
            *(_QWORD *)(v101 + 24) = 188LL;
            WdLogEvent5_WdAssertion(v101);
            v95 = v111;
          }
          *((_DWORD *)a1[27] + 2 * v100 + 2) &= ~0x1000u;
        }
      }
      v111 = ++v95;
      --v96;
    }
    while ( v96 );
  }
LABEL_100:
  v76 = v108;
  *((_QWORD *)v108 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v76, 0LL);
  KeLeaveCriticalRegion();
  if ( v25 )
    ExReleaseRundownProtection(v25 + 9);
  v78 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v79 = WdLogNewEntry5_WdAssertion(v77);
    *(_QWORD *)(v79 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v79);
    v78 = DXGGLOBAL::m_pGlobal;
  }
  if ( *((_DWORD *)v78 + 231) )
  {
    v80 = KeGetCurrentThread();
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v77);
      *(_QWORD *)(v81 + 24) = 92LL;
      WdLogEvent5_WdAssertion(v81);
    }
    v82 = PsGetCurrentProcessSessionId();
    if ( v82 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v80) == v82 )
      {
        v83 = (__int64 *)PsGetThreadWin32Thread(v80);
        if ( v83 )
        {
          v85 = *v83;
          if ( v85 )
          {
            if ( *(_QWORD *)(v85 + 80) )
            {
              v86 = KeGetCurrentThread();
              if ( !v86 )
              {
                v87 = WdLogNewEntry5_WdAssertion(v84);
                *(_QWORD *)(v87 + 24) = 92LL;
                WdLogEvent5_WdAssertion(v87);
              }
              v90 = PsGetCurrentProcessSessionId();
              if ( v90
                && (unsigned int)PsGetThreadSessionId(v86) == v90
                && (v92 = PsGetThreadWin32Thread(v86)) != 0
                && *(_QWORD *)v92 )
              {
                v93 = *(_QWORD *)(*(_QWORD *)v92 + 80LL);
              }
              else
              {
                v93 = 0LL;
              }
              if ( *(_DWORD *)(v93 + 136) )
              {
                v102 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v89, v88, v91);
                v102[3] = 275LL;
                v102[4] = 25LL;
                v102[5] = *(int *)(v93 + 136);
                v102[6] = 0LL;
                v102[7] = 0LL;
                WdLogEvent5_WdCriticalError(v102);
              }
            }
          }
        }
      }
    }
  }
  return v27;
}
