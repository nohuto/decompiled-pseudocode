/*
 * XREFs of DxgkOpenSwapChain @ 0x1C018FFB0
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
 *     memmove @ 0x1C0012480 (memmove.c)
 *     Template_pqdqpp @ 0x1C002933C (Template_pqdqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C018DE4C (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C018E860 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  DXGSWAPCHAIN *v5; // r13
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD *v14; // rax
  void *v15; // r15
  __int64 v16; // r8
  int v17; // edx
  _BOOL8 v18; // rcx
  SIZE_T v19; // rax
  PVOID v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct DXGDEVICE *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  DXGSWAPCHAIN **v42; // rcx
  int v43; // eax
  __int64 v44; // rax
  _QWORD *v45; // rax
  _DWORD *v46; // rdx
  char *v47; // rcx
  size_t v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int16 v52; // ax
  PVOID *Object; // [rsp+120h] [rbp+120h]
  int v54[2]; // [rsp+128h] [rbp+128h]
  __int64 v55; // [rsp+130h] [rbp+130h]
  _BYTE v56[256]; // [rsp+190h] [rbp+190h] BYREF

  v3 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2109;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2109);
  v5 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 619LL;
LABEL_6:
    WdLogEvent5_WdError(v10);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v12, 2109);
    return -1073741811LL;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v14;
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v14[1];
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v14[2];
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v14[3];
  v15 = 0LL;
  *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  v16 = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v16;
  v17 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v18 = v17 == 0;
  if ( v18 != (v16 == 0) )
  {
    v10 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    goto LABEL_6;
  }
  if ( v17 )
  {
    v19 = 8LL * *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( !is_mul_ok(*(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), 8uLL) )
      v19 = -1LL;
    v20 = operator new[](v19, 0x4B677844u, PagedPool);
    v15 = v20;
    *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v20;
    if ( !v20 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 649LL;
      WdLogEvent5_WdLowResource(v22);
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v23, &EventProfilerExit, v24, 2109);
      return 3221225495LL;
    }
    *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v20;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 128));
  v26 = *(struct DXGDEVICE **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  if ( v26 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      *(struct DXGDEVICE **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 160, (__int64)v26, 2, v29, 0);
    LODWORD(v28) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 160));
    if ( (int)v28 >= 0 )
    {
      if ( *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)
        || (v31 = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28)) == 0
        || (LOBYTE(v30) = 1,
            v32 = ObOpenObjectByName(
                    v31,
                    g_pDxgkSharedSwapChainObjectType,
                    v30,
                    0LL,
                    *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
                    0LL,
                    v3 + 32),
            v28 = v32,
            v32 >= 0) )
      {
        v38 = ObReferenceObjectByHandle(
                *(HANDLE *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                0x20000u,
                g_pDxgkSharedSwapChainObjectType,
                1,
                (PVOID *)(v3 + 104),
                0LL);
        v42 = *(DXGSWAPCHAIN ***)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v42;
        LODWORD(v28) = v38;
        if ( v38 >= 0 )
        {
          v5 = *v42;
          *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v42;
          v43 = *((_DWORD *)v5 + 10);
          if ( *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
          {
            if ( *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) == v43 )
            {
              LODWORD(v28) = DXGSWAPCHAIN::OpenLocal(
                               v5,
                               *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
                               v26,
                               *(void **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                               *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                               *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
              if ( (int)v28 >= 0 )
                LODWORD(v28) = DXGSWAPCHAIN::DuplicateSurfacesForOpen(
                                 (UINT *)v5,
                                 (struct _D3DKMT_OPENSWAPCHAIN *)(v3 + 32));
            }
            else
            {
              v44 = WdLogNewEntry5_WdWarning(v42, v39, v40, v41);
              *(_QWORD *)(v44 + 24) = *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
              *(_QWORD *)(v44 + 32) = *((unsigned int *)v5 + 10);
              WdLogEvent5_WdWarning(v44);
              LODWORD(v28) = -1073741811;
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v43;
            LODWORD(v28) = -1073741789;
          }
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
          if ( (int)(v28 + 0x80000000) < 0 || (_DWORD)v28 == -1073741789 )
          {
            v45 = (_QWORD *)a1;
            if ( a1 >= MmUserProbeAddress )
              v45 = (_QWORD *)MmUserProbeAddress;
            *v45 = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            v46 = (_DWORD *)(a1 + 48);
            if ( a1 + 48 >= MmUserProbeAddress )
              v46 = (_DWORD *)MmUserProbeAddress;
            *v46 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            v47 = *(char **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
            if ( v47 && *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
            {
              v48 = 8LL * *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
              if ( (unsigned __int64)&v47[v48] > MmUserProbeAddress || &v47[v48] <= v47 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v47, v15, v48);
            }
          }
          goto LABEL_51;
        }
        v37 = WdLogNewEntry5_WdWarning(v42, v39, v40, v41);
        *(_QWORD *)(v37 + 24) = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        *(_QWORD *)(v37 + 32) = (int)v28;
      }
      else
      {
        v37 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
        *(_QWORD *)(v37 + 24) = v28;
      }
      WdLogEvent5_WdWarning(v37);
    }
LABEL_51:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    if ( *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    goto LABEL_53;
  }
  v27 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v27 + 24) = *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
  LODWORD(v28) = -1073741811;
  *(_QWORD *)(v27 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v27);
LABEL_53:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( v15 )
    operator delete(v15);
  v52 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v55) = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
    v54[0] = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    LODWORD(Object) = v28;
    Template_pqdqpp(
      v50,
      v49,
      v51,
      v5,
      Object,
      *(_QWORD *)v54,
      v55,
      *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
      *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    v52 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C0056840 & 2) != 0 && (v52 & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v51, 2109);
  return (unsigned int)v28;
}
