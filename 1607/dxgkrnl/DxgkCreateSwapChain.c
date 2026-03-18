/*
 * XREFs of DxgkCreateSwapChain @ 0x1C018F860
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
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C0028F24 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     Template_pqdqqpp @ 0x1C00293F8 (Template_pqdqqpp.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C018D268 (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C018DCA8 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C018E3A8 (-InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C018E860 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  DXGSWAPCHAIN *v5; // rsi
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 ProcessDxgProcess; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG64 v14; // rax
  unsigned __int64 v15; // rdi
  SIZE_T v16; // rax
  __int64 v17; // rcx
  PVOID v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  const void *v22; // rdx
  ULONG64 v23; // rcx
  struct _KTHREAD **v24; // r8
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // r12d
  __int64 v31; // r9
  DXGSWAPCHAIN *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r9
  int Object; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  NTSTATUS inserted; // eax
  _QWORD *v42; // rdx
  void *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int16 v47; // ax
  PVOID *NewObject; // [rsp+110h] [rbp+110h]
  PHANDLE Handle; // [rsp+118h] [rbp+118h]
  __int64 v50; // [rsp+120h] [rbp+120h]
  __int64 v51; // [rsp+128h] [rbp+128h]
  _BYTE v52[240]; // [rsp+180h] [rbp+180h] BYREF

  v3 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 2108;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2108);
  v5 = 0LL;
  *(_BYTE *)v3 = 0;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v7);
  if ( !ProcessDxgProcess )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = 421LL;
LABEL_6:
    WdLogEvent5_WdError(v10);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v12, 2108);
    return -1073741811LL;
  }
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = *(_OWORD *)v14;
  *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_OWORD *)(v14 + 16);
  *(_OWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_OWORD *)(v14 + 32);
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = *(_QWORD *)(v14 + 48);
  v15 = *(unsigned int *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C);
  *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v15;
  if ( (unsigned int)v15 > 0x32 )
  {
    v10 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v10 + 24) = v15;
    goto LABEL_6;
  }
  if ( !(_DWORD)v15 )
  {
    v10 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v10 + 24) = 447LL;
    goto LABEL_6;
  }
  v16 = 8 * v15;
  if ( !is_mul_ok(v15, 8uLL) )
    v16 = -1LL;
  v18 = operator new[](v16, 0x4B677844u, PagedPool);
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v18;
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v19 + 24) = 453LL;
    WdLogEvent5_WdLowResource(v19);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v20, &EventProfilerExit, v21, 2108);
    return 3221225495LL;
  }
  v22 = *(const void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
  v23 = (ULONG64)v22 + 8 * v15;
  if ( v23 < (unsigned __int64)v22 || v23 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v22, 8 * v15);
  *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v18;
  v24 = (struct _KTHREAD **)ProcessDxgProcess;
  v25 = *(unsigned int *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C),
    v24,
    (struct DXGDEVICE **)(v3 + 120));
  v27 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
  if ( v27 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
      *(struct DXGDEVICE **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78));
    COREDEVICEACCESS::COREDEVICEACCESS(v3 + 144, v27, 2, v31, 0);
    LODWORD(v29) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
    if ( (int)v29 >= 0 )
    {
      v32 = (DXGSWAPCHAIN *)operator new(0xD0uLL, 0x4B677844u, (POOL_TYPE)512);
      if ( v32 )
        v5 = DXGSWAPCHAIN::DXGSWAPCHAIN(v32);
      else
        v5 = 0LL;
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v5;
      if ( v5 )
      {
        LODWORD(v29) = DXGSWAPCHAIN::InitializeGlobalState(
                         v5,
                         *(struct ADAPTER_RENDER **)(v27 + 16),
                         (struct _D3DKMT_CREATESWAPCHAIN *)(v3 + 56));
        if ( (int)v29 >= 0 )
        {
          v35 = *(_QWORD *)(v27 + 2856);
          if ( v35 )
            *((_QWORD *)v5 + 25) = *(_QWORD *)(v35 + 268);
          LODWORD(v29) = DXGSWAPCHAIN::OpenLocal(
                           v5,
                           v25,
                           (struct DXGDEVICE *)v27,
                           *(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
                           *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                           *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
          if ( (int)v29 >= 0 )
          {
            LODWORD(v29) = DXGSWAPCHAIN::DuplicateSurfacesForCreate(v5, (struct _D3DKMT_CREATESWAPCHAIN *)(v3 + 56));
            if ( (int)v29 >= 0 )
            {
              LOBYTE(v37) = 1;
              LOBYTE(v36) = 1;
              Object = ObCreateObject(
                         v36,
                         g_pDxgkSharedSwapChainObjectType,
                         *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
                         v37,
                         0LL,
                         8,
                         216,
                         0,
                         v3 + 48);
              v29 = Object;
              if ( Object >= 0 )
              {
                **(_QWORD **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v5;
                *(_BYTE *)v3 = 1;
                inserted = ObInsertObject(
                             *(PVOID *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                             0LL,
                             *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
                             0,
                             0LL,
                             (PHANDLE)(v3 + 40));
                v29 = inserted;
                if ( inserted >= 0 )
                {
                  v42 = (_QWORD *)(a1 + 48);
                  if ( a1 + 48 >= MmUserProbeAddress )
                    v42 = (_QWORD *)MmUserProbeAddress;
                  *v42 = *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
                  v30 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
                  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
                  if ( *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
                    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
                  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
                  goto LABEL_50;
                }
              }
              v40 = WdLogNewEntry5_WdError(v39);
              *(_QWORD *)(v40 + 24) = v29;
              WdLogEvent5_WdError(v40);
            }
          }
        }
      }
      else
      {
        v34 = WdLogNewEntry5_WdLowResource(v33);
        *(_QWORD *)(v34 + 24) = 492LL;
        WdLogEvent5_WdLowResource(v34);
        LODWORD(v29) = -1073741801;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v28 + 24) = v25;
    LODWORD(v29) = -1073741811;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  v30 = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_50:
  if ( (int)v29 < 0 )
  {
    v43 = *(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    if ( v43 )
      ObCloseHandle(v43, 1);
    if ( v5 && !*(_BYTE *)v3 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v5);
      v5 = 0LL;
    }
  }
  operator delete(*(void **)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
  v47 = Microsoft_Windows_DxgKrnlEnableBits;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v51) = v30;
    LODWORD(v50) = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
    LODWORD(Handle) = *(_DWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    LODWORD(NewObject) = v29;
    Template_pqdqqpp(
      v45,
      v44,
      v46,
      v5,
      NewObject,
      Handle,
      v50,
      v51,
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
      *(_QWORD *)(((unsigned __int64)v52 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
    v47 = Microsoft_Windows_DxgKrnlEnableBits;
  }
  if ( (qword_1C0056840 & 2) != 0 && (v47 & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v46, 2108);
  return (unsigned int)v29;
}
