/*
 * XREFs of ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0071C20
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0073E60 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002474 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000F754 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C001F058 (-VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULT.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C001F118 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0078E00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00B8598 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ @ 0x1C011EE74 (--1-$PagedPoolZeroedArray@PEAU_DEVICE_OBJECT@@$07@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C012D05C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0?$PagedPoolZeroedArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C0147198 (--0-$PagedPoolZeroedArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0147230 (--1-$PagedPoolZeroedArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015C2E0 (-CheckMultiPlaneOverlaySupportFromCachedData2@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTH.c)
 *     ?CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015C5CC (-CheckMultiPlaneOverlaySupportFromCachedData@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHI.c)
 */

__int64 __fastcall DXGCONTEXT::PrepareIndependentFlipToken(
        void **this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct DXGK_PRESENT_PARAMS *a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4)
{
  struct DXGK_PRESENT_PARAMS *v5; // r13
  struct _D3DKMT_PRESENTHISTORYTOKEN *v6; // r14
  bool v8; // al
  __int64 v9; // rcx
  __int64 CurrentProcess; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  _QWORD *v25; // rax
  __int64 DestHeight; // rcx
  struct VIDMM_ALLOC **v27; // rdi
  int v28; // esi
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // eax
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *p_Flip; // r9
  unsigned int v31; // edx
  bool v32; // al
  char v33; // dl
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  char v40; // cl
  _BYTE *v41; // rdx
  unsigned int v42; // edi
  _BYTE *PoolWithTag; // rcx
  D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *v44; // r8
  UINT v46; // edi
  struct VIDMM_ALLOC **v47; // rdi
  _QWORD *hLogicalSurface; // r13
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rsi
  unsigned int *v52; // rdx
  D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *v53; // r13
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  struct DXGK_PRESENT_PARAMS *v57; // r9
  __int64 v58; // rcx
  _QWORD *v59; // rax
  struct VIDMM_ALLOC **v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  _QWORD *v65; // rax
  unsigned int v66; // edi
  UINT *v67; // rdx
  DXGK_ALLOCATIONLIST *pAllocationList; // r9
  unsigned int v69; // eax
  UINT v70; // r8d
  __int64 v71; // rdi
  __int64 v72; // rsi
  D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *v73; // r12
  char *v74; // rdx
  _QWORD *v75; // r11
  __int64 v76; // rax
  __int64 v77; // rsi
  _BYTE *v78; // r14
  __int64 v79; // rdi
  _QWORD *v80; // rax
  int v81; // [rsp+30h] [rbp-318h]
  unsigned int v82; // [rsp+60h] [rbp-2E8h] BYREF
  UINT v83; // [rsp+64h] [rbp-2E4h]
  _QWORD *v84; // [rsp+68h] [rbp-2E0h] BYREF
  UINT v85; // [rsp+70h] [rbp-2D8h]
  int v86; // [rsp+74h] [rbp-2D4h]
  D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *v87; // [rsp+78h] [rbp-2D0h]
  unsigned int v88; // [rsp+80h] [rbp-2C8h]
  _BYTE *v89; // [rsp+88h] [rbp-2C0h]
  int v90; // [rsp+90h] [rbp-2B8h] BYREF
  int v91; // [rsp+94h] [rbp-2B4h] BYREF
  struct DXGK_PRESENT_PARAMS *v92; // [rsp+98h] [rbp-2B0h]
  int v93; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned int v94; // [rsp+A4h] [rbp-2A4h]
  struct VIDMM_ALLOC **v95; // [rsp+A8h] [rbp-2A0h]
  int v96; // [rsp+B0h] [rbp-298h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v97; // [rsp+B8h] [rbp-290h]
  int v98; // [rsp+C0h] [rbp-288h]
  __int64 v99; // [rsp+C8h] [rbp-280h]
  _BYTE v100[16]; // [rsp+D0h] [rbp-278h] BYREF
  __int64 v101; // [rsp+E0h] [rbp-268h]
  DXGCONTEXT *v102; // [rsp+E8h] [rbp-260h]
  char v103[4]; // [rsp+F0h] [rbp-258h] BYREF
  char v104[4]; // [rsp+F4h] [rbp-254h] BYREF
  char v105[8]; // [rsp+F8h] [rbp-250h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v106; // [rsp+100h] [rbp-248h]
  __int64 v107; // [rsp+108h] [rbp-240h]
  struct DXGK_PRESENT_PARAMS *v108; // [rsp+110h] [rbp-238h]
  char v109[8]; // [rsp+118h] [rbp-230h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v110; // [rsp+120h] [rbp-228h]
  _BYTE *v111; // [rsp+128h] [rbp-220h]
  char v112[8]; // [rsp+130h] [rbp-218h] BYREF
  _BYTE *v113; // [rsp+138h] [rbp-210h] BYREF
  _BYTE v114[32]; // [rsp+140h] [rbp-208h] BYREF
  unsigned int v115; // [rsp+160h] [rbp-1E8h]
  __int64 v116; // [rsp+168h] [rbp-1E0h]
  __int64 v117; // [rsp+170h] [rbp-1D8h]
  __int64 v118; // [rsp+178h] [rbp-1D0h]
  __int64 v119; // [rsp+180h] [rbp-1C8h]
  __int64 v120; // [rsp+188h] [rbp-1C0h]
  _DXGKARG_PRESENT v121; // [rsp+190h] [rbp-1B8h] BYREF
  _QWORD v122[6]; // [rsp+240h] [rbp-108h] BYREF
  DXGK_ALLOCATIONLIST *v123; // [rsp+270h] [rbp-D8h] BYREF
  _BYTE v124[128]; // [rsp+278h] [rbp-D0h] BYREF
  unsigned int v125; // [rsp+2F8h] [rbp-50h]

  v5 = a3;
  v92 = a3;
  v6 = a2;
  v97 = a2;
  v102 = (DXGCONTEXT *)this;
  v106 = a2;
  v108 = a3;
  v110 = a4;
  v8 = a2->Model == D3DKMT_PM_REDIRECTED_FLIP && (a2->Token.Flip.Flags.Value & 0x40) == 0;
  if ( !v8 || !a3 )
    return 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  DXGPROCESS::GetAllocationSafe(*((_QWORD *)this[2] + 5), (DXGALLOCATIONREFERENCE *)&v84, *((_DWORD *)a3 + 5));
  if ( !v84 || *(_QWORD *)(*(_QWORD *)(v84[1] + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) )
    goto LABEL_110;
  v9 = v84[5];
  if ( *((_QWORD *)a4 + 3) && v9 && (*(_DWORD *)(v9 + 4) & 1) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 160LL);
    *((_QWORD *)a4 + 4) = v9;
  }
  v101 = *((_QWORD *)v5 + 187);
  v107 = v101;
  CurrentProcess = PsGetCurrentProcess(v9);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v99 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v16 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v16);
    v99 = 0LL;
  }
  v17 = (*(_DWORD *)(v84[6] + 4LL) >> 6) & 0xF;
  v6->Token.Flip.VidPnSourceId = v17;
  *((_DWORD *)a4 + 29) = v17;
  v87 = &v6->Token.SurfaceComplete + 7;
  RtlCopyLuid((PLUID)a4 + 19, &v6->Token.Flip.compSurfLuid);
  *((_QWORD *)a4 + 20) = v6->CompositionBindingId;
  *(_DWORD *)a4 &= ~0x20000u;
  v18 = *(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ (2 * *((_DWORD *)v5 + 22))) & 8;
  *(_DWORD *)a4 = v18;
  v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(2 * *((_DWORD *)v5 + 22))) & 0x10;
  *(_DWORD *)a4 = v19;
  v20 = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)*(_DWORD *)&v6->Token.Flip.Flags.0) & 0x20;
  *(_DWORD *)a4 = v20;
  v21 = v20 ^ (v20 ^ (v6->Token.Flip.Flags.Value << 6)) & 0x20000000;
  *(_DWORD *)a4 = v21;
  v22 = v21 ^ (v21 ^ (8 * *((_DWORD *)v5 + 22))) & 0x100000;
  *(_DWORD *)a4 = v22;
  v23 = v22 ^ (v22 ^ (8 * *((_DWORD *)v5 + 22))) & 0x200000;
  *(_DWORD *)a4 = v23;
  *(_DWORD *)a4 = v23 ^ (v23 ^ (8 * *((_DWORD *)v5 + 22))) & 0x400000;
  v6->Token.Flip.dxgContext = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL);
  *((_DWORD *)a4 + 28) = v6->Token.Flip.PresentCount;
  *((_DWORD *)a4 + 46) = v6->Token.Flip.SwapChainIndex;
  *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ (v6->Token.Flip.Flags.Value << 7)) & 0x4000000;
  *((_DWORD *)a4 + 36) = v6->Token.Flip.CustomDuration;
  *((_DWORD *)a4 + 37) = v6->Token.Flip.CustomDurationFlipInterval;
  *((_DWORD *)a4 + 34) = *((_DWORD *)this + 81);
  if ( bTracingEnabled )
    *((_QWORD *)a4 + 22) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2)
                                                                                             + 400LL)
                                                                                 + 8LL)
                                                                     + 320LL))(
                             *(_QWORD *)(*((_QWORD *)this[2] + 2) + 408LL),
                             *((unsigned int *)v5 + 5));
  *((_DWORD *)a4 + 31) = v6->Token.Flip.FlipInterval;
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL)
                                                                      + 8LL)
                                                          + 424LL))(
          *((_QWORD *)this[2] + 68),
          v17,
          (char *)a4 + 124);
  *((_DWORD *)a4 + 30) = v24;
  if ( v24 != 5 && *((_DWORD *)a4 + 31) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v25[3] = v6;
    v25[4] = v6->Token.Flip.FenceValue;
    v25[5] = v6->Token.Flip.PresentCount;
    DestHeight = *((int *)a4 + 30);
LABEL_108:
    v25[6] = DestHeight;
    goto LABEL_109;
  }
  v93 = 0;
  v91 = 0;
  v90 = 0;
  v82 = 0;
  v27 = (struct VIDMM_ALLOC **)((char *)a4 + 376);
  if ( !*((_BYTE *)a4 + 348) )
    v27 = (struct VIDMM_ALLOC **)((char *)a4 + 360);
  v95 = v27;
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, char *, int *, int *, unsigned int *, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL) + 8LL) + 320LL))(
    *(_QWORD *)(*((_QWORD *)this[2] + 2) + 384LL),
    *((unsigned int *)a4 + 29),
    (char *)a4 + 152,
    *((_QWORD *)a4 + 20),
    (char *)v27 + 24,
    &v93,
    &v91,
    &v82,
    &v6->Token.Flip.confirmationCookie,
    &v90);
  if ( !v93 )
  {
    if ( v90 )
    {
      LOBYTE(v81) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL) + 8LL) + 312LL))(
        *(_QWORD *)(*((_QWORD *)this[2] + 2) + 384LL),
        *((unsigned int *)a4 + 29),
        v87,
        *((_QWORD *)a4 + 20),
        v82,
        0,
        v81,
        v105);
    }
    goto LABEL_110;
  }
  *((_QWORD *)a4 + 21) = v6->Token.Flip.confirmationCookie;
  v28 = 0;
  v86 = 0;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v6->Token.Flip.Flags.Value;
  if ( (*(_DWORD *)&Value & 0x200000) == 0 )
  {
    LOBYTE(v81) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL) + 8LL) + 312LL))(
      *(_QWORD *)(*((_QWORD *)this[2] + 2) + 384LL),
      *((unsigned int *)a4 + 29),
      v87,
      *((_QWORD *)a4 + 20),
      v82,
      0,
      v81,
      v112);
    v25 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v25[3] = 1324LL;
LABEL_109:
    WdLogEvent5_WdPresentTokenEvent(v25);
    goto LABEL_110;
  }
  if ( v91 )
  {
    if ( (*(_DWORD *)&Value & 0x400000) == 0 )
    {
LABEL_36:
      *(_DWORD *)a4 |= 0x8000000u;
      goto LABEL_39;
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)v100, *((struct ADAPTER_RENDER **)this[2] + 2));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v100);
    p_Flip = &v6->Token.Flip;
    v31 = *((_DWORD *)a4 + 29);
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 848LL) )
      v32 = DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData2((DXGCONTEXT *)this, v31, v82, p_Flip);
    else
      v32 = DXGCONTEXT::CheckMultiPlaneOverlaySupportFromCachedData((DXGCONTEXT *)this, v31, v82, p_Flip);
    if ( v32 )
    {
      *((_WORD *)v27 + 12) = *((_WORD *)&v6->Token.SurfaceComplete + 362);
      *((_WORD *)v27 + 14) = *((_WORD *)&v6->Token.SurfaceComplete + 364);
      *((_WORD *)v27 + 13) = *((_WORD *)&v6->Token.SurfaceComplete + 366);
      *((_WORD *)v27 + 15) = *((_WORD *)&v6->Token.SurfaceComplete + 368);
      v33 = (v6->Token.Flip.Flags.Value >> 10) & 7;
      *((_DWORD *)v27 + 13) ^= (*((_DWORD *)v27 + 13) ^ (((v6->Token.Flip.Flags.Value & 0x400) != 0) << 7)) & 0x80;
      v34 = *((_DWORD *)v27 + 13) ^ (*((_DWORD *)v27 + 13) ^ ((unsigned __int8)(v33 & 2) >> 1 << 8)) & 0x100;
      *((_DWORD *)v27 + 13) = v34 ^ ((unsigned __int16)v34 ^ ((unsigned __int8)(v33 & 4) >> 2 << 9)) & 0x200;
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL)
                                                                         + 8LL)
                                                             + 336LL))(
        *(_QWORD *)(*((_QWORD *)this[2] + 2) + 384LL),
        *((unsigned int *)a4 + 29),
        (char *)v27 + 24,
        v82);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v100);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v100);
      goto LABEL_36;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v100);
    LOBYTE(v81) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL) + 8LL) + 312LL))(
      *(_QWORD *)(*((_QWORD *)this[2] + 2) + 384LL),
      *((unsigned int *)a4 + 29),
      v87,
      *((_QWORD *)a4 + 20),
      v82,
      0,
      v81,
      v104);
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = v82;
    WdLogEvent5_WdWarning(v39);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v100);
LABEL_110:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    return 0LL;
  }
  if ( v6->Token.Flip.SourceRect.right - v6->Token.Flip.SourceRect.left != v6->Token.Flip.DestWidth
    || v6->Token.Flip.SourceRect.bottom - v6->Token.Flip.SourceRect.top != v6->Token.Flip.DestHeight )
  {
    LOBYTE(v81) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 376LL) + 8LL) + 312LL))(
      *(_QWORD *)(*((_QWORD *)this[2] + 2) + 384LL),
      *((unsigned int *)a4 + 29),
      &v6->Token.SurfaceComplete + 7,
      *((_QWORD *)a4 + 20),
      v82,
      0,
      v81,
      v103);
    v25 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v25[3] = v6->Token.Flip.SourceRect.right - v6->Token.Flip.SourceRect.left;
    v25[4] = v6->Token.Flip.SourceRect.bottom - v6->Token.Flip.SourceRect.top;
    v25[5] = v6->Token.Flip.DestWidth;
    DestHeight = v6->Token.Flip.DestHeight;
    goto LABEL_108;
  }
LABEL_39:
  v40 = v82;
  v6->Token.Flip.PlaneIndex = v82;
  v41 = (char *)a4 + 360;
  if ( !*((_BYTE *)a4 + 348) )
    v41 = (char *)a4 + 352;
  *v41 = 1 << v40;
  v42 = 1;
  v83 = 1;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL)) )
  {
    v42 = *((_DWORD *)v5 + 23) + 1;
    v83 = v42;
  }
  v88 = 0;
  PoolWithTag = 0LL;
  v89 = 0LL;
  v113 = 0LL;
  v115 = 0;
  if ( v42 <= 4 )
  {
    PoolWithTag = v114;
    v113 = v114;
LABEL_47:
    v89 = PoolWithTag;
    v115 = v42;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v42);
      PoolWithTag = v113;
      v89 = v113;
    }
    goto LABEL_49;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v42 >= 8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v42, 0x4B677844u);
    v113 = PoolWithTag;
    goto LABEL_47;
  }
LABEL_49:
  v111 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_52:
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v113);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
    return 3221225495LL;
  }
  PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>::PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>(v122, v42);
  v44 = (D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)v122[0];
  v87 = (D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)v122[0];
  if ( !v122[0] )
  {
    PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>(v122);
    goto LABEL_52;
  }
  v46 = 0;
  while ( 1 )
  {
    v85 = v46;
    if ( v46 >= v83 )
      break;
    if ( v46 )
    {
      v51 = v46;
      v98 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 187) + v51 * 8) + 328LL);
      v94 = 0;
      v52 = (unsigned int *)(*((_QWORD *)v5 + 182) + 4LL * (v46 - 1));
      if ( v52 + 1 < v52 || (unsigned __int64)(v52 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v94 = *v52;
      v53 = &v44[v51];
      AllocationSafe = DXGPROCESS::GetAllocationSafe(v99, (DXGALLOCATIONREFERENCE *)v109, v94);
      DXGALLOCATIONREFERENCE::MoveAssign(v53, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v109);
      hLogicalSurface = (_QWORD *)v53->hLogicalSurface;
      if ( !hLogicalSurface )
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdError(v55);
        v56[3] = v94;
        v56[4] = -1073741811LL;
        v56[5] = 1483LL;
        WdLogEvent5_WdError(v56);
        v28 = -1073741811;
        v86 = -1073741811;
        v5 = v92;
        break;
      }
      v57 = v92;
      v116 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v92 + 187) + 8LL * v46) + 16LL);
      v120 = *(_QWORD *)(hLogicalSurface[1] + 16LL);
      v117 = *(_QWORD *)(v120 + 16);
      v118 = *(_QWORD *)(v116 + 16);
      v58 = *(_QWORD *)(v118 + 16);
      v119 = v58;
      if ( v117 != v58 )
      {
        _mm_lfence();
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v58);
        v5 = v92;
        v59[3] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v92 + 187) + 8LL * v46) + 16LL);
        v59[4] = v87[v51].hLogicalSurface;
        v59[5] = -1073741811LL;
        WdLogEvent5_WdError(v59);
        v28 = -1073741811;
        v86 = -1073741811;
        break;
      }
      if ( *((_BYTE *)a4 + 348) )
        v47 = (struct VIDMM_ALLOC **)((char *)a4 + 56 * v46 * *((_DWORD *)a4 + 91) + 376);
      else
        v47 = (struct VIDMM_ALLOC **)((char *)a4 + 360);
      v60 = v95;
      *(_OWORD *)(v47 + 3) = *(_OWORD *)(v95 + 3);
      *(_OWORD *)(v47 + 5) = *(_OWORD *)(v60 + 5);
      v47[1] = *(struct VIDMM_ALLOC **)(*(_QWORD *)(v87[v51].hLogicalSurface + 48) + 16LL);
      *((_DWORD *)a4 + 34) |= 1 << v98;
      v49 = v51 * 8 + *((unsigned int *)a4 + 88);
      v50 = *(void **)(*(_QWORD *)(*((_QWORD *)v57 + 187) + v51 * 8) + 216LL);
    }
    else
    {
      v47 = v95;
      hLogicalSurface = v84;
      v95[1] = *(struct VIDMM_ALLOC **)(v84[6] + 16LL);
      if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL)) )
        goto LABEL_70;
      v49 = *((unsigned int *)a4 + 88);
      v50 = this[27];
    }
    *(_QWORD *)((char *)a4 + v49) = v50;
LABEL_70:
    v28 = VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
            *(VIDMM_EXPORT **)(*((_QWORD *)this[2] + 2) + 400LL),
            *((struct VIDMM_DEVICE **)this[2] + 67),
            (struct _VIDMM_MULTI_ALLOC *)hLogicalSurface[3],
            v47);
    v86 = v28;
    if ( v28 < 0 )
    {
      v62 = WdLogNewEntry5_WdError(v61);
      *(_QWORD *)(v62 + 24) = hLogicalSurface;
      *(_QWORD *)(v62 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v62);
      v5 = v92;
      break;
    }
    *(_QWORD *)&v89[8 * v85] = *v47;
    ++v88;
    (*(void (__fastcall **)(_QWORD, _QWORD, int *, struct VIDMM_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2)
                                                                                                 + 400LL)
                                                                                     + 8LL)
                                                                         + 208LL))(
      *(_QWORD *)(*((_QWORD *)this[2] + 2) + 408LL),
      *(_QWORD *)(hLogicalSurface[6] + 8LL),
      &v96,
      v47 + 2);
    *((_DWORD *)v47 + 13) ^= (*((_DWORD *)v47 + 13) ^ (v96 << 17)) & 0x3E0000;
    v63 = hLogicalSurface[5];
    if ( v63 )
      v64 = (*(_DWORD *)(v63 + 4) >> 3) & 1;
    else
      v64 = 0;
    *((_DWORD *)v47 + 13) ^= (*((_DWORD *)v47 + 13) ^ (v64 << 23)) & 0x800000;
    *(_DWORD *)a4 |= 0x2000000u;
    v65 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v65[3] = v6;
    v65[4] = v6->Token.Flip.FenceValue;
    v65[5] = v6->Token.Flip.PresentCount;
    v65[6] = *((_QWORD *)&v6->Token.SurfaceComplete + 7);
    v65[7] = v6->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v65);
    v46 = v85 + 1;
    v5 = v92;
    v44 = v87;
  }
  v66 = v83;
  *((_DWORD *)a4 + 35) = v83;
  if ( v28 < 0 )
    goto LABEL_101;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 1372LL) & 0x20) != 0 )
  {
    memset(&v121, 0, sizeof(v121));
    v121.Flags.Value |= 0x2000u;
    v67 = (UINT *)*((_QWORD *)a4 + 3);
    if ( v67 )
    {
      v121.PrivateDriverDataSize = *v67;
      v121.pPrivateDriverData = v67 + 2;
    }
    pAllocationList = 0LL;
    v123 = 0LL;
    v125 = 0;
    v69 = v66;
    if ( v66 <= 4 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)v124;
      v123 = (DXGK_ALLOCATIONLIST *)v124;
LABEL_84:
      v125 = v69;
      if ( pAllocationList )
      {
        memset(pAllocationList, 0, 32LL * v69);
        pAllocationList = v123;
        goto LABEL_86;
      }
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v66 >= 0x20 )
      {
        pAllocationList = (DXGK_ALLOCATIONLIST *)ExAllocatePoolWithTag(PagedPool, 32LL * v66, 0x4B677844u);
        v123 = pAllocationList;
        v69 = v66;
        goto LABEL_84;
      }
LABEL_86:
      v69 = v66;
    }
    v121.pAllocationList = pAllocationList;
    if ( pAllocationList )
    {
      v70 = 0;
      v85 = 0;
      if ( v69 )
      {
        v71 = 0LL;
        v72 = 0LL;
        v73 = v87;
        while ( 1 )
        {
          if ( *((_BYTE *)a4 + 348) )
            v74 = (char *)a4 + 56 * v70 * *((_DWORD *)a4 + 91) + 376;
          else
            v74 = (char *)a4 + 360;
          *(LONGLONG *)((char *)&pAllocationList->PhysicalAddress.QuadPart + v71) = *((_QWORD *)v74 + 2);
          *(_WORD *)((char *)&v121.pAllocationList[1].hDeviceSpecificAllocation + v71) = (*((_DWORD *)v74 + 13) >> 17) & 0x1F;
          *(_WORD *)((char *)&v121.pAllocationList[1].hDeviceSpecificAllocation + v71 + 2) = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v5 + 187) + v72 * 8) + 328LL);
          v75 = v84;
          if ( v70 )
            v75 = (_QWORD *)v73[v72].hLogicalSurface;
          *(HANDLE *)((char *)&v121.pAllocationList->hDeviceSpecificAllocation + v71) = (HANDLE)v75[4];
          v76 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2)
                                                                                                  + 400LL)
                                                                                      + 8LL)
                                                                          + 240LL))(
                  *(_QWORD *)(*((_QWORD *)this[2] + 2) + 408LL),
                  v75[3],
                  *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v5 + 187) + v72 * 8) + 351LL),
                  *(unsigned __int16 *)((char *)&v121.pAllocationList[1].hDeviceSpecificAllocation + v71 + 2));
          *(_QWORD *)((char *)&v121.pAllocationList->8 + v71) = v76;
          v70 = v85 + 1;
          v85 = v70;
          ++v72;
          v71 += 32LL;
          if ( v70 >= v83 )
            break;
          pAllocationList = v121.pAllocationList;
        }
        v6 = v97;
      }
      v121.FlipInterval = *((_DWORD *)a4 + 31);
      v121.Flags.Value ^= (*(_WORD *)&v121.Flags.0 ^ (unsigned __int16)(*(_DWORD *)a4 >> 12)) & 0x1700;
      v121.NumSrcAllocations = v83;
      v28 = ADAPTER_RENDER::DdiPresent(*((ADAPTER_RENDER **)this[2] + 2), this[21], &v121);
    }
    PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v123);
  }
  if ( v28 < 0 )
  {
LABEL_101:
    if ( v88 )
    {
      v77 = v101;
      v78 = &v89[-v101];
      v79 = v88;
      do
      {
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this[2] + 2) + 400LL),
          *((struct VIDMM_DEVICE **)this[2] + 67),
          1 << *(_DWORD *)(*(_QWORD *)v77 + 328LL),
          *(struct VIDMM_ALLOC **)&v78[v77]);
        v77 += 8LL;
        --v79;
      }
      while ( v79 );
      v6 = v97;
    }
    v80 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v80[3] = v6;
    v80[4] = v6->Token.Flip.FenceValue;
    v80[5] = v6->Token.Flip.PresentCount;
    v80[6] = *((_QWORD *)&v6->Token.SurfaceComplete + 7);
    v80[7] = v6->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v80);
    *(_DWORD *)a4 &= ~0x2000000u;
    v28 = 0;
  }
  PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolZeroedArray<DXGALLOCATIONREFERENCE,4>(v122);
  PagedPoolZeroedArray<_DEVICE_OBJECT *,8>::~PagedPoolZeroedArray<_DEVICE_OBJECT *,8>(&v113);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84);
  return (unsigned int)v28;
}
