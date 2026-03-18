/*
 * XREFs of DxgkCreateSwapChain @ 0x1C01634A0
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
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C002251C (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     Template_pqdqqpp @ 0x1C00229F0 (Template_pqdqqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0160FA0 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0161930 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0162030 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
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
  __int64 v15; // rcx
  PVOID v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  const void *v20; // rdx
  ULONG64 v21; // rcx
  struct _KTHREAD **v22; // r8
  __int64 v23; // r12
  __int64 v24; // rcx
  DXGADAPTER ***v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // r12d
  __int64 v29; // r9
  DXGSWAPCHAIN *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  int Object; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  NTSTATUS inserted; // eax
  _QWORD *v38; // rdx
  void *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int16 v43; // ax
  PVOID *NewObject; // [rsp+100h] [rbp+100h]
  PHANDLE Handle; // [rsp+108h] [rbp+108h]
  _BYTE v46[224]; // [rsp+170h] [rbp+170h] BYREF

  v3 = (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2108;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2108);
  v5 = 0LL;
  *(_BYTE *)v3 = 0;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  Current = DXGPROCESS::GetCurrent(a1);
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
  *(_OWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_OWORD *)v12;
  *(_OWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)(v12 + 16);
  *(_OWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_OWORD *)(v12 + 32);
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(v12 + 48);
  v13 = *(unsigned int *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
  *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v13;
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
  v16 = operator new[](v14, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v16;
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v17 + 24) = 453LL;
    WdLogEvent5_WdLowResource(v17);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v18, &EventProfilerExit, v19, 2108);
    return 3221225495LL;
  }
  v20 = *(const void **)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v21 = (ULONG64)v20 + 8 * v13;
  if ( v21 < (unsigned __int64)v20 || v21 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v16, v20, 8 * v13);
  *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v16;
  v22 = (struct _KTHREAD **)Current;
  v23 = *(unsigned int *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
    v22,
    (struct DXGDEVICE **)(v3 + 128));
  v25 = *(DXGADAPTER ****)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  if ( v25 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
      *(struct DXGDEVICE **)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 144, (__int64)v25, 2, v29, 0);
    LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
    if ( (int)v27 >= 0 )
    {
      v30 = (DXGSWAPCHAIN *)operator new[](0xC0uLL, 0x4B677844u, (POOL_TYPE)512);
      if ( v30 )
        v5 = DXGSWAPCHAIN::DXGSWAPCHAIN(v30);
      else
        v5 = 0LL;
      *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v5;
      if ( v5 )
      {
        LODWORD(v27) = DXGSWAPCHAIN::InitializeGlobalState(v5, v25[2], (struct _D3DKMT_CREATESWAPCHAIN *)(v3 + 56));
        if ( (int)v27 >= 0 )
        {
          LODWORD(v27) = DXGSWAPCHAIN::OpenLocal(
                           v5,
                           v23,
                           (struct DXGDEVICE *)v25,
                           *(void **)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                           *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                           *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
          if ( (int)v27 >= 0 )
          {
            LODWORD(v27) = DXGSWAPCHAIN::DuplicateSurfacesForCreate(v5, (struct _D3DKMT_CREATESWAPCHAIN *)(v3 + 56));
            if ( (int)v27 >= 0 )
            {
              HIDWORD(NewObject) = 0;
              LOBYTE(v33) = 1;
              Object = ObCreateObject(
                         v33,
                         g_pDxgkSharedSwapChainObjectType,
                         *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
              v27 = Object;
              if ( Object >= 0 )
              {
                **(_QWORD **)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5;
                *(_BYTE *)v3 = 1;
                inserted = ObInsertObject(
                             *(PVOID *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                             0LL,
                             *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                             0,
                             0LL,
                             (PHANDLE)(v3 + 32));
                v27 = inserted;
                if ( inserted >= 0 )
                {
                  v38 = (_QWORD *)(a1 + 48);
                  if ( a1 + 48 >= MmUserProbeAddress )
                    v38 = (_QWORD *)MmUserProbeAddress;
                  *v38 = *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
                  v28 = *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
                  if ( *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
                  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
                  goto LABEL_48;
                }
              }
              v36 = WdLogNewEntry5_WdError(v35);
              *(_QWORD *)(v36 + 24) = v27;
              WdLogEvent5_WdError(v36);
            }
          }
        }
      }
      else
      {
        v32 = WdLogNewEntry5_WdLowResource(v31);
        *(_QWORD *)(v32 + 24) = 492LL;
        WdLogEvent5_WdLowResource(v32);
        LODWORD(v27) = -1073741801;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = v23;
    LODWORD(v27) = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
  }
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  v28 = *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_48:
  if ( (int)v27 < 0 )
  {
    v39 = *(void **)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( v39 )
      ObCloseHandle(v39, 1);
    if ( v5 && !*(_BYTE *)v3 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v5);
      v5 = 0LL;
    }
  }
  operator delete(*(void **)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
  v43 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(Handle) = *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    LODWORD(NewObject) = v27;
    Template_pqdqqpp(
      v41,
      v40,
      v42,
      v5,
      NewObject,
      Handle,
      *(_DWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
      v28,
      *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
      *(_QWORD *)(((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    v43 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C00467F0 & 2) != 0 && (v43 & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v42, 2108);
  return (unsigned int)v27;
}
