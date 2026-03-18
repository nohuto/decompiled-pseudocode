/*
 * XREFs of DxgkOpenSwapChain @ 0x1C0163BD0
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
 *     memmove @ 0x1C0010940 (memmove.c)
 *     Template_pqdqpp @ 0x1C0022934 (Template_pqdqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0161AD4 (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  DXGSWAPCHAIN *v5; // r13
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  _OWORD *v12; // rax
  void *v13; // r15
  __int64 v14; // r8
  int v15; // edx
  _BOOL8 v16; // rcx
  SIZE_T v17; // rax
  PVOID v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  DXGSWAPCHAIN **v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _DWORD *v43; // rdx
  char *v44; // rcx
  size_t v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int16 v49; // ax
  PVOID *Object; // [rsp+100h] [rbp+100h]
  int v51[2]; // [rsp+108h] [rbp+108h]
  __int64 v52; // [rsp+110h] [rbp+110h]
  _BYTE v53[224]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 2109;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2109);
  v5 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 614LL;
LABEL_6:
    WdLogEvent5_WdError(v8);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2109);
    return -1073741811LL;
  }
  v12 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v12;
  *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v12[1];
  *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v12[2];
  *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v12[3];
  v13 = 0LL;
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
  v14 = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v14;
  v15 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v16 = v15 == 0;
  if ( v16 != (v14 == 0) )
  {
    v8 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v8 + 24) = *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    goto LABEL_6;
  }
  if ( v15 )
  {
    v17 = 8LL * *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( !is_mul_ok(*(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), 8uLL) )
      v17 = -1LL;
    v18 = operator new[](v17, 0x4B677844u, PagedPool);
    v13 = v18;
    *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v18;
    if ( !v18 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v20 + 24) = 644LL;
      WdLogEvent5_WdLowResource(v20);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v21, &EventProfilerExit, v22, 2109);
      return 3221225495LL;
    }
    *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v18;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
    Current,
    (struct DXGDEVICE **)(v3 + 8));
  if ( *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16),
      *(struct DXGDEVICE **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    COREDEVICEACCESS::COREDEVICEACCESS(
      v3 + 144,
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      2,
      v26,
      0);
    LODWORD(v25) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
    if ( (int)v25 >= 0 )
    {
      if ( *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)
        || (v28 = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28)) == 0
        || (LOBYTE(v27) = 1,
            v29 = ObOpenObjectByName(
                    v28,
                    g_pDxgkSharedSwapChainObjectType,
                    v27,
                    0LL,
                    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
                    0LL,
                    v3 + 32),
            v25 = v29,
            v29 >= 0) )
      {
        v35 = ObReferenceObjectByHandle(
                *(HANDLE *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
                0x20000u,
                g_pDxgkSharedSwapChainObjectType,
                1,
                (PVOID *)(v3 + 112),
                0LL);
        v39 = *(DXGSWAPCHAIN ***)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
        *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v39;
        LODWORD(v25) = v35;
        if ( v35 >= 0 )
        {
          v5 = *v39;
          *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v39;
          v40 = *((_DWORD *)v5 + 10);
          if ( *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
          {
            if ( *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) == v40 )
            {
              LODWORD(v25) = DXGSWAPCHAIN::OpenLocal(
                               v5,
                               *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
                               *(struct DXGDEVICE **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                               *(void **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                               *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                               *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
              if ( (int)v25 >= 0 )
                LODWORD(v25) = DXGSWAPCHAIN::DuplicateSurfacesForOpen(
                                 (UINT *)v5,
                                 (struct _D3DKMT_OPENSWAPCHAIN *)(v3 + 32));
            }
            else
            {
              v41 = WdLogNewEntry5_WdWarning(v39, v36, v37, v38);
              *(_QWORD *)(v41 + 24) = *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
              *(_QWORD *)(v41 + 32) = *((unsigned int *)v5 + 10);
              WdLogEvent5_WdWarning(v41);
              LODWORD(v25) = -1073741811;
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v40;
            LODWORD(v25) = -1073741789;
          }
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
          if ( (int)(v25 + 0x80000000) < 0 || (_DWORD)v25 == -1073741789 )
          {
            v42 = (_QWORD *)a1;
            if ( a1 >= MmUserProbeAddress )
              v42 = (_QWORD *)MmUserProbeAddress;
            *v42 = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            v43 = (_DWORD *)(a1 + 48);
            if ( a1 + 48 >= MmUserProbeAddress )
              v43 = (_DWORD *)MmUserProbeAddress;
            *v43 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            v44 = *(char **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
            if ( v44 && *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
            {
              v45 = 8LL * *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
              if ( (unsigned __int64)&v44[v45] > MmUserProbeAddress || &v44[v45] <= v44 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v44, v13, v45);
            }
          }
          goto LABEL_51;
        }
        v34 = WdLogNewEntry5_WdWarning(v39, v36, v37, v38);
        *(_QWORD *)(v34 + 24) = *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        *(_QWORD *)(v34 + 32) = (int)v25;
      }
      else
      {
        v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
        *(_QWORD *)(v34 + 24) = v25;
      }
      WdLogEvent5_WdWarning(v34);
    }
LABEL_51:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
    goto LABEL_53;
  }
  v24 = WdLogNewEntry5_WdError(v23);
  *(_QWORD *)(v24 + 24) = *(unsigned int *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
  LODWORD(v25) = -1073741811;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v24);
LABEL_53:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( v13 )
    operator delete(v13);
  v49 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v52) = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
    v51[0] = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    LODWORD(Object) = v25;
    Template_pqdqpp(
      v47,
      v46,
      v48,
      v5,
      Object,
      *(_QWORD *)v51,
      v52,
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    v49 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (v49 & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v48, 2109);
  return (unsigned int)v25;
}
