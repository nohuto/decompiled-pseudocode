/*
 * XREFs of ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C006EC20
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000238C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0004604 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004660 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000472C (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0004798 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0018E14 (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     Template_pqqqqq @ 0x1C001CAD4 (Template_pqqqqq.c)
 *     Template_pqqqqqqq @ 0x1C001CB90 (Template_pqqqqqqq.c)
 *     Template_pdqqq @ 0x1C0028DF0 (Template_pdqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v8; // rdi
  bool v10; // r12
  BOOL v11; // eax
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rbp
  unsigned int *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // eax
  _DWORD *v25; // r12
  unsigned int v26; // ebx
  __int64 v27; // rax
  int v28; // r8d
  __int64 v29; // r14
  int v30; // eax
  union _LARGE_INTEGER *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rax
  PVOID v42; // r12
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // rax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  _DWORD *v50; // rcx
  _DWORD *v51; // rcx
  _DWORD *v52; // rcx
  _DWORD *v53; // rcx
  int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // r14
  __int64 v57; // r12
  struct DXGPROCESS *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // r9d
  __int64 v62; // rcx
  unsigned int *v63; // r9
  __int64 v64; // rax
  __int64 v65; // rax
  _DWORD *v66; // rdx
  unsigned int v67; // r8d
  int v68; // edx
  __int64 v69; // rax
  unsigned int v70; // edx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbp
  unsigned int v81; // ebx
  char v82; // r14
  __int64 v83; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v84; // r8
  struct _VIDMM_MULTI_ALLOC *v85; // r8
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v86; // r9
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v88[2]; // [rsp+20h] [rbp-F8h]
  __int64 v89; // [rsp+28h] [rbp-F0h]
  __int64 v90; // [rsp+30h] [rbp-E8h]
  __int64 v91; // [rsp+38h] [rbp-E0h]
  __int64 v92; // [rsp+40h] [rbp-D8h]
  __int64 v93; // [rsp+48h] [rbp-D0h]
  __int64 v94; // [rsp+50h] [rbp-C8h]
  char v95; // [rsp+60h] [rbp-B8h]
  int v96; // [rsp+64h] [rbp-B4h]
  _DWORD *v97; // [rsp+68h] [rbp-B0h]
  int v98; // [rsp+70h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-A0h]
  union _LARGE_INTEGER *v100; // [rsp+80h] [rbp-98h]
  __int64 v101; // [rsp+88h] [rbp-90h]
  BOOL v102; // [rsp+90h] [rbp-88h]
  __int64 v103; // [rsp+98h] [rbp-80h] BYREF
  __int64 v104; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v105; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v106; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v107; // [rsp+B8h] [rbp-60h] BYREF
  char v108[24]; // [rsp+C0h] [rbp-58h] BYREF
  char v109; // [rsp+120h] [rbp+8h] BYREF
  __int64 v110; // [rsp+128h] [rbp+10h]
  __int64 v111; // [rsp+130h] [rbp+18h]
  __int64 v112; // [rsp+138h] [rbp+20h]

  v112 = a4;
  v111 = a3;
  v110 = a2;
  LODWORD(v8) = 0;
  v96 = 0;
  v10 = 1;
  v95 = 1;
  v11 = (*(_DWORD *)(a2 + 56) & 0x4000) != 0;
  v12 = a4;
  v13 = a2;
  if ( (*(_DWORD *)(a2 + 56) & 0x400) != 0 )
    v11 = 1;
  v102 = v11;
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 144)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v14 + 128)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v16 + 24) = 3272LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  if ( a8 )
  {
    v17 = *(_QWORD *)(a8 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 144) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v17 + 128));
  }
  v18 = a5;
  v19 = 0;
  v20 = a5;
  LODWORD(a8) = 0;
  if ( !*(_DWORD *)(v13 + 44) )
  {
LABEL_141:
    *(_DWORD *)(v13 + 56) ^= (*(_DWORD *)(v13 + 56) ^ (v10 << 14)) & 0x4000;
    return (unsigned int)v8;
  }
  v21 = a6;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v20 + 48);
    v23 = v19;
    v109 = v102;
    v24 = *(_DWORD *)(v22 + 4);
    v25 = (_DWORD *)(v12 + 88 * v23);
    v100 = 0LL;
    Object = 0LL;
    v97 = v25;
    v26 = (v25[4] + 4095) & 0xFFFFF000;
    if ( (v24 & 3) != 0 || (v24 & 0xC) != 0 || (v24 & 0x2000) != 0 )
      v109 = 1;
    if ( !*(_QWORD *)(v22 + 16) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v27 + 24) = 3300LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = v25[16];
    if ( (v28 & 0x4000) != 0 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 1992LL) + 16LL);
      v29 = *(_QWORD *)(*(_QWORD *)(v22 + 1904) + 48LL * ((*(_DWORD *)(v20 + 72) >> 12) & 0x3F) + 32);
      if ( !*((_BYTE *)this + 2844) || !v29 )
      {
        v74 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v74 + 24) = this;
        *(_QWORD *)(v74 + 32) = v29;
        WdLogEvent5_WdError(v74);
        LODWORD(v8) = -1073741823;
        goto LABEL_124;
      }
      v13 = v110;
    }
    if ( a7 )
    {
      v54 = v96;
      if ( *(char *)(v13 + 56) < 0 )
        v54 = 1;
      v96 = v54;
    }
    else
    {
      v30 = *(_DWORD *)(v13 + 56);
      LODWORD(a5) = 0;
      if ( (v30 & 0x20) != 0 )
      {
        if ( *((_QWORD *)v25 + 2) > (unsigned __int64)v26 )
        {
          LODWORD(v8) = -1073741811;
          v76 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v76 + 24) = *(_QWORD *)(88LL * (unsigned int)a8 + v112 + 16);
          *(_QWORD *)(v76 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v76);
          goto LABEL_124;
        }
        *((_QWORD *)v25 + 2) = v26;
        v31 = (union _LARGE_INTEGER *)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v21 + 4))(*((_QWORD *)v21 + 5), v26);
        v100 = v31;
        if ( !v31 )
        {
          v75 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v75 + 24) = 3355LL;
          WdLogEvent5_WdError(v75);
          LODWORD(v8) = -1073741823;
          goto LABEL_124;
        }
        v22 = 96 * v23;
        *(_QWORD *)(96 * v23 + v111 + 8) = v31;
      }
      else if ( (v28 & 0x10) != 0 )
      {
        v22 = v111;
        v100 = *(union _LARGE_INTEGER **)(96 * v23 + v111 + 8);
      }
      else if ( (v28 & 0x400000) != 0 )
      {
        if ( *(_DWORD *)(v13 + 44) != 1 || (v28 & 0x2000000) == 0 || !v21 || !*((_QWORD *)v21 + 4) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v33 + 24) = 3375LL;
          WdLogEvent5_WdAssertion(v33);
        }
        Object = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v21 + 4))(*((_QWORD *)v21 + 5), v26);
        if ( !Object )
        {
          v77 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v77 + 24) = 3381LL;
          WdLogEvent5_WdError(v77);
          LODWORD(v8) = -1073741823;
          goto LABEL_124;
        }
        LODWORD(a5) = 1;
      }
      if ( v21 )
      {
        v22 = *v21;
        if ( (v22 & 0x40) != 0 )
        {
          if ( !*((_QWORD *)v21 + 41) )
          {
            v78 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v78 + 24) = 3400LL;
            WdLogEvent5_WdError(v78);
            LODWORD(v8) = -1073741823;
            goto LABEL_124;
          }
          v25[16] |= 0x400000u;
          Object = (PVOID)*((_QWORD *)v21 + 41);
        }
      }
      if ( !v25[20] )
      {
        v34 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v34 + 24) = 3410LL;
        WdLogEvent5_WdError(v34);
      }
      v35 = *((_QWORD *)this + 67);
      v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
      v101 = *(_QWORD *)(v20 + 48);
      Current = DXGPROCESS::GetCurrent();
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
              v40 = *((_DWORD *)Current + 34);
              if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
                Template_q(v38, &EventBlockThread, v39, v40);
            }
            ExAcquirePushLockExclusiveEx((char *)Current + 120, 0LL);
          }
          *((_QWORD *)Current + 16) = KeGetCurrentThread();
        }
      }
      v41 = *(_QWORD *)(v36 + 8);
      v42 = Object;
      LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, PVOID, __int64 *))(v41 + 120))(
                      v35,
                      v97,
                      v101,
                      Object,
                      &v105);
      if ( Current )
      {
        *((_QWORD *)Current + 16) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 120, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( (_DWORD)a5 )
        ObfDereferenceObject(v42);
      if ( (int)v8 < 0 )
        goto LABEL_124;
      v45 = v105;
      if ( !v105 )
      {
        v46 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v46 + 24) = 3429LL;
        WdLogEvent5_WdAssertion(v46);
        v45 = v105;
      }
      *(_QWORD *)(*(_QWORD *)(v20 + 48) + 8LL) = v45;
      if ( v21 )
      {
        v47 = v21[4];
        if ( v47 == 4 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            v53 = (_DWORD *)*((_QWORD *)v21 + 3);
            LODWORD(v94) = v53[5];
            LODWORD(v93) = v53[4];
            LODWORD(v92) = v53[3];
            LODWORD(v91) = v53[2];
            LODWORD(v90) = v53[1];
            LODWORD(v89) = *v53;
            v88[0].Value = *v21;
            Template_pqqqqqqq(
              (__int64)v53,
              &EventCddStandardAllocationGdiSurface,
              v44,
              *(_QWORD *)(v20 + 48),
              *(_QWORD *)&v88[0].0,
              v89,
              v90,
              v91,
              v92,
              v93,
              v94);
          }
        }
        else
        {
          v48 = v47 - 1;
          if ( v48 )
          {
            v49 = v48 - 1;
            if ( v49 )
            {
              if ( v49 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              {
                v50 = (_DWORD *)*((_QWORD *)v21 + 3);
                LODWORD(v91) = v50[2];
                LODWORD(v90) = v50[1];
                LODWORD(v89) = *v50;
                v88[0].Value = *v21;
                Template_pdqqq(
                  (__int64)v50,
                  &EventCddStandardAllocationStagingSurface,
                  v44,
                  *(_QWORD *)(v20 + 48),
                  *(_QWORD *)&v88[0].0,
                  v89,
                  v90,
                  v91);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            {
              v51 = (_DWORD *)*((_QWORD *)v21 + 3);
              LODWORD(v92) = v51[3];
              LODWORD(v91) = v51[2];
              LODWORD(v90) = v51[1];
              LODWORD(v89) = *v51;
              v88[0].Value = *v21;
              Template_pqqqqq((__int64)v51, v43, v44, *(_QWORD *)(v20 + 48), *(_QWORD *)&v88[0].0, v89, v90, v91, v92);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          {
            v52 = (_DWORD *)*((_QWORD *)v21 + 3);
            LODWORD(v94) = v52[5];
            LODWORD(v93) = v52[4];
            LODWORD(v92) = v52[3];
            LODWORD(v91) = v52[2];
            LODWORD(v90) = v52[1];
            LODWORD(v89) = *v52;
            v88[0].Value = *v21;
            Template_pqqqqqqq(
              (__int64)v52,
              &EventCddStandardAllocationSharedPrimarySurface,
              v44,
              *(_QWORD *)(v20 + 48),
              *(_QWORD *)&v88[0].0,
              v89,
              v90,
              v91,
              v92,
              v93,
              v94);
          }
        }
      }
    }
    v55 = *((_QWORD *)this + 2);
    v56 = *((_QWORD *)this + 67);
    v98 = 0;
    v57 = *(_QWORD *)(v55 + 432);
    v101 = *(_QWORD *)(v55 + 424);
    LODWORD(a5) = v97[13];
    Object = *(PVOID *)(*(_QWORD *)(v20 + 48) + 8LL);
    v58 = DXGPROCESS::GetCurrent();
    if ( v58 )
    {
      if ( *((struct _KTHREAD **)v58 + 16) == KeGetCurrentThread() )
      {
        v58 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v58 + 120, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v61 = *((_DWORD *)v58 + 34);
            if ( v61 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              Template_q(v59, &EventBlockThread, v60, v61);
          }
          ExAcquirePushLockExclusiveEx((char *)v58 + 120, 0LL);
        }
        *((_QWORD *)v58 + 16) = KeGetCurrentThread();
      }
    }
    LODWORD(v89) = v96;
    LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, union _LARGE_INTEGER *, __int64, __int64, __int64 *, int *, char *))(*(_QWORD *)(v101 + 8) + 136LL))(
                    v57,
                    v56,
                    Object,
                    (unsigned int)a5,
                    v100,
                    v89,
                    v20,
                    &v106,
                    &v98,
                    &v109);
    if ( v58 )
    {
      *((_QWORD *)v58 + 16) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v58 + 120, 0LL);
      KeLeaveCriticalRegion();
    }
    v10 = v95 && v109;
    v95 = v10;
    *(_DWORD *)(v20 + 72) ^= (*(_DWORD *)(v20 + 72) ^ (v98 << 12)) & 0x3F000;
    if ( (int)v8 < 0 )
      goto LABEL_124;
    v64 = v106;
    if ( !v106 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v62);
      *(_QWORD *)(v65 + 24) = 3528LL;
      WdLogEvent5_WdAssertion(v65);
      v64 = v106;
    }
    v66 = v97;
    *(_QWORD *)(v20 + 24) = v64;
    v67 = v97[16];
    if ( ((v67 >> 8) & 1) == 0 )
    {
      v68 = *(_DWORD *)(*(_QWORD *)(v20 + 48) + 4LL);
      if ( (v68 & 0x20) == 0 && (v67 & 0x20200) == 0 && (v68 & 0x4000) == 0 )
        goto LABEL_109;
      v66 = v97;
    }
    if ( ((v97[16] >> 8) & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(v20 + 48) + 4LL) |= 8u;
    if ( (v66[16] & 0x200) != 0 )
      *(_DWORD *)(*(_QWORD *)(v20 + 48) + 4LL) |= 0x20u;
    if ( (v66[16] & 0x20000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v20 + 48) + 4LL) |= 0x4000u;
    LODWORD(v8) = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
                    *(struct _VIDMM_MULTI_ALLOC **)(v20 + 24),
                    v63);
    if ( (int)v8 < 0 )
      goto LABEL_124;
    *(_DWORD *)(v20 + 72) |= 0x800u;
LABEL_109:
    if ( !DXGDEVICE::UmdManagesResidency(this) || !v21 || v21[4] != 2 )
      goto LABEL_115;
    v69 = *((_QWORD *)this + 2);
    v70 = *(_DWORD *)(v20 + 72);
    v103 = 0LL;
    v104 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v69 + 424) + 8LL) + 944LL))(
      *((_QWORD *)this + 67),
      (v70 >> 12) & 0x3F,
      &v103,
      &v104);
    v71 = *((_QWORD *)this + 2);
    v107 = 0LL;
    v72 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v71 + 424) + 8LL)
                                                                                               + 752LL))(
            *(_QWORD *)(v71 + 432),
            v103,
            v20 + 24,
            1LL,
            3,
            &v107,
            v108);
    v8 = v72;
    if ( v72 < 0 )
      break;
    if ( v72 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 424LL)
                                                                                + 8LL)
                                                                    + 952LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
        &v104,
        &v107,
        1LL);
      LODWORD(v8) = 0;
    }
LABEL_115:
    v13 = v110;
    v19 = a8 + 1;
    v20 = *(_QWORD *)(v20 + 64);
    LODWORD(a8) = v19;
    if ( v19 >= *(_DWORD *)(v110 + 44) )
      goto LABEL_123;
    v12 = v112;
  }
  v79 = WdLogNewEntry5_WdError(v73);
  *(_QWORD *)(v79 + 24) = v8;
  WdLogEvent5_WdError(v79);
  v13 = v110;
LABEL_123:
  if ( (int)v8 >= 0 )
    goto LABEL_141;
LABEL_124:
  v80 = v110;
  v81 = 0;
  if ( *(_DWORD *)(v110 + 44) )
  {
    v82 = a7;
    do
    {
      if ( (*(_DWORD *)(v18 + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v18 + 24));
        *(_DWORD *)(v18 + 72) &= ~0x800u;
      }
      v83 = *(_QWORD *)(v18 + 48);
      v84 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v83 + 8);
      if ( v84
        && !v82
        && (!*((_DWORD *)this + 70) && (*(_DWORD *)(v83 + 4) & 1) != 0 || (*(_DWORD *)(v83 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
          v84);
        *(_DWORD *)(*(_QWORD *)(v18 + 48) + 4LL) |= 0x10u;
      }
      v85 = *(struct _VIDMM_MULTI_ALLOC **)(v18 + 24);
      if ( v85 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 432LL),
          v85,
          0LL,
          0);
        *(_QWORD *)(v18 + 24) = 0LL;
      }
      v86 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v18 + 48) + 8LL);
      if ( v86 && !v82 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 424LL),
          *((struct VIDMM_DEVICE **)this + 67),
          0LL,
          v86);
        *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL) = 0LL;
      }
      v18 = *(_QWORD *)(v18 + 64);
      ++v81;
    }
    while ( v81 < *(_DWORD *)(v80 + 44) );
  }
  return (unsigned int)v8;
}
