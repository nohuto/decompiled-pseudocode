/*
 * XREFs of ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C005D620
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000F8A0 (-ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000F8E4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001C354 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00773D0 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00773DC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0077400 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0078DC0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0094840 (-DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C00A6390 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z @ 0x1C012CF00 (-DxgkTryReferenceDxgResource@@YAEPEAVDXGRESOURCE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // edi
  struct _KTHREAD *v21; // r8
  int v22; // edx
  struct DXGRESOURCE *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  unsigned int v29; // ebx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KTHREAD *v35; // rax
  _QWORD *v36; // rax
  struct DXGALLOCATION **v37; // r15
  __int64 v38; // r14
  struct DXGRESOURCE *v39; // rbx
  _QWORD *v40; // rax
  struct _KTHREAD *v41; // r8
  int v42; // edx
  struct _EX_RUNDOWN_REF *v43; // rbx
  ULONG_PTR i; // r8
  unsigned int v45; // edx
  __int64 v46; // rax
  struct _KTHREAD *v47; // r10
  int v48; // r9d
  unsigned int v49; // ebx
  const unsigned int *v50; // rax
  __int64 v51; // rdi
  unsigned int v52; // ebx
  struct _KTHREAD *v53; // r8
  int v54; // edx
  struct DXGALLOCATION *v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  struct _KTHREAD *v65; // rax
  struct DXGALLOCATION *v66; // rax
  unsigned int *v67; // rcx
  struct _KTHREAD *v68; // r9
  int v69; // r8d
  struct DXGALLOCATION **v70; // rbx
  __int64 v71; // rsi
  struct DXGALLOCATION *v72; // rdx
  struct _EX_RUNDOWN_REF *v73; // rdi
  _QWORD *v75; // rax
  const unsigned int *v76; // rbx
  __int64 v77; // rdx
  struct DXGALLOCATION *v78; // rdi
  __int64 v79; // rax
  struct _KTHREAD *v80; // r9
  __int64 v81; // r8
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // [rsp+20h] [rbp-61h] BYREF
  struct DXGRESOURCE *v85; // [rsp+28h] [rbp-59h] BYREF
  const unsigned int *v86; // [rsp+30h] [rbp-51h] BYREF
  unsigned int *v87; // [rsp+38h] [rbp-49h] BYREF
  struct DXGALLOCATION **v88; // [rsp+40h] [rbp-41h] BYREF
  struct DXGALLOCATION *v89; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v90[8]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v91[8]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v92[8]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v93[8]; // [rsp+68h] [rbp-19h] BYREF
  DXGPUSHLOCK *v94[2]; // [rsp+70h] [rbp-11h] BYREF
  int v95; // [rsp+80h] [rbp-1h]
  char v96; // [rsp+E0h] [rbp+5Fh]
  const unsigned int *v97; // [rsp+E8h] [rbp+67h]

  v97 = a4;
  v8 = a3;
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v85, 0LL);
  v15 = 0;
  v94[1] = (DXGPUSHLOCK *)(a1 + 24);
  if ( a1 != (struct _KTHREAD **)-192LL && a1[25] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(a1 + 24, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)a1 + 52);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockExclusiveEx(a1 + 24, 0LL);
  }
  a1[25] = KeGetCurrentThread();
  v95 = 2;
  if ( !(_DWORD)v8 )
  {
    v49 = a5;
    v37 = a6;
    v96 = 0;
    v87 = 0LL;
    v38 = 0LL;
    if ( a5 )
    {
      v50 = a4;
      v88 = a6;
      v86 = a4;
      while ( 1 )
      {
        v51 = *v50;
        v52 = (*v50 >> 6) & 0xFFFFFF;
        if ( v52 < *((_DWORD *)a1 + 58)
          && (v53 = a1[27],
              v54 = *((_DWORD *)v53 + 4 * v52 + 2),
              (((unsigned int)v51 >> 26) & 0x30) == (*((_BYTE *)v53 + 16 * v52 + 8) & 0x30))
          && (v54 & 0x1000) == 0
          && (v54 & 0xF) != 0
          && (*((_BYTE *)v53 + 16 * v52 + 8) & 0xF) == 5 )
        {
          v55 = (struct DXGALLOCATION *)*((_QWORD *)v53 + 2 * v52);
        }
        else
        {
          v55 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84, v55);
        if ( !v84 )
          break;
        LOBYTE(v60) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
        if ( v60 )
        {
          if ( v52 < *((_DWORD *)a1 + 58) )
          {
            v65 = a1[27];
            v62 = 2LL * v52;
            v61 = *((_DWORD *)v65 + 4 * v52 + 2) >> 13;
            LOBYTE(v61) = (*((_DWORD *)v65 + 4 * v52 + 2) & 0x2000) != 0;
            if ( (*((_DWORD *)v65 + 4 * v52 + 2) & 0x2000) != 0 )
            {
              v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63, v64);
              v75[5] = -1073741267LL;
              goto LABEL_77;
            }
          }
        }
        v66 = (struct DXGALLOCATION *)v84;
        if ( *(struct DXGDEVICE **)(v84 + 8) != a2 )
        {
          v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63, v64);
          v75[3] = a2;
          v75[4] = v84;
          v75[5] = *(_QWORD *)(v84 + 8);
          v75[6] = -1073741811LL;
          goto LABEL_78;
        }
        if ( !v96 )
        {
          v87 = *(unsigned int **)(v84 + 40);
          v96 = 1;
        }
        v67 = *(unsigned int **)(v84 + 40);
        if ( v67 != v87 )
        {
LABEL_73:
          v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v67, v61, v63, v64);
          v75[3] = a2;
          v75[4] = -1073741811LL;
          goto LABEL_78;
        }
        if ( v67 )
        {
          v61 = v67[1];
          if ( (v61 & 1) != 0 )
            goto LABEL_73;
          if ( !DxgkTryReferenceDxgResource((struct DXGRESOURCE *)v67) )
          {
            LOBYTE(v15) = 1;
            goto LABEL_79;
          }
          *(_DWORD *)(v84 + 72) |= 0x8000u;
          v66 = (struct DXGALLOCATION *)v84;
        }
        if ( v52 < *((_DWORD *)a1 + 58) )
        {
          v68 = a1[27];
          v69 = *((_DWORD *)v68 + 4 * v52 + 2);
          if ( (((unsigned int)v51 >> 26) & 0x30) == (*((_BYTE *)v68 + 16 * v52 + 8) & 0x30)
            && (v69 & 0x1000) == 0
            && (v69 & 0xF) != 0 )
          {
            *((_DWORD *)v68 + 4 * (((unsigned int)v51 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
            v66 = (struct DXGALLOCATION *)v84;
          }
        }
        v70 = v88;
        *v88 = v66;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
        v50 = v86 + 1;
        v88 = v70 + 1;
        v49 = a5;
        v38 = (unsigned int)(v38 + 1);
        ++v86;
        if ( (unsigned int)v38 >= a5 )
          goto LABEL_67;
      }
      v75 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58, v59);
      v75[5] = -1073741811LL;
LABEL_77:
      v75[3] = a2;
      v75[4] = v51;
LABEL_78:
      WdLogEvent5_WdWarning(v75);
LABEL_79:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
      goto LABEL_80;
    }
LABEL_67:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v94);
    if ( v49 )
    {
      v71 = v49;
      do
      {
        v72 = *v37;
        v89 = 0LL;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v90, v72);
        DXGALLOCATIONREFERENCE::MoveAssign(&v89, v90);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v90);
        v73 = (struct _EX_RUNDOWN_REF *)v89;
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v91, 0LL);
        DXGALLOCATIONREFERENCE::MoveAssign(&v89, v91);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v91);
        DxgkUnreferenceDxgAllocation((struct DXGALLOCATION *)v73);
        ExWaitForRundownProtectionRelease(v73 + 11);
        ExInitializeRundownProtection(v73 + 11);
        DxgkReferenceDxgAllocation((struct DXGALLOCATION *)v73);
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v92, (struct DXGALLOCATION *)v73);
        DXGALLOCATIONREFERENCE::MoveAssign(&v89, v92);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v92);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89);
        ++v37;
        --v71;
      }
      while ( v71 );
    }
    goto LABEL_70;
  }
  v20 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v20 < *((_DWORD *)a1 + 58)
    && (v21 = a1[27],
        v22 = *((_DWORD *)v21 + 4 * v20 + 2),
        (((unsigned int)v8 >> 26) & 0x30) == (*((_BYTE *)v21 + 16 * v20 + 8) & 0x30))
    && (v22 & 0x1000) == 0
    && (v22 & 0xF) != 0
    && (*((_BYTE *)v21 + 16 * v20 + 8) & 0xF) == 4 )
  {
    v23 = (struct DXGRESOURCE *)*((_QWORD *)v21 + 2 * v20);
  }
  else
  {
    v23 = 0LL;
  }
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v93, v23);
  DXGRESOURCEREFERENCE::MoveAssign(&v85, v93);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v93);
  if ( v85 )
  {
    LOBYTE(v30) = EvaluateCurrentState((int **)&g_Feature_2082252089_58022145_FeatureDescriptorDetails);
    if ( v30 )
    {
      if ( v20 < *((_DWORD *)a1 + 58) )
      {
        v35 = a1[27];
        v32 = 2LL * v20;
        v31 = *((_DWORD *)v35 + 4 * v20 + 2) >> 13;
        LOBYTE(v31) = (*((_DWORD *)v35 + 4 * v20 + 2) & 0x2000) != 0;
        if ( (*((_DWORD *)v35 + 4 * v20 + 2) & 0x2000) != 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          v36[3] = a2;
          v36[4] = v8;
          v36[5] = -1073741267LL;
          WdLogEvent5_WdWarning(v36);
          v37 = a6;
          v38 = 0LL;
          goto LABEL_80;
        }
      }
    }
    v39 = v85;
    if ( *((struct DXGDEVICE **)v85 + 1) != a2 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
      v40[3] = a2;
      v40[4] = v39;
      v40[5] = *((_QWORD *)v39 + 1);
      v40[6] = -1073741811LL;
      WdLogEvent5_WdWarning(v40);
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v85, &v88);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v88);
      v37 = a6;
      v38 = 0LL;
LABEL_80:
      if ( v85 )
        goto LABEL_94;
      if ( (_DWORD)v38 )
      {
        v76 = v97;
        do
        {
          v77 = *v76;
          v78 = *v37;
          v79 = (*v76 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v79 < *((_DWORD *)a1 + 58) )
          {
            v80 = a1[27];
            v81 = *((unsigned int *)v80 + 4 * v79 + 2);
            if ( (((unsigned int)v77 >> 26) & 0x30) == (*((_BYTE *)v80 + 16 * v79 + 8) & 0x30) && (v81 & 0xF) != 0 )
            {
              v82 = 2LL * (((unsigned int)v77 >> 6) & 0xFFFFFF);
              if ( (*((_DWORD *)v80 + 4 * (((unsigned int)v77 >> 6) & 0xFFFFFF) + 2) & 0x1000) == 0 )
              {
                v83 = WdLogNewEntry5_WdAssertion(((unsigned int)v77 >> 26) & 0x30, v77, v81, v80);
                *(_QWORD *)(v83 + 24) = 194LL;
                WdLogEvent5_WdAssertion(v83);
              }
              *((_DWORD *)a1[27] + 2 * v82 + 2) &= ~0x1000u;
              v76 = v97;
            }
          }
          if ( (*((_DWORD *)v78 + 18) & 0x8000) != 0 )
          {
            DxgkUnreferenceDxgResource(*((struct DXGRESOURCE **)v78 + 5));
            *((_DWORD *)v78 + 18) &= ~0x8000u;
          }
          ++v76;
          ++v37;
          v97 = v76;
          --v38;
        }
        while ( v38 );
      }
      if ( !(_BYTE)v15 )
      {
LABEL_94:
        v29 = -1073741811;
        goto LABEL_71;
      }
      v15 = 255;
      goto LABEL_70;
    }
    if ( v20 < *((_DWORD *)a1 + 58) )
    {
      v41 = a1[27];
      v42 = *((_DWORD *)v41 + 4 * v20 + 2);
      if ( (((unsigned int)v8 >> 26) & 0x30) == (*((_BYTE *)v41 + 16 * v20 + 8) & 0x30)
        && (v42 & 0x1000) == 0
        && (v42 & 0xF) != 0 )
      {
        *((_DWORD *)v41 + 4 * (((unsigned int)v8 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
      }
    }
    v43 = (struct _EX_RUNDOWN_REF *)v85;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v94);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v86, 0LL);
    DXGRESOURCEREFERENCE::MoveAssign(&v85, &v86);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v86);
    DxgkUnreferenceDxgResource((struct DXGRESOURCE *)v43);
    ExWaitForRundownProtectionRelease(v43 + 9);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)&v43[10]);
    DXGAUTOPUSHLOCK::AcquireExclusive(v94);
    for ( i = v43[3].Count; i; i = *(_QWORD *)(i + 64) )
    {
      v45 = *(_DWORD *)(i + 16);
      if ( v45 )
      {
        v46 = (v45 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v46 < *((_DWORD *)a1 + 58) )
        {
          v47 = a1[27];
          v48 = *((_DWORD *)v47 + 4 * v46 + 2);
          if ( ((v45 >> 26) & 0x30) == (*((_BYTE *)v47 + 16 * v46 + 8) & 0x30)
            && (v48 & 0x1000) == 0
            && (v48 & 0xF) != 0 )
          {
            *((_DWORD *)v47 + 4 * ((v45 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
    }
    ExInitializeRundownProtection(v43 + 9);
    DxgkTryReferenceDxgResource((struct DXGRESOURCE *)v43);
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87, (struct DXGRESOURCE *)v43);
    DXGRESOURCEREFERENCE::MoveAssign(&v85, &v87);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v87);
    DXGAUTOPUSHLOCK::ReleaseExclusive((DXGAUTOPUSHLOCK *)v94);
    DXGFASTMUTEX::Release((struct _KTHREAD **)&v43[10]);
    *a7 = v85;
LABEL_70:
    v29 = v15;
    goto LABEL_71;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
  v29 = -1073741811;
  v28[3] = a2;
  v28[4] = v8;
  v28[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v28);
LABEL_71:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v94);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v85);
  return v29;
}
