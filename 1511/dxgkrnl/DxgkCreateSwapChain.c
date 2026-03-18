/*
 * XREFs of DxgkCreateSwapChain @ 0x1C01679D0
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
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0022410 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     Template_pqdqqpp @ 0x1C00228E4 (Template_pqdqqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01655D0 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0165F60 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0166660 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0166AEC (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  DXGSWAPCHAIN *v5; // rsi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG64 v12; // rax
  unsigned __int64 v13; // rdi
  SIZE_T v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  const void *v23; // rdx
  ULONG64 v24; // rcx
  struct _KTHREAD **v25; // r8
  __int64 v26; // r12
  __int64 v27; // rcx
  DXGADAPTER ***v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // r12d
  __int64 v32; // r9
  DXGSWAPCHAIN *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r9
  int Object; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  NTSTATUS inserted; // eax
  _QWORD *v45; // rdx
  void *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int16 v50; // ax
  PVOID *NewObject; // [rsp+100h] [rbp+100h]
  PHANDLE Handle; // [rsp+108h] [rbp+108h]
  __int64 v53; // [rsp+110h] [rbp+110h]
  __int64 v54; // [rsp+118h] [rbp+118h]
  _BYTE v55[224]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2108;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2108);
  v5 = 0LL;
  *(_BYTE *)v3 = 0;
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 421LL;
LABEL_6:
    WdLogEvent5_WdError(v8);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v10, 2108);
    return -1073741811LL;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_OWORD *)v12;
  *(_OWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)(v12 + 16);
  *(_OWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_OWORD *)(v12 + 32);
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(v12 + 48);
  v13 = *(unsigned int *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
  *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v13;
  if ( (unsigned int)v13 > 0x32 )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v8 + 24) = v13;
    goto LABEL_6;
  }
  if ( !(_DWORD)v13 )
  {
    v8 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v8 + 24) = 447LL;
    goto LABEL_6;
  }
  v14 = 8 * v13;
  if ( !is_mul_ok(v13, 8uLL) )
    v14 = -1LL;
  v19 = operator new[](v14, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v19;
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = 453LL;
    WdLogEvent5_WdLowResource(v20);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v21, &EventProfilerExit, v22, 2108);
    return 3221225495LL;
  }
  v23 = *(const void **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v24 = (ULONG64)v23 + 8 * v13;
  if ( v24 < (unsigned __int64)v23 || v24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v19, v23, 8 * v13);
  *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v19;
  v25 = (struct _KTHREAD **)Current;
  v26 = *(unsigned int *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
    v25,
    (struct DXGDEVICE **)(v3 + 128));
  v28 = *(DXGADAPTER ****)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  if ( v28 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
      *(struct DXGDEVICE **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 144, (__int64)v28, 2, v32, 0);
    LODWORD(v30) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
    if ( (int)v30 >= 0 )
    {
      v33 = (DXGSWAPCHAIN *)operator new[](0xD8uLL, 0x4B677844u, (POOL_TYPE)512);
      if ( v33 )
        v5 = DXGSWAPCHAIN::DXGSWAPCHAIN(v33);
      else
        v5 = 0LL;
      *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v5;
      if ( v5 )
      {
        LODWORD(v30) = DXGSWAPCHAIN::InitializeGlobalState(v5, v28[2], (struct _D3DKMT_CREATESWAPCHAIN *)(v3 + 56));
        if ( (int)v30 >= 0 )
        {
          LODWORD(v30) = DXGSWAPCHAIN::OpenLocal(
                           v5,
                           v26,
                           (struct DXGDEVICE *)v28,
                           *(void **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                           *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                           *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
          if ( (int)v30 >= 0 )
          {
            LODWORD(v30) = DXGSWAPCHAIN::DuplicateSurfacesForCreate(v5, (struct _D3DKMT_CREATESWAPCHAIN *)(v3 + 56));
            if ( (int)v30 >= 0 )
            {
              LOBYTE(v40) = 1;
              LOBYTE(v39) = 1;
              Object = ObCreateObject(
                         v39,
                         g_pDxgkSharedSwapChainObjectType,
                         *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                         v40,
                         0LL,
                         8,
                         224,
                         0,
                         v3 + 48);
              v30 = Object;
              if ( Object >= 0 )
              {
                **(_QWORD **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5;
                *(_BYTE *)v3 = 1;
                inserted = ObInsertObject(
                             *(PVOID *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                             0LL,
                             *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                             0,
                             0LL,
                             (PHANDLE)(v3 + 32));
                v30 = inserted;
                if ( inserted >= 0 )
                {
                  v45 = (_QWORD *)(a1 + 48);
                  if ( a1 + 48 >= MmUserProbeAddress )
                    v45 = (_QWORD *)MmUserProbeAddress;
                  *v45 = *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  v31 = *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
                  if ( *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
                  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
                  goto LABEL_48;
                }
              }
              v43 = WdLogNewEntry5_WdError(v42);
              *(_QWORD *)(v43 + 24) = v30;
              WdLogEvent5_WdError(v43);
            }
          }
        }
      }
      else
      {
        v38 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
        *(_QWORD *)(v38 + 24) = 492LL;
        WdLogEvent5_WdLowResource(v38);
        LODWORD(v30) = -1073741801;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v29 + 24) = v26;
    LODWORD(v30) = -1073741811;
    *(_QWORD *)(v29 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v29);
  }
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  v31 = *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_48:
  if ( (int)v30 < 0 )
  {
    v46 = *(void **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( v46 )
      ObCloseHandle(v46, 1);
    if ( v5 && !*(_BYTE *)v3 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v5);
      v5 = 0LL;
    }
  }
  operator delete(*(void **)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
  v50 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v54) = v31;
    LODWORD(v53) = *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
    LODWORD(Handle) = *(_DWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    LODWORD(NewObject) = v30;
    Template_pqdqqpp(
      v48,
      v47,
      v49,
      v5,
      NewObject,
      Handle,
      v53,
      v54,
      *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
      *(_QWORD *)(((unsigned __int64)v55 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    v50 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (v50 & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v49, 2108);
  return (unsigned int)v30;
}
