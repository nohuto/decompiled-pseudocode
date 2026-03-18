/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C0076580
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0075550 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00112B4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00112D4 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0093F40 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00A5A60 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00A5A90 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A7730 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00CD2D0 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C0151800 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01519D0 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  __int64 v8; // r14
  __int64 v11; // rcx
  int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // edi
  struct _KTHREAD *v19; // r8
  int v20; // edx
  struct DXGRESOURCE *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  unsigned int v27; // ebx
  struct _KTHREAD *v28; // rax
  _QWORD *v29; // rax
  struct DXGALLOCATION **v30; // r15
  struct DXGRESOURCE *v31; // rbx
  _QWORD *v32; // rax
  struct _KTHREAD *v33; // r8
  int v34; // edx
  struct _EX_RUNDOWN_REF *v35; // rbx
  ULONG_PTR i; // r8
  unsigned int v37; // edx
  __int64 v38; // rax
  struct _KTHREAD *v39; // r10
  int v40; // r9d
  unsigned int v41; // ebx
  struct DXGDEVICE *v42; // r14
  const unsigned int *v43; // rax
  __int64 v44; // rdi
  unsigned int v45; // ebx
  struct _KTHREAD *v46; // r8
  int v47; // edx
  struct DXGALLOCATION *v48; // rdx
  __int64 v49; // rdx
  struct _KTHREAD *v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  struct DXGALLOCATION *v53; // rax
  unsigned int *v54; // rcx
  struct _KTHREAD *v55; // r9
  int v56; // r8d
  struct DXGALLOCATION **v57; // rbx
  __int64 v58; // rsi
  struct DXGALLOCATION *v59; // rdx
  struct _EX_RUNDOWN_REF *v60; // rdi
  _QWORD *v62; // rax
  const unsigned int *v63; // rbx
  __int64 v64; // r14
  unsigned int v65; // edx
  struct DXGALLOCATION *v66; // rdi
  __int64 v67; // rax
  struct _KTHREAD *v68; // r9
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // [rsp+20h] [rbp-61h] BYREF
  struct DXGRESOURCE *v72; // [rsp+28h] [rbp-59h] BYREF
  struct DXGALLOCATION **v73; // [rsp+30h] [rbp-51h] BYREF
  const unsigned int *v74; // [rsp+38h] [rbp-49h] BYREF
  unsigned int *v75; // [rsp+40h] [rbp-41h] BYREF
  _BYTE v76[8]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v77[8]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v78[8]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v79[8]; // [rsp+60h] [rbp-21h] BYREF
  DXGPUSHLOCK *v80[2]; // [rsp+68h] [rbp-19h] BYREF
  int v81; // [rsp+78h] [rbp-9h]
  struct DXGALLOCATION *v82; // [rsp+D0h] [rbp+4Fh] BYREF
  struct DXGDEVICE *v83; // [rsp+D8h] [rbp+57h]
  char v84; // [rsp+E0h] [rbp+5Fh]
  const unsigned int *v85; // [rsp+E8h] [rbp+67h]

  v85 = a4;
  v83 = a2;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v72, 0LL);
  v12 = 0;
  v80[1] = (DXGPUSHLOCK *)(a1 + 23);
  v13 = 0;
  if ( a1 != (struct _KTHREAD **)-184LL && a1[24] == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v14 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 23, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)a1 + 50);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockExclusiveEx(a1 + 23, 0LL);
  }
  a1[24] = KeGetCurrentThread();
  v81 = 2;
  if ( !(_DWORD)v8 )
  {
    v41 = a5;
    v30 = a6;
    v84 = 0;
    v75 = 0LL;
    if ( a5 )
    {
      v42 = v83;
      v43 = a4;
      v74 = a4;
      v73 = a6;
      while ( 1 )
      {
        v44 = *v43;
        v45 = (*v43 >> 6) & 0xFFFFFF;
        if ( v45 < *((_DWORD *)a1 + 56)
          && (v46 = a1[26],
              v47 = *((_DWORD *)v46 + 4 * v45 + 2),
              (((unsigned int)v44 >> 26) & 0x30) == (*((_BYTE *)v46 + 16 * v45 + 8) & 0x30))
          && (v47 & 0x1000) == 0
          && (v47 & 0xF) != 0
          && (*((_BYTE *)v46 + 16 * v45 + 8) & 0xF) == 5 )
        {
          v48 = (struct DXGALLOCATION *)*((_QWORD *)v46 + 2 * v45);
        }
        else
        {
          v48 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71, v48);
        v53 = (struct DXGALLOCATION *)v71;
        if ( !v71 )
          break;
        if ( v45 < *((_DWORD *)a1 + 56) )
        {
          v50 = a1[26];
          v49 = 2LL * v45;
          v51 = *((_DWORD *)v50 + 4 * v45 + 2) >> 13;
          LOBYTE(v51) = (*((_DWORD *)v50 + 4 * v45 + 2) & 0x2000) != 0;
          if ( (*((_DWORD *)v50 + 4 * v45 + 2) & 0x2000) != 0 )
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
            v62[5] = -1073741267LL;
            goto LABEL_75;
          }
        }
        if ( *(struct DXGDEVICE **)(v71 + 8) != v42 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
          v62[3] = v42;
          v62[4] = v71;
          v62[5] = *(_QWORD *)(v71 + 8);
          v62[6] = -1073741811LL;
          goto LABEL_76;
        }
        if ( !v84 )
        {
          v75 = *(unsigned int **)(v71 + 40);
          v84 = 1;
        }
        v54 = *(unsigned int **)(v71 + 40);
        if ( v54 != v75 )
        {
LABEL_71:
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v49, v51, v52);
          v62[3] = v42;
          v62[4] = -1073741811LL;
          goto LABEL_76;
        }
        if ( v54 )
        {
          v49 = v54[1];
          if ( (v49 & 1) != 0 )
            goto LABEL_71;
          if ( !DxgkTryReferenceDxgResource((struct DXGRESOURCE *)v54) )
          {
            LOBYTE(v12) = 1;
            goto LABEL_77;
          }
          *(_DWORD *)(v71 + 72) |= 0x40000u;
          v53 = (struct DXGALLOCATION *)v71;
        }
        if ( v45 < *((_DWORD *)a1 + 56) )
        {
          v55 = a1[26];
          v56 = *((_DWORD *)v55 + 4 * v45 + 2);
          if ( (((unsigned int)v44 >> 26) & 0x30) == (*((_BYTE *)v55 + 16 * v45 + 8) & 0x30)
            && (v56 & 0x1000) == 0
            && (v56 & 0xF) != 0 )
          {
            *((_DWORD *)v55 + 4 * (((unsigned int)v44 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
            v53 = (struct DXGALLOCATION *)v71;
          }
        }
        v57 = v73;
        *v73 = v53;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71);
        v43 = v74 + 1;
        v73 = v57 + 1;
        v41 = a5;
        ++v13;
        ++v74;
        if ( v13 >= a5 )
          goto LABEL_65;
      }
      v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
      v62[5] = -1073741811LL;
LABEL_75:
      v62[3] = v42;
      v62[4] = v44;
LABEL_76:
      WdLogEvent5_WdWarning(v62);
LABEL_77:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v71);
      goto LABEL_78;
    }
LABEL_65:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v80);
    if ( v41 )
    {
      v58 = v41;
      do
      {
        v59 = *v30;
        v82 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v77, v59);
        DXGALLOCATIONREFERENCE::MoveAssign(&v82, v77);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v77);
        v60 = (struct _EX_RUNDOWN_REF *)v82;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v78, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v82, v78);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v78);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v60);
        ExWaitForRundownProtectionRelease(v60 + 11);
        ExInitializeRundownProtection(v60 + 11);
        DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v60);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v79, (struct DXGALLOCATION *)v60);
        DXGALLOCATIONREFERENCE::MoveAssign(&v82, v79);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v79);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v82);
        ++v30;
        --v58;
      }
      while ( v58 );
    }
    goto LABEL_68;
  }
  v18 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)a1 + 56)
    && (v19 = a1[26],
        v20 = *((_DWORD *)v19 + 4 * v18 + 2),
        (((unsigned int)v8 >> 26) & 0x30) == (*((_BYTE *)v19 + 16 * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*((_BYTE *)v19 + 16 * v18 + 8) & 0xF) == 4 )
  {
    v21 = (struct DXGRESOURCE *)*((_QWORD *)v19 + 2 * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v76, v21);
  DXGRESOURCEREFERENCE::MoveAssign(&v72, v76);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v76);
  if ( v72 )
  {
    if ( v18 < *((_DWORD *)a1 + 56) )
    {
      v28 = a1[26];
      v23 = 2LL * v18;
      v22 = *((_DWORD *)v28 + 4 * v18 + 2) >> 13;
      LOBYTE(v22) = (*((_DWORD *)v28 + 4 * v18 + 2) & 0x2000) != 0;
      if ( (*((_DWORD *)v28 + 4 * v18 + 2) & 0x2000) != 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
        v29[3] = a2;
        v29[4] = v8;
        v29[5] = -1073741267LL;
        WdLogEvent5_WdWarning(v29);
        v30 = a6;
        goto LABEL_78;
      }
    }
    v31 = v72;
    if ( *((struct DXGDEVICE **)v72 + 1) != a2 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      v32[3] = a2;
      v32[4] = v31;
      v32[5] = *((_QWORD *)v31 + 1);
      v32[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v32);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v72, &v73);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v73);
      v30 = a6;
LABEL_78:
      if ( v72 )
        goto LABEL_92;
      if ( v13 )
      {
        v63 = v85;
        v64 = v13;
        do
        {
          v65 = *v63;
          v66 = *v30;
          v67 = (*v63 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v67 < *((_DWORD *)a1 + 56) )
          {
            v68 = a1[26];
            if ( ((v65 >> 26) & 0x30) == (*((_BYTE *)v68 + 16 * v67 + 8) & 0x30)
              && (*((_DWORD *)v68 + 4 * v67 + 2) & 0xF) != 0 )
            {
              v69 = 2LL * ((v65 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v68 + 4 * ((v65 >> 6) & 0xFFFFFF) + 2) & 0x1000) == 0 )
              {
                v70 = WdLogNewEntry5_WdAssertion((v65 >> 26) & 0x30);
                *(_QWORD *)(v70 + 24) = 193LL;
                WdLogEvent5_WdAssertion(v70);
              }
              *((_DWORD *)a1[26] + 2 * v69 + 2) &= ~0x1000u;
              v63 = v85;
            }
          }
          if ( (*((_DWORD *)v66 + 18) & 0x40000) != 0 )
          {
            DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)v66 + 5));
            *((_DWORD *)v66 + 18) &= ~0x40000u;
          }
          ++v63;
          ++v30;
          v85 = v63;
          --v64;
        }
        while ( v64 );
      }
      if ( !(_BYTE)v12 )
      {
LABEL_92:
        v27 = -1073741811;
        goto LABEL_69;
      }
      v12 = 255;
      goto LABEL_68;
    }
    if ( v18 < *((_DWORD *)a1 + 56) )
    {
      v33 = a1[26];
      v34 = *((_DWORD *)v33 + 4 * v18 + 2);
      if ( (((unsigned int)v8 >> 26) & 0x30) == (*((_BYTE *)v33 + 16 * v18 + 8) & 0x30)
        && (v34 & 0x1000) == 0
        && (v34 & 0xF) != 0 )
      {
        *((_DWORD *)v33 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
      }
    }
    v35 = (struct _EX_RUNDOWN_REF *)v72;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v80);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v74, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v72, &v74);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v74);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v35);
    ExWaitForRundownProtectionRelease(v35 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v35[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(v80);
    for ( i = v35[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v37 = *(_DWORD *)(i + 16);
      if ( v37 )
      {
        v38 = (v37 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v38 < *((_DWORD *)a1 + 56) )
        {
          v39 = a1[26];
          v40 = *((_DWORD *)v39 + 4 * v38 + 2);
          if ( ((v37 >> 26) & 0x30) == (*((_BYTE *)v39 + 16 * v38 + 8) & 0x30)
            && (v40 & 0x1000) == 0
            && (v40 & 0xF) != 0 )
          {
            *((_DWORD *)v39 + 4 * ((v37 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v35 + 9);
    DxgkTryReferenceDxgResource((struct DXGRESOURCE *)v35);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v75, (struct DXGRESOURCE *)v35);
    DXGRESOURCEREFERENCE::MoveAssign(&v72, &v75);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v75);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v80);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v35[10]);
    *a7 = v72;
LABEL_68:
    v27 = v12;
    goto LABEL_69;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  v27 = -1073741811;
  v26[3] = a2;
  v26[4] = v8;
  v26[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v26);
LABEL_69:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v80);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v72);
  return v27;
}
