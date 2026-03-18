/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C0137DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0134428 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r13
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rdx
  __int64 v14; // r9
  ULONG64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  SIZE_T v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rcx
  const void *v27; // rdx
  ULONG64 v28; // rcx
  __int64 v29; // rcx
  DXGDEVICE *v30; // r14
  __int64 v31; // rax
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  _DWORD *v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  char v49; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 48) = a1;
  *(_DWORD *)(v3 + 96) = 2093;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2093);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2093);
    return v8;
  }
  *(_DWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = _guard_dispatch_icall_fptr() == 0;
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)v15;
  *(_QWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(v15 + 16);
  v16 = *(unsigned int *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
  *(_DWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v16;
  if ( (unsigned int)(v16 - 1) > 6 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v47[3] = v16;
    v8 = -1073741811;
    v47[4] = -1073741811LL;
    v47[5] = PsGetCurrentProcess(v48);
    WdLogEvent5_WdError(v47);
    goto LABEL_46;
  }
  v17 = (unsigned int)v16;
  v18 = 120 * v16;
  if ( v18 > 0xFFFFFFFF )
  {
    v44 = WdLogNewEntry5_WdWarning(v17, v13, 1LL, v14);
    *(_QWORD *)(v44 + 24) = 5998LL;
    WdLogEvent5_WdWarning(v44);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v45, &EventProfilerExit, v46, 2093);
    return 3221225621LL;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v18;
    *(_DWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
    v19 = 120 * v17;
    if ( !is_mul_ok(v17, 0x78uLL) )
      v19 = -1LL;
    v24 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new[](v19, 0x4B677844u, PagedPool);
    *(_QWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v24;
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      v8 = -1073741801;
      *(_QWORD *)(v25 + 24) = -1073741801LL;
      *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v26);
      WdLogEvent5_WdWarning(v25);
      goto LABEL_6;
    }
    v27 = *(const void **)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    v28 = (ULONG64)v27 + (unsigned int)v18;
    if ( v28 < (unsigned __int64)v27 || v28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, v27, (unsigned int)v18);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
      Current,
      (struct DXGDEVICE **)(v3 + 64));
    v30 = *(DXGDEVICE **)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v30 )
    {
      v31 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v31 + 24) = *(unsigned int *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      v8 = -1073741811;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v31);
      operator delete(v24);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_46:
      v11 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_7;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 32),
      *(struct DXGDEVICE **)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 112, (__int64)v30, 2, v32, 0);
    v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 112));
    v38 = v33;
    if ( v33 >= 0 )
    {
      LOBYTE(v37) = *(_BYTE *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                  v30,
                  *(unsigned int *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
                  v24,
                  v37,
                  (int *)(v3 + 16)) >= 0 )
      {
        v42 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 16LL);
        if ( (unsigned __int64)v42 >= MmUserProbeAddress )
          v42 = (_DWORD *)MmUserProbeAddress;
        *v42 = *(_DWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
      operator delete(v24);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      if ( *(_QWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v43, 2093);
      return *(unsigned int *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    }
    else
    {
      v39 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v39 + 24) = v30;
      *(_QWORD *)(v39 + 32) = v38;
      WdLogEvent5_WdWarning(v39);
      operator delete(v24);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      if ( *(_QWORD *)(((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v49 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v40, &EventProfilerExit, v41, 2093);
      return (unsigned int)v38;
    }
  }
}
