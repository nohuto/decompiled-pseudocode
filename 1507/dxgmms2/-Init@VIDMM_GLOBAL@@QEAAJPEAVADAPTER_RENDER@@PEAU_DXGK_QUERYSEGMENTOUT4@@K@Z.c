/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C003B7A8
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00389F4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00040F4 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00060B4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0006100 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00061B0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003D1B4 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??0VIDMM_SEGMENT@@QEAA@XZ @ 0x1C003D428 (--0VIDMM_SEGMENT@@QEAA@XZ.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C004E080 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005EA30 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C005F078 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II@Z @ 0x1C007115C (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  char *v4; // rbx
  __int64 v5; // rsi
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  char *v15; // rcx
  char *PoolWithTag; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  bool v22; // cf
  SIZE_T v23; // rax
  char *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // ecx
  char v28; // cl
  int v29; // edx
  bool v30; // al
  unsigned int v31; // r15d
  unsigned int v32; // r11d
  struct _DXGK_QUERYSEGMENTOUT4 *v33; // r10
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rbx
  UINT *v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r8
  UINT NbSegment; // eax
  __int64 v43; // rcx
  unsigned int v44; // ecx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // eax
  SIZE_T v49; // rax
  unsigned __int64 v50; // kr00_8
  PVOID v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // ebx
  SIZE_T v55; // rax
  PVOID v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  SIZE_T v62; // rax
  PVOID v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rbx
  char *v68; // rax
  __int64 v69; // r8
  __int64 v70; // r9
  _QWORD *v71; // rsi
  unsigned int v72; // eax
  __int64 v73; // r15
  __int64 v74; // rdx
  UCHAR **p_pSegmentDescriptor; // rcx
  UCHAR *v76; // rcx
  UCHAR *v77; // r14
  VIDMM_SEGMENT *v78; // rax
  __int64 v79; // rcx
  VIDMM_SEGMENT *v80; // rbx
  __int64 v81; // rbx
  int v82; // edx
  __int64 v83; // rcx
  unsigned __int8 *v84; // rax
  int v85; // ecx
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rax
  VIDMM_SEGMENT *v91; // rax
  VIDMM_SEGMENT *v92; // rbx
  __int64 v93; // r15
  VIDMM_SEGMENT *v94; // rax
  VIDMM_SEGMENT *v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // r10
  __int64 v101; // rdx
  __int64 v102; // rax
  bool v103; // r9
  _QWORD *v104; // rdx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // r15
  unsigned __int64 v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  unsigned __int64 *v112; // r8
  char v113; // r10
  __int64 v114; // rbx
  __int64 v115; // r11
  __int64 v116; // rax
  int v117; // ecx
  _DWORD *v118; // r10
  unsigned __int64 v119; // rcx
  __int64 v120; // rsi
  unsigned __int64 *v121; // r11
  _QWORD *v122; // rbx
  unsigned __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rcx
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rcx
  int v132; // ebx
  __int64 v133; // rax
  SIZE_T v134; // rax
  _DWORD *v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  SIZE_T v141; // rax
  PVOID v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rsi
  __int64 v148; // r15
  __int64 v149; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v150; // rdx
  unsigned int *v151; // r14
  unsigned int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // r9
  __int64 v157; // rax
  __int64 v158; // rsi
  void (__fastcall ***v159)(_QWORD, __int64); // rcx
  void *v160; // rcx
  void *v161; // rcx
  void *v162; // rcx
  DXGFASTMUTEX *v163; // rcx
  struct DXGK_PHYSICALADAPTERINFO *v165; // [rsp+28h] [rbp-D8h]
  char v166; // [rsp+40h] [rbp-C0h]
  unsigned int v168; // [rsp+44h] [rbp-BCh]
  unsigned int v169; // [rsp+48h] [rbp-B8h]
  unsigned int v170; // [rsp+4Ch] [rbp-B4h]
  unsigned int v171; // [rsp+50h] [rbp-B0h]
  __int64 v172; // [rsp+58h] [rbp-A8h]
  __int64 v173; // [rsp+60h] [rbp-A0h]
  __int64 v174; // [rsp+60h] [rbp-A0h]
  UCHAR **v176; // [rsp+70h] [rbp-90h]
  __int64 v177; // [rsp+70h] [rbp-90h]
  __int64 v178; // [rsp+78h] [rbp-88h]
  __int64 v179; // [rsp+80h] [rbp-80h]
  unsigned int v180; // [rsp+88h] [rbp-78h]
  unsigned __int64 v181; // [rsp+90h] [rbp-70h]
  unsigned int *v182; // [rsp+98h] [rbp-68h]
  __int64 v183; // [rsp+98h] [rbp-68h]
  __int64 v184; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v187[12]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+150h] [rbp+50h]
  char v189[16]; // [rsp+158h] [rbp+58h] BYREF
  int v190; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  *((_QWORD *)this + 2) = a2;
  v5 = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 8) = a4;
  v8 = 0;
  *((_QWORD *)this + 3) = v5;
  v181 = 0LL;
  P = 0LL;
  `vector constructor iterator'(
    v189,
    16LL,
    1,
    (void (__fastcall *)(char *))VIDMM_BUDGET_GROUP_SIZE::VIDMM_BUDGET_GROUP_SIZE);
  v190 = 0;
  if ( a4 < 0x5009 )
    dword_1C0027328 = 0;
  v13 = *(unsigned int *)(*((_QWORD *)this + 3) + 232LL);
  v180 = v13;
  *((_DWORD *)this + 1604) = v13;
  if ( (unsigned int)v13 > 0x40 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = 64LL;
    goto LABEL_56;
  }
  if ( (unsigned int)v13 <= 1 )
  {
    PoolWithTag = (char *)this + 40840;
  }
  else
  {
    v15 = (char *)v13;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 0x108 )
    {
LABEL_12:
      _InterlockedAdd(&dword_1C0027518, 1u);
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 747LL;
LABEL_24:
      WdLogEvent5_WdLowResource(v17);
      LODWORD(v26) = -1073741801;
      goto LABEL_279;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 264 * v13, 0x6D4D6956u);
  }
  *((_QWORD *)this + 5104) = PoolWithTag;
  v15 = PoolWithTag;
  *((_DWORD *)this + 10276) = v13;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 264 * v13);
  if ( !*((_QWORD *)this + 5104) )
    goto LABEL_12;
  if ( (_DWORD)v13 )
  {
    v18 = 0LL;
    v11 = v13;
    do
    {
      v19 = (_QWORD *)(v18 + *((_QWORD *)this + 5104));
      v18 += 264LL;
      v19[1] = v19;
      *v19 = v19;
      --v11;
    }
    while ( v11 );
  }
  v20 = 456 * v13;
  v21 = v13;
  if ( !is_mul_ok(v13, 0x1C8uLL) )
    v20 = -1LL;
  v22 = __CFADD__(v20, 8LL);
  v23 = v20 + 8;
  if ( v22 )
    v23 = -1LL;
  v24 = (char *)operator new(v23, 0x30356956u, v11, (POOL_TYPE)512);
  if ( v24 )
  {
    v4 = v24 + 8;
    *(_DWORD *)v24 = v13;
    `vector constructor iterator'(
      v24 + 8,
      456LL,
      v13,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  *((_QWORD *)this + 4999) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C0027518);
    v17 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v17 + 24) = 759LL;
    goto LABEL_24;
  }
  v27 = *(_DWORD *)(v5 + 1380);
  if ( (v27 & 0x20) != 0 )
  {
    *((_BYTE *)this + 40552) ^= (((v27 & 0x40) != 0) ^ *((_BYTE *)this + 40552)) & 1;
    v28 = *((_BYTE *)this + 40552) ^ (*((_BYTE *)this + 40552) ^ (2 * (*(_BYTE *)(v5 + 1380) >> 7))) & 2;
    *((_BYTE *)this + 40552) = v28;
    if ( (v28 & 2) != 0 )
    {
      v30 = 0;
      if ( (dword_1C00270E4 & 0x20) == 0 )
      {
        v29 = *(_DWORD *)(*((_QWORD *)this + 3) + 284LL);
        if ( (v29 & 2) == 0 && (v29 & 4) == 0 )
          v30 = 1;
      }
      *((_BYTE *)this + 40552) = v28 ^ (v28 ^ (4 * v30)) & 4;
    }
    if ( a4 >= 0x5017 || (dword_1C00270E4 & 0x100) != 0 )
      *((_BYTE *)this + 40552) |= 0x40u;
  }
  v169 = 0;
  v31 = 0;
  v32 = 0;
  *((_BYTE *)this + 4616) = (~*(_BYTE *)(v5 + 1376) & 0x20) != 0;
  if ( (_DWORD)v13 )
  {
    v33 = a3;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = (UINT *)((char *)this + 372);
    while ( 1 )
    {
      v38 = *(_QWORD *)(*((_QWORD *)this + 3) + 1896LL);
      v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
      if ( v39 )
        v40 = v39 + 144LL * v32;
      else
        v40 = 0LL;
      v41 = *((_QWORD *)this + 4999);
      *(_DWORD *)(v35 + v41 + 4) = v169;
      *(_DWORD *)(v35 + v41 + 8) = v33->NbSegment;
      NbSegment = v33->NbSegment;
      if ( v33->NbSegment > 0x20 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v169, v35, v41, v40);
        *(_QWORD *)(v14 + 24) = 799LL;
        goto LABEL_56;
      }
      if ( v33->PagingBufferSegmentId > NbSegment )
      {
        v14 = WdLogNewEntry5_WdAssertion(v169, v35, v41, v40);
        *(_QWORD *)(v14 + 24) = 804LL;
        goto LABEL_56;
      }
      v43 = NbSegment + v169;
      v169 = v43;
      if ( (unsigned int)v43 >= 0xFFFE )
        break;
      *((_BYTE *)this + v34 + 52) = v33->PagingBufferSegmentId;
      *(v37 - 64) = v33->PagingBufferSize;
      *v37 = v33->PagingBufferPrivateDataSize;
      *(_BYTE *)(v35 + v41 + 420) ^= (*(_BYTE *)(v35 + v41 + 420) ^ (2 * *(_BYTE *)(v36 + v38 + 16))) & 2;
      v44 = *(_DWORD *)(v36 + v38 + 16);
      v31 = v169;
      LOBYTE(v44) = *(_BYTE *)(v35 + v41 + 420) ^ (*(_BYTE *)(v35 + v41 + 420) ^ (v44 >> 1)) & 1;
      *(_BYTE *)(v35 + v41 + 420) = v44;
      if ( (v44 & 3) != 0 )
      {
        *(_WORD *)(v35 + v41 + 12) = v169;
        ++*(_DWORD *)(v35 + v41 + 8);
        v31 = ++v169;
      }
      else
      {
        *(_WORD *)(v35 + v41 + 12) = -1;
      }
      *(_DWORD *)(v35 + v41) = (1 << *(_DWORD *)(v35 + v41 + 8)) - 1;
      if ( v40 )
        *((_BYTE *)this + 39953) &= (*(_BYTE *)(v40 + 20) & 1) == 0;
      ++v32;
      ++v34;
      ++v37;
      v36 += 48LL;
      v35 += 456LL;
      ++v33;
      if ( v32 >= (unsigned int)v13 )
      {
        v21 = v13;
        goto LABEL_51;
      }
    }
    v14 = WdLogNewEntry5_WdAssertion(v43, v35, v41, v40);
    *(_QWORD *)(v14 + 24) = 811LL;
LABEL_56:
    WdLogEvent5_WdAssertion(v14);
    LODWORD(v26) = -1073741811;
    goto LABEL_279;
  }
LABEL_51:
  if ( dword_1C0027298 == 2 )
    *((_BYTE *)this + 7064) = (*(_BYTE *)(*((_QWORD *)this + 3) + 1364LL) & 4) != 0;
  else
    *((_BYTE *)this + 7064) = dword_1C0027298 == 1;
  *((_QWORD *)this + 807) = qword_1C0027100;
  if ( dword_1C0027224 )
  {
    v45 = operator new(0x28uLL, 0x30346956u, (POOL_TYPE)512);
    if ( v45 )
    {
      *v45 = 0LL;
      v45[1] = 0LL;
      *((_DWORD *)v45 + 6) = 0;
      *((_DWORD *)v45 + 7) = 27;
      *((_DWORD *)v45 + 8) = 32;
      v45[2] = 0LL;
    }
    else
    {
      v45 = 0LL;
    }
    *((_QWORD *)this + 887) = v45;
    if ( v45 )
    {
      v48 = dword_1C0027224;
    }
    else
    {
      _InterlockedAdd(&dword_1C00275C8, 1u);
      v47 = WdLogNewEntry5_WdLowResource(v46);
      *(_QWORD *)(v47 + 24) = 890LL;
      WdLogEvent5_WdLowResource(v47);
      v48 = 0;
      dword_1C0027224 = 0;
    }
    if ( v48 )
    {
      v50 = v48;
      v49 = 8LL * v48;
      if ( !is_mul_ok(v50, 8uLL) )
        v49 = -1LL;
      v51 = operator new(v49, 0x39336956u, PagedPool);
      *((_QWORD *)this + 889) = v51;
      if ( !v51 )
      {
        _InterlockedAdd(&dword_1C00275C4, 1u);
        v53 = WdLogNewEntry5_WdLowResource(v52);
        *(_QWORD *)(v53 + 24) = 900LL;
        WdLogEvent5_WdLowResource(v53);
        dword_1C0027224 = 0;
      }
    }
  }
  *((_QWORD *)this + 5156) = qword_1C0027388;
  v54 = dword_1C0027250;
  if ( dword_1C0027250 )
  {
    v55 = 360LL * (unsigned int)dword_1C0027250;
    if ( !is_mul_ok((unsigned int)dword_1C0027250, 0x168uLL) )
      v55 = -1LL;
    v56 = operator new[](v55, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)this + 972) = v56;
    if ( v56 )
    {
      *((_DWORD *)this + 1942) = v54;
      *((_QWORD *)this + 973) = 0LL;
    }
  }
  *((_QWORD *)this + 803) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v26) = ZwOpenSection((PHANDLE)this + 804, 0xF001Fu, &ObjectAttributes);
  if ( (int)v26 < 0 )
  {
    v61 = WdLogNewEntry5_WdAssertion(v58, v57, v59, v60);
    *(_QWORD *)(v61 + 24) = 938LL;
    WdLogEvent5_WdAssertion(v61);
    goto LABEL_272;
  }
  v62 = 8LL * v31;
  v184 = v31;
  if ( !is_mul_ok(v31, 8uLL) )
    v62 = -1LL;
  v63 = operator new[](v62, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)this + 464) = v63;
  if ( !v63 )
  {
    _InterlockedIncrement(&dword_1C0027550);
    v65 = WdLogNewEntry5_WdLowResource(v64);
    *(_QWORD *)(v65 + 24) = 950LL;
LABEL_271:
    WdLogEvent5_WdLowResource(v65);
    LODWORD(v26) = -1073741801;
    goto LABEL_272;
  }
  v66 = 1LL;
  v166 = 0;
  v67 = 0LL;
  v173 = 0LL;
  if ( (unsigned int)v13 <= 1 )
  {
    v68 = v189;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 0x10 )
    {
LABEL_270:
      _InterlockedAdd(&dword_1C0027550, 1u);
      v65 = WdLogNewEntry5_WdLowResource(v66);
      *(_QWORD *)(v65 + 24) = 965LL;
      goto LABEL_271;
    }
    v68 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v21, 0x4B677844u);
  }
  P = v68;
  v190 = v13;
  if ( !v68 )
    goto LABEL_270;
  memset(v68, 0, 16 * v21);
  v71 = P;
  if ( !P )
    goto LABEL_270;
  v72 = 0;
  v171 = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_157:
    v99 = v67 + qword_1C00270F8;
    *((_BYTE *)this + 39952) = (unsigned __int64)(v67 + qword_1C00270F8) < *(_QWORD *)(*((_QWORD *)this + 3) + 1920LL);
    if ( a4 < 0x5013 )
    {
      v100 = v31;
      if ( !*v71 && v31 )
      {
        v101 = 0LL;
        v70 = v31;
        do
        {
          v69 = *(_QWORD *)(v101 + *((_QWORD *)this + 464));
          if ( (*(_DWORD *)(v69 + 56) & 0x1041) == 0 )
          {
            v99 = 2LL * *(unsigned int *)(v69 + 372);
            v71[2 * *(unsigned int *)(v69 + 372)] += *(_QWORD *)(v69 + 40);
            v71 = P;
          }
          v101 += 8LL;
          --v70;
        }
        while ( v70 );
      }
      if ( (_DWORD)v13 )
      {
        v102 = 0LL;
        do
        {
          if ( v71[v102] <= 0x20000000uLL )
          {
            v71[v102] = 0LL;
            v71 = P;
          }
          v102 += 2LL;
          --v21;
        }
        while ( v21 );
      }
      v103 = *v71 == 0LL;
      if ( v31 )
      {
        v69 = 0LL;
        while ( 1 )
        {
          v99 = *(_QWORD *)(v69 + *((_QWORD *)this + 464));
          v104 = &v71[2 * *(unsigned int *)(v99 + 372)];
          if ( (*(_DWORD *)(v99 + 56) & 0x1041) != 0 )
            break;
          if ( !v103 )
          {
            *(_DWORD *)(v99 + 432) = 0;
            *(_DWORD *)(v99 + 56) |= 0x80000u;
LABEL_185:
            v71 = P;
          }
          v69 += 8LL;
          if ( !--v100 )
            goto LABEL_187;
        }
        if ( v103 )
        {
          *(_DWORD *)(v99 + 432) = 0;
          *(_DWORD *)(v99 + 56) |= 0x80000u;
          v99 = *(_QWORD *)(v69 + *((_QWORD *)this + 464));
          *v104 += *(_QWORD *)(v99 + 40);
        }
        else
        {
          *(_DWORD *)(v99 + 56) |= 0x100000u;
          *(_DWORD *)(v99 + 432) = 1;
          v99 = *(_QWORD *)(v69 + *((_QWORD *)this + 464));
          v104[1] += *(_QWORD *)(v99 + 40);
        }
        goto LABEL_185;
      }
    }
LABEL_187:
    v107 = qword_1C00272F0;
    v108 = *((_QWORD *)this + 807);
    v183 = qword_1C00272F0;
    if ( qword_1C00272F0 && v108 >= qword_1C00272F0 )
      v108 = qword_1C00272F0;
    v168 = 0;
    if ( (_DWORD)v13 )
    {
      v109 = 0LL;
      v110 = 0LL;
      v174 = 0LL;
      v177 = 0LL;
      while ( 1 )
      {
        v111 = *((_QWORD *)this + 5104) + v109;
        v112 = (_QWORD *)((char *)v71 + v110);
        LOBYTE(v70) = 0;
        v113 = 0;
        if ( v169 )
        {
          v114 = v184;
          v115 = 0LL;
          do
          {
            v116 = *(_QWORD *)(v115 + *((_QWORD *)this + 464));
            v117 = *(_DWORD *)(v116 + 56);
            if ( (v117 & 0x80000) != 0 )
            {
              if ( (v117 & 4) == 0 )
                *(_BYTE *)(v111 + 258) = 1;
              v117 = *(_DWORD *)(v116 + 56);
              v70 = (unsigned __int8)v70;
              if ( (v117 & 0x1001) == 0 )
                v70 = 1LL;
            }
            v99 = v117 & 0x1001;
            if ( (_DWORD)v99 )
              v113 = 1;
            v115 += 8LL;
            --v114;
          }
          while ( v114 );
        }
        if ( !*v112 )
          break;
        if ( (_BYTE)v70 && v113 )
          *(_BYTE *)(v111 + 259) = 1;
        if ( v112[1] )
        {
          if ( v107 )
          {
            v119 = v107;
            if ( *v112 < v107 )
              v119 = *v112;
            *v112 = v119;
          }
          v118 = (_DWORD *)(v111 + 224);
          v112[1] = *((_QWORD *)this + 807);
          *(_DWORD *)(v111 + 224) = dword_1C0027344;
          *(_DWORD *)(v111 + 228) = dword_1C0027348;
        }
        else
        {
          *v112 = v108;
          v118 = (_DWORD *)(v111 + 224);
          *(_DWORD *)(v111 + 224) = dword_1C0027348;
        }
        v120 = 2LL;
        v121 = (unsigned __int64 *)(v111 + 48);
        v122 = (_QWORD *)(v111 + 80);
        v70 = v111 + 48;
        v69 = (__int64)v112 - v111;
        do
        {
          v123 = *(_QWORD *)(v69 + v70 - 48) * (unsigned __int64)(unsigned int)(100 - *v118) / 0x64;
          *(_QWORD *)(v70 - 32) = v123;
          *(_QWORD *)(v70 - 16) = v123;
          v124 = 3LL;
          *(_QWORD *)v70 = *(_QWORD *)(v69 + v70 - 48)
                         * (unsigned __int64)(unsigned int)(100 - *v118 - dword_1C002734C)
                         / 0x64;
          do
          {
            v125 = 3LL;
            do
            {
              *v122++ = *(_QWORD *)v70;
              --v125;
            }
            while ( v125 );
            --v124;
          }
          while ( v124 );
          ++v118;
          *(_QWORD *)(v70 + 16) = *(_QWORD *)(v70 - 32) >> 1;
          v70 += 8LL;
          --v120;
        }
        while ( v120 );
        v107 = v183;
        LODWORD(v13) = v180;
        if ( (*((_BYTE *)this + 40552) & 1) != 0 )
        {
          v126 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
          if ( v126 )
            v127 = v126 + 144LL * v168;
          else
            v127 = 0LL;
          v128 = 1LL << *(_DWORD *)(v127 + 8);
          v69 = 2LL;
          do
          {
            v129 = v128;
            if ( *(v121 - 2) < v128 )
              v129 = *(v121 - 2);
            v22 = *v121 < v128;
            *(v121 - 2) = v129;
            v130 = v128;
            if ( v22 )
              v130 = *v121;
            v22 = v121[2] < v128;
            *v121 = v130;
            v131 = v128;
            if ( v22 )
              v131 = v121[2];
            v121[2] = v131;
            ++v121;
            --v69;
          }
          while ( v69 );
        }
        v99 = v168 + 1;
        v110 = v177 + 16;
        v109 = v174 + 264;
        v168 = v99;
        v177 += 16LL;
        v174 += 264LL;
        if ( (unsigned int)v99 >= v180 )
          goto LABEL_234;
        v71 = P;
      }
      v96 = WdLogNewEntry5_WdAssertion(v99, v111, v112, v70);
      *(_QWORD *)(v96 + 24) = 1404LL;
LABEL_141:
      WdLogEvent5_WdAssertion(v96);
      LODWORD(v26) = -1073741811;
      goto LABEL_263;
    }
LABEL_234:
    *((_DWORD *)this + 926) = v169;
    if ( (*((_BYTE *)this + 40552) & 1) != 0 )
    {
      if ( dword_1C00272E4 )
      {
        v132 = dword_1C00272E4;
        v133 = 24LL * (unsigned int)dword_1C00272E4;
        if ( !is_mul_ok((unsigned int)dword_1C00272E4, 0x18uLL) )
          v133 = -1LL;
        v22 = __CFADD__(v133, 8LL);
        v134 = v133 + 8;
        if ( v22 )
          v134 = -1LL;
        v135 = operator new(v134, 0x32356956u, v69, PagedPool);
        if ( v135 )
        {
          *v135 = v132;
          v135 += 2;
        }
        *((_QWORD *)this + 5075) = v135;
        if ( !v135 )
        {
          v140 = WdLogNewEntry5_WdAssertion(v137, v136, v138, v139);
          *(_QWORD *)(v140 + 24) = 1515LL;
LABEL_244:
          WdLogEvent5_WdAssertion(v140);
          LODWORD(v26) = -1073741801;
          goto LABEL_263;
        }
        v141 = 48LL * (unsigned int)dword_1C00272E8;
        if ( !is_mul_ok((unsigned int)dword_1C00272E8, 0x30uLL) )
          v141 = -1LL;
        v142 = operator new(v141, 0x32356956u, v138, PagedPool);
        *((_QWORD *)this + 5079) = v142;
        if ( !v142 )
        {
          v140 = WdLogNewEntry5_WdAssertion(v144, v143, v145, v146);
          *(_QWORD *)(v140 + 24) = 1522LL;
          goto LABEL_244;
        }
      }
      *((_DWORD *)this + 10137) = 0;
      v147 = 0LL;
      *((_BYTE *)this + 40552) &= ~0x20u;
      if ( (_DWORD)v13 )
      {
        v148 = 0LL;
        do
        {
          v149 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
          v150 = v149 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v149 + 144 * v147) : 0LL;
          v151 = (unsigned int *)(v148 + *((_QWORD *)this + 4999));
          LODWORD(v26) = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                           (VIDMM_PHYSICAL_ADAPTER *)v151,
                           this,
                           v147,
                           (struct VIDMM_SEGMENT *const *)(*((_QWORD *)this + 464) + 8LL * v151[1]),
                           v150,
                           v165,
                           a3->NbSegment);
          if ( (int)v26 < 0 )
            goto LABEL_279;
          v152 = v151[13];
          if ( v152 > *((_DWORD *)this + 10137) )
            *((_DWORD *)this + 10137) = v152;
          if ( v151[103] == 1 )
            *((_BYTE *)this + 40552) |= 0x20u;
          ++a3;
          v147 = (unsigned int)(v147 + 1);
          v148 += 456LL;
        }
        while ( (unsigned int)v147 < (unsigned int)v13 );
      }
      LODWORD(v26) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)this + 40000), this);
      if ( (int)v26 < 0 )
        goto LABEL_263;
    }
    LODWORD(v26) = VIDMM_GLOBAL::CreateWorkerThread(this);
    if ( (int)v26 < 0 )
    {
      v157 = WdLogNewEntry5_WdAssertion(v154, v153, v155, v156);
      *(_QWORD *)(v157 + 24) = 1573LL;
      WdLogEvent5_WdAssertion(v157);
      goto LABEL_263;
    }
    *((_QWORD *)this + 882) = v181;
    *((_BYTE *)this + 7065) = v181 >= qword_1C00270F0;
    *((_QWORD *)this + 976) = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)this + 977) = MEMORY[0xFFFFF78000000014];
    goto LABEL_279;
  }
  v73 = 0LL;
  v74 = 0LL;
  p_pSegmentDescriptor = &a3->pSegmentDescriptor;
  v172 = 0LL;
  v176 = &a3->pSegmentDescriptor;
  v178 = 0LL;
  while ( 1 )
  {
    v69 = *((_QWORD *)this + 4999);
    v170 = 0;
    v76 = *p_pSegmentDescriptor;
    v179 = v69;
    if ( *(_DWORD *)(v74 + v69 + 8) )
      break;
LABEL_155:
    ++v72;
    p_pSegmentDescriptor = v176 + 5;
    v171 = v72;
    v74 += 456LL;
    v176 += 5;
    v73 += 16LL;
    v178 = v74;
    v172 = v73;
    if ( v72 >= (unsigned int)v13 )
    {
      v67 = v173;
      v21 = v13;
      v31 = v169;
      goto LABEL_157;
    }
  }
  while ( 1 )
  {
    v77 = v76;
    v182 = (unsigned int *)(v76 + 96);
    if ( (*(_BYTE *)(v74 + v69 + 420) & 3) != 0 && v8 == *(unsigned __int16 *)(v74 + v69 + 12) )
    {
      v78 = (VIDMM_SEGMENT *)operator new(0x1B8uLL, 0x36306956u, (POOL_TYPE)512);
      v80 = v78;
      if ( v78 )
      {
        VIDMM_SEGMENT::VIDMM_SEGMENT(v78);
        *(_QWORD *)v80 = &VIDMM_SYSMEM_SEGMENT::`vftable';
      }
      else
      {
        v80 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v8) = v80;
      v81 = *((_QWORD *)this + 464);
      if ( !*(_QWORD *)(v81 + 8LL * v8) )
        goto LABEL_176;
      memset(v187, 0, sizeof(v187));
      v82 = LODWORD(v187[0]) | 0x1180;
      LODWORD(v187[0]) |= 0x1180u;
      if ( (*(_BYTE *)(v178 + v179 + 420) & 1) != 0 )
      {
        v83 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
        if ( v83 )
          v84 = (unsigned __int8 *)(v83 + 144LL * v171);
        else
          v84 = 0LL;
        v85 = (*v84 >> 4) & 1;
      }
      else
      {
        LOBYTE(v85) = 1;
      }
      v165 = (struct DXGK_PHYSICALADAPTERINFO *)v187;
      LODWORD(v187[0]) = v82 & 0xFFFFFBEF | (16 * (v85 & 1 | ((v166 & 1) << 6))) | 4;
      v187[2] = qword_1C00270F8;
      v86 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, _QWORD, _QWORD, unsigned int))(**(_QWORD **)(v81 + 8LL * v8)
                                                                                            + 8LL))(
              *(_QWORD *)(v81 + 8LL * v8),
              this,
              0LL,
              v8,
              v170);
      v26 = v86;
      if ( v86 < 0 )
      {
        _InterlockedAdd(&dword_1C002757C, 1u);
        v105 = WdLogNewEntry5_WdLowResource(v87);
        *(_QWORD *)(v105 + 24) = v26;
        goto LABEL_175;
      }
      if ( a4 >= 0x5013 )
      {
        v88 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v8);
        if ( *(_QWORD *)((char *)v71 + v73 + 8) )
        {
          *(_DWORD *)(v88 + 56) |= 0x100000u;
          *(_DWORD *)(v88 + 432) = 1;
          *(_QWORD *)((char *)v71 + v73 + 8) += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v170) + 40LL);
        }
        else
        {
          *(_DWORD *)(v88 + 432) = 0;
          *(_DWORD *)(v88 + 56) |= 0x80000u;
          *(_QWORD *)((char *)v71 + v73) += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v170) + 40LL);
        }
      }
      v72 = v171;
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v8) + 372LL) = v171;
      goto LABEL_153;
    }
    v89 = *(unsigned int *)v76;
    if ( (v89 & 0xFFE00000) != 0
      || (v89 & 2) != 0
      || (v89 & 0x80u) == 0LL && (v89 & 0x300) != 0
      || (v89 & 0x300) == 0x300
      || (v89 & 0x2000) != 0 && (v89 & 5) != 0 )
    {
LABEL_140:
      v96 = WdLogNewEntry5_WdAssertion(v89, v74, v69, v70);
      *(_QWORD *)(v96 + 24) = v8;
      goto LABEL_141;
    }
    if ( (*((_DWORD *)v77 + 4) & 0xFFFLL) != 0 )
    {
      v90 = WdLogNewEntry5_WdWarning(v89, v74, v69);
      *(_QWORD *)(v90 + 24) = 4096LL;
      WdLogEvent5_WdWarning(v90);
      v74 = v178;
      v69 = v179;
      *((_QWORD *)v77 + 2) -= *((_QWORD *)v77 + 2) & 0xFFFLL;
    }
    if ( (*(_DWORD *)v77 & 0x400) != 0 )
      v181 += *((_QWORD *)v77 + 2);
    if ( (*(_DWORD *)v77 & 1) == 0 )
      break;
    v91 = (VIDMM_SEGMENT *)operator new(0x1D8uLL, 0x36306956u, (POOL_TYPE)512);
    v92 = v91;
    if ( v91 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v91);
      *(_QWORD *)v92 = &VIDMM_APERTURE_SEGMENT::`vftable';
      *((_QWORD *)v92 + 55) = 0LL;
      *((_QWORD *)v92 + 56) = 0LL;
      *((_QWORD *)v92 + 58) = 0LL;
      *((_QWORD *)v92 + 57) = 0LL;
    }
    else
    {
      v92 = 0LL;
    }
    v93 = 8LL * v8;
    *(_QWORD *)(v93 + *((_QWORD *)this + 464)) = v92;
    v79 = *(_QWORD *)(v93 + *((_QWORD *)this + 464));
    if ( !v79 )
    {
LABEL_176:
      _InterlockedAdd(&dword_1C0027578, 1u);
      goto LABEL_177;
    }
    v165 = (struct DXGK_PHYSICALADAPTERINFO *)v77;
    LODWORD(v26) = (*(__int64 (__fastcall **)(__int64, VIDMM_GLOBAL *, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, unsigned int))(*(_QWORD *)v79 + 8LL))(
                     v79,
                     this,
                     NotifyAllocationReclaimed,
                     v8,
                     v170);
    if ( (int)v26 < 0 )
    {
      _InterlockedAdd(&dword_1C002757C, 1u);
LABEL_179:
      v105 = WdLogNewEntry5_WdLowResource(v89);
      *(_QWORD *)(v105 + 24) = v8;
LABEL_175:
      WdLogEvent5_WdLowResource(v105);
      goto LABEL_263;
    }
    v89 = *(_QWORD *)(v93 + *((_QWORD *)this + 464));
    if ( (*(_DWORD *)(v89 + 56) & 0x10) != 0 )
      *((_DWORD *)this + 1617) = 1;
    v74 = *(unsigned int *)v77;
    if ( (v74 & 0x400) != 0 )
      v166 = 1;
LABEL_138:
    v70 = 0x80000LL;
    if ( (v74 & 0x80000) != 0 )
    {
      if ( a4 < 0x5013 )
        goto LABEL_140;
    }
    else
    {
      v69 = 0x100000LL;
      if ( (v74 & 0x100000) != 0 )
      {
        if ( a4 < 0x5013 )
          goto LABEL_140;
        *(_QWORD *)((char *)v71 + v172 + 8) += *((_QWORD *)v77 + 2);
        v97 = *(_QWORD *)(v93 + *((_QWORD *)this + 464));
        *(_DWORD *)(v97 + 56) |= 0x100000u;
        *(_DWORD *)(v97 + 432) = 1;
        goto LABEL_149;
      }
      if ( (v74 & 0x8000) == 0 )
        goto LABEL_149;
      if ( a4 >= 0x5013 )
        goto LABEL_140;
      if ( (v74 & 0x41) != 0 )
        goto LABEL_149;
    }
    *(_QWORD *)((char *)v71 + v172) += *((_QWORD *)v77 + 2);
    v98 = *(_QWORD *)(v93 + *((_QWORD *)this + 464));
    *(_DWORD *)(v98 + 432) = 0;
    *(_DWORD *)(v98 + 56) |= 0x80000u;
LABEL_149:
    v72 = v171;
    *(_DWORD *)(*(_QWORD *)(v93 + *((_QWORD *)this + 464)) + 372LL) = v171;
    if ( (v77[2] & 1) != 0 )
    {
      LODWORD(v26) = VIDMM_SEGMENT::SetVprRange(
                       *(VIDMM_SEGMENT **)(v93 + *((_QWORD *)this + 464)),
                       *((_QWORD *)v77 + 8),
                       *((_QWORD *)v77 + 9),
                       *((_DWORD *)v77 + 20),
                       *((_DWORD *)v77 + 21));
      if ( (int)v26 < 0 )
        goto LABEL_263;
      v72 = v171;
    }
    v73 = v172;
LABEL_153:
    v74 = v178;
    v69 = v179;
    ++v8;
    ++v170;
    v76 = (UCHAR *)v182;
    if ( v170 >= *(_DWORD *)(v178 + v179 + 8) )
    {
      v71 = P;
      goto LABEL_155;
    }
  }
  *(_BYTE *)(v74 + v69 + 420) |= 8u;
  v94 = (VIDMM_SEGMENT *)operator new(0x1C0uLL, 0x36306956u, (POOL_TYPE)512);
  v95 = v94;
  if ( v94 )
  {
    VIDMM_SEGMENT::VIDMM_SEGMENT(v94);
    *((_QWORD *)v95 + 55) = 0LL;
    *(_QWORD *)v95 = &VIDMM_MEMORY_SEGMENT::`vftable';
  }
  else
  {
    v95 = 0LL;
  }
  v93 = 8LL * v8;
  *(_QWORD *)(v93 + *((_QWORD *)this + 464)) = v95;
  if ( *(_QWORD *)(v93 + *((_QWORD *)this + 464)) )
  {
    if ( (*(_DWORD *)v77 & 0x800) != 0 )
      *(_BYTE *)(v178 + v179 + 421) |= 2u;
    v165 = (struct DXGK_PHYSICALADAPTERINFO *)v77;
    LODWORD(v26) = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, unsigned int))(**(_QWORD **)(v93 + *((_QWORD *)this + 464)) + 8LL))(
                     *(_QWORD *)(v93 + *((_QWORD *)this + 464)),
                     this,
                     NotifyAllocationReclaimed,
                     v8,
                     v170);
    if ( (int)v26 < 0 )
    {
      _InterlockedAdd(&dword_1C0027558, 1u);
      goto LABEL_179;
    }
    v74 = *(unsigned int *)v77;
    if ( (v74 & 0x40) == 0 )
    {
      v89 = *(_QWORD *)(v93 + *((_QWORD *)this + 464));
      v173 += *(_QWORD *)(v89 + 40);
    }
    goto LABEL_138;
  }
  _InterlockedAdd(&dword_1C0027554, 1u);
LABEL_177:
  v106 = WdLogNewEntry5_WdLowResource(v79);
  *(_QWORD *)(v106 + 24) = v8;
  WdLogEvent5_WdLowResource(v106);
  LODWORD(v26) = -1073741801;
LABEL_263:
  if ( v8 )
  {
    v158 = 8LL * v8;
    do
    {
      v158 -= 8LL;
      --v8;
      v159 = *(void (__fastcall ****)(_QWORD, __int64))(v158 + *((_QWORD *)this + 464));
      if ( v159 )
        (**v159)(v159, 1LL);
    }
    while ( v8 );
  }
LABEL_272:
  v160 = (void *)*((_QWORD *)this + 464);
  if ( v160 )
  {
    operator delete(v160);
    *((_QWORD *)this + 464) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)this + 40000));
  v161 = (void *)*((_QWORD *)this + 804);
  if ( v161 )
  {
    ZwClose(v161);
    *((_QWORD *)this + 804) = 0LL;
  }
  operator delete(*((void **)this + 803));
  v162 = (void *)*((_QWORD *)this + 889);
  *((_QWORD *)this + 803) = 0LL;
  operator delete(v162);
  v163 = (DXGFASTMUTEX *)*((_QWORD *)this + 887);
  *((_QWORD *)this + 889) = 0LL;
  if ( v163 )
    DXGFASTMUTEX::`scalar deleting destructor'(v163);
  *((_QWORD *)this + 887) = 0LL;
LABEL_279:
  if ( P != v189 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v26;
}
