/*
 * XREFs of ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00AF070
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B27C0 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00112A0 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0025D90 (-VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULT.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0025E50 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C009183C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C01702B0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C01702F8 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01862BC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 */

__int64 __fastcall DXGCONTEXT::PrepareIndependentFlipToken(
        struct _EX_RUNDOWN_REF *this,
        struct _EX_RUNDOWN_REF *a2,
        struct DXGK_PRESENT_PARAMS *a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4)
{
  struct DXGK_PRESENT_PARAMS *v5; // r15
  struct _EX_RUNDOWN_REF *v6; // rsi
  ULONG_PTR Count; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  unsigned int v11; // r14d
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int *v19; // r8
  int v20; // eax
  _QWORD *v21; // rax
  __int64 Count_low; // rcx
  char *v23; // r14
  int v24; // edi
  int Ptr_high; // eax
  char v26; // dl
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  char v33; // cl
  _BYTE *v34; // rdx
  unsigned int v35; // r14d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rcx
  UINT i; // r14d
  char *v39; // rdx
  struct _EX_RUNDOWN_REF *v40; // rcx
  __int64 v41; // r10
  __int64 v42; // rcx
  ULONG_PTR v43; // rax
  __int64 v44; // rdi
  unsigned int *v45; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  char *v51; // rdx
  char *v52; // rdx
  struct VIDMM_ALLOC **v53; // r12
  __int64 v54; // rcx
  __int64 v55; // rax
  ULONG_PTR v56; // rax
  int v57; // eax
  _QWORD *v58; // rax
  UINT *v59; // rdx
  DXGK_ALLOCATIONLIST *pAllocationList; // r9
  UINT v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // r12
  struct _EX_RUNDOWN_REF *v66; // r11
  __int64 v67; // rax
  struct _EX_RUNDOWN_REF *v68; // r14
  signed __int64 v69; // rsi
  __int64 v70; // rdi
  _QWORD *v71; // rax
  int v72; // [rsp+30h] [rbp-338h]
  UINT v73; // [rsp+60h] [rbp-308h]
  unsigned int v74; // [rsp+64h] [rbp-304h] BYREF
  struct _EX_RUNDOWN_REF *v75; // [rsp+68h] [rbp-300h] BYREF
  unsigned int v76; // [rsp+70h] [rbp-2F8h]
  struct _EX_RUNDOWN_REF *v77; // [rsp+78h] [rbp-2F0h]
  int v78; // [rsp+80h] [rbp-2E8h]
  unsigned int v79; // [rsp+84h] [rbp-2E4h]
  __int64 v80; // [rsp+88h] [rbp-2E0h]
  int v81; // [rsp+90h] [rbp-2D8h] BYREF
  int v82; // [rsp+94h] [rbp-2D4h] BYREF
  int v83; // [rsp+98h] [rbp-2D0h] BYREF
  int v84; // [rsp+9Ch] [rbp-2CCh] BYREF
  int v85; // [rsp+A0h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v86; // [rsp+A8h] [rbp-2C0h]
  struct _EX_RUNDOWN_REF *v87; // [rsp+B0h] [rbp-2B8h]
  struct DXGK_PRESENT_PARAMS *v88; // [rsp+B8h] [rbp-2B0h]
  struct _EX_RUNDOWN_REF *v89; // [rsp+C0h] [rbp-2A8h]
  _BYTE v90[16]; // [rsp+C8h] [rbp-2A0h] BYREF
  char v91[4]; // [rsp+D8h] [rbp-290h] BYREF
  char v92[4]; // [rsp+DCh] [rbp-28Ch] BYREF
  char v93[8]; // [rsp+E0h] [rbp-288h] BYREF
  __int64 ProcessDxgProcess; // [rsp+E8h] [rbp-280h]
  struct _EX_RUNDOWN_REF *v95[7]; // [rsp+F0h] [rbp-278h] BYREF
  char v96[8]; // [rsp+128h] [rbp-240h] BYREF
  struct _EX_RUNDOWN_REF *v97; // [rsp+130h] [rbp-238h] BYREF
  _BYTE v98[32]; // [rsp+138h] [rbp-230h] BYREF
  unsigned int v99; // [rsp+158h] [rbp-210h]
  char v100[8]; // [rsp+160h] [rbp-208h] BYREF
  char v101[8]; // [rsp+168h] [rbp-200h] BYREF
  __int64 v102; // [rsp+170h] [rbp-1F8h]
  __int64 v103; // [rsp+178h] [rbp-1F0h]
  __int64 v104; // [rsp+180h] [rbp-1E8h]
  __int64 v105; // [rsp+188h] [rbp-1E0h]
  __int64 v106; // [rsp+190h] [rbp-1D8h]
  char v107[8]; // [rsp+198h] [rbp-1D0h] BYREF
  char v108[16]; // [rsp+1A0h] [rbp-1C8h] BYREF
  _DXGKARG_PRESENT v109; // [rsp+1B0h] [rbp-1B8h] BYREF
  _QWORD v110[6]; // [rsp+260h] [rbp-108h] BYREF
  DXGK_ALLOCATIONLIST *v111; // [rsp+290h] [rbp-D8h] BYREF
  _BYTE v112[128]; // [rsp+298h] [rbp-D0h] BYREF
  UINT v113; // [rsp+318h] [rbp-50h]

  v5 = a3;
  v88 = a3;
  v6 = a2;
  v87 = a2;
  v95[3] = this;
  v95[4] = a2;
  v95[5] = (struct _EX_RUNDOWN_REF *)a3;
  v95[6] = (struct _EX_RUNDOWN_REF *)a4;
  if ( LODWORD(a2->Count) != 2 || !a3 )
    return 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  DXGPROCESS::GetAllocationSafe(*(_QWORD *)(this[2].Count + 40), (DXGALLOCATIONREFERENCE *)&v75, *((_DWORD *)a3 + 5));
  if ( !v75 || *(_QWORD *)(*(_QWORD *)(v75[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) )
    goto LABEL_116;
  Count = v75[5].Count;
  if ( *((_QWORD *)a4 + 3) && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
  {
    Count = *(_QWORD *)(*(_QWORD *)(Count + 56) + 168LL);
    *((_QWORD *)a4 + 4) = Count;
  }
  v89 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v5 + 187);
  v95[1] = v89;
  CurrentProcess = PsGetCurrentProcess(Count);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  v11 = (*(_DWORD *)(v75[6].Count + 4) >> 6) & 0xF;
  LODWORD(v6[5].Count) = v11;
  *((_DWORD *)a4 + 29) = v11;
  v77 = v6 + 9;
  RtlCopyLuid((PLUID)a4 + 19, (PLUID)&v6[9]);
  *((struct _EX_RUNDOWN_REF *)a4 + 20) = v6[1];
  *(_DWORD *)a4 &= ~0x10000u;
  v12 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ *((_DWORD *)v5 + 22)) & 4;
  *(_DWORD *)a4 = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)*((_DWORD *)v5 + 22)) & 8;
  *(_DWORD *)a4 = v13;
  v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(HIDWORD(v6[7].Ptr) >> 1)) & 0x10;
  *(_DWORD *)a4 = v14;
  v15 = v14 ^ (v14 ^ (32 * HIDWORD(v6[7].Ptr))) & 0x10000000;
  *(_DWORD *)a4 = v15;
  v16 = v15 ^ (v15 ^ (4 * *((_DWORD *)v5 + 22))) & 0x80000;
  *(_DWORD *)a4 = v16;
  v17 = v16 ^ (v16 ^ (4 * *((_DWORD *)v5 + 22))) & 0x100000;
  *(_DWORD *)a4 = v17;
  *(_DWORD *)a4 = v17 ^ (v17 ^ (4 * *((_DWORD *)v5 + 22))) & 0x200000;
  v6[4].Count = *(ULONG_PTR *)(*(_QWORD *)(this[2].Count + 16) + 16LL);
  *((_DWORD *)a4 + 28) = HIDWORD(v6[15].Ptr);
  *((_DWORD *)a4 + 46) = HIDWORD(v6[5].Ptr);
  *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ (HIDWORD(v6[7].Ptr) << 6)) & 0x2000000;
  *((_DWORD *)a4 + 36) = HIDWORD(v6[100].Ptr);
  *((_DWORD *)a4 + 37) = v6[101].Count;
  *((_DWORD *)a4 + 34) = HIDWORD(this[40].Ptr);
  if ( bTracingEnabled )
    *((_QWORD *)a4 + 22) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 336LL))(
                             *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 408LL),
                             *((unsigned int *)v5 + 5));
  v18 = v6[7].Count;
  *((_DWORD *)a4 + 31) = v18;
  v19 = (int *)((char *)a4 + 124);
  v84 = 1;
  if ( !v18
    && ((HIDWORD(v6[7].Ptr) & 0x800000) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 1516LL) & 0x40) == 0) )
  {
    v19 = &v84;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                 + 376LL)
                                                                     + 8LL)
                                                         + 424LL))(
          *(_QWORD *)(this[2].Count + 568),
          v11,
          v19);
  *((_DWORD *)a4 + 30) = v20;
  if ( v20 != 5 && *((_DWORD *)a4 + 31) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v21[3] = v6;
    v21[4] = v6[2].Count;
    v21[5] = HIDWORD(v6[15].Ptr);
    Count_low = *((int *)a4 + 30);
LABEL_114:
    v21[6] = Count_low;
    goto LABEL_115;
  }
  v81 = 0;
  v83 = 0;
  v82 = 0;
  v74 = 0;
  v23 = (char *)a4 + 568;
  if ( !*((_BYTE *)a4 + 348) )
    v23 = (char *)a4 + 448;
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, char *, int *, int *, unsigned int *, struct _EX_RUNDOWN_REF *, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL) + 8LL) + 320LL))(
    *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 384LL),
    *((unsigned int *)a4 + 29),
    (char *)a4 + 152,
    *((_QWORD *)a4 + 20),
    v23,
    &v81,
    &v83,
    &v74,
    v6 + 10,
    &v82);
  if ( !v81 )
  {
    if ( v82 )
    {
      LOBYTE(v72) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL) + 8LL) + 312LL))(
        *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 384LL),
        *((unsigned int *)a4 + 29),
        v77,
        *((_QWORD *)a4 + 20),
        v74,
        0,
        v72,
        v96,
        v108);
    }
    goto LABEL_116;
  }
  *((struct _EX_RUNDOWN_REF *)a4 + 21) = v6[10];
  v24 = 0;
  v78 = 0;
  Ptr_high = HIDWORD(v6[7].Ptr);
  if ( (Ptr_high & 0x200000) == 0 )
  {
    LOBYTE(v72) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL) + 8LL) + 312LL))(
      *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 384LL),
      *((unsigned int *)a4 + 29),
      v77,
      *((_QWORD *)a4 + 20),
      v74,
      0,
      v72,
      v91,
      v100);
    v21 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v21[3] = 1347LL;
LABEL_115:
    WdLogEvent5_WdPresentTokenEvent(v21);
    goto LABEL_116;
  }
  if ( v83 )
  {
    if ( (Ptr_high & 0x400000) == 0 )
    {
LABEL_30:
      *(_DWORD *)a4 |= 0x4000000u;
      goto LABEL_33;
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v90, *(struct ADAPTER_RENDER **)(this[2].Count + 16));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v90);
    if ( DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData(
           (DXGCONTEXT *)this,
           *((_DWORD *)a4 + 29),
           v74,
           (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v6[2]) )
    {
      *(_WORD *)v23 = WORD2(v6[92].Ptr);
      *((_WORD *)v23 + 2) = v6[93].Count;
      *((_WORD *)v23 + 1) = WORD2(v6[93].Ptr);
      *((_WORD *)v23 + 3) = v6[94].Count;
      *((_DWORD *)v23 + 6) = v6[102].Count;
      v26 = (HIDWORD(v6[7].Ptr) >> 10) & 7;
      *((_DWORD *)v23 + 7) ^= (*((_DWORD *)v23 + 7) ^ (((HIDWORD(v6[7].Ptr) & 0x400) != 0) << 7)) & 0x80;
      v27 = *((_DWORD *)v23 + 7) ^ (*((_DWORD *)v23 + 7) ^ ((unsigned __int8)(v26 & 2) >> 1 << 8)) & 0x100;
      *((_DWORD *)v23 + 7) = v27 ^ ((unsigned __int16)v27 ^ ((unsigned __int8)(v26 & 4) >> 2 << 9)) & 0x200;
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16)
                                                                                     + 376LL)
                                                                         + 8LL)
                                                             + 336LL))(
        *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 384LL),
        *((unsigned int *)a4 + 29),
        v23,
        v74);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v90);
      goto LABEL_30;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
    LOBYTE(v72) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL) + 8LL) + 312LL))(
      *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 384LL),
      *((unsigned int *)a4 + 29),
      v77,
      *((_QWORD *)a4 + 20),
      v74,
      0,
      v72,
      v92,
      v101);
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    *(_QWORD *)(v32 + 24) = v74;
    WdLogEvent5_WdWarning(v32);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v90);
LABEL_116:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
    return 0LL;
  }
  if ( HIDWORD(v6[93].Ptr) - HIDWORD(v6[92].Ptr) != HIDWORD(v6[94].Ptr)
    || LODWORD(v6[94].Count) - LODWORD(v6[93].Count) != LODWORD(v6[95].Count) )
  {
    LOBYTE(v72) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 376LL) + 8LL) + 312LL))(
      *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 384LL),
      *((unsigned int *)a4 + 29),
      v6 + 9,
      *((_QWORD *)a4 + 20),
      v74,
      0,
      v72,
      v93,
      v107);
    v21 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v21[3] = HIDWORD(v6[93].Ptr) - HIDWORD(v6[92].Ptr);
    v21[4] = LODWORD(v6[94].Count) - LODWORD(v6[93].Count);
    v21[5] = HIDWORD(v6[94].Ptr);
    Count_low = LODWORD(v6[95].Count);
    goto LABEL_114;
  }
LABEL_33:
  v33 = v74;
  HIDWORD(v6[101].Ptr) = v74;
  v34 = (char *)a4 + 424;
  if ( !*((_BYTE *)a4 + 348) )
    v34 = (char *)a4 + 416;
  *v34 = 1 << v33;
  v35 = 1;
  v73 = 1;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
  {
    v35 = *((_DWORD *)v5 + 23) + 1;
    v73 = v35;
  }
  v79 = 0;
  PoolWithTag = 0LL;
  v77 = 0LL;
  v97 = 0LL;
  v99 = 0;
  if ( v35 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v98;
    v97 = (struct _EX_RUNDOWN_REF *)v98;
LABEL_41:
    v77 = PoolWithTag;
    v99 = v35;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v35);
      PoolWithTag = v97;
      v77 = v97;
    }
    goto LABEL_43;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v35 >= 8 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 8LL * v35, 0x4B677844u);
    v97 = PoolWithTag;
    goto LABEL_41;
  }
LABEL_43:
  v95[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_46:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v97);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v110, v35);
  v80 = v110[0];
  if ( !v110[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v110);
    goto LABEL_46;
  }
  for ( i = 0; i < v73; ++i )
  {
    if ( i )
    {
      v44 = 8LL * i;
      v85 = *(_DWORD *)(*(_QWORD *)(v44 + *((_QWORD *)v5 + 187)) + 328LL);
      v76 = 0;
      v45 = (unsigned int *)(*((_QWORD *)v5 + 182) + 4LL * (i - 1));
      if ( v45 + 1 < v45 || (unsigned __int64)(v45 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v76 = *v45;
      AllocationSafe = DXGPROCESS::GetAllocationSafe(ProcessDxgProcess, (DXGALLOCATIONREFERENCE *)v95, v76);
      DXGALLOCATIONREFERENCE::MoveAssign(v44 + v80, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v95);
      v41 = *(_QWORD *)(v80 + 8LL * i);
      v86 = (struct _EX_RUNDOWN_REF *)v41;
      if ( !v41 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        v48[3] = v76;
        v48[4] = -1073741811LL;
        v48[5] = 1501LL;
        WdLogEvent5_WdError(v48);
        v24 = -1073741811;
        v78 = -1073741811;
        break;
      }
      v102 = *(_QWORD *)(*(_QWORD *)(v44 + *((_QWORD *)v5 + 187)) + 16LL);
      v103 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 16LL);
      v104 = *(_QWORD *)(v103 + 16);
      v105 = *(_QWORD *)(v102 + 16);
      v49 = *(_QWORD *)(v105 + 16);
      v106 = v49;
      if ( v104 != v49 )
      {
        _mm_lfence();
        v50 = (_QWORD *)WdLogNewEntry5_WdError(v49);
        v50[3] = *(_QWORD *)(*(_QWORD *)(v44 + *((_QWORD *)v5 + 187)) + 16LL);
        v50[4] = *(_QWORD *)(v80 + 8LL * i);
        v50[5] = -1073741811LL;
        WdLogEvent5_WdError(v50);
        v24 = -1073741811;
        v78 = -1073741811;
        break;
      }
      if ( *((_BYTE *)a4 + 348) )
        v51 = (char *)a4
            + 48 * *((_DWORD *)a4 + 107) * i
            + *((_DWORD *)a4 + 107) * ((8 * *((_DWORD *)a4 + 108) + 167) & 0xFFFFFFF8)
            + 448;
      else
        v51 = (char *)a4 + 432;
      *(_QWORD *)v51 = *(_QWORD *)(*(_QWORD *)(v41 + 48) + 16LL);
      if ( *((_BYTE *)a4 + 348) )
        v52 = (char *)a4
            + 48 * *((_DWORD *)a4 + 107) * i
            + *((_DWORD *)a4 + 107) * ((8 * *((_DWORD *)a4 + 108) + 167) & 0xFFFFFFF8)
            + 440;
      else
        v52 = (char *)a4 + 480;
      *(_QWORD *)v52 = *(_QWORD *)(*(_QWORD *)(v44 + *((_QWORD *)v5 + 187)) + 168LL);
      *((_DWORD *)a4 + 34) |= 1 << v85;
      v42 = v44 + *((unsigned int *)a4 + 104);
      v43 = *(_QWORD *)(*(_QWORD *)(v44 + *((_QWORD *)v5 + 187)) + 216LL);
      goto LABEL_72;
    }
    v86 = v75;
    if ( *((_BYTE *)a4 + 348) )
      v39 = (char *)a4 + *((_DWORD *)a4 + 107) * ((8 * *((_DWORD *)a4 + 108) + 167) & 0xFFFFFFF8) + 448;
    else
      v39 = (char *)a4 + 432;
    *(_QWORD *)v39 = *(_QWORD *)(v75[6].Count + 16);
    if ( *((_BYTE *)a4 + 348) )
      v40 = (struct _EX_RUNDOWN_REF *)((char *)a4
                                     + *((_DWORD *)a4 + 107) * ((8 * *((_DWORD *)a4 + 108) + 167) & 0xFFFFFFF8)
                                     + 440);
    else
      v40 = (struct _EX_RUNDOWN_REF *)((char *)a4 + 480);
    v40->Count = this[21].Count;
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(this[2].Count + 16) + 16LL)) )
    {
      v42 = *((unsigned int *)a4 + 104);
      v43 = this[27].Count;
LABEL_72:
      *(_QWORD *)((char *)a4 + v42) = v43;
    }
    if ( *((_BYTE *)a4 + 348) )
      v53 = (struct VIDMM_ALLOC **)((char *)a4
                                  + 48 * i * *((_DWORD *)a4 + 107)
                                  + *((_DWORD *)a4 + 107) * ((8 * *((_DWORD *)a4 + 108) + 167) & 0xFFFFFFF8)
                                  + 472);
    else
      v53 = (struct VIDMM_ALLOC **)((char *)a4 + 424);
    v24 = VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 400LL),
            *(struct VIDMM_DEVICE **)(this[2].Count + 560),
            *(struct _VIDMM_MULTI_ALLOC **)(v41 + 24),
            v53);
    v78 = v24;
    if ( v24 < 0 )
    {
      v55 = WdLogNewEntry5_WdError(v54);
      *(_QWORD *)(v55 + 24) = v86;
      *(_QWORD *)(v55 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v55);
      v5 = v88;
      break;
    }
    v77[i].Count = (ULONG_PTR)*v53;
    ++v79;
    v56 = v86[5].Count;
    if ( v56 )
      v57 = (*(_DWORD *)(v56 + 4) >> 3) & 1;
    else
      v57 = 0;
    if ( *((_BYTE *)a4 + 348) )
      *((_BYTE *)a4
      + 48 * *((_DWORD *)a4 + 107) * i
      + *((_DWORD *)a4 + 107) * ((8 * *((_DWORD *)a4 + 108) + 167) & 0xFFFFFFF8)
      + 480) = v57 != 0;
    else
      *((_DWORD *)a4 + 119) ^= (*((_DWORD *)a4 + 119) ^ (v57 << 23)) & 0x800000;
    *(_DWORD *)a4 |= 0x1000000u;
    v58 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v58[3] = v6;
    v58[4] = v6[2].Count;
    v58[5] = HIDWORD(v6[15].Ptr);
    v58[6] = v6[9].Count;
    v58[7] = v6[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v58);
    v5 = v88;
  }
  *((_DWORD *)a4 + 35) = v73;
  if ( v24 < 0 )
    goto LABEL_107;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 16LL) + 1516LL) & 0x20) != 0 )
  {
    memset(&v109, 0, sizeof(v109));
    v109.Flags.Value |= 0x2000u;
    v59 = (UINT *)*((_QWORD *)a4 + 3);
    if ( v59 )
    {
      v109.PrivateDriverDataSize = *v59;
      v109.pPrivateDriverData = v59 + 2;
    }
    pAllocationList = 0LL;
    v111 = 0LL;
    v113 = 0;
    v61 = v73;
    if ( v73 <= 4 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)v112;
      v111 = (DXGK_ALLOCATIONLIST *)v112;
LABEL_93:
      v113 = v61;
      if ( pAllocationList )
      {
        memset(pAllocationList, 0, 32LL * v61);
        pAllocationList = v111;
        goto LABEL_95;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v73 >= 0x20 )
      {
        pAllocationList = (DXGK_ALLOCATIONLIST *)ExAllocatePoolWithTag(PagedPool, 32LL * v73, 0x4B677844u);
        v111 = pAllocationList;
        v61 = v73;
        goto LABEL_93;
      }
LABEL_95:
      v61 = v73;
    }
    v109.pAllocationList = pAllocationList;
    if ( pAllocationList )
    {
      v62 = 0;
      v76 = 0;
      if ( v61 )
      {
        v63 = 0LL;
        v64 = 0LL;
        v65 = v80;
        while ( 1 )
        {
          *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v63 + 2) = *(_WORD *)(*(_QWORD *)(v64 + *((_QWORD *)v5 + 187))
                                                                                                 + 328LL);
          v66 = v75;
          if ( v62 )
            v66 = *(struct _EX_RUNDOWN_REF **)(v64 + v65);
          *(struct _EX_RUNDOWN_REF *)((char *)&v109.pAllocationList->hDeviceSpecificAllocation + v63) = v66[4];
          v67 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 400LL)
                                                                                         + 8LL)
                                                                             + 248LL))(
                  *(_QWORD *)(*(_QWORD *)(this[2].Count + 16) + 408LL),
                  v66[3].Count,
                  *(unsigned __int8 *)(*(_QWORD *)(v64 + *((_QWORD *)v5 + 187)) + 351LL),
                  *(unsigned __int16 *)((char *)&v109.pAllocationList[1].hDeviceSpecificAllocation + v63 + 2));
          *(_QWORD *)((char *)&v109.pAllocationList->8 + v63) = v67;
          v62 = v76 + 1;
          v76 = v62;
          v64 += 8LL;
          v63 += 32LL;
          if ( v62 >= v73 )
            break;
          pAllocationList = v109.pAllocationList;
        }
        v6 = v87;
      }
      v109.FlipInterval = *((_DWORD *)a4 + 31);
      v109.Flags.Value ^= (*(_WORD *)&v109.Flags.0 ^ (unsigned __int16)(*(_DWORD *)a4 >> 11)) & 0x1700;
      v109.NumSrcAllocations = v73;
      v24 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(this[2].Count + 16), this[21].Ptr, &v109);
    }
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v111);
  }
  if ( v24 < 0 )
  {
LABEL_107:
    if ( v79 )
    {
      v68 = v89;
      v69 = (char *)v77 - (char *)v89;
      v70 = v79;
      do
      {
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(this[2].Count + 16) + 400LL),
          *(struct VIDMM_DEVICE **)(this[2].Count + 560),
          1 << *(_DWORD *)(v68->Count + 328),
          *(struct VIDMM_ALLOC **)((char *)&v68->Count + v69));
        ++v68;
        --v70;
      }
      while ( v70 );
      v6 = v87;
    }
    v71 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v71[3] = v6;
    v71[4] = v6[2].Count;
    v71[5] = HIDWORD(v6[15].Ptr);
    v71[6] = v6[9].Count;
    v71[7] = v6[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v71);
    *(_DWORD *)a4 &= ~0x1000000u;
    v24 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v110);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v97);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75);
  return (unsigned int)v24;
}
