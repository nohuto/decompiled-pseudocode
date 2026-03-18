/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0164658
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0001788 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0004664 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0007484 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000911C (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001D6C8 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C001D71C (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C002D184 (DxgkHandleMiracastDrtEscape.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009E2E4 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00B15B0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C0144A60 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C01456E8 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C0145754 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C0145EC8 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C015166C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C015180C (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C015DEE0 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C019A068 (DxgkHandleThermalCoolingDrtEscape.c)
 *     DmmDRTTest @ 0x1C01A361C (DmmDRTTest.c)
 *     MonitorDRTTest @ 0x1C01AFF3C (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  signed __int32 v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rdx
  char *v32; // rax
  _OWORD *v33; // rcx
  __int64 v34; // r8
  __int64 CurrentProcess; // rax
  __int64 v36; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v38; // rcx
  struct DXGPROCESS *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rcx
  struct DXGDEVICE *v42; // rbx
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  struct _KTHREAD **v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  DXGDEVICEBYHANDLE *v63; // rcx
  NTSTATUS v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  struct _KTHREAD **v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r12
  __int64 v72; // rcx
  struct DXGDEVICE *v73; // r15
  __int64 v74; // rax
  __int64 v75; // r9
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v77; // rcx
  struct _EX_RUNDOWN_REF *v78; // rbx
  _QWORD *v79; // rax
  __int64 v80; // r9
  __int64 v81; // rcx
  bool v82; // bl
  __int64 v83; // rax
  __int64 v84; // rdx
  struct _KTHREAD **v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  struct DXGDEVICE *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  struct DXGPROCESS *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  struct DXGCONTEXT *v95; // r13
  __int64 v96; // rax
  struct DXGDEVICE *v97; // rbx
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  struct _D3DDDI_ALLOCATIONLIST *v102; // r15
  unsigned int v103; // edx
  unsigned __int8 IsDxgmms2; // di
  struct DXGALLOCATION **v105; // rbx
  struct DXGALLOCATION **Elements; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  struct _KTHREAD **v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  struct DXGDEVICE *v118; // r15
  __int64 v119; // rax
  __int64 v120; // r9
  int v121; // eax
  unsigned int v122; // r8d
  int v123; // edx
  __int64 v124; // rcx
  int v125; // [rsp+34h] [rbp-764h] BYREF
  struct _EX_RUNDOWN_REF *v126; // [rsp+38h] [rbp-760h] BYREF
  _BYTE v127[8]; // [rsp+40h] [rbp-758h] BYREF
  int v128; // [rsp+48h] [rbp-750h]
  unsigned int v129; // [rsp+4Ch] [rbp-74Ch] BYREF
  struct DXGCONTEXT *v130; // [rsp+50h] [rbp-748h] BYREF
  struct DXGALLOCATION **v131; // [rsp+58h] [rbp-740h] BYREF
  _BYTE v132[8]; // [rsp+60h] [rbp-738h] BYREF
  struct DXGDEVICE *v133; // [rsp+68h] [rbp-730h] BYREF
  _BYTE v134[8]; // [rsp+70h] [rbp-728h] BYREF
  _BYTE v135[8]; // [rsp+78h] [rbp-720h] BYREF
  _BYTE v136[16]; // [rsp+80h] [rbp-718h] BYREF
  struct DXGDEVICE *v137; // [rsp+90h] [rbp-708h] BYREF
  struct DXGDEVICE *v138; // [rsp+98h] [rbp-700h] BYREF
  _BYTE v139[8]; // [rsp+A0h] [rbp-6F8h] BYREF
  struct DXGDEVICE *v140; // [rsp+A8h] [rbp-6F0h] BYREF
  struct DXGDEVICE *v141; // [rsp+B0h] [rbp-6E8h] BYREF
  _BYTE v142[16]; // [rsp+B8h] [rbp-6E0h] BYREF
  _BYTE v143[24]; // [rsp+C8h] [rbp-6D0h] BYREF
  unsigned int v144; // [rsp+E0h] [rbp-6B8h] BYREF
  PVOID Object; // [rsp+E8h] [rbp-6B0h] BYREF
  _BYTE v146[16]; // [rsp+F0h] [rbp-6A8h] BYREF
  struct _EX_RUNDOWN_REF *v147; // [rsp+100h] [rbp-698h] BYREF
  _BYTE v148[24]; // [rsp+108h] [rbp-690h] BYREF
  _BYTE v149[16]; // [rsp+120h] [rbp-678h] BYREF
  _BYTE v150[16]; // [rsp+130h] [rbp-668h] BYREF
  union _LARGE_INTEGER v151; // [rsp+140h] [rbp-658h] BYREF
  _BYTE v152[24]; // [rsp+148h] [rbp-650h] BYREF
  __int64 v153; // [rsp+160h] [rbp-638h] BYREF
  int v154; // [rsp+168h] [rbp-630h]
  const wchar_t *v155; // [rsp+170h] [rbp-628h]
  int *v156; // [rsp+178h] [rbp-620h]
  int v157; // [rsp+180h] [rbp-618h]
  int *v158; // [rsp+188h] [rbp-610h]
  int v159; // [rsp+190h] [rbp-608h]
  __int64 v160; // [rsp+198h] [rbp-600h]
  int v161; // [rsp+1A0h] [rbp-5F8h]
  _BYTE v162[40]; // [rsp+1A8h] [rbp-5F0h] BYREF
  _BYTE v163[96]; // [rsp+1D0h] [rbp-5C8h] BYREF
  _BYTE v164[96]; // [rsp+230h] [rbp-568h] BYREF
  PERESOURCE *v165[12]; // [rsp+290h] [rbp-508h] BYREF
  _D3DKMT_RENDER v166; // [rsp+2F0h] [rbp-4A8h] BYREF
  PVOID v167[33]; // [rsp+460h] [rbp-338h] BYREF
  int v168; // [rsp+568h] [rbp-230h]
  _QWORD v169[52]; // [rsp+570h] [rbp-228h] BYREF
  __int64 v170[8]; // [rsp+710h] [rbp-88h] BYREF

  memset(v170, 0, sizeof(v170));
  EtwActivityIdControl(3u, (LPGUID)&v170[1]);
  v170[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v170[3]) = 45;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v128 = 0;
  v11 = *((unsigned int *)a2 + 2);
  if ( (_DWORD)v11 )
  {
    if ( !dword_1C00573F0 )
    {
      v26 = WdLogNewEntry5_WdWarning(v11, v6, v7, v8);
      *(_QWORD *)(v26 + 24) = 810LL;
      goto LABEL_194;
    }
    if ( (int)v11 <= 13 )
    {
      if ( (_DWORD)v11 == 13 )
      {
        v50 = *((unsigned int *)a2 + 1);
        if ( (unsigned int)v50 < 0x38 )
        {
          v26 = WdLogNewEntry5_WdWarning(v50, v6, v7, v8);
          *(_QWORD *)(v26 + 24) = 699LL;
          goto LABEL_194;
        }
        v49 = DxgkHandleMiracastDrtEscape(v50, (__int64)a2);
      }
      else
      {
        v18 = v11 - 1;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            v20 = v19 - 1;
            if ( !v20 )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[3]) )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
              LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive(a3);
              if ( (int)v10 >= 0 )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
              return (unsigned int)v10;
            }
            v21 = (unsigned int)(v20 - 1);
            if ( !(_DWORD)v21 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v48 = *((unsigned int *)a2 + 3);
                if ( (unsigned int)(v48 - 1) <= 0x3FF )
                {
                  g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                  return (unsigned int)v10;
                }
                v26 = WdLogNewEntry5_WdWarning(v48, v6, v7, v8);
                *(_QWORD *)(v26 + 24) = 199LL;
              }
              else
              {
                v26 = WdLogNewEntry5_WdWarning(v21, v6, v7, v8);
                *(_QWORD *)(v26 + 24) = 190LL;
              }
              goto LABEL_194;
            }
            v22 = (unsigned int)(v21 - 1);
            if ( !(_DWORD)v22 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x14u )
              {
                g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                return (unsigned int)v10;
              }
              v26 = WdLogNewEntry5_WdWarning(v22, v6, v7, v8);
              *(_QWORD *)(v26 + 24) = 213LL;
              goto LABEL_194;
            }
            v23 = (unsigned int)(v22 - 1);
            if ( (_DWORD)v23 )
            {
              v24 = (unsigned int)(v23 - 4);
              if ( !(_DWORD)v24 )
              {
                if ( *((_DWORD *)a2 + 1) >= 0x10u )
                {
                  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 578);
                  return (unsigned int)v10;
                }
                v26 = WdLogNewEntry5_WdWarning(v24, v6, v7, v8);
                *(_QWORD *)(v26 + 24) = 230LL;
                goto LABEL_194;
              }
              v25 = (unsigned int)(v24 - 1);
              if ( !(_DWORD)v25 )
              {
                v28 = *((unsigned int *)this + 578);
                if ( (_DWORD)v28 )
                {
                  v25 = (unsigned int)(v28 - 1);
                  v6 = 344 * v25 + 360;
                  if ( *((unsigned int *)a2 + 1) >= v6 )
                  {
                    v29 = (char *)a2 + 352;
                    v30 = (unsigned int)v28;
                    do
                    {
                      v31 = *((_QWORD *)this + 271);
                      v32 = v29 - 336;
                      v33 = (_OWORD *)(v9 + v31 + 8);
                      v34 = 2LL;
                      do
                      {
                        *(_OWORD *)v32 = *v33;
                        *((_OWORD *)v32 + 1) = v33[1];
                        *((_OWORD *)v32 + 2) = v33[2];
                        *((_OWORD *)v32 + 3) = v33[3];
                        *((_OWORD *)v32 + 4) = v33[4];
                        *((_OWORD *)v32 + 5) = v33[5];
                        *((_OWORD *)v32 + 6) = v33[6];
                        v32 += 128;
                        *((_OWORD *)v32 - 1) = v33[7];
                        v33 += 8;
                        --v34;
                      }
                      while ( v34 );
                      *(_OWORD *)v32 = *v33;
                      *((_OWORD *)v32 + 1) = v33[1];
                      *((_OWORD *)v32 + 2) = v33[2];
                      *((_OWORD *)v32 + 3) = v33[3];
                      *((_OWORD *)v32 + 4) = v33[4];
                      *(_DWORD *)v29 = *(_DWORD *)(v9 + v31 + 344);
                      v29[4] = *(_BYTE *)(v9 + v31 + 356);
                      v9 += 520LL;
                      v29 += 344;
                      --v30;
                    }
                    while ( v30 );
                    return (unsigned int)v10;
                  }
                }
                v26 = WdLogNewEntry5_WdWarning(v25, v6, v28, v8);
                *(_QWORD *)(v26 + 24) = 249LL;
                goto LABEL_194;
              }
              if ( (_DWORD)v25 == 1 )
              {
                if ( *((_DWORD *)a2 + 1) >= 0x10u )
                {
                  v27 = *((_QWORD *)this + 267);
                  if ( v27 )
                    *(_BYTE *)(v27 + 632) = *((_BYTE *)a2 + 12);
                  return (unsigned int)v10;
                }
                v26 = WdLogNewEntry5_WdWarning(v25, v6, v7, v8);
                *(_QWORD *)(v26 + 24) = 268LL;
                goto LABEL_194;
              }
              goto LABEL_83;
            }
            if ( *((_DWORD *)a2 + 1) < 0x114u )
            {
              v26 = WdLogNewEntry5_WdWarning(v23, v6, v7, v8);
              *(_QWORD *)(v26 + 24) = 287LL;
LABEL_194:
              WdLogEvent5_WdWarning(v26);
              goto LABEL_195;
            }
            CurrentProcess = PsGetCurrentProcess(v23);
            ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v36);
            v39 = ProcessDxgProcess;
            if ( !ProcessDxgProcess )
            {
              v40 = WdLogNewEntry5_WdError(v38);
              *(_QWORD *)(v40 + 24) = 295LL;
              goto LABEL_45;
            }
            DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK(
              (DXGPROCESSDEVICEITERATIONLOCK *)v132,
              ProcessDxgProcess);
            v42 = 0LL;
            v138 = 0LL;
            v43 = *((_DWORD *)a2 + 3);
            if ( v43 )
            {
              DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v139, v43, (struct _KTHREAD **)v39, &v138);
              v42 = v138;
              if ( !v138 )
              {
                v45 = WdLogNewEntry5_WdError(v44);
                *(_QWORD *)(v45 + 24) = *((unsigned int *)a2 + 3);
                WdLogEvent5_WdError(v45);
                LODWORD(v10) = -1073741811;
                DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v139);
LABEL_49:
                DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v132);
                return (unsigned int)v10;
              }
              DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v139);
            }
            if ( v42 || ((v46 = *((_QWORD *)v39 + 30)) == 0 ? (v42 = 0LL) : (v42 = (struct DXGDEVICE *)(v46 - 24)), v42) )
            {
              DXGDEVICE::GetContexts(v42, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
              *((_DWORD *)a2 + 3) = *((_DWORD *)v42 + 77);
            }
            else
            {
              v47 = WdLogNewEntry5_WdError(v41);
              *(_QWORD *)(v47 + 24) = 322LL;
              WdLogEvent5_WdError(v47);
              LODWORD(v10) = -1073741811;
            }
            goto LABEL_49;
          }
          v49 = DmmDRTTest(this);
        }
        else
        {
          v49 = MonitorDRTTest(this, a2, (__int64)v170);
        }
      }
LABEL_191:
      LODWORD(v10) = v49;
      return (unsigned int)v10;
    }
    v51 = (unsigned int)(v11 - 14);
    if ( !(_DWORD)v51 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x14u )
      {
        v26 = WdLogNewEntry5_WdWarning(v51, v6, v7, v8);
        *(_QWORD *)(v26 + 24) = 714LL;
        goto LABEL_194;
      }
      v124 = *((_QWORD *)this + 24);
      if ( !v124 )
        goto LABEL_192;
      v49 = DxgkHandleThermalCoolingDrtEscape(v124, a2);
      goto LABEL_191;
    }
    v52 = v51 - 1;
    if ( v52 )
    {
      v53 = (unsigned int)(v52 - 1);
      if ( !(_DWORD)v53 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x58u )
        {
          v26 = WdLogNewEntry5_WdWarning(v53, v6, v7, v8);
          *(_QWORD *)(v26 + 24) = 337LL;
          goto LABEL_194;
        }
        v113 = PsGetCurrentProcess(v53);
        v115 = (struct _KTHREAD **)PsGetProcessDxgProcess(v113, v114);
        if ( !v115 )
        {
          v40 = WdLogNewEntry5_WdError(v116);
          *(_QWORD *)(v40 + 24) = 345LL;
          goto LABEL_45;
        }
        v137 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v135, *((_DWORD *)a2 + 3), v115, &v137);
        v118 = v137;
        if ( v137 )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v149, v118);
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v152,
            *(struct DXGADAPTER **)(*((_QWORD *)v118 + 2) + 16LL),
            1);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v165, (__int64)v118, 0, v120, 0);
          LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v165);
          if ( (int)v10 >= 0 )
          {
            memset(v169, 0, 0x198uLL);
            HIDWORD(v169[0]) = *((_DWORD *)a2 + 3);
            LODWORD(v169[2]) = 4;
            v169[3] = (char *)a2 + 16;
            v121 = LODWORD(v169[0]) | 0x200;
            LODWORD(v169[0]) |= 0x200u;
            if ( *((_BYTE *)a2 + 60) )
            {
              v121 |= 1u;
              LODWORD(v169[0]) = v121;
            }
            if ( *((_BYTE *)a2 + 65) )
            {
              v121 |= 0x20u;
              LODWORD(v169[0]) = v121;
            }
            if ( *((_BYTE *)a2 + 61) )
            {
              v121 |= 0x400u;
              LODWORD(v169[0]) = v121;
            }
            if ( *((_BYTE *)a2 + 62) )
            {
              v121 |= 0x1000u;
              LODWORD(v169[0]) = v121;
            }
            if ( *((_BYTE *)a2 + 63) )
              LODWORD(v169[0]) = v121 | 0x2000;
            LOBYTE(v169[50]) = *((_BYTE *)a2 + 64);
            LODWORD(v169[47]) = *((_DWORD *)a2 + 14);
            HIDWORD(v169[47]) = *((_DWORD *)a2 + 17);
            HIDWORD(v169[46]) = *((_DWORD *)a2 + 10);
            LODWORD(v169[48]) = *((_DWORD *)a2 + 18);
            v169[49] = *((_QWORD *)a2 + 10);
            LODWORD(v10) = DXGDEVICE::CreateStandardAllocation(
                             v118,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v169,
                             v165);
            if ( (int)v10 >= 0 )
            {
              *((_DWORD *)a2 + 11) = HIDWORD(v169[6]);
              *((_QWORD *)a2 + 6) = v169[1];
            }
            else
            {
              LODWORD(v10) = -1073741811;
            }
          }
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v165);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v152);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v149);
        }
        else
        {
          v119 = WdLogNewEntry5_WdError(v117);
          *(_QWORD *)(v119 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v119);
          LODWORD(v10) = -1073741811;
        }
        v63 = (DXGDEVICEBYHANDLE *)v135;
        goto LABEL_159;
      }
      v54 = (unsigned int)(v53 - 1);
      if ( !(_DWORD)v54 )
      {
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
        {
          v26 = WdLogNewEntry5_WdWarning(v54, v6, v7, v8);
          *(_QWORD *)(v26 + 24) = 554LL;
          goto LABEL_194;
        }
        v90 = PsGetCurrentProcess(v54);
        v92 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v90, v91);
        if ( v92 )
        {
          v130 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142, *((_DWORD *)a2 + 3), v92, &v130, 0);
          v95 = v130;
          if ( v130 )
          {
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            v97 = (struct DXGDEVICE *)*((_QWORD *)v95 + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v146, v97);
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v95 + 360));
            DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v148, this, 1);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v164, (__int64)v97, 0, v98, 0);
            LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v164);
            if ( (int)v10 >= 0 )
            {
              if ( *((_DWORD *)a2 + 8) > 0x10u )
              {
                v100 = WdLogNewEntry5_WdError(v99);
                *(_QWORD *)(v100 + 24) = 593LL;
                WdLogEvent5_WdError(v100);
                LODWORD(v10) = -1073741811;
              }
              if ( !*((_DWORD *)a2 + 4) )
              {
                v101 = WdLogNewEntry5_WdError(v99);
                *(_QWORD *)(v101 + 24) = 598LL;
                WdLogEvent5_WdError(v101);
                LODWORD(v10) = -1073741811;
              }
              memset(&v166, 0, sizeof(v166));
              v166.hDevice = *((_DWORD *)a2 + 3);
              v166.AllocationCount = *((_DWORD *)a2 + 8);
              v166.CommandLength = *((_DWORD *)a2 + 4);
              v166.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
              v102 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              v166.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              *(_DWORD *)&v166.Flags |= 0x20u;
              IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v95 + 2) + 16LL) + 16LL));
              v129 = v103;
              v167[0] = 0LL;
              v168 = 0;
              v105 = 0LL;
              v131 = 0LL;
              if ( IsDxgmms2 )
              {
                Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                      v167,
                                                      v103);
                v105 = Elements;
                v131 = Elements;
                if ( !Elements )
                {
                  v111 = WdLogNewEntry5_WdWarning(v108, v107, v109, v110);
                  *(_QWORD *)(v111 + 24) = 627LL;
                  WdLogEvent5_WdWarning(v111);
                  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v167);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v164);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v148);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v146);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
                  return 3221225495LL;
                }
                LODWORD(v10) = DxgkReferenceAllocationList(&v129, v102, Elements, *((struct DXGDEVICE **)v95 + 2));
              }
              if ( (int)v10 >= 0 )
              {
                LODWORD(v10) = DXGCONTEXT::Render(
                                 v95,
                                 &v166,
                                 (struct COREDEVICEACCESS *)v164,
                                 (struct DXGADAPTERSTOPRESETLOCKSHARED *)v148,
                                 &v130,
                                 v105);
                v128 = v10;
                v95 = v130;
              }
              if ( IsDxgmms2 )
                DxgkUnreferenceAllocationList(v129, (struct _EX_RUNDOWN_REF **)v105);
              *((_QWORD *)v95 + 46) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v95 + 360, 0LL);
              KeLeaveCriticalRegion();
              PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v167);
            }
            else
            {
              *((_QWORD *)v95 + 46) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v95 + 360, 0LL);
              KeLeaveCriticalRegion();
            }
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v164);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v148);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v146);
          }
          else
          {
            v96 = WdLogNewEntry5_WdError(v94);
            *(_QWORD *)(v96 + 24) = 572LL;
            WdLogEvent5_WdError(v96);
            LODWORD(v10) = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v142);
          return (unsigned int)v10;
        }
        v40 = WdLogNewEntry5_WdError(v93);
        *(_QWORD *)(v40 + 24) = 562LL;
LABEL_45:
        WdLogEvent5_WdError(v40);
LABEL_195:
        LODWORD(v10) = -1073741811;
        return (unsigned int)v10;
      }
      v55 = (unsigned int)(v54 - 1);
      if ( !(_DWORD)v55 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
        {
          v26 = WdLogNewEntry5_WdWarning(v55, v6, v7, v8);
          *(_QWORD *)(v26 + 24) = 668LL;
          goto LABEL_194;
        }
        v83 = PsGetCurrentProcess(v55);
        v85 = (struct _KTHREAD **)PsGetProcessDxgProcess(v83, v84);
        if ( !v85 )
        {
          v40 = WdLogNewEntry5_WdError(v86);
          *(_QWORD *)(v40 + 24) = 676LL;
          goto LABEL_45;
        }
        v141 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v131, *((_DWORD *)a2 + 3), v85, &v141);
        v88 = v141;
        if ( v141 )
        {
          *((_BYTE *)v141 + 2874) = 1;
          *(_BYTE *)(*((_QWORD *)v88 + 5) + 256LL) = 1;
        }
        else
        {
          v89 = WdLogNewEntry5_WdError(v87);
          *(_QWORD *)(v89 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v89);
          LODWORD(v10) = -1073741811;
        }
        v63 = (DXGDEVICEBYHANDLE *)&v131;
        goto LABEL_159;
      }
      v56 = (unsigned int)(v55 - 1);
      if ( (_DWORD)v56 )
      {
        v25 = (unsigned int)(v56 - 1);
        if ( (_DWORD)v25 )
        {
          if ( (_DWORD)v25 != 1 )
          {
LABEL_83:
            v26 = WdLogNewEntry5_WdWarning(v25, v6, v7, v8);
            *(_QWORD *)(v26 + 24) = *((int *)a2 + 2);
            goto LABEL_194;
          }
          if ( *((_DWORD *)a2 + 1) < 0x18u )
          {
            v26 = WdLogNewEntry5_WdWarning(v25, v6, v7, v8);
            *(_QWORD *)(v26 + 24) = 507LL;
            goto LABEL_194;
          }
          v57 = PsGetCurrentProcess(v25);
          v59 = (struct _KTHREAD **)PsGetProcessDxgProcess(v57, v58);
          if ( !v59 )
          {
            v40 = WdLogNewEntry5_WdError(v60);
            *(_QWORD *)(v40 + 24) = 515LL;
            goto LABEL_45;
          }
          v133 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v134, *((_DWORD *)a2 + 3), v59, &v133);
          if ( v133 )
          {
            v64 = ObReferenceObjectByHandle(
                    *((HANDLE *)a2 + 2),
                    0x1F0003u,
                    (POBJECT_TYPE)ExEventObjectType,
                    1,
                    &Object,
                    0LL);
            v10 = v64;
            if ( v64 >= 0 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v150, v133);
              KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v150);
            }
            else
            {
              v66 = WdLogNewEntry5_WdError(v65);
              *(_QWORD *)(v66 + 24) = v10;
              WdLogEvent5_WdError(v66);
            }
          }
          else
          {
            v62 = WdLogNewEntry5_WdError(v61);
            *(_QWORD *)(v62 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v62);
            LODWORD(v10) = -1073741811;
          }
          v63 = (DXGDEVICEBYHANDLE *)v134;
LABEL_159:
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE(v63);
          return (unsigned int)v10;
        }
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v26 = WdLogNewEntry5_WdWarning(v25, v6, v7, v8);
          *(_QWORD *)(v26 + 24) = 419LL;
          goto LABEL_194;
        }
        v67 = PsGetCurrentProcess(v25);
        v69 = (struct _KTHREAD **)PsGetProcessDxgProcess(v67, v68);
        v71 = (__int64)v69;
        if ( !v69 )
        {
          v40 = WdLogNewEntry5_WdError(v70);
          *(_QWORD *)(v40 + 24) = 427LL;
          goto LABEL_45;
        }
        v140 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v127, *((_DWORD *)a2 + 3), v69, &v140);
        v73 = v140;
        if ( !v140 )
        {
          v74 = WdLogNewEntry5_WdError(v72);
          *(_QWORD *)(v74 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v74);
          LODWORD(v10) = -1073741811;
LABEL_100:
          v63 = (DXGDEVICEBYHANDLE *)v127;
          goto LABEL_159;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v136, v73);
        DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
          (DXGADAPTERSTOPRESETLOCKSHARED *)v143,
          *(struct DXGADAPTER **)(*((_QWORD *)v73 + 2) + 16LL),
          1);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v163, (__int64)v73, 0, v75, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v163);
        if ( (int)v10 < 0 )
        {
LABEL_102:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v163);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v143);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v136);
          goto LABEL_100;
        }
        v126 = 0LL;
        AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                      v71,
                                                      (DXGALLOCATIONREFERENCE *)&v147,
                                                      *((_DWORD *)a2 + 4));
        DXGALLOCATIONREFERENCE::MoveAssign(&v126, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v147);
        v78 = v126;
        if ( v126 )
        {
          v80 = *((_QWORD *)v73 + 2);
          v81 = *(_QWORD *)(v126[1].Count + 16);
          if ( *(_QWORD *)(v81 + 16) == *(_QWORD *)(v80 + 16) )
          {
            if ( *((_BYTE *)a2 + 20) )
            {
              if ( (v126[9].Count & 0x800) == 0 )
              {
                LODWORD(v10) = VIDMM_EXPORT::VidMmPinAllocation(
                                 *(VIDMM_EXPORT **)(v80 + 400),
                                 *(struct VIDMM_GLOBAL **)(v80 + 408),
                                 (struct _VIDMM_MULTI_ALLOC *)v126[3].Count,
                                 &v144,
                                 &v151);
                if ( (int)v10 >= 0 )
                  LODWORD(v78[9].Count) |= 0x800u;
                goto LABEL_106;
              }
              v79 = (_QWORD *)WdLogNewEntry5_WdError(v81);
              v79[3] = 475LL;
            }
            else
            {
              if ( (v126[9].Count & 0x800) != 0 )
              {
                VIDMM_EXPORT::VidMmUnpinAllocation(
                  *(VIDMM_EXPORT **)(v80 + 400),
                  *(struct VIDMM_GLOBAL **)(v80 + 408),
                  (struct _VIDMM_MULTI_ALLOC *)v126[3].Count);
                goto LABEL_106;
              }
              v79 = (_QWORD *)WdLogNewEntry5_WdError(v81);
              v79[3] = 494LL;
            }
          }
          else
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdError(v81);
            v79[3] = v73;
            v79[4] = v78;
            v79[5] = -1073741811LL;
          }
        }
        else
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v77);
          v79[3] = *((unsigned int *)a2 + 4);
        }
        WdLogEvent5_WdError(v79);
        LODWORD(v10) = -1073741811;
LABEL_106:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v126);
        goto LABEL_102;
      }
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        if ( g_OSTestSigningEnabled )
        {
          v82 = *((_DWORD *)a2 + 3) != 0;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v56) + 1000) = v82;
        }
        else
        {
          LODWORD(v10) = -1073741637;
        }
        return (unsigned int)v10;
      }
    }
    else if ( *((_DWORD *)a2 + 1) >= 0xA8u )
    {
      v122 = *((_DWORD *)a2 + 4);
      if ( v122 < *((_DWORD *)this + 578) )
      {
        v123 = *((_DWORD *)a2 + 3);
        if ( !v123 )
        {
          DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)a2 + 6));
          return (unsigned int)v10;
        }
        if ( v123 > 0 )
        {
          if ( v123 <= 3 )
          {
            DXGADAPTER::ForcePState((__int64)this, v123, v122, *((_DWORD *)a2 + 6));
            return (unsigned int)v10;
          }
          if ( v123 == 4 )
          {
            *((_DWORD *)a2 + 7) = *((_DWORD *)this + 870);
            return (unsigned int)v10;
          }
          if ( v123 == 5 )
          {
            DXGADAPTER::QueryPStateEngineData(
              this,
              *((_DWORD *)a2 + 5),
              (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
              (unsigned int *)a2 + 4);
            return (unsigned int)v10;
          }
        }
      }
    }
    return 3221225485LL;
  }
  if ( *((_DWORD *)a2 + 1) < 0x10u )
  {
    v17 = WdLogNewEntry5_WdWarning(v11, v6, v7, v8);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v17);
    LODWORD(v10) = -1073741789;
    return (unsigned int)v10;
  }
  if ( !*((_DWORD *)a2 + 3) )
  {
    _m_prefetchw(&dword_1C00573F0);
    v15 = dword_1C00573F0;
    do
    {
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v16 + 24) = 106LL;
        WdLogEvent5_WdError(v16);
        return (unsigned int)v10;
      }
      v11 = (unsigned int)(v15 - 1);
      v15 = _InterlockedCompareExchange(&dword_1C00573F0, v11, v15);
    }
    while ( v15 != (_DWORD)v11 + 1 );
    v13 = WdLogNewEntry5_WdEvent(v11);
    *(_QWORD *)(v13 + 24) = 116LL;
    goto LABEL_6;
  }
  v125 = 0;
  v153 = 0LL;
  v154 = 288;
  v155 = L"DRTTestEnable";
  v156 = &v125;
  v157 = 67108868;
  v158 = &v125;
  v159 = 4;
  v160 = 0LL;
  v161 = 0;
  memset(v162, 0, sizeof(v162));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v153, 0LL, 0LL);
  if ( v125 != 1484026436 )
  {
    v14 = WdLogNewEntry5_WdEvent(v12);
    *(_QWORD *)(v14 + 24) = 90LL;
    WdLogEvent5_WdEvent(v14);
LABEL_192:
    LODWORD(v10) = -1073741823;
    return (unsigned int)v10;
  }
  _InterlockedIncrement(&dword_1C00573F0);
  v13 = WdLogNewEntry5_WdEvent(v12);
  *(_QWORD *)(v13 + 24) = 84LL;
LABEL_6:
  WdLogEvent5_WdEvent(v13);
  return (unsigned int)v10;
}
