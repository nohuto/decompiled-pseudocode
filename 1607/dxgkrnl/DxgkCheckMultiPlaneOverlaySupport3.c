/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0160AD0
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
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00747A8 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015AD70 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015ADE4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C015AE58 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C015AED0 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015C0E8 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport3(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  _OWORD *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 Elements; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rcx
  void *v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rax
  const void *v49; // rdx
  ULONG64 v50; // rcx
  unsigned int v51; // edx
  __int64 v52; // r10
  _OWORD *v53; // r8
  __int64 v54; // rax
  __int64 v55; // rcx
  _OWORD *v56; // r8
  _OWORD *v57; // rax
  const void *v58; // rdx
  ULONG64 v59; // rcx
  unsigned int v60; // edx
  __int64 v61; // r10
  unsigned __int64 v62; // r8
  __int64 v63; // rcx
  unsigned int v64; // r8d
  __int64 v65; // r9
  __int64 v66; // rdx
  unsigned int i; // edx
  __int64 v68; // rcx
  DXGDEVICE *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // r9
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r13
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  _DWORD *v82; // r8
  _DWORD *v83; // rdx
  _QWORD *v84; // rdi
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v85; // [rsp+20h] [rbp-60h]
  int v86; // [rsp+80h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 144) = a1;
  *(_DWORD *)v3 = 2093;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2093);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v8);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2093);
    return (unsigned int)v10;
  }
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = _guard_dispatch_icall_fptr() == 0;
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *v15;
  *(_OWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v15[1];
  *(_OWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v15[2];
  v16 = *(unsigned int *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v16;
  if ( (unsigned int)(v16 - 1) > 7 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v18[3] = v16;
    goto LABEL_77;
  }
  v17 = *(unsigned int *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
  if ( (unsigned int)v17 > 0x10 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress);
    v18[3] = v17;
LABEL_77:
    v84 = v18;
    v10 = -1073741811;
    v18[4] = -1073741811LL;
    v18[5] = PsGetCurrentProcess(v19);
    WdLogEvent5_WdError(v84);
    goto LABEL_78;
  }
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
  Elements = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
               (_DWORD *)(v3 + 88),
               v16);
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Elements;
  if ( !Elements )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    v10 = -1073741801;
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v26);
    WdLogEvent5_WdWarning(v25);
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 88));
    goto LABEL_6;
  }
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B8) = 0;
  v27 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements((_DWORD *)(v3 + 336), v16);
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v27;
  if ( !v27 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
    v10 = -1073741801;
    *(_QWORD *)(v32 + 24) = -1073741801LL;
    *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v33);
    WdLogEvent5_WdWarning(v32);
LABEL_20:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 336));
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 88));
LABEL_78:
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x250) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x348) = 0;
  v34 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements((_DWORD *)(v3 + 592), v16);
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v34;
  if ( !v34 )
  {
    v39 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    v10 = -1073741801;
    *(_QWORD *)(v39 + 24) = -1073741801LL;
    *(_QWORD *)(v39 + 32) = PsGetCurrentProcess(v40);
    WdLogEvent5_WdWarning(v39);
LABEL_23:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 592));
    goto LABEL_20;
  }
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0;
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C0) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24C) = 0;
  v41 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  if ( (_DWORD)v17 )
  {
    v41 = (void *)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                    (_DWORD *)(v3 + 152),
                    v17);
    if ( !v41
      || (v48 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                  (_DWORD *)(v3 + 448),
                  v17),
          (*(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v48) == 0LL) )
    {
      v46 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
      v10 = -1073741801;
      *(_QWORD *)(v46 + 24) = -1073741801LL;
      *(_QWORD *)(v46 + 32) = PsGetCurrentProcess(v47);
      WdLogEvent5_WdWarning(v46);
LABEL_27:
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 448));
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 152));
      goto LABEL_23;
    }
  }
  v49 = *(const void **)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
  v50 = (ULONG64)v49 + 8 * v16;
  if ( v50 < (unsigned __int64)v49 || v50 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(*(void **)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v49, 8 * v16);
  v51 = 0;
  v52 = *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v51;
    if ( v51 >= (unsigned int)v16 )
      break;
    v53 = *(_OWORD **)(*(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 8LL * v51);
    if ( v53 + 2 < v53 || (unsigned __int64)(v53 + 2) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v54 = 32LL * v51;
    v55 = *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    *(_OWORD *)(v54 + v55) = *v53;
    *(_OWORD *)(v54 + v55 + 16) = v53[1];
    v56 = *(_OWORD **)(v54 + v55 + 24);
    if ( v56 + 5 < v56 || (unsigned __int64)(v56 + 5) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v57 = (_OWORD *)(v52 + 80LL * v51);
    *v57 = *v56;
    v57[1] = v56[1];
    v57[2] = v56[2];
    v57[3] = v56[3];
    v57[4] = v56[4];
    ++v51;
  }
  if ( (_DWORD)v17 )
  {
    v58 = *(const void **)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
    v59 = (ULONG64)v58 + 8 * v17;
    if ( v59 < (unsigned __int64)v58 || v59 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v41, v58, 8 * v17);
  }
  v60 = 0;
  v61 = *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  while ( 1 )
  {
    *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v60;
    if ( v60 >= (unsigned int)v17 )
      break;
    v62 = *((_QWORD *)v41 + v60);
    if ( v62 + 44 < v62 || v62 + 44 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v63 = v61 + 44LL * v60;
    *(_OWORD *)v63 = *(_OWORD *)v62;
    *(_OWORD *)(v63 + 16) = *(_OWORD *)(v62 + 16);
    *(_QWORD *)(v63 + 32) = *(_QWORD *)(v62 + 32);
    *(_DWORD *)(v63 + 40) = *(_DWORD *)(v62 + 40);
    ++v60;
  }
  v64 = 0;
  v65 = *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  while ( v64 < (unsigned int)v16 )
  {
    v66 = v65 + 32LL * v64;
    *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 8LL * v64) = v66;
    *(_QWORD *)(v66 + 24) = *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 80LL * v64++;
  }
  for ( i = 0; i < (unsigned int)v17; ++i )
    *((_QWORD *)v41 + i) = v61 + 44LL * i;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 40),
    *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4),
    *(struct _KTHREAD ***)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
    (struct DXGDEVICE **)(v3 + 136));
  v69 = *(DXGDEVICE **)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
  if ( !v69 )
  {
    v70 = WdLogNewEntry5_WdError(v68);
    *(_QWORD *)(v70 + 24) = *(unsigned int *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4);
    v10 = -1073741811;
    *(_QWORD *)(v70 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v70);
LABEL_60:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 40));
    goto LABEL_27;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 72),
    *(struct DXGDEVICE **)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 240, (__int64)v69, 2, v71, 0);
  v72 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 240));
  v77 = v72;
  if ( v72 >= 0 )
  {
    v10 = DXGDEVICE::CheckMultiPlaneOverlaySupport3(
            v69,
            *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
            *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 ***)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
            v17,
            v85,
            *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            (int *)(v3 + 32),
            (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)(v3 + 36));
    if ( v10 >= 0 )
    {
      v81 = *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      v82 = (_DWORD *)(v81 + 40);
      if ( v81 + 40 >= MmUserProbeAddress )
        v82 = (_DWORD *)MmUserProbeAddress;
      *v82 = *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      v83 = (_DWORD *)(v81 + 44);
      if ( v81 + 44 >= MmUserProbeAddress )
        v83 = (_DWORD *)MmUserProbeAddress;
      *v83 = *(_DWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 240));
    if ( *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 72));
    goto LABEL_60;
  }
  v78 = WdLogNewEntry5_WdWarning(v74, v73, v75, v76);
  *(_QWORD *)(v78 + 24) = v69;
  *(_QWORD *)(v78 + 32) = v77;
  WdLogEvent5_WdWarning(v78);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 240));
  if ( *(_QWORD *)(((unsigned __int64)&v86 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 72));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 40));
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 448));
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 152));
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 592));
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 336));
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)(v3 + 88));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v79, &EventProfilerExit, v80, 2093);
  return (unsigned int)v77;
}
