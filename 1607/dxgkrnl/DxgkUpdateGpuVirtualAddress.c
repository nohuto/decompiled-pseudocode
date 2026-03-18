/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C0154480
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00082B8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0009738 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0009CEC (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0009E68 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009F4C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000C708 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C0021114 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A4A70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C01567D0 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0156838 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rdi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD **ProcessDxgProcess; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rcx
  struct DXGDEVICE *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD **v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // zf
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct VIDMM_COMPANION_CONTEXT *VidMmCompanionContext; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  DXGALLOCATIONREFERENCE *v49; // r13
  bool v50; // of
  SIZE_T v51; // rax
  __int64 v52; // rcx
  PVOID v53; // r9
  __int64 v54; // rax
  size_t v55; // r8
  char *v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 i; // rcx
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  void *v64; // rcx
  unsigned __int64 v65; // r13
  __int64 v66; // rax
  bool v67; // cf
  SIZE_T v68; // rax
  char *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  SIZE_T v72; // rax
  _BYTE *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // r8d
  __int64 v77; // rcx
  unsigned int v78; // edx
  __int64 *v79; // r11
  __int64 v80; // r9
  _DWORD *v81; // rax
  unsigned int v82; // edx
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // r8
  __int64 v88; // rcx
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v92; // ecx
  __int64 v93; // rax
  __int64 v94; // r9
  int v95; // r8d
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rsi
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  NTSTATUS v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rax
  _BYTE v123[352]; // [rsp+1E0h] [rbp+1E0h] BYREF

  v3 = (unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2106;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2106);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    v14 = qword_1C0056840;
    v15 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v13, 2106);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(_OWORD *)v4;
  *(_OWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_OWORD *)(v4 + 16);
  *(_OWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *(_OWORD *)(v4 + 32);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *(_QWORD *)(v4 + 48);
  if ( !*(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) )
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    *(_QWORD *)(v17 + 32) = 10498LL;
    WdLogEvent5_WdWarning(v17);
LABEL_14:
    v15 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 24),
    *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 120));
  v19 = *(struct DXGDEVICE **)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v19;
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v20 + 24) = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98);
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_17:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    goto LABEL_14;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)(v3 + 88),
    *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C),
    (struct DXGPROCESS *)ProcessDxgProcess,
    (struct DXGCONTEXT **)(v3 + 128),
    0);
  v25 = *(struct _KTHREAD ***)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  if ( !v25 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    v26[3] = ProcessDxgProcess;
    v26[4] = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    v26[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
LABEL_20:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 88));
    goto LABEL_17;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136), v19);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)(v3 + 208), v25 + 45);
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 256, (__int64)v19, 0, v27, 0);
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 256));
  v33 = v28;
  if ( v28 < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
    *(_QWORD *)(v34 + 24) = v33;
    *(_QWORD *)(v34 + 32) = 10534LL;
    WdLogEvent5_WdWarning(v34);
    goto LABEL_23;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 16LL) + 16LL);
  if ( (*(_DWORD *)(v38 + 1524) & 0x40) == 0 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v29, v31, v32);
    v39[3] = -1073741811LL;
    v39[4] = 10540LL;
LABEL_30:
    WdLogEvent5_WdWarning(v39);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    goto LABEL_20;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext((DXGCONTEXT *)v25) )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
    v39[3] = ProcessDxgProcess;
    v39[4] = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    v39[5] = -1073741811LL;
    goto LABEL_30;
  }
  VidMmCompanionContext = DXGCONTEXT::GetVidMmCompanionContext((DXGCONTEXT *)v25);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = VidMmCompanionContext;
  if ( !VidMmCompanionContext )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
    v39[3] = ProcessDxgProcess;
    v39[4] = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C);
    v39[5] = -1073741811LL;
    v39[6] = 10556LL;
    goto LABEL_30;
  }
  LODWORD(v33) = -1073741811;
  *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = -1073741811;
  v49 = 0LL;
  *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
  v51 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) << 6;
  v50 = (*(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) * (unsigned __int128)0x40uLL) >> 64 != 0;
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = -1LL;
  if ( v50 )
    v51 = -1LL;
  v53 = operator new(v51, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v53;
  if ( !v53 )
  {
    v54 = WdLogNewEntry5_WdLowResource(v52);
    LODWORD(v33) = -1073741801;
    *(_QWORD *)(v54 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 88));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    v35 = qword_1C0056840;
    v37 = (qword_1C0056840 & 2) == 0;
    goto LABEL_24;
  }
  v55 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) << 6;
  v56 = *(char **)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
  if ( &v56[v55] < v56 || (unsigned __int64)&v56[v55] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v53, v56, v55);
  v57 = *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = v57;
  v58 = 0LL;
  for ( i = 0LL;
        (unsigned int)i < *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
        i = (unsigned int)(i + 1) )
  {
    v60 = (unsigned __int64)(unsigned int)i << 6;
    v61 = *(unsigned int *)(v60 + v57);
    if ( !(_DWORD)v61 || (_DWORD)v61 == 3 )
    {
      v62 = *(unsigned int *)(v60 + v57 + 24);
      if ( !(_DWORD)v62 )
      {
        v63 = WdLogNewEntry5_WdWarning(i, v62, v57, v58);
        *(_QWORD *)(v63 + 32) = 10604LL;
LABEL_54:
        *(_QWORD *)(v63 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v63);
LABEL_55:
        v64 = 0LL;
        goto LABEL_119;
      }
      if ( (_DWORD)v58 != (_DWORD)v62 )
      {
        ++*(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v58 = (unsigned int)v62;
      }
    }
    else if ( (unsigned int)(v61 - 1) > 1 )
    {
      v63 = WdLogNewEntry5_WdWarning(i, v61, v57, v58);
      *(_QWORD *)(v63 + 32) = 10617LL;
      goto LABEL_54;
    }
  }
  v65 = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v66 = 8 * v65;
  if ( !is_mul_ok(v65, 8uLL) )
    v66 = -1LL;
  v67 = __CFADD__(v66, 8LL);
  v68 = v66 + 8;
  if ( v67 )
    v68 = -1LL;
  v69 = (char *)operator new(v68, 0x4B677844u, PagedPool);
  if ( v69 )
  {
    *(_QWORD *)v69 = v65;
    v49 = (DXGALLOCATIONREFERENCE *)(v69 + 8);
    `vector constructor iterator'(
      v69 + 8,
      8LL,
      *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  }
  else
  {
    v49 = 0LL;
  }
  if ( !v49 )
  {
    v71 = WdLogNewEntry5_WdLowResource(v70);
    LODWORD(v33) = -1073741801;
    *(_QWORD *)(v71 + 24) = -1073741801LL;
    *(_QWORD *)(v71 + 32) = 10626LL;
    WdLogEvent5_WdLowResource(v71);
    goto LABEL_55;
  }
  v72 = 8LL * *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !is_mul_ok(*(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 8), 8uLL) )
    v72 = -1LL;
  v73 = operator new(v72, 0x4B677844u, PagedPool);
  *(_QWORD *)v3 = v73;
  if ( !v73 )
  {
    v75 = WdLogNewEntry5_WdLowResource(v74);
    LODWORD(v33) = -1073741801;
    *(_QWORD *)(v75 + 24) = -1073741801LL;
    *(_QWORD *)(v75 + 32) = 10634LL;
    WdLogEvent5_WdLowResource(v75);
    goto LABEL_118;
  }
  v76 = 0;
  v77 = 0LL;
  *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0;
  v78 = *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
  if ( !v78 )
  {
LABEL_82:
    *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x68)
                                                                         + 184LL;
    while ( 1 )
    {
      Global = DXGGLOBAL::GetGlobal(v77);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 32), Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 32));
      *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xA0);
      DXGPUSHLOCK::AcquireShared(*(DXGPUSHLOCK **)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
      v92 = (*(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >> 6) & 0xFFFFFF;
      v93 = *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      if ( v92 < *(_DWORD *)(v93 + 224)
        && (v94 = *(_QWORD *)(v93 + 208),
            v95 = *(_DWORD *)(v94 + 16LL * v92 + 8),
            ((*(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >> 26) & 0x30) == (*(_BYTE *)(v94 + 16LL * v92 + 8) & 0x30))
        && (v95 & 0x1000) == 0
        && (v95 & 0xF) != 0
        && (*(_BYTE *)(v94 + 16LL * v92 + 8) & 0xF) == 0xB )
      {
        *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_QWORD *)(v94 + 16LL * v92);
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      }
      ExReleasePushLockSharedEx(*(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38), 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        v122 = WdLogNewEntry5_WdWarning(v97, v96, v98, v99);
        *(_QWORD *)(v122 + 24) = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
        *(_QWORD *)(v122 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v122);
        goto LABEL_105;
      }
      v100 = *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX(
        (DXGSYNCOBJECTMUTEX *)(v3 + 72),
        *(struct DXGSYNCOBJECT **)(v100 + 32),
        v98);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 72));
      DXGSYNCOBJECT::GetVidSchSyncObject(
        *(DXGSYNCOBJECT **)(v100 + 32),
        *(struct ADAPTER_RENDER **)(*(_QWORD *)(v100 + 16) + 16LL));
      *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
      v101 = _guard_dispatch_icall_fptr();
      v33 = v101;
      if ( v101 != -1071775486 )
        break;
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 256));
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 72));
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 32));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v106, &EventBlockThread, v107, 68);
      v108 = KeWaitForSingleObject(
               *(PVOID *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
               UserRequest,
               0,
               1u,
               0LL);
      v33 = v108;
      if ( !v108 )
        KeReleaseSemaphore(*(PRKSEMAPHORE *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70), 0, 1, 0);
      if ( PsIsThreadTerminating(KeGetCurrentThread()) )
      {
        v119 = WdLogNewEntry5_WdWarning(v110, v109, v111, v112);
        *(_QWORD *)(v119 + 24) = 10755LL;
        WdLogEvent5_WdWarning(v119);
        LODWORD(v33) = -1073741130;
LABEL_104:
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 72));
LABEL_105:
        if ( *(_BYTE *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 32));
        goto LABEL_118;
      }
      if ( (_DWORD)v33 )
      {
        v118 = WdLogNewEntry5_WdWarning(v110, v109, v111, v112);
        *(_QWORD *)(v118 + 32) = 10762LL;
        goto LABEL_103;
      }
      v113 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 256));
      v33 = v113;
      if ( v113 < 0 )
      {
        v118 = WdLogNewEntry5_WdWarning(v115, v114, v116, v117);
        *(_QWORD *)(v118 + 32) = 10772LL;
LABEL_103:
        *(_QWORD *)(v118 + 24) = v33;
        WdLogEvent5_WdWarning(v118);
        goto LABEL_104;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 72));
      if ( *(_BYTE *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 32));
    }
    if ( v101 < 0 )
    {
      v118 = WdLogNewEntry5_WdWarning(v103, v102, v104, v105);
      *(_QWORD *)(v118 + 32) = 10779LL;
      goto LABEL_103;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)(v3 + 72));
    if ( *(_BYTE *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 32));
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v49);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 88));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v120, &EventProfilerExit, v121, 2106);
    return 0LL;
  }
  v79 = (__int64 *)((char *)v49 - 8);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v73 - (_BYTE *)v49;
  LODWORD(v80) = -1;
  while ( 1 )
  {
    v81 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8)
                   + ((unsigned __int64)(unsigned int)v77 << 6));
    *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v81;
    if ( *v81 && *v81 != 3 )
      goto LABEL_78;
    v82 = v81[6];
    if ( v76 != v82 )
      break;
LABEL_77:
    v81[6] = v80;
    v78 = *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
LABEL_78:
    v77 = (unsigned int)(v77 + 1);
    *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v77;
    if ( (unsigned int)v77 >= v78 )
      goto LABEL_82;
  }
  *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v82;
  ++*(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v79 + 1;
  AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                                                (DXGALLOCATIONREFERENCE *)(v3 + 232),
                                                v82);
  DXGALLOCATIONREFERENCE::MoveAssign(
    (struct _EX_RUNDOWN_REF **)v49 + *(int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    AllocationSafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(v3 + 232));
  v79 = *(__int64 **)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  v87 = *v79;
  if ( *v79 )
  {
    v88 = *(_QWORD *)(*(_QWORD *)(v87 + 8) + 16LL);
    if ( *(_QWORD *)(v88 + 16) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                    + 0x40)
                                                        + 16LL)
                                            + 16LL) )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdError(v88);
      v89[3] = *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      v89[4] = *((_QWORD *)v49 + *(int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
      v89[5] = -1073741811LL;
      WdLogEvent5_WdError(v89);
      goto LABEL_118;
    }
    *(__int64 *)((char *)v79 + *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78)) = *(_QWORD *)(v87 + 24);
    v81 = *(_DWORD **)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    LODWORD(v77) = *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    v76 = *(_DWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    v80 = *(_QWORD *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    goto LABEL_77;
  }
  v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, v84, 0LL, v86);
  v90[3] = *(unsigned int *)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
  v90[4] = -1073741811LL;
  v90[5] = 10665LL;
  WdLogEvent5_WdWarning(v90);
LABEL_118:
  v64 = *(void **)v3;
LABEL_119:
  operator delete(v64);
  operator delete(*(void **)(((unsigned __int64)v123 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8));
  if ( v49 )
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v49);
LABEL_23:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 256));
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 208));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 136));
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 88));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
  v37 = (qword_1C0056840 & 2) == 0;
LABEL_24:
  if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 2106);
  return (unsigned int)v33;
}
