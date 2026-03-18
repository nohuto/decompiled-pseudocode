/*
 * XREFs of ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00847C4
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0085F40 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000CFA8 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010D7C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C001EF44 (-VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULT.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F004 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0068E30 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z @ 0x1C0076A24 (-Assign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@AEBV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C009D388 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C014AF18 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C014AF60 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01605D4 (-CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTH.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01608C0 (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 */

__int64 __fastcall DXGCONTEXT::PrepareIndependentFlipToken(
        struct _EX_RUNDOWN_REF *this,
        struct _EX_RUNDOWN_REF *a2,
        struct DXGK_PRESENT_PARAMS *a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4)
{
  unsigned int v8; // ebx
  char v9; // al
  ULONG_PTR Count; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v12; // r12d
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  UINT v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  _BYTE *v20; // r15
  char *v21; // r8
  _QWORD *v22; // rcx
  __int64 v23; // rax
  int v24; // r12d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Ptr_high; // eax
  union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *v26; // r9
  unsigned int v27; // edx
  bool v28; // al
  char *v29; // r8
  char v30; // dl
  int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  UINT v37; // r15d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rcx
  _WORD *v39; // r9
  UINT v40; // edx
  struct _EX_RUNDOWN_REF *v41; // r8
  char *v42; // r8
  struct _EX_RUNDOWN_REF *v43; // r10
  __int64 v44; // rcx
  ULONG_PTR v45; // rax
  __int64 v46; // r8
  struct DXGK_PRESENT_PARAMS *v47; // r12
  _DWORD *v48; // rdx
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v50; // rcx
  struct _EX_RUNDOWN_REF **v51; // rdx
  _QWORD *v52; // rax
  char *v53; // rax
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  char *v57; // rcx
  __int64 v58; // rdx
  int v59; // eax
  _QWORD *v60; // rax
  UINT *v61; // rcx
  DXGK_ALLOCATIONLIST *pAllocationList; // r9
  UINT v63; // r8d
  struct DXGK_PRESENT_PARAMS *v64; // rsi
  char *v65; // rdx
  __int64 v66; // r12
  struct _EX_RUNDOWN_REF *v67; // r11
  unsigned int v68; // r15d
  struct _EX_RUNDOWN_REF *v69; // rsi
  unsigned int v70; // r12d
  struct _EX_RUNDOWN_REF *v71; // rdi
  _QWORD *v72; // rax
  struct _EX_RUNDOWN_REF *v73; // rsi
  _QWORD *v74; // rax
  DXGALLOCATIONREFERENCE *v75; // [rsp+68h] [rbp-2E0h]
  struct _EX_RUNDOWN_REF **v76; // [rsp+68h] [rbp-2E0h]
  UINT v77; // [rsp+70h] [rbp-2D8h]
  struct _EX_RUNDOWN_REF *v78; // [rsp+78h] [rbp-2D0h] BYREF
  UINT v79; // [rsp+80h] [rbp-2C8h]
  char *v80; // [rsp+88h] [rbp-2C0h]
  int v81; // [rsp+90h] [rbp-2B8h]
  unsigned int v82; // [rsp+94h] [rbp-2B4h]
  struct _EX_RUNDOWN_REF *v83; // [rsp+98h] [rbp-2B0h]
  _WORD *v84; // [rsp+A0h] [rbp-2A8h]
  int v85; // [rsp+A8h] [rbp-2A0h]
  int v86; // [rsp+ACh] [rbp-29Ch]
  int v87; // [rsp+B0h] [rbp-298h]
  struct DXGK_PRESENT_PARAMS *v88; // [rsp+B8h] [rbp-290h]
  char *v89; // [rsp+C0h] [rbp-288h]
  int v90; // [rsp+C8h] [rbp-280h]
  int v91; // [rsp+CCh] [rbp-27Ch]
  struct _EX_RUNDOWN_REF *v92; // [rsp+D0h] [rbp-278h]
  int v93; // [rsp+D8h] [rbp-270h]
  _BYTE v94[16]; // [rsp+E0h] [rbp-268h] BYREF
  struct _EX_RUNDOWN_REF *v95; // [rsp+F0h] [rbp-258h]
  struct VIDSCH_SUBMIT_DATA_BASE *v96; // [rsp+F8h] [rbp-250h]
  struct _EX_RUNDOWN_REF *v97[10]; // [rsp+100h] [rbp-248h] BYREF
  __int64 v98; // [rsp+150h] [rbp-1F8h]
  struct DXGPROCESS *Current; // [rsp+158h] [rbp-1F0h]
  struct _EX_RUNDOWN_REF *v100; // [rsp+160h] [rbp-1E8h] BYREF
  _BYTE v101[32]; // [rsp+168h] [rbp-1E0h] BYREF
  UINT v102; // [rsp+188h] [rbp-1C0h]
  _DXGKARG_PRESENT v103; // [rsp+190h] [rbp-1B8h] BYREF
  _QWORD v104[6]; // [rsp+240h] [rbp-108h] BYREF
  DXGK_ALLOCATIONLIST *v105; // [rsp+270h] [rbp-D8h] BYREF
  _BYTE v106[128]; // [rsp+278h] [rbp-D0h] BYREF
  UINT v107; // [rsp+2F8h] [rbp-50h]

  v96 = a4;
  v88 = a3;
  v92 = a2;
  v97[1] = this;
  v97[2] = a2;
  v97[4] = (struct _EX_RUNDOWN_REF *)a3;
  v97[6] = (struct _EX_RUNDOWN_REF *)a4;
  if ( LODWORD(a2->Count) != 2 || (HIDWORD(a2[7].Ptr) & 0x40) != 0 )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v8 = 0;
  }
  if ( !v9 || !a3 )
    return 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(this[2].Count + 40), (DXGALLOCATIONREFERENCE *)&v78, *((_DWORD *)a3 + 5));
  if ( !v78 )
  {
LABEL_21:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v78);
    return 0LL;
  }
  Count = v78[5].Count;
  if ( *((_QWORD *)a4 + 3) && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
    *((_QWORD *)a4 + 4) = *(_QWORD *)(*(_QWORD *)(Count + 56) + 160LL);
  v95 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a3 + 187);
  v97[7] = v95;
  Current = DXGPROCESS::GetCurrent();
  v12 = (*(_DWORD *)(v78[6].Count + 4) >> 6) & 0xF;
  LODWORD(a2[5].Count) = v12;
  *((_DWORD *)a4 + 29) = v12;
  RtlCopyLuid((PLUID)a4 + 19, (PLUID)&a2[9]);
  *((struct _EX_RUNDOWN_REF *)a4 + 20) = a2[1];
  *(_DWORD *)a4 &= ~0x10000u;
  v13 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *((_DWORD *)a3 + 22)) & 4;
  *(_DWORD *)a4 = v13;
  v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)*((_DWORD *)a3 + 22)) & 8;
  *(_DWORD *)a4 = v14;
  v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(HIDWORD(a2[7].Ptr) >> 1)) & 0x10;
  *(_DWORD *)a4 = v15;
  v16 = v15 ^ (v15 ^ (32 * HIDWORD(a2[7].Ptr))) & 0x10000000;
  *(_DWORD *)a4 = v16;
  v17 = v16 ^ (v16 ^ (4 * *((_DWORD *)a3 + 22))) & 0x80000;
  *(_DWORD *)a4 = v17;
  v18 = v17 ^ (v17 ^ (4 * *((_DWORD *)a3 + 22))) & 0x100000;
  *(_DWORD *)a4 = v18;
  *(_DWORD *)a4 = v18 ^ (v18 ^ (4 * *((_DWORD *)a3 + 22))) & 0x200000;
  a2[4].Count = *(ULONG_PTR *)(*(_QWORD *)(this[2].Count + 16) + 16LL);
  *((_DWORD *)a4 + 28) = HIDWORD(a2[15].Ptr);
  *((_DWORD *)a4 + 46) = HIDWORD(a2[5].Ptr);
  *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ (HIDWORD(a2[7].Ptr) << 6)) & 0x2000000;
  *((_DWORD *)a4 + 36) = HIDWORD(a2[100].Ptr);
  *((_DWORD *)a4 + 37) = a2[101].Count;
  *((_DWORD *)a4 + 34) = HIDWORD(this[40].Ptr);
  if ( bTracingEnabled )
    *((_QWORD *)a4 + 22) = _guard_dispatch_icall_fptr();
  *((_DWORD *)a4 + 31) = a2[7].Count;
  v91 = 1;
  v19 = _guard_dispatch_icall_fptr();
  *((_DWORD *)a4 + 30) = v19;
  if ( v19 != 5 && *((_DWORD *)a4 + 31) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v22[3] = a2;
    v22[4] = a2[2].Count;
    v22[5] = HIDWORD(a2[15].Ptr);
    v22[6] = *((int *)a4 + 30);
LABEL_25:
    WdLogEvent5_WdPresentTokenEvent(v22);
    goto LABEL_21;
  }
  v86 = 0;
  v87 = 0;
  v85 = 0;
  v20 = (char *)a4 + 360;
  v21 = (char *)a4 + 376;
  if ( !*((_BYTE *)a4 + 348) )
    v21 = (char *)a4 + 360;
  v89 = v21;
  v84 = v21 + 24;
  _guard_dispatch_icall_fptr();
  if ( !v86 )
  {
    if ( v85 )
      _guard_dispatch_icall_fptr();
    goto LABEL_21;
  }
  *((struct _EX_RUNDOWN_REF *)a4 + 21) = a2[10];
  v24 = 0;
  v81 = 0;
  Ptr_high = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)HIDWORD(a2[7].Ptr);
  if ( (*(_DWORD *)&Ptr_high & 0x200000) == 0 )
  {
    _guard_dispatch_icall_fptr();
    v23 = WdLogNewEntry5_WdPresentTokenEvent();
    *(_QWORD *)(v23 + 24) = 1339LL;
    v22 = (_QWORD *)v23;
    goto LABEL_25;
  }
  if ( v87 )
  {
    if ( (*(_DWORD *)&Ptr_high & 0x400000) != 0 )
    {
      DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v94, *(struct ADAPTER_RENDER **)(this[2].Count + 16));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v94);
      v26 = (union _D3DKMT_PRESENTHISTORYTOKEN::$04C5B4CD591473CAB2C95D87D2CBE864 *)&a2[2];
      v27 = *((_DWORD *)a4 + 29);
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 848LL) )
        v28 = DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData2((DXGCONTEXT *)this, v27, 0, &v26->Flip);
      else
        v28 = DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData((DXGCONTEXT *)this, v27, 0, &v26->Flip);
      if ( !v28 )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
        _guard_dispatch_icall_fptr();
        v36 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
        *(_QWORD *)(v36 + 24) = 0LL;
        WdLogEvent5_WdWarning(v36);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v94);
        goto LABEL_21;
      }
      *v84 = WORD2(a2[92].Ptr);
      v29 = v89;
      *((_WORD *)v89 + 14) = a2[93].Count;
      *((_WORD *)v29 + 13) = WORD2(a2[93].Ptr);
      *((_WORD *)v29 + 15) = a2[94].Count;
      v30 = (HIDWORD(a2[7].Ptr) >> 10) & 7;
      *((_DWORD *)v29 + 13) ^= (*((_DWORD *)v29 + 13) ^ ((v30 & 1) << 7)) & 0x80;
      v31 = *((_DWORD *)v29 + 13) ^ (*((_DWORD *)v29 + 13) ^ ((unsigned __int8)(v30 & 2) >> 1 << 8)) & 0x100;
      *((_DWORD *)v29 + 13) = v31 ^ ((unsigned __int16)v31 ^ ((unsigned __int8)(v30 & 4) >> 2 << 9)) & 0x200;
      _guard_dispatch_icall_fptr();
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v94);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v94);
    }
    *(_DWORD *)a4 |= 0x4000000u;
  }
  else if ( HIDWORD(a2[93].Ptr) - HIDWORD(a2[92].Ptr) != HIDWORD(a2[94].Ptr)
         || LODWORD(a2[94].Count) - LODWORD(a2[93].Count) != LODWORD(a2[95].Count) )
  {
    _guard_dispatch_icall_fptr();
    v74 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v74[3] = HIDWORD(a2[93].Ptr) - HIDWORD(a2[92].Ptr);
    v74[4] = LODWORD(a2[94].Count) - LODWORD(a2[93].Count);
    v74[5] = HIDWORD(a2[94].Ptr);
    v74[6] = LODWORD(a2[95].Count);
    WdLogEvent5_WdPresentTokenEvent(v74);
    goto LABEL_102;
  }
  HIDWORD(a2[101].Ptr) = 0;
  if ( !*((_BYTE *)a4 + 348) )
    v20 = (char *)a4 + 352;
  *v20 = 1;
  v37 = 1;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
    v37 = *((_DWORD *)v88 + 23) + 1;
  v82 = 0;
  PoolWithTag = 0LL;
  v83 = 0LL;
  v100 = 0LL;
  v102 = 0;
  if ( v37 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v101;
    v100 = (struct _EX_RUNDOWN_REF *)v101;
LABEL_46:
    v83 = PoolWithTag;
    v102 = v37;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v37);
      PoolWithTag = v100;
      v83 = v100;
    }
    goto LABEL_48;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v37 >= 8 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v37, 0x4B677844u);
    v100 = PoolWithTag;
    goto LABEL_46;
  }
LABEL_48:
  v97[9] = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_51:
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v100);
    v8 = -1073741801;
LABEL_102:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v78);
    return v8;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v104, v37);
  v39 = (_WORD *)v104[0];
  v84 = (_WORD *)v104[0];
  if ( !v104[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v104);
    goto LABEL_51;
  }
  v40 = 0;
  while ( 1 )
  {
    v79 = v40;
    if ( v40 >= v37 )
      break;
    if ( v40 )
    {
      v46 = 8LL * v40;
      v98 = v46;
      v47 = v88;
      v93 = *(_DWORD *)(*(_QWORD *)(v46 + *((_QWORD *)v88 + 187)) + 328LL);
      LODWORD(v80) = 0;
      v48 = (_DWORD *)(*((_QWORD *)v88 + 182) + 4LL * (v40 - 1));
      if ( v48 + 1 < v48 || (unsigned __int64)(v48 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      LODWORD(v80) = *v48;
      v76 = (struct _EX_RUNDOWN_REF **)&v39[(unsigned __int64)v46 / 2];
      AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                  (__int64)Current,
                                                  (DXGALLOCATIONREFERENCE *)v97,
                                                  (unsigned int)v80);
      DXGALLOCATIONREFERENCE::Assign(v76, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v97);
      v51 = v76;
      v43 = *v76;
      v75 = (DXGALLOCATIONREFERENCE *)v43;
      if ( !v43 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        v52[3] = (unsigned int)v80;
        v52[4] = -1073741811LL;
        v52[5] = 1499LL;
        WdLogEvent5_WdError(v52);
        v24 = -1073741811;
        v81 = -1073741811;
        break;
      }
      if ( *((_BYTE *)a4 + 348) )
        v42 = (char *)a4 + 64 * (unsigned __int64)(v79 * *((_DWORD *)a4 + 91)) + 376;
      else
        v42 = (char *)a4 + 360;
      v80 = v42;
      v53 = v89;
      *(_OWORD *)(v42 + 24) = *(_OWORD *)(v89 + 24);
      *(_OWORD *)(v42 + 40) = *(_OWORD *)(v53 + 40);
      *((_QWORD *)v42 + 1) = *(_QWORD *)((*v51)[6].Count + 16);
      v54 = v98;
      *((_QWORD *)v42 + 7) = *(_QWORD *)(*(_QWORD *)(v98 + *((_QWORD *)v47 + 187)) + 168LL);
      *((_DWORD *)a4 + 34) |= 1 << v93;
      v44 = v54 + *((unsigned int *)a4 + 88);
      v45 = *(_QWORD *)(*(_QWORD *)(v54 + *((_QWORD *)v47 + 187)) + 216LL);
    }
    else
    {
      v41 = (struct _EX_RUNDOWN_REF *)v89;
      v80 = v89;
      v75 = (DXGALLOCATIONREFERENCE *)v78;
      *((_QWORD *)v89 + 1) = *(_QWORD *)(v78[6].Count + 16);
      v41[7].Count = this[21].Count;
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
        goto LABEL_67;
      v44 = *((unsigned int *)a4 + 88);
      v45 = this[27].Count;
    }
    *(_QWORD *)((char *)a4 + v44) = v45;
LABEL_67:
    v24 = VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 424LL),
            *(struct VIDMM_DEVICE **)(this[2].Count + 536),
            (struct _VIDMM_MULTI_ALLOC *)v43[3].Count,
            (struct VIDMM_ALLOC **)v42);
    v81 = v24;
    if ( v24 < 0 )
    {
      v56 = WdLogNewEntry5_WdError(v55);
      *(_QWORD *)(v56 + 24) = v75;
      *(_QWORD *)(v56 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v56);
      break;
    }
    v83[v79] = *(struct _EX_RUNDOWN_REF *)v80;
    ++v82;
    _guard_dispatch_icall_fptr();
    v57 = v80;
    *((_DWORD *)v80 + 13) ^= (*((_DWORD *)v80 + 13) ^ (v90 << 17)) & 0x3E0000;
    v58 = *((_QWORD *)v75 + 5);
    if ( v58 )
      v59 = (*(_DWORD *)(v58 + 4) >> 3) & 1;
    else
      v59 = 0;
    *((_DWORD *)v57 + 13) ^= (*((_DWORD *)v57 + 13) ^ (v59 << 23)) & 0x800000;
    *(_DWORD *)a4 |= 0x1000000u;
    v60 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v60[3] = a2;
    v60[4] = a2[2].Count;
    v60[5] = HIDWORD(a2[15].Ptr);
    v60[6] = a2[9].Count;
    v60[7] = a2[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v60);
    v40 = v79 + 1;
    v39 = v84;
  }
  *((_DWORD *)a4 + 35) = v37;
  if ( v24 < 0 )
    goto LABEL_96;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 1380LL) & 0x20) != 0 )
  {
    memset(&v103, 0, sizeof(v103));
    v103.Flags.Value |= 0x2000u;
    v61 = (UINT *)*((_QWORD *)a4 + 3);
    if ( v61 )
    {
      v103.PrivateDriverDataSize = *v61;
      v103.pPrivateDriverData = v61 + 2;
    }
    pAllocationList = 0LL;
    v105 = 0LL;
    v107 = 0;
    if ( v37 <= 4 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)v106;
      v105 = (DXGK_ALLOCATIONLIST *)v106;
      goto LABEL_81;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v37 >= 0x20 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)ExAllocatePoolWithTag(PagedPool, 32LL * v37, 0x4B677844u);
      v105 = pAllocationList;
LABEL_81:
      v107 = v37;
      if ( pAllocationList )
      {
        memset(pAllocationList, 0, 32LL * v37);
        pAllocationList = v105;
      }
    }
    v103.pAllocationList = pAllocationList;
    if ( pAllocationList )
    {
      v63 = 0;
      v64 = v88;
      while ( 1 )
      {
        v77 = v63;
        if ( v63 >= v37 )
          break;
        if ( *((_BYTE *)a4 + 348) )
          v65 = (char *)a4 + 64 * (unsigned __int64)(v63 * *((_DWORD *)a4 + 91)) + 376;
        else
          v65 = (char *)a4 + 360;
        v66 = 32LL * v63;
        *(LONGLONG *)((char *)&pAllocationList->PhysicalAddress.QuadPart + v66) = *((_QWORD *)v65 + 2);
        *(_WORD *)((char *)&v103.pAllocationList[1].hDeviceSpecificAllocation + v66) = (*((_DWORD *)v65 + 13) >> 17) & 0x1F;
        *(_WORD *)((char *)&v103.pAllocationList[1].hDeviceSpecificAllocation + v66 + 2) = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v64 + 187) + 8LL * v63) + 328LL);
        if ( v63 )
          v67 = *(struct _EX_RUNDOWN_REF **)&v84[4 * v63];
        else
          v67 = v78;
        *(struct _EX_RUNDOWN_REF *)((char *)&v103.pAllocationList->hDeviceSpecificAllocation + v66) = v67[4];
        *(_QWORD *)((char *)&v103.pAllocationList->8 + v66) = _guard_dispatch_icall_fptr();
        v63 = v77 + 1;
        pAllocationList = v103.pAllocationList;
      }
      v103.FlipInterval = *((_DWORD *)a4 + 31);
      v103.Flags.Value ^= (*(_WORD *)&v103.Flags.0 ^ (unsigned __int16)(*(_DWORD *)a4 >> 11)) & 0x1700;
      v103.NumSrcAllocations = v37;
      v24 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(this[2].Count + 16), this[21].Ptr, &v103);
    }
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v105);
  }
  if ( v24 < 0 )
  {
LABEL_96:
    v68 = 0;
    v69 = v83;
    v70 = v82;
    v71 = v95;
    while ( v68 < v70 )
    {
      VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
        *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 424LL),
        *(struct VIDMM_DEVICE **)(this[2].Count + 536),
        1 << *(_DWORD *)(v71[v68].Count + 328),
        (struct VIDMM_ALLOC *)v69[v68].Count);
      ++v68;
    }
    v72 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v73 = v92;
    v72[3] = v92;
    v72[4] = v73[2].Count;
    v72[5] = HIDWORD(v73[15].Ptr);
    v72[6] = v73[9].Count;
    v72[7] = v73[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v72);
    *(_DWORD *)v96 &= ~0x1000000u;
    v24 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v104);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v100);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v78);
  return (unsigned int)v24;
}
