/*
 * XREFs of ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0067E2C
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00647D4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0011DE8 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0012DEC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0013374 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0013DA4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C001C2A8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C006723C (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??0VIDMM_SEGMENT@@QEAA@XZ @ 0x1C0069968 (--0VIDMM_SEGMENT@@QEAA@XZ.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0069FD0 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C006A4AC (-InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBU.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C0081524 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 *     ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II@Z @ 0x1C0085234 (-SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Init(
        VIDMM_GLOBAL *this,
        struct ADAPTER_RENDER *a2,
        struct _DXGK_QUERYSEGMENTOUT4 *a3,
        unsigned int a4)
{
  char *v4; // rdi
  __int64 v5; // rsi
  VIDMM_GLOBAL *v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  PVOID PoolWithTag; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  bool v22; // cf
  SIZE_T v23; // rax
  char *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // ecx
  char v28; // cl
  int v29; // edx
  bool v30; // al
  unsigned int v31; // r15d
  unsigned int v32; // r11d
  struct _DXGK_QUERYSEGMENTOUT4 *v33; // r10
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rdi
  UINT *v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rcx
  __int64 v40; // r9
  __int64 v41; // r8
  UINT NbSegment; // eax
  __int64 v43; // rcx
  unsigned int v44; // ecx
  PVOID v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // eax
  SIZE_T v50; // rax
  unsigned __int64 v51; // kr00_8
  PVOID v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // edi
  SIZE_T v56; // rax
  PVOID v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  SIZE_T v63; // rax
  PVOID v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  char *v69; // rax
  __int64 p_pSegmentDescriptor; // r8
  __int64 v71; // r9
  _QWORD *v72; // rsi
  unsigned int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // r15
  __int64 v76; // rdx
  unsigned int *v77; // r8
  unsigned int *v78; // r14
  __int64 v79; // r8
  VIDMM_SEGMENT *v80; // rax
  __int64 v81; // rcx
  VIDMM_SEGMENT *v82; // rdi
  __int64 v83; // rdi
  int v84; // edx
  __int64 v85; // rcx
  unsigned __int8 *v86; // rax
  int v87; // ecx
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rax
  VIDMM_SEGMENT *v93; // rax
  VIDMM_SEGMENT *v94; // rdi
  __int64 v95; // r15
  bool v96; // al
  VIDMM_SEGMENT *v97; // rax
  VIDMM_SEGMENT *v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // r10
  __int64 v102; // rdx
  __int64 v103; // rax
  bool v104; // r9
  _DWORD *v105; // rcx
  _QWORD *v106; // rdx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // r15
  unsigned __int64 v111; // r14
  __int64 v112; // r13
  __int64 v113; // rcx
  __int64 v114; // rax
  unsigned __int64 *v115; // r8
  __int64 v116; // rdx
  char v117; // r10
  __int64 v118; // rdi
  __int64 v119; // r11
  __int64 v120; // rax
  int v121; // ecx
  _DWORD *v122; // r10
  unsigned __int64 v123; // rcx
  __int64 v124; // rsi
  unsigned __int64 *v125; // r11
  _QWORD *v126; // rdi
  unsigned __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rax
  unsigned __int64 v132; // rdx
  unsigned __int64 v133; // rcx
  unsigned __int64 v134; // rcx
  unsigned __int64 v135; // rcx
  int v136; // edi
  __int64 v137; // rax
  SIZE_T v138; // rax
  _DWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rax
  SIZE_T v145; // rax
  PVOID v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rsi
  __int64 v152; // r15
  __int64 v153; // rcx
  const struct DXGADAPTER_GPUMMUCAPS *v154; // rdx
  unsigned int *v155; // r14
  unsigned int v156; // eax
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  __int64 v162; // rax
  __int64 v163; // rsi
  void (__fastcall ***v164)(_QWORD, __int64); // rcx
  void *v165; // rcx
  void *v166; // rcx
  void *v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // r8
  __int64 v170; // r9
  DXGFASTMUTEX *v171; // rcx
  struct DXGK_PHYSICALADAPTERINFO *v173; // [rsp+28h] [rbp-D8h]
  char v174; // [rsp+40h] [rbp-C0h]
  unsigned int v175; // [rsp+44h] [rbp-BCh]
  unsigned int v176; // [rsp+48h] [rbp-B8h]
  unsigned int v178; // [rsp+50h] [rbp-B0h]
  unsigned int v179; // [rsp+54h] [rbp-ACh]
  __int64 v180; // [rsp+58h] [rbp-A8h]
  __int64 v181; // [rsp+60h] [rbp-A0h]
  __int64 v182; // [rsp+60h] [rbp-A0h]
  UCHAR **v184; // [rsp+70h] [rbp-90h]
  __int64 v185; // [rsp+70h] [rbp-90h]
  __int64 v186; // [rsp+78h] [rbp-88h]
  __int64 v187; // [rsp+80h] [rbp-80h]
  unsigned __int64 v188; // [rsp+88h] [rbp-78h]
  __int64 v189; // [rsp+90h] [rbp-70h]
  __int64 v190; // [rsp+90h] [rbp-70h]
  __int64 v192; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v195[12]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID P; // [rsp+150h] [rbp+50h]
  char v197[16]; // [rsp+158h] [rbp+58h] BYREF
  int v198; // [rsp+168h] [rbp+68h]

  v4 = 0LL;
  *((_QWORD *)this + 2) = a2;
  v5 = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 8) = a4;
  v7 = this;
  v8 = 0;
  *((_QWORD *)this + 3) = v5;
  v188 = 0LL;
  P = 0LL;
  `vector constructor iterator'(
    v197,
    16LL,
    1,
    (void (__fastcall *)(char *))VIDMM_BUDGET_GROUP_SIZE::VIDMM_BUDGET_GROUP_SIZE);
  v198 = 0;
  if ( a4 < 0x5009 )
    dword_1C002F350 = 0;
  v13 = *(unsigned int *)(*((_QWORD *)v7 + 3) + 232LL);
  v179 = v13;
  *((_DWORD *)v7 + 1604) = v13;
  if ( (unsigned int)v13 > 0x40 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = 64LL;
    goto LABEL_56;
  }
  if ( (unsigned int)v13 <= 1 )
  {
    PoolWithTag = (char *)v7 + 40896;
  }
  else
  {
    v15 = v13;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 0x108 )
    {
LABEL_12:
      _InterlockedAdd(&dword_1C002F528, 1u);
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 761LL;
LABEL_24:
      WdLogEvent5_WdLowResource(v17);
      LODWORD(v26) = -1073741801;
      goto LABEL_287;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 264 * v13, 0x6D4D6956u);
  }
  *((_QWORD *)v7 + 5111) = PoolWithTag;
  v15 = (unsigned __int64)PoolWithTag;
  *((_DWORD *)v7 + 10290) = v13;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 264 * v13);
  if ( !*((_QWORD *)v7 + 5111) )
    goto LABEL_12;
  if ( (_DWORD)v13 )
  {
    v18 = 0LL;
    v11 = v13;
    do
    {
      v19 = (_QWORD *)(v18 + *((_QWORD *)v7 + 5111));
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
  *((_QWORD *)v7 + 5006) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C002F528);
    v17 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v17 + 24) = 773LL;
    goto LABEL_24;
  }
  v27 = *(_DWORD *)(v5 + 1388);
  if ( (v27 & 0x20) != 0 )
  {
    *((_BYTE *)v7 + 40608) ^= (((v27 & 0x40) != 0) ^ *((_BYTE *)v7 + 40608)) & 1;
    v28 = *((_BYTE *)v7 + 40608) ^ (*((_BYTE *)v7 + 40608) ^ (2 * (*(_BYTE *)(v5 + 1388) >> 7))) & 2;
    *((_BYTE *)v7 + 40608) = v28;
    if ( (v28 & 2) != 0 )
    {
      v30 = 0;
      if ( (dword_1C002F104 & 0x20) == 0 )
      {
        v29 = *(_DWORD *)(*((_QWORD *)v7 + 3) + 284LL);
        if ( (v29 & 4) == 0 && (v29 & 8) == 0 )
          v30 = 1;
      }
      *((_BYTE *)v7 + 40608) = v28 ^ (v28 ^ (4 * v30)) & 4;
    }
    if ( a4 >= 0x5017 || (dword_1C002F104 & 0x100) != 0 )
      *((_BYTE *)v7 + 40608) |= 0x40u;
  }
  v175 = 0;
  v31 = 0;
  v32 = 0;
  *((_BYTE *)v7 + 4616) = (~*(_BYTE *)(v5 + 1384) & 0x20) != 0;
  if ( (_DWORD)v13 )
  {
    v33 = a3;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v37 = (UINT *)((char *)v7 + 372);
    while ( 1 )
    {
      v38 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 1904LL);
      v39 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 904LL);
      if ( v39 )
        v40 = v39 + 144LL * v32;
      else
        v40 = 0LL;
      v41 = *((_QWORD *)v7 + 5006);
      *(_DWORD *)(v35 + v41 + 4) = v175;
      *(_DWORD *)(v35 + v41 + 8) = v33->NbSegment;
      NbSegment = v33->NbSegment;
      if ( v33->NbSegment > 0x20 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v175, v35, v41, v40);
        *(_QWORD *)(v14 + 24) = 813LL;
        goto LABEL_56;
      }
      if ( v33->PagingBufferSegmentId > NbSegment )
      {
        v14 = WdLogNewEntry5_WdAssertion(v175, v35, v41, v40);
        *(_QWORD *)(v14 + 24) = 818LL;
        goto LABEL_56;
      }
      v43 = NbSegment + v175;
      v175 = v43;
      if ( (unsigned int)v43 >= 0xFFFE )
        break;
      *((_BYTE *)v7 + v34 + 52) = v33->PagingBufferSegmentId;
      *(v37 - 64) = v33->PagingBufferSize;
      *v37 = v33->PagingBufferPrivateDataSize;
      *(_BYTE *)(v35 + v41 + 420) ^= (*(_BYTE *)(v35 + v41 + 420) ^ (2 * *(_BYTE *)(v36 + v38 + 16))) & 2;
      v44 = *(_DWORD *)(v36 + v38 + 16);
      v31 = v175;
      LOBYTE(v44) = *(_BYTE *)(v35 + v41 + 420) ^ (*(_BYTE *)(v35 + v41 + 420) ^ (v44 >> 1)) & 1;
      *(_BYTE *)(v35 + v41 + 420) = v44;
      if ( (v44 & 3) != 0 )
      {
        *(_WORD *)(v35 + v41 + 12) = v175;
        ++*(_DWORD *)(v35 + v41 + 8);
        v31 = ++v175;
      }
      else
      {
        *(_WORD *)(v35 + v41 + 12) = -1;
      }
      *(_DWORD *)(v35 + v41) = (1 << *(_DWORD *)(v35 + v41 + 8)) - 1;
      if ( v40 )
        *((_BYTE *)v7 + 40009) &= (*(_BYTE *)(v40 + 20) & 1) == 0;
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
    *(_QWORD *)(v14 + 24) = 825LL;
LABEL_56:
    WdLogEvent5_WdAssertion(v14);
    LODWORD(v26) = -1073741811;
    goto LABEL_287;
  }
LABEL_51:
  if ( dword_1C002F2B8 == 2 )
    *((_BYTE *)v7 + 7064) = (*(_BYTE *)(*((_QWORD *)v7 + 3) + 1372LL) & 4) != 0;
  else
    *((_BYTE *)v7 + 7064) = dword_1C002F2B8 == 1;
  *((_QWORD *)v7 + 807) = qword_1C002F120;
  if ( dword_1C002F244 )
  {
    v45 = operator new(0x40uLL, 0x30346956u, (POOL_TYPE)512);
    v47 = v45 ? DXGFASTMUTEX::DXGFASTMUTEX((__int64)v45, 27) : 0LL;
    *((_QWORD *)v7 + 887) = v47;
    if ( v47 )
    {
      v49 = dword_1C002F244;
    }
    else
    {
      _InterlockedAdd(&dword_1C002F5D8, 1u);
      v48 = WdLogNewEntry5_WdLowResource(v46);
      *(_QWORD *)(v48 + 24) = 904LL;
      WdLogEvent5_WdLowResource(v48);
      v49 = 0;
      dword_1C002F244 = 0;
    }
    if ( v49 )
    {
      v51 = v49;
      v50 = 8LL * v49;
      if ( !is_mul_ok(v51, 8uLL) )
        v50 = -1LL;
      v52 = operator new(v50, 0x39336956u, PagedPool);
      *((_QWORD *)v7 + 889) = v52;
      if ( !v52 )
      {
        _InterlockedAdd(&dword_1C002F5D4, 1u);
        v54 = WdLogNewEntry5_WdLowResource(v53);
        *(_QWORD *)(v54 + 24) = 914LL;
        WdLogEvent5_WdLowResource(v54);
        dword_1C002F244 = 0;
      }
    }
  }
  *((_QWORD *)v7 + 5163) = qword_1C002F3B0;
  v55 = dword_1C002F270;
  if ( dword_1C002F270 )
  {
    v56 = 360LL * (unsigned int)dword_1C002F270;
    if ( !is_mul_ok((unsigned int)dword_1C002F270, 0x168uLL) )
      v56 = -1LL;
    v57 = operator new[](v56, 0x6D4D6956u, (POOL_TYPE)512);
    *((_QWORD *)v7 + 972) = v57;
    if ( v57 )
    {
      *((_DWORD *)v7 + 1942) = v55;
      *((_QWORD *)v7 + 973) = 0LL;
    }
  }
  *((_QWORD *)v7 + 803) = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\PhysicalMemory");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v26) = ZwOpenSection((PHANDLE)v7 + 804, 0xF001Fu, &ObjectAttributes);
  if ( (int)v26 < 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v59, v58, v60, v61);
    *(_QWORD *)(v62 + 24) = 952LL;
    WdLogEvent5_WdAssertion(v62);
    goto LABEL_280;
  }
  v63 = 8LL * v31;
  v192 = v31;
  if ( !is_mul_ok(v31, 8uLL) )
    v63 = -1LL;
  v64 = operator new[](v63, 0x36306956u, (POOL_TYPE)512);
  *((_QWORD *)v7 + 464) = v64;
  if ( !v64 )
  {
    _InterlockedIncrement(&dword_1C002F560);
    v66 = WdLogNewEntry5_WdLowResource(v65);
    *(_QWORD *)(v66 + 24) = 964LL;
LABEL_279:
    WdLogEvent5_WdLowResource(v66);
    LODWORD(v26) = -1073741801;
    goto LABEL_280;
  }
  v67 = 1LL;
  v174 = 0;
  v181 = 0LL;
  v68 = 0LL;
  if ( (unsigned int)v13 <= 1 )
  {
    v69 = v197;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v21 < 0x10 )
    {
LABEL_278:
      _InterlockedAdd(&dword_1C002F560, 1u);
      v66 = WdLogNewEntry5_WdLowResource(v67);
      *(_QWORD *)(v66 + 24) = 979LL;
      goto LABEL_279;
    }
    v69 = (char *)ExAllocatePoolWithTag(PagedPool, 16 * v21, 0x4B677844u);
  }
  P = v69;
  v198 = v13;
  if ( !v69 )
    goto LABEL_278;
  memset(v69, 0, 16 * v21);
  v72 = P;
  if ( !P )
    goto LABEL_278;
  v73 = 0;
  v178 = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_160:
    *((_BYTE *)v7 + 40008) = (unsigned __int64)(v68 + qword_1C002F118) < *(_QWORD *)(*((_QWORD *)v7 + 3) + 1928LL);
    if ( a4 < 0x5013 )
    {
      v101 = v31;
      if ( !*v72 && v31 )
      {
        v102 = 0LL;
        v71 = v31;
        do
        {
          p_pSegmentDescriptor = *(_QWORD *)(v102 + *((_QWORD *)v7 + 464));
          if ( (*(_DWORD *)(p_pSegmentDescriptor + 56) & 0x1041) == 0 )
          {
            v72[2 * *(unsigned int *)(p_pSegmentDescriptor + 372)] += *(_QWORD *)(p_pSegmentDescriptor + 40);
            v72 = P;
          }
          v102 += 8LL;
          --v71;
        }
        while ( v71 );
      }
      if ( (_DWORD)v13 )
      {
        v103 = 0LL;
        do
        {
          if ( v72[v103] <= 0x20000000uLL )
          {
            v72[v103] = 0LL;
            v72 = P;
          }
          v103 += 2LL;
          --v21;
        }
        while ( v21 );
      }
      v104 = *v72 == 0LL;
      if ( v31 )
      {
        p_pSegmentDescriptor = 0LL;
        while ( 1 )
        {
          v105 = *(_DWORD **)(p_pSegmentDescriptor + *((_QWORD *)v7 + 464));
          v106 = &v72[2 * (unsigned int)v105[93]];
          if ( (v105[14] & 0x1041) != 0 )
            break;
          if ( !v104 )
          {
            v105[108] = 0;
            v105[14] |= 0x80000u;
LABEL_190:
            v72 = P;
          }
          p_pSegmentDescriptor += 8LL;
          if ( !--v101 )
            goto LABEL_192;
        }
        if ( v104 )
        {
          v105[108] = 0;
          v105[14] |= 0x80000u;
          *v106 += *(_QWORD *)(*(_QWORD *)(p_pSegmentDescriptor + *((_QWORD *)v7 + 464)) + 40LL);
        }
        else
        {
          v105[14] |= 0x100000u;
          v105[108] = 1;
          v106[1] += *(_QWORD *)(*(_QWORD *)(p_pSegmentDescriptor + *((_QWORD *)v7 + 464)) + 40LL);
        }
        goto LABEL_190;
      }
    }
LABEL_192:
    v110 = qword_1C002F318;
    v111 = *((_QWORD *)v7 + 807);
    v190 = qword_1C002F318;
    if ( qword_1C002F318 && v111 >= qword_1C002F318 )
      v111 = qword_1C002F318;
    v112 = 0LL;
    if ( v179 )
    {
      v113 = 0LL;
      v114 = 0LL;
      v182 = 0LL;
      v185 = 0LL;
      while ( 1 )
      {
        v115 = (_QWORD *)((char *)v72 + v114);
        v116 = v113 + *((_QWORD *)v7 + 5111);
        LOBYTE(v71) = 0;
        v117 = 0;
        if ( v175 )
        {
          v118 = v192;
          v119 = 0LL;
          do
          {
            v120 = *(_QWORD *)(v119 + *((_QWORD *)v7 + 464));
            v121 = *(_DWORD *)(v120 + 56);
            if ( (v121 & 0x80000) != 0 )
            {
              if ( (v121 & 4) == 0 )
                *(_BYTE *)(v116 + 258) = 1;
              v121 = *(_DWORD *)(v120 + 56);
              v71 = (unsigned __int8)v71;
              if ( (v121 & 0x1001) == 0 )
                v71 = 1LL;
            }
            v113 = v121 & 0x1001;
            if ( (_DWORD)v113 )
              v117 = 1;
            v119 += 8LL;
            --v118;
          }
          while ( v118 );
        }
        if ( !*v115 )
          break;
        if ( (_BYTE)v71 && v117 )
          *(_BYTE *)(v116 + 259) = 1;
        if ( v115[1] )
        {
          if ( v110 )
          {
            v123 = v110;
            if ( *v115 < v110 )
              v123 = *v115;
            *v115 = v123;
          }
          v122 = (_DWORD *)(v116 + 224);
          v115[1] = *((_QWORD *)v7 + 807);
          *(_DWORD *)(v116 + 224) = dword_1C002F36C;
          *(_DWORD *)(v116 + 228) = dword_1C002F370;
        }
        else
        {
          *v115 = v111;
          v122 = (_DWORD *)(v116 + 224);
          *(_DWORD *)(v116 + 224) = dword_1C002F370;
        }
        v124 = 2LL;
        v125 = (unsigned __int64 *)(v116 + 48);
        v126 = (_QWORD *)(v116 + 80);
        v71 = v116 + 48;
        p_pSegmentDescriptor = (__int64)v115 - v116;
        do
        {
          v127 = *(_QWORD *)(p_pSegmentDescriptor + v71 - 48) * (unsigned __int64)(unsigned int)(100 - *v122) / 0x64;
          *(_QWORD *)(v71 - 32) = v127;
          *(_QWORD *)(v71 - 16) = v127;
          v128 = 3LL;
          *(_QWORD *)v71 = *(_QWORD *)(p_pSegmentDescriptor + v71 - 48)
                         * (unsigned __int64)(unsigned int)(100 - dword_1C002F374 - *v122)
                         / 0x64;
          do
          {
            v129 = 3LL;
            do
            {
              *v126++ = *(_QWORD *)v71;
              --v129;
            }
            while ( v129 );
            --v128;
          }
          while ( v128 );
          ++v122;
          *(_QWORD *)(v71 + 16) = *(_QWORD *)(v71 - 32) >> 1;
          v71 += 8LL;
          --v124;
        }
        while ( v124 );
        v7 = this;
        v110 = v190;
        if ( (*((_BYTE *)this + 40608) & 1) != 0 )
        {
          v130 = *(_QWORD *)(*((_QWORD *)this + 2) + 904LL);
          if ( v130 )
            v131 = v130 + 144 * v112;
          else
            v131 = 0LL;
          v132 = 1LL << *(_DWORD *)(v131 + 8);
          p_pSegmentDescriptor = 2LL;
          do
          {
            v133 = v132;
            if ( *(v125 - 2) < v132 )
              v133 = *(v125 - 2);
            v22 = *v125 < v132;
            *(v125 - 2) = v133;
            v134 = v132;
            if ( v22 )
              v134 = *v125;
            v22 = v125[2] < v132;
            *v125 = v134;
            v135 = v132;
            if ( v22 )
              v135 = v125[2];
            v125[2] = v135;
            ++v125;
            --p_pSegmentDescriptor;
          }
          while ( p_pSegmentDescriptor );
        }
        v112 = (unsigned int)(v112 + 1);
        v114 = v185 + 16;
        v113 = v182 + 264;
        v185 += 16LL;
        v182 += 264LL;
        if ( (unsigned int)v112 >= v179 )
          goto LABEL_239;
        v72 = P;
      }
      v109 = WdLogNewEntry5_WdAssertion(v113, v116, v115, v71);
      *(_QWORD *)(v109 + 24) = 1419LL;
      goto LABEL_182;
    }
LABEL_239:
    *((_DWORD *)v7 + 926) = v175;
    if ( (*((_BYTE *)v7 + 40608) & 1) != 0 )
    {
      if ( dword_1C002F304 )
      {
        v136 = dword_1C002F304;
        v137 = 24LL * (unsigned int)dword_1C002F304;
        if ( !is_mul_ok((unsigned int)dword_1C002F304, 0x18uLL) )
          v137 = -1LL;
        v22 = __CFADD__(v137, 8LL);
        v138 = v137 + 8;
        if ( v22 )
          v138 = -1LL;
        v139 = operator new(v138, 0x32356956u, p_pSegmentDescriptor, PagedPool);
        if ( v139 )
        {
          *v139 = v136;
          v139 += 2;
        }
        *((_QWORD *)v7 + 5082) = v139;
        if ( !v139 )
        {
          v144 = WdLogNewEntry5_WdAssertion(v141, v140, v142, v143);
          *(_QWORD *)(v144 + 24) = 1530LL;
LABEL_249:
          WdLogEvent5_WdAssertion(v144);
          LODWORD(v26) = -1073741801;
          goto LABEL_271;
        }
        v145 = 48LL * (unsigned int)dword_1C002F308;
        if ( !is_mul_ok((unsigned int)dword_1C002F308, 0x30uLL) )
          v145 = -1LL;
        v146 = operator new(v145, 0x32356956u, v142, PagedPool);
        *((_QWORD *)v7 + 5086) = v146;
        if ( !v146 )
        {
          v144 = WdLogNewEntry5_WdAssertion(v148, v147, v149, v150);
          *(_QWORD *)(v144 + 24) = 1537LL;
          goto LABEL_249;
        }
      }
      *((_DWORD *)v7 + 10151) = 0;
      v151 = 0LL;
      *((_BYTE *)v7 + 40608) &= ~0x20u;
      if ( v179 )
      {
        v152 = 0LL;
        do
        {
          v153 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 904LL);
          v154 = v153 ? (const struct DXGADAPTER_GPUMMUCAPS *)(v153 + 144 * v151) : 0LL;
          v155 = (unsigned int *)(v152 + *((_QWORD *)v7 + 5006));
          LODWORD(v26) = VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
                           (VIDMM_PHYSICAL_ADAPTER *)v155,
                           v7,
                           v151,
                           (struct VIDMM_SEGMENT *const *)(*((_QWORD *)v7 + 464) + 8LL * v155[1]),
                           v154,
                           v173,
                           a3->NbSegment);
          if ( (int)v26 < 0 )
            goto LABEL_287;
          v156 = v155[13];
          if ( v156 > *((_DWORD *)v7 + 10151) )
            *((_DWORD *)v7 + 10151) = v156;
          if ( v155[103] == 1 )
            *((_BYTE *)v7 + 40608) |= 0x20u;
          ++a3;
          v151 = (unsigned int)(v151 + 1);
          v152 += 456LL;
        }
        while ( (unsigned int)v151 < v179 );
      }
      if ( a4 >= 0x5023 )
        v157 = dword_1C002F30C;
      else
        v157 = 1 << *((_DWORD *)v7 + 10151) << 12;
      *((_DWORD *)v7 + 10163) = v157;
      LODWORD(v26) = VIDMM_PAGING_PROCESS::CreateVaAllocator((VIDMM_GLOBAL *)((char *)v7 + 40056), v7);
      if ( (int)v26 < 0 )
        goto LABEL_271;
    }
    LODWORD(v26) = VIDMM_GLOBAL::CreateWorkerThread((struct _KEVENT **)v7);
    if ( (int)v26 < 0 )
    {
      v162 = WdLogNewEntry5_WdAssertion(v159, v158, v160, v161);
      *(_QWORD *)(v162 + 24) = 1600LL;
      WdLogEvent5_WdAssertion(v162);
      goto LABEL_271;
    }
    *((_QWORD *)v7 + 882) = v188;
    *((_BYTE *)v7 + 7065) = v188 >= qword_1C002F110;
    *((_QWORD *)v7 + 976) = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)v7 + 977) = MEMORY[0xFFFFF78000000014];
    goto LABEL_287;
  }
  v74 = 0LL;
  v75 = 0LL;
  v180 = 0LL;
  p_pSegmentDescriptor = (__int64)&a3->pSegmentDescriptor;
  v186 = 0LL;
  v184 = &a3->pSegmentDescriptor;
  while ( 1 )
  {
    v76 = *((_QWORD *)v7 + 5006);
    v176 = 0;
    v77 = *(unsigned int **)p_pSegmentDescriptor;
    v187 = v76;
    if ( *(_DWORD *)(v75 + v76 + 8) )
      break;
LABEL_158:
    ++v73;
    p_pSegmentDescriptor = (__int64)(v184 + 5);
    v178 = v73;
    v75 += 456LL;
    v184 += 5;
    v74 += 16LL;
    v186 = v75;
    v180 = v74;
    if ( v73 >= (unsigned int)v13 )
    {
      v68 = v181;
      v21 = v13;
      v31 = v175;
      goto LABEL_160;
    }
  }
  while ( 1 )
  {
    v78 = v77;
    v79 = (__int64)(v77 + 24);
    v189 = v79;
    if ( (*(_BYTE *)(v75 + v76 + 420) & 3) != 0 && v8 == *(unsigned __int16 *)(v75 + v76 + 12) )
    {
      v80 = (VIDMM_SEGMENT *)operator new(0x1B8uLL, 0x36306956u, (POOL_TYPE)512);
      v82 = v80;
      if ( v80 )
      {
        VIDMM_SEGMENT::VIDMM_SEGMENT(v80);
        *(_QWORD *)v82 = &VIDMM_SYSMEM_SEGMENT::`vftable';
      }
      else
      {
        v82 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v8) = v82;
      v83 = *((_QWORD *)v7 + 464);
      if ( !*(_QWORD *)(v83 + 8LL * v8) )
        goto LABEL_179;
      memset(v195, 0, sizeof(v195));
      v84 = LODWORD(v195[0]) | 0x1180;
      LODWORD(v195[0]) |= 0x1180u;
      if ( (*(_BYTE *)(v75 + v187 + 420) & 1) != 0 )
      {
        v85 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 904LL);
        if ( v85 )
          v86 = (unsigned __int8 *)(v85 + 144LL * v178);
        else
          v86 = 0LL;
        v87 = (*v86 >> 4) & 1;
      }
      else
      {
        LOBYTE(v87) = 1;
      }
      v173 = (struct DXGK_PHYSICALADAPTERINFO *)v195;
      LODWORD(v195[0]) = v84 & 0xFFFFFBEF | (16 * (v87 & 1 | ((v174 & 1) << 6))) | 4;
      v195[2] = qword_1C002F118;
      v88 = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, _QWORD, _QWORD, unsigned int))(**(_QWORD **)(v83 + 8LL * v8)
                                                                                            + 8LL))(
              *(_QWORD *)(v83 + 8LL * v8),
              v7,
              0LL,
              v8,
              v176);
      v26 = v88;
      if ( v88 < 0 )
      {
        _InterlockedAdd(&dword_1C002F58C, 1u);
        v107 = WdLogNewEntry5_WdLowResource(v89);
        *(_QWORD *)(v107 + 24) = v26;
        goto LABEL_178;
      }
      if ( a4 >= 0x5013 )
      {
        v90 = *(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v8);
        if ( *(_QWORD *)((char *)v72 + v180 + 8) )
        {
          *(_DWORD *)(v90 + 56) |= 0x100000u;
          *(_DWORD *)(v90 + 432) = 1;
          *(_QWORD *)((char *)v72 + v180 + 8) += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v176) + 40LL);
        }
        else
        {
          *(_DWORD *)(v90 + 432) = 0;
          *(_DWORD *)(v90 + 56) |= 0x80000u;
          *(_QWORD *)((char *)v72 + v180) += *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v176) + 40LL);
        }
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 464) + 8LL * v8) + 372LL) = v178;
      goto LABEL_156;
    }
    v91 = *v78;
    if ( (v91 & 0xFFE00000) != 0
      || (v91 & 2) != 0
      || (v91 & 0x80u) == 0LL && (v91 & 0x300) != 0
      || (*v78 & 0x300) == 0x300
      || (v91 & 0x2000) != 0 && (v91 & 5) != 0 )
    {
LABEL_181:
      v109 = WdLogNewEntry5_WdAssertion(v91, v76, v79, v71);
      *(_QWORD *)(v109 + 24) = v8;
LABEL_182:
      WdLogEvent5_WdAssertion(v109);
      LODWORD(v26) = -1073741811;
      goto LABEL_271;
    }
    if ( (v78[4] & 0xFFFLL) != 0 )
    {
      v92 = WdLogNewEntry5_WdWarning(v91);
      *(_QWORD *)(v92 + 24) = 4096LL;
      WdLogEvent5_WdWarning(v92);
      v76 = v187;
      *((_QWORD *)v78 + 2) -= *((_QWORD *)v78 + 2) & 0xFFFLL;
    }
    if ( (*v78 & 0x400) != 0 )
      v188 += *((_QWORD *)v78 + 2);
    if ( (*v78 & 1) == 0 )
      break;
    v93 = (VIDMM_SEGMENT *)operator new(0x1D8uLL, 0x36306956u, (POOL_TYPE)512);
    v94 = v93;
    if ( v93 )
    {
      VIDMM_SEGMENT::VIDMM_SEGMENT(v93);
      *(_QWORD *)v94 = &VIDMM_APERTURE_SEGMENT::`vftable';
      *((_QWORD *)v94 + 55) = 0LL;
      *((_QWORD *)v94 + 56) = 0LL;
      *((_QWORD *)v94 + 58) = 0LL;
      *((_QWORD *)v94 + 57) = 0LL;
    }
    else
    {
      v94 = 0LL;
    }
    v95 = 8LL * v8;
    *(_QWORD *)(v95 + *((_QWORD *)v7 + 464)) = v94;
    v81 = *(_QWORD *)(v95 + *((_QWORD *)v7 + 464));
    if ( !v81 )
    {
LABEL_179:
      _InterlockedAdd(&dword_1C002F588, 1u);
      goto LABEL_180;
    }
    v173 = (struct DXGK_PHYSICALADAPTERINFO *)v78;
    LODWORD(v26) = (*(__int64 (__fastcall **)(__int64, VIDMM_GLOBAL *, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, unsigned int))(*(_QWORD *)v81 + 8LL))(
                     v81,
                     v7,
                     NotifyAllocationReclaimed,
                     v8,
                     v176);
    if ( (int)v26 < 0 )
    {
      _InterlockedAdd(&dword_1C002F58C, 1u);
LABEL_184:
      v107 = WdLogNewEntry5_WdLowResource(v91);
      *(_QWORD *)(v107 + 24) = v8;
LABEL_178:
      WdLogEvent5_WdLowResource(v107);
      goto LABEL_271;
    }
    v91 = *(_QWORD *)(v95 + *((_QWORD *)v7 + 464));
    if ( (*(_DWORD *)(v91 + 56) & 0x10) != 0 )
      *((_BYTE *)v7 + 6465) = 1;
    v76 = *v78;
    if ( (v76 & 0x400) != 0 )
      v174 = 1;
LABEL_142:
    v71 = 0x80000LL;
    if ( (v76 & 0x80000) != 0 )
    {
      if ( a4 < 0x5013 )
        goto LABEL_181;
      *(_QWORD *)((char *)v72 + v180) += *((_QWORD *)v78 + 2);
    }
    else
    {
      v79 = 0x100000LL;
      if ( (v76 & 0x100000) != 0 )
      {
        if ( a4 < 0x5013 )
          goto LABEL_181;
        *(_QWORD *)((char *)v72 + v180 + 8) += *((_QWORD *)v78 + 2);
        v99 = *(_QWORD *)(v95 + *((_QWORD *)v7 + 464));
        *(_DWORD *)(v99 + 56) |= 0x100000u;
        *(_DWORD *)(v99 + 432) = 1;
        goto LABEL_153;
      }
      if ( (v76 & 0x8000) == 0 )
        goto LABEL_153;
      if ( a4 >= 0x5013 )
        goto LABEL_181;
      if ( (v76 & 0x41) != 0 )
        goto LABEL_153;
      *(_QWORD *)((char *)v72 + v180) += *((_QWORD *)v78 + 2);
    }
    v100 = *(_QWORD *)(v95 + *((_QWORD *)v7 + 464));
    *(_DWORD *)(v100 + 432) = 0;
    *(_DWORD *)(v100 + 56) |= 0x80000u;
LABEL_153:
    *(_DWORD *)(*(_QWORD *)(v95 + *((_QWORD *)v7 + 464)) + 372LL) = v178;
    if ( (*((_BYTE *)v78 + 2) & 1) != 0 )
    {
      LODWORD(v26) = VIDMM_SEGMENT::SetVprRange(
                       *(VIDMM_SEGMENT **)(v95 + *((_QWORD *)v7 + 464)),
                       *((_QWORD *)v78 + 8),
                       *((_QWORD *)v78 + 9),
                       v78[20],
                       v78[21]);
      if ( (int)v26 < 0 )
        goto LABEL_271;
    }
    v75 = v186;
LABEL_156:
    v76 = v187;
    v77 = (unsigned int *)v189;
    ++v8;
    if ( ++v176 >= *(_DWORD *)(v75 + v187 + 8) )
    {
      v72 = P;
      v74 = v180;
      v73 = v178;
      goto LABEL_158;
    }
  }
  *(_BYTE *)(v75 + v76 + 420) |= 8u;
  v96 = (*((_BYTE *)v78 + 2) & 1) != 0 && !v78[21];
  *(_BYTE *)(v75 + v76 + 421) ^= (*(_BYTE *)(v75 + v76 + 421) ^ (4 * v96)) & 4;
  v97 = (VIDMM_SEGMENT *)operator new(0x1C0uLL, 0x36306956u, (POOL_TYPE)512);
  v98 = v97;
  if ( v97 )
  {
    VIDMM_SEGMENT::VIDMM_SEGMENT(v97);
    *((_QWORD *)v98 + 55) = 0LL;
    *(_QWORD *)v98 = &VIDMM_MEMORY_SEGMENT::`vftable';
  }
  else
  {
    v98 = 0LL;
  }
  v95 = 8LL * v8;
  *(_QWORD *)(v95 + *((_QWORD *)v7 + 464)) = v98;
  if ( *(_QWORD *)(v95 + *((_QWORD *)v7 + 464)) )
  {
    if ( (*v78 & 0x800) != 0 )
      *(_BYTE *)(v186 + v187 + 421) |= 2u;
    v173 = (struct DXGK_PHYSICALADAPTERINFO *)v78;
    LODWORD(v26) = (*(__int64 (__fastcall **)(_QWORD, VIDMM_GLOBAL *, void (__fastcall *)(struct _VIDMM_GLOBAL_ALLOC *), _QWORD, unsigned int))(**(_QWORD **)(v95 + *((_QWORD *)v7 + 464)) + 8LL))(
                     *(_QWORD *)(v95 + *((_QWORD *)v7 + 464)),
                     v7,
                     NotifyAllocationReclaimed,
                     v8,
                     v176);
    if ( (int)v26 < 0 )
    {
      _InterlockedAdd(&dword_1C002F568, 1u);
      goto LABEL_184;
    }
    v76 = *v78;
    if ( (v76 & 0x40) == 0 )
    {
      v91 = *(_QWORD *)(v95 + *((_QWORD *)v7 + 464));
      v181 += *(_QWORD *)(v91 + 40);
    }
    goto LABEL_142;
  }
  _InterlockedAdd(&dword_1C002F564, 1u);
LABEL_180:
  v108 = WdLogNewEntry5_WdLowResource(v81);
  *(_QWORD *)(v108 + 24) = v8;
  WdLogEvent5_WdLowResource(v108);
  LODWORD(v26) = -1073741801;
LABEL_271:
  if ( v8 )
  {
    v163 = 8LL * v8;
    do
    {
      v163 -= 8LL;
      --v8;
      v164 = *(void (__fastcall ****)(_QWORD, __int64))(v163 + *((_QWORD *)v7 + 464));
      if ( v164 )
        (**v164)(v164, 1LL);
    }
    while ( v8 );
  }
LABEL_280:
  v165 = (void *)*((_QWORD *)v7 + 464);
  if ( v165 )
  {
    operator delete[](v165);
    *((_QWORD *)v7 + 464) = 0LL;
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess((VIDMM_GLOBAL *)((char *)v7 + 40056));
  v166 = (void *)*((_QWORD *)v7 + 804);
  if ( v166 )
  {
    ZwClose(v166);
    *((_QWORD *)v7 + 804) = 0LL;
  }
  operator delete[](*((void **)v7 + 803));
  v167 = (void *)*((_QWORD *)v7 + 889);
  *((_QWORD *)v7 + 803) = 0LL;
  operator delete[](v167);
  v171 = (DXGFASTMUTEX *)*((_QWORD *)v7 + 887);
  *((_QWORD *)v7 + 889) = 0LL;
  if ( v171 )
    DXGFASTMUTEX::`scalar deleting destructor'(v171, v168, v169, v170);
  *((_QWORD *)v7 + 887) = 0LL;
LABEL_287:
  if ( P != v197 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v26;
}
