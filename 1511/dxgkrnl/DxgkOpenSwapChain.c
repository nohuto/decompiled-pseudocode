/*
 * XREFs of DxgkOpenSwapChain @ 0x1C0168100
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
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     Template_pqdqpp @ 0x1C0022828 (Template_pqdqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0166104 (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0166AEC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
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
  PVOID *Object; // [rsp+100h] [rbp+100h]
  int v54[2]; // [rsp+108h] [rbp+108h]
  __int64 v55; // [rsp+110h] [rbp+110h]
  _BYTE v56[224]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 2109;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2109);
  v5 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
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
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *v12;
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v12[1];
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v12[2];
  *(_OWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v12[3];
  v13 = 0LL;
  *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 0LL;
  v14 = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v14;
  v15 = *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v16 = v15 == 0;
  if ( v16 != (v14 == 0) )
  {
    v8 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v8 + 24) = *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    goto LABEL_6;
  }
  if ( v15 )
  {
    v17 = 8LL * *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( !is_mul_ok(*(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), 8uLL) )
      v17 = -1LL;
    v18 = operator new[](v17, 0x4B677844u, PagedPool);
    v13 = v18;
    *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v18;
    if ( !v18 )
    {
      v23 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = 644LL;
      WdLogEvent5_WdLowResource(v23);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v24, &EventProfilerExit, v25, 2109);
      return 3221225495LL;
    }
    *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v18;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
    Current,
    (struct DXGDEVICE **)(v3 + 8));
  if ( *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16),
      *(struct DXGDEVICE **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    COREDEVICEACCESS::COREDEVICEACCESS(
      v3 + 144,
      *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      2,
      v29,
      0);
    LODWORD(v28) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
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
                (PVOID *)(v3 + 112),
                0LL);
        v42 = *(DXGSWAPCHAIN ***)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
        *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v42;
        LODWORD(v28) = v38;
        if ( v38 >= 0 )
        {
          v5 = *v42;
          *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v42;
          v43 = *((_DWORD *)v5 + 16);
          if ( *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
          {
            if ( *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) == v43 )
            {
              LODWORD(v28) = DXGSWAPCHAIN::OpenLocal(
                               v5,
                               *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34),
                               *(struct DXGDEVICE **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
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
              *(_QWORD *)(v44 + 32) = *((unsigned int *)v5 + 16);
              WdLogEvent5_WdWarning(v44);
              LODWORD(v28) = -1073741811;
            }
          }
          else
          {
            *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v43;
            LODWORD(v28) = -1073741789;
          }
          ObfDereferenceObject(*(PVOID *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
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
            v47 = *(char **)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
            if ( v47 && *(_DWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) )
            {
              v48 = 8LL * *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
              if ( (unsigned __int64)&v47[v48] > MmUserProbeAddress || &v47[v48] <= v47 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v47, v13, v48);
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
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
    goto LABEL_53;
  }
  v27 = WdLogNewEntry5_WdError(v26);
  *(_QWORD *)(v27 + 24) = *(unsigned int *)(((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
  LODWORD(v28) = -1073741811;
  *(_QWORD *)(v27 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v27);
LABEL_53:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v56 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( v13 )
    operator delete(v13);
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
  if ( (qword_1C00467F0 & 2) != 0 && (v52 & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v51, 2109);
  return (unsigned int)v28;
}
