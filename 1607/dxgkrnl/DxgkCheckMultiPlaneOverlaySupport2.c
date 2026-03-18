/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C01605F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015BB1C (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r13
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rdx
  __int64 v16; // r9
  _OWORD *v17; // rax
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r14
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rcx
  const void *v29; // rdx
  ULONG64 v30; // rcx
  __int64 v31; // rcx
  DXGDEVICE *v32; // r14
  __int64 v33; // rax
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r8
  _DWORD *v45; // rdx
  _DWORD *v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  _QWORD *v51; // rbx
  __int64 v52; // rcx
  bool v53[4]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 72) = a1;
  *(_DWORD *)(v3 + 56) = 2093;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2093);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2093);
    return v10;
  }
  *(_DWORD *)v3 = _guard_dispatch_icall_fptr() == 0;
  v17 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v17 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *v17;
  *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v17[1];
  v18 = *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v18;
  if ( (unsigned int)(v18 - 1) > 6 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v51[3] = v18;
    v10 = -1073741811;
    v51[4] = -1073741811LL;
    v51[5] = PsGetCurrentProcess(v52);
    WdLogEvent5_WdError(v51);
    goto LABEL_48;
  }
  v19 = (unsigned int)v18;
  v20 = v18 << 7;
  if ( v20 > 0xFFFFFFFF )
  {
    v48 = WdLogNewEntry5_WdWarning(v19, v15, 1LL, v16);
    *(_QWORD *)(v48 + 24) = 8248LL;
    WdLogEvent5_WdWarning(v48);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v49, &EventProfilerExit, v50, 2093);
    return 3221225621LL;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) = v20;
    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0;
    v21 = v19 << 7;
    if ( !is_mul_ok(v19, 0x80uLL) )
      v21 = -1LL;
    v26 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)operator new(v21, 0x4B677844u, PagedPool);
    *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v26;
    if ( !v26 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      v10 = -1073741801;
      *(_QWORD *)(v27 + 24) = -1073741801LL;
      *(_QWORD *)(v27 + 32) = PsGetCurrentProcess(v28);
      WdLogEvent5_WdWarning(v27);
      goto LABEL_6;
    }
    v29 = *(const void **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    v30 = (ULONG64)v29 + (unsigned int)v20;
    if ( v30 < (unsigned __int64)v29 || v30 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, v29, (unsigned int)v20);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)(v3 + 24),
      *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54),
      ProcessDxgProcess,
      (struct DXGDEVICE **)(v3 + 64));
    v32 = *(DXGDEVICE **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v32 )
    {
      v33 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v33 + 24) = *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
      v10 = -1073741811;
      *(_QWORD *)(v33 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v33);
      operator delete(v26);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
LABEL_48:
      v13 = (qword_1C0056840 & 2) == 0;
      goto LABEL_7;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 40),
      *(struct DXGDEVICE **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 112, (__int64)v32, 2, v34, 0);
    v35 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 112));
    v40 = v35;
    if ( v35 >= 0 )
    {
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                  v32,
                  *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
                  v26,
                  *(_BYTE *)v3,
                  (int *)(v3 + 8),
                  (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(v3 + 12)) >= 0 )
      {
        v44 = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        v45 = (_DWORD *)(v44 + 24);
        if ( v44 + 24 >= MmUserProbeAddress )
          v45 = (_DWORD *)MmUserProbeAddress;
        *v45 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v46 = (_DWORD *)(v44 + 28);
        if ( v44 + 28 >= MmUserProbeAddress )
          v46 = (_DWORD *)MmUserProbeAddress;
        *v46 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
      }
      operator delete(v26);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      if ( *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 40));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C0056840, &EventProfilerExit, v47, 2093);
      return *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    else
    {
      v41 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      *(_QWORD *)(v41 + 24) = v32;
      *(_QWORD *)(v41 + 32) = v40;
      WdLogEvent5_WdWarning(v41);
      operator delete(v26);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      if ( *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 40));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 24));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v42, &EventProfilerExit, v43, 2093);
      return (unsigned int)v40;
    }
  }
}
