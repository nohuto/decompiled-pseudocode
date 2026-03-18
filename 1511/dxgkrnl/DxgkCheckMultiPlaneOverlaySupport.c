/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C013C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0139024 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
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
  const void *v26; // rdx
  ULONG64 v27; // rcx
  __int64 v28; // rcx
  DXGDEVICE *v29; // r14
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  _DWORD *v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rbx
  char v47; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 48) = a1;
  *(_DWORD *)(v3 + 96) = 2093;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2093);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
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
  *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = _guard_dispatch_icall_fptr() == 0;
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)v15;
  *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(v15 + 16);
  v16 = *(unsigned int *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
  *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v16;
  if ( (unsigned int)(v16 - 1) > 6 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v46[3] = v16;
    v8 = -1073741811;
    v46[4] = -1073741811LL;
    v46[5] = PsGetCurrentProcess();
    WdLogEvent5_WdError(v46);
    goto LABEL_46;
  }
  v17 = (unsigned int)v16;
  v18 = 120 * v16;
  if ( v18 > 0xFFFFFFFF )
  {
    v43 = WdLogNewEntry5_WdWarning(v17, v13, 1LL, v14);
    *(_QWORD *)(v43 + 24) = 5989LL;
    WdLogEvent5_WdWarning(v43);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v44, &EventProfilerExit, v45, 2093);
    return 3221225621LL;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v18;
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
    v19 = 120 * v17;
    if ( !is_mul_ok(v17, 0x78uLL) )
      v19 = -1LL;
    v24 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)operator new[](v19, 0x4B677844u, PagedPool);
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v24;
    if ( !v24 )
    {
      v25 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
      v8 = -1073741801;
      *(_QWORD *)(v25 + 24) = -1073741801LL;
      *(_QWORD *)(v25 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdWarning(v25);
      goto LABEL_6;
    }
    v26 = *(const void **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    v27 = (ULONG64)v26 + (unsigned int)v18;
    if ( v27 < (unsigned __int64)v26 || v27 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, v26, (unsigned int)v18);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
      Current,
      (struct DXGDEVICE **)(v3 + 64));
    v29 = *(DXGDEVICE **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v29 )
    {
      v30 = WdLogNewEntry5_WdError(v28);
      *(_QWORD *)(v30 + 24) = *(unsigned int *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      v8 = -1073741811;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v30);
      operator delete(v24);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_46:
      v11 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_7;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 32),
      *(struct DXGDEVICE **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 112, (__int64)v29, 2, v31, 0);
    v32 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 112));
    v37 = v32;
    if ( v32 >= 0 )
    {
      LOBYTE(v36) = *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                  v29,
                  *(unsigned int *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14),
                  v24,
                  v36,
                  (int *)(v3 + 16)) >= 0 )
      {
        v41 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 16LL);
        if ( (unsigned __int64)v41 >= MmUserProbeAddress )
          v41 = (_DWORD *)MmUserProbeAddress;
        *v41 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
      operator delete(v24);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      if ( *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(qword_1C00467F0, &EventProfilerExit, v42, 2093);
      return *(unsigned int *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    }
    else
    {
      v38 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
      *(_QWORD *)(v38 + 24) = v29;
      *(_QWORD *)(v38 + 32) = v37;
      WdLogEvent5_WdWarning(v38);
      operator delete(v24);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 112));
      if ( *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 32));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v39, &EventProfilerExit, v40, 2093);
      return (unsigned int)v37;
    }
  }
}
