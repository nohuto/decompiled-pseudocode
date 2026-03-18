/*
 * XREFs of ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0097840
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0007318 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00073A0 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0007484 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00074F8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0007F08 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqq @ 0x1C00219EC (Template_pqqqqq.c)
 *     Template_pqqqqqqq @ 0x1C0021AA8 (Template_pqqqqqqq.c)
 *     Template_pdqqq @ 0x1C002ECC4 (Template_pdqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
        DXGDEVICE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        char a7,
        __int64 a8)
{
  bool v8; // r13
  __int64 v9; // rsi
  bool v10; // r15
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // r9
  _DWORD *v23; // r13
  unsigned int v24; // ebx
  __int64 v25; // r8
  unsigned int *v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  PVOID v33; // r13
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // r13
  struct DXGPROCESS *v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  _DWORD *v46; // rdx
  unsigned int v47; // r8d
  int v48; // edx
  int v50; // eax
  int v51; // ecx
  __int64 v52; // rax
  unsigned int v53; // edx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  int v57; // ecx
  int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r12
  unsigned int *v62; // r12
  __int64 v63; // rcx
  unsigned int *v64; // r12
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // rax
  _DWORD *v69; // rcx
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  int v73; // r9d
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned int v76; // ebx
  __int64 v77; // rbp
  __int64 v78; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v79; // r8
  struct _VIDMM_MULTI_ALLOC *v80; // r8
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v87[2]; // [rsp+20h] [rbp-E8h]
  __int64 v88; // [rsp+28h] [rbp-E0h]
  __int64 v89; // [rsp+30h] [rbp-D8h]
  __int64 v90; // [rsp+38h] [rbp-D0h]
  __int64 v91; // [rsp+40h] [rbp-C8h]
  __int64 v92; // [rsp+48h] [rbp-C0h]
  __int64 v93; // [rsp+50h] [rbp-B8h]
  int v94; // [rsp+60h] [rbp-A8h]
  unsigned int v95; // [rsp+60h] [rbp-A8h]
  int v96; // [rsp+64h] [rbp-A4h]
  _DWORD *v97; // [rsp+68h] [rbp-A0h]
  int v98; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h]
  __int64 v100; // [rsp+80h] [rbp-88h]
  __int64 v101; // [rsp+88h] [rbp-80h]
  __int64 v102; // [rsp+90h] [rbp-78h] BYREF
  __int64 v103; // [rsp+98h] [rbp-70h] BYREF
  __int64 v104; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v106; // [rsp+B0h] [rbp-58h] BYREF
  char v107[80]; // [rsp+B8h] [rbp-50h] BYREF
  char v108; // [rsp+110h] [rbp+8h] BYREF
  char v109; // [rsp+118h] [rbp+10h]
  __int64 v110; // [rsp+120h] [rbp+18h]
  __int64 v111; // [rsp+128h] [rbp+20h]

  v111 = a4;
  v110 = a3;
  v8 = 1;
  LODWORD(v9) = 0;
  v10 = (*(_DWORD *)(a2 + 56) & 0x4000) != 0;
  v96 = 0;
  v11 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v12 = a4;
  v109 = 1;
  if ( !v11 )
    v10 = 1;
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v15 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v15 + 144)) )
  {
    v59 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v59 + 24) = 3445LL;
    WdLogEvent5_WdAssertion(v59);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a8 )
  {
    v17 = *(_QWORD *)(a8 + 24);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v17 + 144));
  }
  v18 = a5;
  v19 = 0;
  LODWORD(a8) = 0;
  if ( !*(_DWORD *)(a2 + 44) )
  {
LABEL_55:
    *(_DWORD *)(a2 + 56) ^= (*(_DWORD *)(a2 + 56) ^ (v8 << 14)) & 0x4000;
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v20 = *(_QWORD *)(v18 + 48);
    v21 = v19;
    v22 = 1LL;
    v108 = v10;
    v23 = (_DWORD *)(v12 + 88LL * v19);
    v100 = 0LL;
    Object = 0LL;
    v97 = v23;
    v24 = (v23[4] + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v20 + 4) & 0x200F) != 0 )
      v108 = 1;
    if ( !*(_QWORD *)(v20 + 16) )
    {
      v60 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v60 + 24) = 3473LL;
      WdLogEvent5_WdAssertion(v60);
      v22 = 1LL;
    }
    v25 = (unsigned int)v23[16];
    if ( (v25 & 0x4000) != 0 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2136LL) + 16LL);
      v61 = *(_QWORD *)(*(_QWORD *)(v20 + 2040) + 48LL * ((*(_DWORD *)(v18 + 72) >> 12) & 0x3F) + 32);
      if ( !*((_BYTE *)this + 2868) || !v61 )
      {
        v75 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v75 + 24) = this;
        *(_QWORD *)(v75 + 32) = v61;
        WdLogEvent5_WdError(v75);
        LODWORD(v9) = -1073741823;
        goto LABEL_119;
      }
      v19 = a8;
    }
    if ( a7 )
    {
      v50 = v96;
      if ( *(char *)(a2 + 56) < 0 )
        v50 = 1;
      v96 = v50;
    }
    else
    {
      v94 = 0;
      if ( (*(_DWORD *)(a2 + 56) & 0x20) != 0 )
      {
        if ( *((_QWORD *)v23 + 2) > (unsigned __int64)v24 )
        {
          LODWORD(v9) = -1073741811;
          v83 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v83 + 24) = *(_QWORD *)(88LL * v19 + v111 + 16);
          *(_QWORD *)(v83 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v83);
          goto LABEL_119;
        }
        v62 = a6;
        *((_QWORD *)v23 + 2) = v24;
        v100 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v62 + 4))(
                 *((_QWORD *)v62 + 5),
                 v24,
                 v25,
                 1LL);
        if ( !v100 )
        {
          v82 = WdLogNewEntry5_WdError(v63);
          *(_QWORD *)(v82 + 24) = 3528LL;
          WdLogEvent5_WdError(v82);
          LODWORD(v9) = -1073741823;
          goto LABEL_119;
        }
        v20 = 96 * v21;
        *(_QWORD *)(96 * v21 + v110 + 8) = v100;
      }
      else if ( (v25 & 0x10) != 0 )
      {
        v20 = v110;
        v100 = *(_QWORD *)(96 * v21 + v110 + 8);
      }
      else if ( (v25 & 0x400000) != 0 )
      {
        v64 = a6;
        if ( *(_DWORD *)(a2 + 44) != 1 || (v25 & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
        {
          v65 = WdLogNewEntry5_WdAssertion(v20);
          *(_QWORD *)(v65 + 24) = 3548LL;
          WdLogEvent5_WdAssertion(v65);
        }
        Object = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))v64 + 4))(
                          *((_QWORD *)v64 + 5),
                          v24,
                          v25,
                          v22);
        if ( !Object )
        {
          v84 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v84 + 24) = 3554LL;
          WdLogEvent5_WdError(v84);
          LODWORD(v9) = -1073741823;
          goto LABEL_119;
        }
        v94 = 1;
      }
      v26 = a6;
      if ( a6 )
      {
        v20 = *a6;
        if ( (v20 & 0x40) != 0 )
        {
          if ( !*((_QWORD *)a6 + 41) )
          {
            v85 = WdLogNewEntry5_WdError(v20);
            *(_QWORD *)(v85 + 24) = 3573LL;
            WdLogEvent5_WdError(v85);
            LODWORD(v9) = -1073741823;
            goto LABEL_119;
          }
          v23[16] |= 0x400000u;
          Object = (PVOID)*((_QWORD *)v26 + 41);
        }
      }
      if ( !v23[20] )
      {
        v66 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v66 + 24) = 3583LL;
        WdLogEvent5_WdError(v66);
      }
      v27 = *((_QWORD *)this + 70);
      v28 = *(_QWORD *)(*((_QWORD *)this + 2) + 400LL);
      v101 = *(_QWORD *)(v18 + 48);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
        {
          Current = 0LL;
        }
        else
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 112, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v67 = *((_DWORD *)Current + 32);
              if ( v67 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v30, &EventBlockThread, v31, v67);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 112, 0LL);
          }
          *((_QWORD *)Current + 15) = KeGetCurrentThread();
        }
      }
      v32 = *(_QWORD *)(v28 + 8);
      v33 = Object;
      LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, PVOID, __int64 *))(v32 + 120))(
                      v27,
                      v97,
                      v101,
                      Object,
                      &v102);
      if ( Current )
      {
        *((_QWORD *)Current + 15) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 112, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v94 )
        ObfDereferenceObject(v33);
      if ( (int)v9 < 0 )
        goto LABEL_119;
      v35 = v102;
      if ( !v102 )
      {
        v68 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v68 + 24) = 3602LL;
        WdLogEvent5_WdAssertion(v68);
        v35 = v102;
      }
      v36 = (__int64)a6;
      *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL) = v35;
      if ( v36 )
      {
        v51 = *(_DWORD *)(v36 + 16);
        if ( v51 == 4 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v72 = *(_DWORD **)(v36 + 24);
            LODWORD(v93) = v72[5];
            LODWORD(v92) = v72[4];
            LODWORD(v91) = v72[3];
            LODWORD(v90) = v72[2];
            LODWORD(v89) = v72[1];
            LODWORD(v88) = *v72;
            v87[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v36;
            Template_pqqqqqqq(
              (__int64)v72,
              &EventCddStandardAllocationGdiSurface,
              v34,
              *(_QWORD *)(v18 + 48),
              *(_QWORD *)&v87[0].0,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
          }
        }
        else
        {
          v57 = v51 - 1;
          if ( v57 )
          {
            v58 = v57 - 1;
            if ( v58 )
            {
              if ( v58 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                v69 = *(_DWORD **)(v36 + 24);
                LODWORD(v90) = v69[2];
                LODWORD(v89) = v69[1];
                LODWORD(v88) = *v69;
                v87[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v36;
                Template_pdqqq(
                  (__int64)v69,
                  &EventCddStandardAllocationStagingSurface,
                  v34,
                  *(_QWORD *)(v18 + 48),
                  *(_QWORD *)&v87[0].0,
                  v88,
                  v89,
                  v90);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v70 = *(_DWORD **)(v36 + 24);
              LODWORD(v91) = v70[3];
              LODWORD(v90) = v70[2];
              LODWORD(v89) = v70[1];
              LODWORD(v88) = *v70;
              v87[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v36;
              Template_pqqqqq((__int64)v70, v36, v34, *(_QWORD *)(v18 + 48), *(_QWORD *)&v87[0].0, v88, v89, v90, v91);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v71 = *(_DWORD **)(v36 + 24);
            LODWORD(v93) = v71[5];
            LODWORD(v92) = v71[4];
            LODWORD(v91) = v71[3];
            LODWORD(v90) = v71[2];
            LODWORD(v89) = v71[1];
            LODWORD(v88) = *v71;
            v87[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v36;
            Template_pqqqqqqq(
              (__int64)v71,
              &EventCddStandardAllocationSharedPrimarySurface,
              v34,
              *(_QWORD *)(v18 + 48),
              *(_QWORD *)&v87[0].0,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
          }
        }
      }
    }
    v37 = *((_QWORD *)this + 2);
    v38 = *((_QWORD *)this + 70);
    v98 = 0;
    v39 = *(_QWORD *)(v37 + 408);
    v101 = *(_QWORD *)(v37 + 400);
    v95 = v97[13];
    Object = *(PVOID *)(*(_QWORD *)(v18 + 48) + 8LL);
    v40 = DXGPROCESS::GetCurrent();
    if ( v40 )
    {
      if ( *((struct _KTHREAD **)v40 + 15) == KeGetCurrentThread() )
      {
        v40 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v40 + 112, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v73 = *((_DWORD *)v40 + 32);
            if ( v73 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v41, &EventBlockThread, v42, v73);
          }
          ExAcquirePushLockExclusiveEx((char *)v40 + 112, 0LL);
        }
        *((_QWORD *)v40 + 15) = KeGetCurrentThread();
      }
    }
    LODWORD(v88) = v96;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, __int64, __int64, __int64, __int64 *, int *, char *))(*(_QWORD *)(v101 + 8) + 136LL))(
                    v39,
                    v38,
                    Object,
                    v95,
                    v100,
                    v88,
                    v18,
                    &v103,
                    &v98,
                    &v108);
    if ( v40 )
    {
      *((_QWORD *)v40 + 15) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v40 + 112, 0LL);
      KeLeaveCriticalRegion();
    }
    v8 = v108 && v109;
    v44 = (*(_DWORD *)(v18 + 72) ^ (v98 << 12)) & 0x3F000;
    v109 = v8;
    *(_DWORD *)(v18 + 72) ^= v44;
    if ( (int)v9 < 0 )
      goto LABEL_119;
    v45 = v103;
    if ( !v103 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v74 + 24) = 3701LL;
      WdLogEvent5_WdAssertion(v74);
      v45 = v103;
    }
    v46 = v97;
    *(_QWORD *)(v18 + 24) = v45;
    v47 = v97[16];
    if ( ((v47 >> 8) & 1) == 0 )
    {
      v48 = *(_DWORD *)(*(_QWORD *)(v18 + 48) + 4LL);
      if ( (v48 & 0x20) == 0 && (v47 & 0x20200) == 0 && (v48 & 0x4000) == 0 )
        goto LABEL_51;
      v46 = v97;
    }
    if ( ((v97[16] >> 8) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(v18 + 48) + 4LL) |= 8u;
    if ( (v46[16] & 0x200) != 0 )
      *(_DWORD *)(*(_QWORD *)(v18 + 48) + 4LL) |= 0x20u;
    if ( (v46[16] & 0x20000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v18 + 48) + 4LL) |= 0x4000u;
    LODWORD(v9) = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
                    *(struct _VIDMM_MULTI_ALLOC **)(v18 + 24),
                    0LL,
                    0LL);
    if ( (int)v9 < 0 )
      goto LABEL_119;
    *(_DWORD *)(v18 + 72) |= 0x800u;
LABEL_51:
    if ( !DXGDEVICE::UmdManagesResidency(this) || !a6 || a6[4] != 2 )
      goto LABEL_53;
    v52 = *((_QWORD *)this + 2);
    v53 = *(_DWORD *)(v18 + 72);
    v104 = 0LL;
    v106 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v52 + 400) + 8LL) + 960LL))(
      *((_QWORD *)this + 70),
      (v53 >> 12) & 0x3F,
      &v104,
      &v106);
    v54 = *((_QWORD *)this + 2);
    v105 = 0LL;
    v55 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v54 + 400) + 8LL)
                                                                                               + 768LL))(
            *(_QWORD *)(v54 + 408),
            v104,
            v18 + 24,
            1LL,
            3,
            &v105,
            v107);
    v9 = v55;
    if ( v55 < 0 )
      break;
    if ( v55 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 400LL)
                                                                                + 8LL)
                                                                    + 968LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        &v106,
        &v105,
        1LL);
      LODWORD(v9) = 0;
    }
LABEL_53:
    v18 = *(_QWORD *)(v18 + 64);
    v19 = a8 + 1;
    LODWORD(a8) = v19;
    if ( v19 >= *(_DWORD *)(a2 + 44) )
      goto LABEL_54;
    v12 = v111;
  }
  v86 = WdLogNewEntry5_WdError(v56);
  *(_QWORD *)(v86 + 24) = v9;
  WdLogEvent5_WdError(v86);
LABEL_54:
  if ( (int)v9 >= 0 )
    goto LABEL_55;
LABEL_119:
  v76 = 0;
  if ( *(_DWORD *)(a2 + 44) )
  {
    v77 = a5;
    do
    {
      if ( (*(_DWORD *)(v77 + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v77 + 24));
        *(_DWORD *)(v77 + 72) &= ~0x800u;
      }
      v78 = *(_QWORD *)(v77 + 48);
      v79 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v78 + 8);
      if ( v79 && !a7 && (!*((_DWORD *)this + 76) && (*(_DWORD *)(v78 + 4) & 1) != 0 || (*(_DWORD *)(v78 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          v79);
        *(_DWORD *)(*(_QWORD *)(v77 + 48) + 4LL) |= 0x10u;
      }
      v80 = *(struct _VIDMM_MULTI_ALLOC **)(v77 + 24);
      if ( v80 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          v80,
          0LL,
          0);
        *(_QWORD *)(v77 + 24) = 0LL;
      }
      v81 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v77 + 48) + 8LL);
      if ( v81 && !a7 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *((struct VIDMM_DEVICE **)this + 70),
          0LL,
          v81);
        *(_QWORD *)(*(_QWORD *)(v77 + 48) + 8LL) = 0LL;
      }
      v77 = *(_QWORD *)(v77 + 64);
      ++v76;
    }
    while ( v76 < *(_DWORD *)(a2 + 44) );
  }
  return (unsigned int)v9;
}
