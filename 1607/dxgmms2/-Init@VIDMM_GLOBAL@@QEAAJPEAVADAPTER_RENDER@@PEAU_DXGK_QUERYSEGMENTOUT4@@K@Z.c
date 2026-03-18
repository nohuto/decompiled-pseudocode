/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C006C9D4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000F590 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C006AF58 (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ??0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C006F7CC (--0VIDMM_SEGMENT@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006FE94 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z @ 0x1C0071ECC (-Init@VIDMM_WORKER_THREAD@@QEAAJPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0093354 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C009A2E0 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  char *v4; // rbx
  __int64 v5; // rsi
  VIDMM_GLOBAL *v7; // rdi
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  PVOID PoolWithTag; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  bool v19; // cf
  SIZE_T v20; // rax
  char *v21; // rax
  __int64 v22; // rcx
  int v23; // ecx
  char v24; // cl
  unsigned int v25; // r13d
  unsigned int v26; // r11d
  struct _DXGK_QUERYSEGMENTOUT4 *v27; // r10
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rbx
  UINT *v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // r8
  UINT NbSegment; // eax
  char v37; // cl
  int v38; // ebx
  SIZE_T v39; // rax
  PVOID v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  SIZE_T v44; // rax
  PVOID v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rbx
  char *v49; // rax
  __int64 p_pSegmentDescriptor; // r8
  _QWORD *v51; // rsi
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  unsigned int *v56; // r8
  unsigned int *v57; // r14
  __int64 v58; // rcx
  __int64 v59; // rax
  VIDMM_SEGMENT *v60; // rax
  __int64 v61; // rcx
  VIDMM_SEGMENT *v62; // rbx
  __int64 v63; // rbx
  int v64; // edx
  __int64 v65; // rcx
  unsigned __int8 *v66; // rax
  VIDMM_SEGMENT *v67; // rax
  VIDMM_SEGMENT *v68; // rbx
  __int64 v69; // r15
  __int64 v70; // rcx
  unsigned __int64 v71; // r13
  unsigned __int64 v72; // r14
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int64 *v75; // r8
  __int64 v76; // rdx
  char v77; // r9
  __int64 v78; // rbx
  __int64 v79; // r10
  __int64 v80; // r11
  int v81; // eax
  _DWORD *v82; // r11
  __int64 v83; // r15
  unsigned __int64 *v84; // r10
  unsigned __int64 *v85; // rsi
  unsigned __int64 *v86; // rbx
  unsigned __int64 *v87; // r9
  unsigned __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // r11
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // r9
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rcx
  unsigned __int64 v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rax
  SIZE_T v102; // rax
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  SIZE_T v107; // rax
  PVOID v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rsi
  __int64 v112; // r15
  __int64 v113; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v114; // rdx
  unsigned int *v115; // r14
  unsigned int v116; // eax
  int v117; // eax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rcx
  _QWORD *v121; // rax
  int v123; // edx
  bool v124; // al
  int v125; // ecx
  int v126; // eax
  __int64 v127; // rcx
  __int64 v128; // rcx
  bool v129; // al
  VIDMM_SEGMENT *v130; // rax
  VIDMM_SEGMENT *v131; // rbx
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // r10
  __int64 v142; // rdx
  __int64 v143; // r9
  __int64 v144; // rax
  bool v145; // r9
  _DWORD *v146; // rcx
  _QWORD *v147; // rdx
  unsigned __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rsi
  void (__fastcall ***v152)(_QWORD, __int64); // rcx
  void *v153; // rcx
  void *v154; // rcx
  struct DXGK_PHYSICALADAPTERINFO *v155; // [rsp+28h] [rbp-D8h]
  char v156; // [rsp+40h] [rbp-C0h]
  unsigned int v157; // [rsp+44h] [rbp-BCh]
  unsigned int v158; // [rsp+44h] [rbp-BCh]
  unsigned int v160; // [rsp+4Ch] [rbp-B4h]
  unsigned int v161; // [rsp+50h] [rbp-B0h]
  unsigned int v162; // [rsp+54h] [rbp-ACh]
  __int64 v163; // [rsp+58h] [rbp-A8h]
  __int64 v164; // [rsp+58h] [rbp-A8h]
  __int64 v165; // [rsp+60h] [rbp-A0h]
  __int64 v166; // [rsp+68h] [rbp-98h]
  __int64 v167; // [rsp+68h] [rbp-98h]
  UCHAR **v169; // [rsp+78h] [rbp-88h]
  __int64 v170; // [rsp+78h] [rbp-88h]
  unsigned __int64 v171; // [rsp+80h] [rbp-80h]
  unsigned int *v172; // [rsp+88h] [rbp-78h]
  __int64 v173; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v177[14]; // [rsp+E0h] [rbp-20h] BYREF
  PVOID P; // [rsp+150h] [rbp+50h]
  char v179[16]; // [rsp+158h] [rbp+58h] BYREF
  int v180; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  *((_QWORD *)this + 2) = a2;
  v5 = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 8) = a4;
  v7 = this;
  v8 = 0;
  *((_QWORD *)this + 3) = v5;
  v171 = 0LL;
  P = 0LL;
  `vector constructor iterator'(
    v179,
    16LL,
    1LL,
    (void (__fastcall *)(char *))VIDMM_BUDGET_GROUP_SIZE::VIDMM_BUDGET_GROUP_SIZE);
  v180 = 0;
  if ( a4 < 0x5009 )
    dword_1C0035360 = 0;
  if ( a4 >= 0x6000 )
    *((_BYTE *)v7 + 40873) |= 2u;
  v12 = *(unsigned int *)(*((_QWORD *)v7 + 3) + 248LL);
  v162 = v12;
  *((_DWORD *)v7 + 1604) = v12;
  if ( (unsigned int)v12 > 0x40 )
  {
    v133 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v133 + 24) = 64LL;
    goto LABEL_220;
  }
  if ( (unsigned int)v12 > 1 )
  {
    v14 = v12;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v12 < 0x108 )
    {
LABEL_210:
      _InterlockedAdd(&dword_1C00355A8, 1u);
      v134 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v134 + 24) = 789LL;
LABEL_212:
      WdLogEvent5_WdLowResource(v134);
      LODWORD(v43) = -1073741801;
      goto LABEL_172;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 264 * v12, 0x6D4D6956u);
  }
  else
  {
    PoolWithTag = (char *)v7 + 41208;
  }
  *((_QWORD *)v7 + 5150) = PoolWithTag;
  v14 = (unsigned __int64)PoolWithTag;
  *((_DWORD *)v7 + 10368) = v12;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 264 * v12);
  if ( !*((_QWORD *)v7 + 5150) )
    goto LABEL_210;
  if ( (_DWORD)v12 )
  {
    v15 = 0LL;
    v11 = v12;
    do
    {
      v16 = (_QWORD *)(v15 + *((_QWORD *)v7 + 5150));
      v15 += 264LL;
      v16[1] = v16;
      *v16 = v16;
      --v11;
    }
    while ( v11 );
  }
  v17 = 456 * v12;
  v18 = v12;
  if ( !is_mul_ok(v12, 0x1C8uLL) )
    v17 = -1LL;
  v19 = __CFADD__(v17, 8LL);
  v20 = v17 + 8;
  if ( v19 )
    v20 = -1LL;
  v21 = (char *)operator new(v20, 0x30356956u, v11, (POOL_TYPE)512);
  if ( v21 )
  {
    v4 = v21 + 8;
    *(_QWORD *)v21 = v12;
    `vector constructor iterator'(
      v21 + 8,
      456LL,
      v12,
      (void (__fastcall *)(char *))VIDMM_PHYSICAL_ADAPTER::VIDMM_PHYSICAL_ADAPTER);
  }
  *((_QWORD *)v7 + 5017) = v4;
  if ( !v4 )
  {
    _InterlockedAdd(&dword_1C00355A8, 1u);
    v134 = WdLogNewEntry5_WdLowResource(v22);
    *(_QWORD *)(v134 + 24) = 801LL;
    goto LABEL_212;
  }
  v23 = *(_DWORD *)(v5 + 1524);
  if ( (v23 & 0x20) != 0 )
  {
    *((_BYTE *)v7 + 40872) ^= (((v23 & 0x40) != 0) ^ *((_BYTE *)v7 + 40872)) & 1;
    v24 = *((_BYTE *)v7 + 40872) ^ (*((_BYTE *)v7 + 40872) ^ (2 * (*(_BYTE *)(v5 + 1524) >> 7))) & 2;
    *((_BYTE *)v7 + 40872) = v24;
    if ( (v24 & 2) != 0 )
    {
      v124 = 0;
      if ( (VIDMM_GLOBAL::_Config & 0x20) == 0 )
      {
        v123 = *(_DWORD *)(*((_QWORD *)v7 + 3) + 300LL);
        if ( (v123 & 4) == 0 && (v123 & 8) == 0 )
          v124 = 1;
      }
      *((_BYTE *)v7 + 40872) = v24 ^ (v24 ^ (4 * v124)) & 4;
    }
    if ( a4 >= 0x5017 || (VIDMM_GLOBAL::_Config & 0x100) != 0 )
      *((_BYTE *)v7 + 40872) |= 0x40u;
  }
  v161 = 0;
  v25 = 0;
  v26 = 0;
  *((_BYTE *)v7 + 4616) = (~*(_BYTE *)(v5 + 1520) & 0x20) != 0;
  if ( (_DWORD)v12 )
  {
    v27 = a3;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = (UINT *)((char *)v7 + 372);
    while ( 1 )
    {
      v32 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 2040LL);
      v33 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 832LL);
      if ( v33 )
        v34 = v33 + 144LL * v26;
      else
        v34 = 0LL;
      v35 = *((_QWORD *)v7 + 5017);
      *(_DWORD *)(v29 + v35 + 4) = v25;
      *(_DWORD *)(v29 + v35 + 8) = v27->NbSegment;
      NbSegment = v27->NbSegment;
      if ( v27->NbSegment > 0x20 )
      {
        v133 = WdLogNewEntry5_WdAssertion(v33, v29);
        *(_QWORD *)(v133 + 24) = 841LL;
        goto LABEL_220;
      }
      if ( v27->PagingBufferSegmentId > NbSegment )
      {
        v133 = WdLogNewEntry5_WdAssertion(v33, v29);
        *(_QWORD *)(v133 + 24) = 846LL;
        goto LABEL_220;
      }
      v25 += NbSegment;
      v161 = v25;
      if ( v25 >= 0xFFFE )
        break;
      *((_BYTE *)v7 + v28 + 52) = v27->PagingBufferSegmentId;
      *(v31 - 64) = v27->PagingBufferSize;
      *v31 = v27->PagingBufferPrivateDataSize;
      *(_BYTE *)(v29 + v35 + 420) ^= (*(_BYTE *)(v29 + v35 + 420) ^ (2 * *(_BYTE *)(v30 + v32 + 16))) & 2;
      v37 = *(_BYTE *)(v29 + v35 + 420) ^ (*(_BYTE *)(v29 + v35 + 420) ^ (*(_DWORD *)(v30 + v32 + 16) >> 1)) & 1;
      *(_BYTE *)(v29 + v35 + 420) = v37;
      if ( (v37 & 3) != 0 )
      {
        ++*(_DWORD *)(v29 + v35 + 8);
        *(_WORD *)(v29 + v35 + 12) = v25++;
        v161 = v25;
      }
      else
      {
        *(_WORD *)(v29 + v35 + 12) = -1;
      }
      *(_DWORD *)(v29 + v35) = (1 << *(_DWORD *)(v29 + v35 + 8)) - 1;
      if ( v34 )
        *((_BYTE *)v7 + 40097) &= (*(_BYTE *)(v34 + 20) & 1) == 0;
      ++v26;
      ++v28;
      LODWORD(v12) = v162;
      ++v31;
      v30 += 48LL;
      v29 += 456LL;
      ++v27;
      if ( v26 >= v162 )
      {
        v18 = v162;
        goto LABEL_38;
      }
    }
    v133 = WdLogNewEntry5_WdAssertion(v33, v29);
    *(_QWORD *)(v133 + 24) = 853LL;
LABEL_220:
    WdLogEvent5_WdAssertion(v133);
    LODWORD(v43) = -1073741811;
    goto LABEL_172;
  }
LABEL_38:
  if ( dword_1C00352C8 == 2 )
    *((_BYTE *)v7 + 7096) = (*(_BYTE *)(*((_QWORD *)v7 + 3) + 1508LL) & 4) != 0;
  else
    *((_BYTE *)v7 + 7096) = dword_1C00352C8 == 1;
  *((_QWORD *)v7 + 807) = qword_1C0035150;
  *((_QWORD *)v7 + 5206) = qword_1C00353B8;
  v38 = dword_1C0035284;
  if ( dword_1C0035284 )
  {
    v39 = 360LL * (unsigned int)dword_1C0035284;
    if ( !is_mul_ok((unsigned int)dword_1C0035284, 0x168uLL) )
      v39 = -1LL;
    v40 = operator new[](v39, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)v7 + 978) = v40;
    if ( v40 )
    {
      *((_DWORD *)v7 + 1954) = v38;
      *((_QWORD *)v7 + 979) = 0LL;
    }
  }
  *((_QWORD *)v7 + 803) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v43) = ZwOpenSection((PHANDLE)v7 + 804, 0xF001Fu, &ObjectAttributes);
  if ( (int)v43 < 0 )
  {
    v135 = WdLogNewEntry5_WdAssertion(v42, v41);
    *(_QWORD *)(v135 + 24) = 955LL;
    WdLogEvent5_WdAssertion(v135);
    goto LABEL_290;
  }
  v44 = 8LL * v25;
  v173 = v25;
  if ( !is_mul_ok(v25, 8uLL) )
    v44 = -1LL;
  v45 = operator new[](v44, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)v7 + 464) = v45;
  if ( !v45 )
  {
    _InterlockedAdd(&dword_1C00355E0, 1u);
    v136 = WdLogNewEntry5_WdLowResource(v46);
    *(_QWORD *)(v136 + 24) = 967LL;
LABEL_289:
    WdLogEvent5_WdLowResource(v136);
    LODWORD(v43) = -1073741801;
    goto LABEL_290;
  }
  v47 = 1LL;
  v156 = 0;
  v48 = 0LL;
  v166 = 0LL;
  if ( (unsigned int)v12 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v18 < 0x10 )
    {
LABEL_288:
      _InterlockedAdd(&dword_1C00355E0, 1u);
      v136 = WdLogNewEntry5_WdLowResource(v47);
      *(_QWORD *)(v136 + 24) = 982LL;
      goto LABEL_289;
    }
    v49 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v18, 0x4B677844u);
  }
  else
  {
    v49 = v179;
  }
  P = v49;
  v180 = v12;
  if ( !v49 )
    goto LABEL_288;
  memset(v49, 0, 16 * v18);
  v51 = P;
  if ( !P )
    goto LABEL_288;
  v52 = 0;
  v157 = 0;
  if ( !(_DWORD)v12 )
    goto LABEL_95;
  v53 = 0LL;
  v54 = 0LL;
  v165 = 0LL;
  p_pSegmentDescriptor = (__int64)&a3->pSegmentDescriptor;
  v169 = &a3->pSegmentDescriptor;
  while ( 1 )
  {
    v55 = *((_QWORD *)v7 + 5017);
    v160 = 0;
    v56 = *(unsigned int **)p_pSegmentDescriptor;
    v163 = v55;
    if ( *(_DWORD *)(v55 + v54 + 8) )
      break;
LABEL_93:
    ++v52;
    p_pSegmentDescriptor = (__int64)(v169 + 5);
    v157 = v52;
    v53 += 16LL;
    v169 += 5;
    v54 += 456LL;
    v165 = v53;
    if ( v52 >= (unsigned int)v12 )
    {
      v48 = v166;
      v25 = v161;
      v18 = (unsigned int)v12;
LABEL_95:
      *((_BYTE *)v7 + 40096) = (unsigned __int64)(v48 + qword_1C0035148) < *(_QWORD *)(*((_QWORD *)v7 + 3) + 2064LL);
      if ( a4 < 0x5013 )
      {
        v141 = v25;
        if ( !*v51 && v25 )
        {
          v142 = 0LL;
          v143 = v25;
          do
          {
            p_pSegmentDescriptor = *(_QWORD *)(v142 + *((_QWORD *)v7 + 464));
            if ( (*(_DWORD *)(p_pSegmentDescriptor + 56) & 0x1041) == 0 )
            {
              v51[2 * *(unsigned int *)(p_pSegmentDescriptor + 372)] += *(_QWORD *)(p_pSegmentDescriptor + 40);
              v51 = P;
            }
            v142 += 8LL;
            --v143;
          }
          while ( v143 );
        }
        if ( (_DWORD)v12 )
        {
          v144 = 0LL;
          do
          {
            if ( v51[v144] <= 0x20000000uLL )
            {
              v51[v144] = 0LL;
              v51 = P;
            }
            v144 += 2LL;
            --v18;
          }
          while ( v18 );
        }
        v145 = *v51 == 0LL;
        if ( v25 )
        {
          p_pSegmentDescriptor = 0LL;
          while ( 1 )
          {
            v146 = *(_DWORD **)(p_pSegmentDescriptor + *((_QWORD *)v7 + 464));
            v147 = &v51[2 * (unsigned int)v146[93]];
            if ( (v146[14] & 0x1041) != 0 )
              break;
            if ( !v145 )
            {
              v146[117] = 0;
              v146[14] |= 0x80000u;
LABEL_266:
              v51 = P;
            }
            p_pSegmentDescriptor += 8LL;
            if ( !--v141 )
              goto LABEL_96;
          }
          if ( v145 )
          {
            v146[117] = 0;
            v146[14] |= 0x80000u;
            *v147 += *(_QWORD *)(*(_QWORD *)(p_pSegmentDescriptor + *((_QWORD *)v7 + 464)) + 40LL);
          }
          else
          {
            v146[14] |= 0x100000u;
            v146[117] = 1;
            v147[1] += *(_QWORD *)(*(_QWORD *)(p_pSegmentDescriptor + *((_QWORD *)v7 + 464)) + 40LL);
          }
          goto LABEL_266;
        }
      }
LABEL_96:
      v71 = qword_1C0035328;
      v72 = *((_QWORD *)v7 + 807);
      v170 = qword_1C0035328;
      if ( qword_1C0035328 && v72 >= qword_1C0035328 )
        v72 = qword_1C0035328;
      v158 = 0;
      if ( (_DWORD)v12 )
      {
        v73 = 0LL;
        v74 = 0LL;
        v164 = 0LL;
        v167 = 0LL;
        while ( 1 )
        {
          v75 = (_QWORD *)((char *)v51 + v74);
          v76 = v73 + *((_QWORD *)v7 + 5150);
          v77 = 0;
          LOBYTE(v73) = 0;
          if ( v161 )
          {
            v78 = v173;
            v79 = 0LL;
            do
            {
              v80 = *(_QWORD *)(v79 + *((_QWORD *)v7 + 464));
              v81 = *(_DWORD *)(v80 + 56);
              if ( (v81 & 0x80000) != 0 )
              {
                if ( (v81 & 4) == 0 )
                  *(_BYTE *)(v76 + 258) = 1;
                v81 = *(_DWORD *)(v80 + 56);
                v73 = (unsigned __int8)v73;
                if ( (v81 & 0x1001) == 0 )
                  v73 = 1LL;
              }
              if ( (v81 & 0x1001) != 0 )
                v77 = 1;
              v79 += 8LL;
              --v78;
            }
            while ( v78 );
          }
          if ( !*v75 )
            break;
          if ( (_BYTE)v73 && v77 )
            *(_BYTE *)(v76 + 259) = 1;
          if ( v75[1] )
          {
            if ( v71 )
            {
              v148 = v71;
              if ( *v75 < v71 )
                v148 = *v75;
              *v75 = v148;
            }
            v82 = (_DWORD *)(v76 + 224);
            v75[1] = *((_QWORD *)v7 + 807);
            *(_DWORD *)(v76 + 224) = dword_1C003537C;
            *(_DWORD *)(v76 + 228) = dword_1C0035380;
          }
          else
          {
            *v75 = v72;
            v82 = (_DWORD *)(v76 + 224);
            *(_DWORD *)(v76 + 224) = dword_1C0035380;
          }
          v83 = 2LL;
          v84 = (unsigned __int64 *)(v76 + 80);
          v85 = (unsigned __int64 *)(v76 + 48);
          v86 = (unsigned __int64 *)(v76 + 80);
          v87 = (unsigned __int64 *)(v76 + 48);
          p_pSegmentDescriptor = (__int64)v75 - v76;
          do
          {
            v88 = *(unsigned __int64 *)((char *)v87 + p_pSegmentDescriptor - 48) * (unsigned int)(100 - *v82) / 0x64;
            *(v87 - 4) = v88;
            *(v87 - 2) = v88;
            v89 = 3LL;
            *v87 = *(unsigned __int64 *)((char *)v87 + p_pSegmentDescriptor - 48)
                 * (unsigned int)(100 - dword_1C0035384 - *v82)
                 / 0x64;
            do
            {
              v90 = 3LL;
              do
              {
                *v86++ = *v87;
                --v90;
              }
              while ( v90 );
              --v89;
            }
            while ( v89 );
            ++v82;
            v87[2] = *(v87 - 4) >> 1;
            ++v87;
            --v83;
          }
          while ( v83 );
          v7 = this;
          v71 = v170;
          if ( (*((_BYTE *)this + 40872) & 1) != 0 )
          {
            v91 = *(_QWORD *)(*((_QWORD *)this + 2) + 832LL);
            if ( v91 )
              v92 = v91 + 144LL * v158;
            else
              v92 = 0LL;
            v93 = 2LL;
            v94 = 1LL << *(_DWORD *)(v92 + 8);
            do
            {
              v95 = v94;
              v96 = 3LL;
              if ( *(v85 - 2) < v94 )
                v95 = *(v85 - 2);
              v19 = *v85 < v94;
              *(v85 - 2) = v95;
              v97 = v94;
              if ( v19 )
                v97 = *v85;
              v19 = v85[2] < v94;
              *v85 = v97;
              v98 = v94;
              if ( v19 )
                v98 = v85[2];
              v85[2] = v98;
              do
              {
                p_pSegmentDescriptor = 3LL;
                do
                {
                  v99 = v94;
                  if ( *v84 < v94 )
                    v99 = *v84;
                  *v84++ = v99;
                  --p_pSegmentDescriptor;
                }
                while ( p_pSegmentDescriptor );
                --v96;
              }
              while ( v96 );
              ++v85;
              --v93;
            }
            while ( v93 );
            v71 = v170;
          }
          v74 = v167 + 16;
          LODWORD(v12) = v162;
          v73 = v164 + 264;
          ++v158;
          v167 += 16LL;
          v164 += 264LL;
          if ( v158 >= v162 )
            goto LABEL_142;
          v51 = P;
        }
        v59 = WdLogNewEntry5_WdAssertion(v73, v76);
        *(_QWORD *)(v59 + 24) = 1423LL;
        goto LABEL_63;
      }
LABEL_142:
      *((_DWORD *)v7 + 926) = v161;
      if ( (*((_BYTE *)v7 + 40872) & 1) == 0 )
      {
LABEL_167:
        v118 = operator new(0xE8uLL, 0x37346956u, PagedPool);
        v119 = 0LL;
        v120 = v118;
        if ( v118 )
        {
          *v118 = v7;
          v118[1] = 0LL;
          v118[2] = 0LL;
          v118[3] = 0LL;
          v118[5] = 0LL;
          v118[4] = 0LL;
          v118[7] = 0LL;
          v118[6] = 0LL;
          v118[17] = 0LL;
          v118[16] = 0LL;
          *((_DWORD *)v118 + 36) = 0;
          v118[19] = 0LL;
          *((_BYTE *)v118 + 160) = 0;
          v118[23] = 0LL;
          v118[24] = 0LL;
          v118[25] = 0LL;
          *((_BYTE *)v118 + 216) = 1;
          v118[28] = 0LL;
          v121 = v118 + 8;
          v121[1] = v121;
          *v121 = v121;
          v120[13] = v120 + 12;
          v120[12] = v120 + 12;
          v120[11] = v120 + 10;
          v120[10] = v120 + 10;
          v120[15] = v120 + 14;
          v120[14] = v120 + 14;
        }
        else
        {
          v120 = 0LL;
        }
        *(_QWORD *)v7 = v120;
        if ( v120 )
        {
          LODWORD(v43) = VIDMM_WORKER_THREAD::Init(v120, (struct _KEVENT **)v7 + 5140);
          if ( (int)v43 >= 0 )
          {
            *((_QWORD *)v7 + 886) = v171;
            *((_BYTE *)v7 + 7097) = v171 >= qword_1C0035140;
            *((_QWORD *)v7 + 982) = MEMORY[0xFFFFF78000000014];
            *((_QWORD *)v7 + 983) = MEMORY[0xFFFFF78000000014];
            goto LABEL_172;
          }
        }
        else
        {
          LODWORD(v43) = -1073741801;
        }
        v150 = WdLogNewEntry5_WdAssertion(v120, v119);
        *(_QWORD *)(v150 + 24) = 1617LL;
        WdLogEvent5_WdAssertion(v150);
        goto LABEL_282;
      }
      if ( !dword_1C0035314 )
        goto LABEL_154;
      v100 = (unsigned int)dword_1C0035314;
      v101 = 24LL * (unsigned int)dword_1C0035314;
      if ( !is_mul_ok((unsigned int)dword_1C0035314, 0x18uLL) )
        v101 = -1LL;
      v19 = __CFADD__(v101, 8LL);
      v102 = v101 + 8;
      if ( v19 )
        v102 = -1LL;
      v103 = operator new(v102, 0x32356956u, p_pSegmentDescriptor, PagedPool);
      if ( v103 )
        *v103++ = v100;
      *((_QWORD *)v7 + 5115) = v103;
      if ( !v103 )
      {
        v149 = WdLogNewEntry5_WdAssertion(v105, v104);
        *(_QWORD *)(v149 + 24) = 1547LL;
        WdLogEvent5_WdAssertion(v149);
        LODWORD(v43) = -1073741801;
        goto LABEL_282;
      }
      v107 = 48LL * (unsigned int)dword_1C0035318;
      if ( !is_mul_ok((unsigned int)dword_1C0035318, 0x30uLL) )
        v107 = -1LL;
      v108 = operator new(v107, 0x32356956u, v106, PagedPool);
      *((_QWORD *)v7 + 5119) = v108;
      if ( v108 )
      {
LABEL_154:
        *((_DWORD *)v7 + 10217) = 0;
        v111 = 0LL;
        *((_BYTE *)v7 + 40872) &= ~0x20u;
        if ( (_DWORD)v12 )
        {
          v112 = 0LL;
          do
          {
            v113 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 832LL);
            v114 = v113 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v113 + 144 * v111) : 0LL;
            v115 = (unsigned int *)(v112 + *((_QWORD *)v7 + 5017));
            LODWORD(v43) = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                             (VIDMM_PHYSICAL_ADAPTER *)v115,
                             v7,
                             v111,
                             (struct VIDMM_SEGMENT *const *)(*((_QWORD *)v7 + 464) + 8LL * v115[1]),
                             v114,
                             v155,
                             a3->NbSegment);
            if ( (int)v43 < 0 )
              goto LABEL_172;
            v116 = v115[13];
            if ( v116 > *((_DWORD *)v7 + 10217) )
              *((_DWORD *)v7 + 10217) = v116;
            if ( v115[103] == 1 )
              *((_BYTE *)v7 + 40872) |= 0x20u;
            ++a3;
            v111 = (unsigned int)(v111 + 1);
            v112 += 456LL;
          }
          while ( (unsigned int)v111 < v162 );
        }
        if ( a4 >= 0x5023 )
          v117 = dword_1C003531C;
        else
          v117 = 1 << *((_DWORD *)v7 + 10217) << 12;
        *((_DWORD *)v7 + 10229) = v117;
        LODWORD(v43) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)v7 + 40320), v7);
        if ( (int)v43 < 0 )
          goto LABEL_282;
        goto LABEL_167;
      }
      v140 = WdLogNewEntry5_WdAssertion(v110, v109);
      *(_QWORD *)(v140 + 24) = 1554LL;
      WdLogEvent5_WdAssertion(v140);
LABEL_245:
      LODWORD(v43) = -1073741801;
      goto LABEL_282;
    }
  }
  while ( 1 )
  {
    v57 = v56;
    v172 = v56 + 26;
    if ( (*(_BYTE *)(v55 + v54 + 420) & 3) != 0 && v8 == *(unsigned __int16 *)(v55 + v54 + 12) )
    {
      v60 = (VIDMM_SEGMENT *)operator new(0x1D8uLL, 0x36306956u, (POOL_TYPE)512);
      v62 = v60;
      if ( v60 )
      {
        VIDMM_SEGMENT::VIDMM_SEGMENT(v60, v7);
        *(_QWORD *)v62 = &VIDMM_SYSMEM_SEGMENT::`vftable';
      }
      else
      {
        v62 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v8) = v62;
      v63 = *((_QWORD *)v7 + 464);
      if ( !*(_QWORD *)(v63 + 8LL * v8) )
        goto LABEL_241;
      memset(v177, 0, 0x68uLL);
      v64 = LODWORD(v177[0]) | 0x1180;
      LODWORD(v177[0]) |= 0x1180u;
      if ( (*(_BYTE *)(v163 + v54 + 420) & 1) != 0 )
      {
        v65 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 832LL);
        if ( v65 )
          v66 = (unsigned __int8 *)(v65 + 144LL * v157);
        else
          v66 = 0LL;
        v125 = (*v66 >> 4) & 1;
      }
      else
      {
        LOBYTE(v125) = 1;
      }
      v155 = 0LL;
      LODWORD(v177[0]) = v64 & 0xFFFFFBEF | (16 * (v125 & 1 | ((v156 & 1) << 6))) | 4;
      v177[2] = qword_1C0035148;
      v126 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(v63 + 8LL * v8) + 8LL))(
               *(_QWORD *)(v63 + 8LL * v8),
               0LL,
               v8,
               v160,
               v177);
      v43 = v126;
      if ( v126 < 0 )
      {
        _InterlockedAdd(&dword_1C003560C, 1u);
        v138 = WdLogNewEntry5_WdLowResource(v127);
        *(_QWORD *)(v138 + 24) = v43;
        goto LABEL_240;
      }
      if ( a4 >= 0x5013 )
      {
        v128 = *(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v8);
        if ( *(_QWORD *)((char *)v51 + v165 + 8) )
        {
          *(_DWORD *)(v128 + 56) |= 0x100000u;
          *(_DWORD *)(v128 + 468) = 1;
          *(_QWORD *)((char *)v51 + v165 + 8) += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v160) + 40LL);
        }
        else
        {
          *(_DWORD *)(v128 + 468) = 0;
          *(_DWORD *)(v128 + 56) |= 0x80000u;
          *(_QWORD *)((char *)v51 + v165) += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v160) + 40LL);
        }
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v8) + 372LL) = v157;
      goto LABEL_91;
    }
    v58 = *v56;
    if ( (v58 & 0xFFE00000) != 0
      || (v58 & 2) != 0
      || (v58 & 0x80u) == 0LL && (v58 & 0x300) != 0
      || (*v56 & 0x300) == 0x300
      || (v58 & 0x2000) != 0 && (v58 & 5) != 0 )
    {
LABEL_62:
      v59 = WdLogNewEntry5_WdAssertion(v58, v55);
      *(_QWORD *)(v59 + 24) = v8;
LABEL_63:
      WdLogEvent5_WdAssertion(v59);
      LODWORD(v43) = -1073741811;
      goto LABEL_282;
    }
    if ( (v56[4] & 0xFFFLL) != 0 )
    {
      v137 = WdLogNewEntry5_WdWarning(v58);
      *(_QWORD *)(v137 + 24) = 4096LL;
      WdLogEvent5_WdWarning(v137);
      v55 = v163;
      *((_QWORD *)v57 + 2) -= *((_QWORD *)v57 + 2) & 0xFFFLL;
    }
    if ( (*v57 & 0x400) != 0 )
      v171 += *((_QWORD *)v57 + 2);
    if ( (*v57 & 1) != 0 )
      break;
    *(_BYTE *)(v55 + v54 + 420) |= 8u;
    v129 = (*((_BYTE *)v57 + 2) & 1) != 0 && !v57[21];
    *(_BYTE *)(v55 + v54 + 421) ^= (*(_BYTE *)(v55 + v54 + 421) ^ (4 * v129)) & 4;
    v130 = (VIDMM_SEGMENT *)operator new(0x1E0uLL, 0x36306956u, (POOL_TYPE)512);
    v131 = v130;
    if ( v130 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v130, v7);
      *((_QWORD *)v131 + 59) = 0LL;
      *(_QWORD *)v131 = &VIDMM_MEMORY_SEGMENT::`vftable';
    }
    else
    {
      v131 = 0LL;
    }
    v69 = 8LL * v8;
    *(_QWORD *)(v69 + *((_QWORD *)v7 + 464)) = v131;
    if ( !*(_QWORD *)(v69 + *((_QWORD *)v7 + 464)) )
    {
      _InterlockedAdd(&dword_1C00355E4, 1u);
LABEL_243:
      v139 = WdLogNewEntry5_WdLowResource(v61);
      *(_QWORD *)(v139 + 24) = v8;
      WdLogEvent5_WdLowResource(v139);
      goto LABEL_245;
    }
    if ( (*v57 & 0x800) != 0 )
      *(_BYTE *)(v163 + v54 + 421) |= 2u;
    v155 = 0LL;
    LODWORD(v43) = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, _QWORD, unsigned int *))(**(_QWORD **)(v69 + *((_QWORD *)v7 + 464)) + 8LL))(
                     *(_QWORD *)(v69 + *((_QWORD *)v7 + 464)),
                     NotifyAllocationReclaimed,
                     v8,
                     v160,
                     v57);
    if ( (int)v43 < 0 )
    {
      _InterlockedAdd(&dword_1C00355E8, 1u);
      goto LABEL_239;
    }
    v55 = *v57;
    if ( (v55 & 0x40) == 0 )
    {
      v58 = *(_QWORD *)(v69 + *((_QWORD *)v7 + 464));
      v166 += *(_QWORD *)(v58 + 40);
    }
LABEL_86:
    if ( (v55 & 0x80000) != 0 )
    {
      if ( a4 < 0x5013 )
        goto LABEL_62;
      *(_QWORD *)((char *)v51 + v165) += *((_QWORD *)v57 + 2);
      goto LABEL_89;
    }
    if ( (v55 & 0x100000) != 0 )
    {
      if ( a4 < 0x5013 )
        goto LABEL_62;
      *(_QWORD *)((char *)v51 + v165 + 8) += *((_QWORD *)v57 + 2);
      v132 = *(_QWORD *)(v69 + *((_QWORD *)v7 + 464));
      *(_DWORD *)(v132 + 56) |= 0x100000u;
      *(_DWORD *)(v132 + 468) = 1;
    }
    else if ( (v55 & 0x8000) != 0 )
    {
      if ( a4 >= 0x5013 )
        goto LABEL_62;
      if ( (v55 & 0x41) == 0 )
      {
        *(_QWORD *)((char *)v51 + v165) += *((_QWORD *)v57 + 2);
LABEL_89:
        v70 = *(_QWORD *)(v69 + *((_QWORD *)v7 + 464));
        *(_DWORD *)(v70 + 468) = 0;
        *(_DWORD *)(v70 + 56) |= 0x80000u;
      }
    }
    *(_DWORD *)(*(_QWORD *)(v69 + *((_QWORD *)v7 + 464)) + 372LL) = v157;
    if ( (*((_BYTE *)v57 + 2) & 1) != 0 )
    {
      LODWORD(v43) = VIDMM_SEGMENT::SetVprRange(
                       *(VIDMM_SEGMENT **)(v69 + *((_QWORD *)v7 + 464)),
                       *((_QWORD *)v57 + 8),
                       *((_QWORD *)v57 + 9),
                       v57[20],
                       v57[21],
                       v57[22]);
      if ( (int)v43 < 0 )
        goto LABEL_282;
    }
LABEL_91:
    ++v8;
    v55 = v163;
    v56 = v172;
    if ( ++v160 >= *(_DWORD *)(v163 + v54 + 8) )
    {
      v51 = P;
      LODWORD(v12) = v162;
      v53 = v165;
      v52 = v157;
      goto LABEL_93;
    }
  }
  v67 = (VIDMM_SEGMENT *)operator new(0x1F8uLL, 0x36306956u, (POOL_TYPE)512);
  v68 = v67;
  if ( v67 )
  {
    VIDMM_SEGMENT::VIDMM_SEGMENT(v67, v7);
    *(_QWORD *)v68 = &VIDMM_APERTURE_SEGMENT::`vftable';
    *((_QWORD *)v68 + 59) = 0LL;
    *((_QWORD *)v68 + 60) = 0LL;
    *((_QWORD *)v68 + 62) = 0LL;
    *((_QWORD *)v68 + 61) = 0LL;
  }
  else
  {
    v68 = 0LL;
  }
  v69 = 8LL * v8;
  *(_QWORD *)(v69 + *((_QWORD *)v7 + 464)) = v68;
  v61 = *(_QWORD *)(v69 + *((_QWORD *)v7 + 464));
  if ( !v61 )
  {
LABEL_241:
    _InterlockedAdd(&dword_1C0035608, 1u);
    goto LABEL_243;
  }
  v155 = 0LL;
  LODWORD(v43) = (*(__int64 (__fastcall **)(__int64, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, _QWORD, unsigned int *))(*(_QWORD *)v61 + 8LL))(
                   v61,
                   NotifyAllocationReclaimed,
                   v8,
                   v160,
                   v57);
  if ( (int)v43 >= 0 )
  {
    v58 = *(_QWORD *)(v69 + *((_QWORD *)v7 + 464));
    if ( (*(_DWORD *)(v58 + 56) & 0x10) != 0 )
      *((_BYTE *)v7 + 6497) = 1;
    v55 = *v57;
    if ( (v55 & 0x400) != 0 )
      v156 = 1;
    goto LABEL_86;
  }
  _InterlockedAdd(&dword_1C003560C, 1u);
LABEL_239:
  v138 = WdLogNewEntry5_WdLowResource(v58);
  *(_QWORD *)(v138 + 24) = v8;
LABEL_240:
  WdLogEvent5_WdLowResource(v138);
LABEL_282:
  if ( v8 )
  {
    v151 = 8LL * v8;
    do
    {
      v151 -= 8LL;
      --v8;
      v152 = *(void (__fastcall ****)(_QWORD, __int64))(v151 + *((_QWORD *)v7 + 464));
      if ( v152 )
        (**v152)(v152, 1LL);
    }
    while ( v8 );
  }
LABEL_290:
  v153 = (void *)*((_QWORD *)v7 + 464);
  if ( v153 )
  {
    operator delete[](v153);
    *((_QWORD *)v7 + 464) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)v7 + 40320));
  v154 = (void *)*((_QWORD *)v7 + 804);
  if ( v154 )
  {
    ZwClose(v154);
    *((_QWORD *)v7 + 804) = 0LL;
  }
  operator delete[](*((void **)v7 + 803));
  *((_QWORD *)v7 + 803) = 0LL;
LABEL_172:
  if ( P != v179 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v43;
}
