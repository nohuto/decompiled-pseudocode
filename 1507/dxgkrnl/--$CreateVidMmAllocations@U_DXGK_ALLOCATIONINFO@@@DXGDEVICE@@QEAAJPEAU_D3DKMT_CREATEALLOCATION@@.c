/*
 * XREFs of ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C007C030
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00026D8 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0005128 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000B6CC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000F470 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00173E4 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     Template_pqqqqq @ 0x1C001C7C0 (Template_pqqqqq.c)
 *     Template_pqqqqqqq @ 0x1C001C87C (Template_pqqqqqqq.c)
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
        DXGDEVICE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        char a7,
        struct COREDEVICEACCESS *a8)
{
  bool v8; // r13
  __int64 v9; // rsi
  bool v10; // r15
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  struct COREDEVICEACCESS *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  unsigned int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rsi
  _DWORD *v26; // r13
  unsigned int v27; // ebx
  __int64 v28; // r8
  unsigned int *v29; // rax
  __int64 v30; // r12
  __int64 v31; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  PVOID v36; // r13
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r13
  struct DXGPROCESS *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int *v51; // r9
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // r8d
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r12
  unsigned int *v64; // rcx
  __int64 v65; // rcx
  unsigned int *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // r9d
  __int64 v70; // rax
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  _DWORD *v73; // rcx
  _DWORD *v74; // rcx
  int v75; // r9d
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // edx
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rax
  unsigned int v83; // ebx
  __int64 v84; // rbp
  __int64 v85; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v86; // r8
  struct _VIDMM_MULTI_ALLOC *v87; // r8
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v88; // r9
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v94[2]; // [rsp+20h] [rbp-F8h]
  __int64 v95; // [rsp+28h] [rbp-F0h]
  __int64 v96; // [rsp+30h] [rbp-E8h]
  __int64 v97; // [rsp+38h] [rbp-E0h]
  __int64 v98; // [rsp+40h] [rbp-D8h]
  __int64 v99; // [rsp+48h] [rbp-D0h]
  __int64 v100; // [rsp+50h] [rbp-C8h]
  int v101; // [rsp+60h] [rbp-B8h]
  unsigned int v102; // [rsp+60h] [rbp-B8h]
  int v103; // [rsp+64h] [rbp-B4h]
  unsigned int v104; // [rsp+68h] [rbp-B0h]
  __int64 v105; // [rsp+70h] [rbp-A8h]
  int v106; // [rsp+78h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-98h]
  union _LARGE_INTEGER *v108; // [rsp+88h] [rbp-90h]
  __int64 v109; // [rsp+90h] [rbp-88h]
  __int64 v110; // [rsp+98h] [rbp-80h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v112; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v113; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-60h] BYREF
  char v115[88]; // [rsp+C0h] [rbp-58h] BYREF
  char v116; // [rsp+120h] [rbp+8h] BYREF
  char v117; // [rsp+128h] [rbp+10h]
  __int64 v118; // [rsp+130h] [rbp+18h]
  __int64 v119; // [rsp+138h] [rbp+20h]

  v119 = a4;
  v118 = a3;
  v8 = 1;
  LODWORD(v9) = 0;
  v10 = (*(_DWORD *)(a2 + 56) & 0x4000) != 0;
  v103 = 0;
  v11 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v12 = a4;
  v117 = 1;
  if ( !v11 )
    v10 = 1;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 128)) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v17, v16, a3, v18);
    *(_QWORD *)(v61 + 24) = 3338LL;
    WdLogEvent5_WdAssertion(v61);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v19 = a8;
  if ( a8 )
  {
    v20 = *((_QWORD *)a8 + 2);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 144) )
    {
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v20 + 128));
      v19 = a8;
    }
  }
  v21 = a5;
  v22 = 0;
  v104 = 0;
  if ( !*(_DWORD *)(a2 + 44) )
  {
LABEL_55:
    *(_DWORD *)(a2 + 56) ^= (*(_DWORD *)(a2 + 56) ^ (v8 << 14)) & 0x4000;
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v23 = *(_QWORD *)(v21 + 48);
    v24 = 0LL;
    v25 = v22;
    v116 = v10;
    v26 = (_DWORD *)(v12 + 88LL * v22);
    v108 = 0LL;
    Object = 0LL;
    v105 = (__int64)v26;
    v27 = (v26[4] + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v23 + 4) & 0x200F) != 0 )
      v116 = 1;
    if ( !*(_QWORD *)(v23 + 16) )
    {
      v62 = WdLogNewEntry5_WdAssertion(v23, v19, a3, 0LL);
      *(_QWORD *)(v62 + 24) = 3366LL;
      WdLogEvent5_WdAssertion(v62);
      v19 = a8;
    }
    v28 = (unsigned int)v26[16];
    if ( (v28 & 0x4000) != 0 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1984LL) + 16LL);
      v63 = *(_QWORD *)(*(_QWORD *)(v23 + 1896) + 48LL * ((*(_DWORD *)(v21 + 72) >> 9) & 0x3F) + 32);
      if ( !*((_BYTE *)this + 18716) || !v63 )
      {
        v82 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v82 + 24) = this;
        *(_QWORD *)(v82 + 32) = v63;
        WdLogEvent5_WdError(v82);
        LODWORD(v9) = -1073741823;
        goto LABEL_120;
      }
      v22 = v104;
      v19 = a8;
    }
    if ( a7 )
    {
      DXGDEVICE::FlushDeferredDestruction(this, v19, 0);
      v57 = v103;
      if ( *(char *)(a2 + 56) < 0 )
        v57 = 1;
      v103 = v57;
    }
    else
    {
      v101 = 0;
      if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
      {
        if ( *((_QWORD *)v26 + 2) > (unsigned __int64)v27 )
        {
          LODWORD(v9) = -1073741811;
          v90 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v90 + 24) = *(_QWORD *)(88LL * v22 + v119 + 16);
          *(_QWORD *)(v90 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v90);
          goto LABEL_120;
        }
        v64 = a6;
        *((_QWORD *)v26 + 2) = v27;
        v108 = (union _LARGE_INTEGER *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v64 + 4))(*((_QWORD *)v64 + 5), v27);
        if ( !v108 )
        {
          v89 = WdLogNewEntry5_WdError(v65);
          *(_QWORD *)(v89 + 24) = 3421LL;
          WdLogEvent5_WdError(v89);
          LODWORD(v9) = -1073741823;
          goto LABEL_120;
        }
        v23 = 96 * v25;
        *(_QWORD *)(96 * v25 + v118 + 8) = v108;
      }
      else if ( (v28 & 0x10) != 0 )
      {
        v23 = v118;
        v108 = *(union _LARGE_INTEGER **)(96 * v25 + v118 + 8);
      }
      else if ( (v28 & 0x400000) != 0 )
      {
        v66 = a6;
        if ( *(_DWORD *)(a2 + 44) != 1 || (v28 & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v23, v19, v28, v24);
          *(_QWORD *)(v67 + 24) = 3441LL;
          WdLogEvent5_WdAssertion(v67);
        }
        Object = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v66 + 4))(*((_QWORD *)v66 + 5), v27);
        if ( !Object )
        {
          v91 = WdLogNewEntry5_WdError(v23);
          *(_QWORD *)(v91 + 24) = 3447LL;
          WdLogEvent5_WdError(v91);
          LODWORD(v9) = -1073741823;
          goto LABEL_120;
        }
        v101 = 1;
      }
      v29 = a6;
      if ( a6 )
      {
        v23 = *a6;
        if ( (v23 & 0x40) != 0 )
        {
          if ( !*((_QWORD *)a6 + 41) )
          {
            v92 = WdLogNewEntry5_WdError(v23);
            *(_QWORD *)(v92 + 24) = 3466LL;
            WdLogEvent5_WdError(v92);
            LODWORD(v9) = -1073741823;
            goto LABEL_120;
          }
          v26[16] |= 0x400000u;
          Object = (PVOID)*((_QWORD *)v29 + 41);
        }
      }
      if ( !v26[20] )
      {
        v68 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v68 + 24) = 3476LL;
        WdLogEvent5_WdError(v68);
      }
      v30 = *((_QWORD *)this + 67);
      v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
      v109 = *(_QWORD *)(v21 + 48);
      Current = DXGPROCESS::GetCurrent(v23);
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 16) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 120, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v69 = *((_DWORD *)Current + 34);
              if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v33, &EventBlockThread, v34, v69);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
          }
          *((_QWORD *)Current + 16) = KeGetCurrentThread();
        }
      }
      v35 = *(_QWORD *)(v31 + 8);
      v36 = Object;
      LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, PVOID, __int64 *))(v35 + 120))(
                      v30,
                      v105,
                      v109,
                      Object,
                      &v114);
      if ( Current )
      {
        *((_QWORD *)Current + 16) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v101 )
        ObfDereferenceObject(v36);
      if ( (int)v9 < 0 )
        goto LABEL_120;
      v40 = v114;
      if ( !v114 )
      {
        v70 = WdLogNewEntry5_WdAssertion(0LL, v37, v38, v39);
        *(_QWORD *)(v70 + 24) = 3495LL;
        WdLogEvent5_WdAssertion(v70);
        v40 = v114;
      }
      v41 = (__int64)a6;
      *(_QWORD *)(*(_QWORD *)(v21 + 48) + 8LL) = v40;
      if ( v41 )
      {
        v58 = *(_DWORD *)(v41 + 16);
        if ( v58 == 4 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            v74 = *(_DWORD **)(v41 + 24);
            LODWORD(v100) = v74[5];
            LODWORD(v99) = v74[4];
            LODWORD(v98) = v74[3];
            LODWORD(v97) = v74[2];
            LODWORD(v96) = v74[1];
            LODWORD(v95) = *v74;
            v94[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v41;
            Template_pqqqqqqq(
              (__int64)v74,
              &EventCddStandardAllocationGdiSurface,
              v38,
              *(_QWORD *)(v21 + 48),
              *(_QWORD *)&v94[0].0,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100);
          }
        }
        else
        {
          v59 = v58 - 1;
          if ( v59 )
          {
            v60 = v59 - 1;
            if ( v60 )
            {
              if ( v60 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              {
                v71 = *(_DWORD **)(v41 + 24);
                LODWORD(v97) = v71[2];
                LODWORD(v96) = v71[1];
                LODWORD(v95) = *v71;
                v94[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v41;
                Template_pdqqq(
                  (__int64)v71,
                  &EventCddStandardAllocationStagingSurface,
                  v38,
                  *(_QWORD *)(v21 + 48),
                  *(_QWORD *)&v94[0].0,
                  v95,
                  v96,
                  v97);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            {
              v72 = *(_DWORD **)(v41 + 24);
              LODWORD(v98) = v72[3];
              LODWORD(v97) = v72[2];
              LODWORD(v96) = v72[1];
              LODWORD(v95) = *v72;
              v94[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v41;
              Template_pqqqqq((__int64)v72, v41, v38, *(_QWORD *)(v21 + 48), *(_QWORD *)&v94[0].0, v95, v96, v97, v98);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            v73 = *(_DWORD **)(v41 + 24);
            LODWORD(v100) = v73[5];
            LODWORD(v99) = v73[4];
            LODWORD(v98) = v73[3];
            LODWORD(v97) = v73[2];
            LODWORD(v96) = v73[1];
            LODWORD(v95) = *v73;
            v94[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v41;
            Template_pqqqqqqq(
              (__int64)v73,
              &EventCddStandardAllocationSharedPrimarySurface,
              v38,
              *(_QWORD *)(v21 + 48),
              *(_QWORD *)&v94[0].0,
              v95,
              v96,
              v97,
              v98,
              v99,
              v100);
          }
        }
      }
    }
    v42 = *((_QWORD *)this + 2);
    v43 = *((_QWORD *)this + 67);
    v106 = 0;
    v44 = *(_QWORD *)(v42 + 408);
    v109 = *(_QWORD *)(v42 + 400);
    v102 = *(_DWORD *)(v105 + 52);
    Object = *(PVOID *)(*(_QWORD *)(v21 + 48) + 8LL);
    v45 = DXGPROCESS::GetCurrent(v105);
    if ( v45 )
    {
      if ( *((struct _KTHREAD **)v45 + 16) == KeGetCurrentThread() )
      {
        v45 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v45 + 120, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v75 = *((_DWORD *)v45 + 34);
            if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v46, &EventBlockThread, v47, v75);
          }
          ExAcquirePushLockExclusiveEx((char *)v45 + 120, 0LL);
        }
        *((_QWORD *)v45 + 16) = KeGetCurrentThread();
      }
    }
    LODWORD(v95) = v103;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, union _LARGE_INTEGER *, __int64, __int64, __int64 *, int *, char *))(*(_QWORD *)(v109 + 8) + 136LL))(
                    v44,
                    v43,
                    Object,
                    v102,
                    v108,
                    v95,
                    v21,
                    &v113,
                    &v106,
                    &v116);
    if ( v45 )
    {
      *((_QWORD *)v45 + 16) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v45 + 120, 0LL);
      KeLeaveCriticalRegion();
    }
    v8 = v116 && v117;
    v52 = (*(_DWORD *)(v21 + 72) ^ (v106 << 9)) & 0x7E00;
    v117 = v8;
    *(_DWORD *)(v21 + 72) ^= v52;
    if ( (int)v9 < 0 )
      goto LABEL_120;
    v53 = v113;
    if ( !v113 )
    {
      v76 = WdLogNewEntry5_WdAssertion(v49, v48, v50, v51);
      *(_QWORD *)(v76 + 24) = 3602LL;
      WdLogEvent5_WdAssertion(v76);
      v53 = v113;
    }
    v54 = v105;
    *(_QWORD *)(v21 + 24) = v53;
    v55 = *(_DWORD *)(v105 + 64);
    if ( ((v55 >> 8) & 1) == 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) & 0x20) == 0 && (v55 & 0x200) == 0 && (v55 & 0x20000) == 0 )
        goto LABEL_52;
      v54 = v105;
    }
    if ( ((*(_DWORD *)(v105 + 64) >> 8) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 8u;
    if ( (*(_DWORD *)(v54 + 64) & 0x200) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 0x20u;
    if ( (*(_DWORD *)(v54 + 64) & 0x20000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 0x4000u;
    LODWORD(v9) = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                    *(struct _VIDMM_MULTI_ALLOC **)(v21 + 24),
                    v51);
    if ( (int)v9 < 0 )
      goto LABEL_120;
    *(_DWORD *)(v21 + 72) |= 0x100u;
LABEL_52:
    if ( !DXGDEVICE::UmdManagesResidency(this) || !a6 || a6[4] != 2 )
      goto LABEL_53;
    v77 = *((_QWORD *)this + 2);
    v78 = *(_DWORD *)(v21 + 72);
    v112 = 0LL;
    v111 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v77 + 400) + 8LL) + 936LL))(
      *((_QWORD *)this + 67),
      (v78 >> 9) & 0x3F,
      &v112,
      &v111);
    v79 = *((_QWORD *)this + 2);
    v110 = 0LL;
    v80 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v79 + 400) + 8LL)
                                                                                               + 752LL))(
            *(_QWORD *)(v79 + 408),
            v112,
            v21 + 24,
            1LL,
            3,
            &v110,
            v115);
    v9 = v80;
    if ( v80 < 0 )
      break;
    if ( v80 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 944LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        &v111,
        &v110,
        1LL);
      LODWORD(v9) = 0;
    }
LABEL_53:
    v21 = *(_QWORD *)(v21 + 64);
    v22 = v104 + 1;
    v104 = v22;
    if ( v22 >= *(_DWORD *)(a2 + 44) )
      goto LABEL_54;
    v19 = a8;
    v12 = v119;
  }
  v93 = WdLogNewEntry5_WdError(v81);
  *(_QWORD *)(v93 + 24) = v9;
  WdLogEvent5_WdError(v93);
LABEL_54:
  if ( (int)v9 >= 0 )
    goto LABEL_55;
LABEL_120:
  v83 = 0;
  if ( *(_DWORD *)(a2 + 44) )
  {
    v84 = a5;
    do
    {
      if ( (*(_DWORD *)(v84 + 72) & 0x100) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v84 + 24));
        *(_DWORD *)(v84 + 72) &= ~0x100u;
      }
      v85 = *(_QWORD *)(v84 + 48);
      v86 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v85 + 8);
      if ( v86 && !a7 && (!*((_DWORD *)this + 70) && (*(_DWORD *)(v85 + 4) & 1) != 0 || (*(_DWORD *)(v85 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          v86);
        *(_DWORD *)(*(_QWORD *)(v84 + 48) + 4LL) |= 0x10u;
      }
      v87 = *(struct _VIDMM_MULTI_ALLOC **)(v84 + 24);
      if ( v87 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          v87,
          0LL,
          0);
        *(_QWORD *)(v84 + 24) = 0LL;
      }
      v88 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v84 + 48) + 8LL);
      if ( v88 && !a7 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *((struct VIDMM_DEVICE **)this + 67),
          0LL,
          v88);
        *(_QWORD *)(*(_QWORD *)(v84 + 48) + 8LL) = 0LL;
      }
      v84 = *(_QWORD *)(v84 + 64);
      ++v83;
    }
    while ( v83 < *(_DWORD *)(a2 + 44) );
  }
  return (unsigned int)v9;
}
