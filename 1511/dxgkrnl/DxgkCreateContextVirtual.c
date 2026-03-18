/*
 * XREFs of DxgkCreateContextVirtual @ 0x1C008A8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0001F98 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003FCC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C006DABC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C008B768 (-GetBitCount@@YAII@Z.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1C008B778 (-GetHighestBitPos@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  ULONG64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned int HighestBitPos; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  ADAPTER_RENDER *v21; // r9
  __int64 v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // r10d
  __int64 v27; // r11
  PVOID PoolWithTag; // r12
  char *v29; // r13
  int v30; // eax
  __int64 v31; // r9
  int Context; // r15d
  __int64 v33; // rcx
  __int64 v34; // r8
  bool v35; // zf
  __int64 v36; // rax
  SIZE_T v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  size_t v43; // r8
  DXGDEVICE *v44; // r13
  unsigned int v45; // r9d
  unsigned int v46; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS v47; // edx
  int v48; // r8d
  _DWORD *v49; // rdx
  _BYTE v50[208]; // [rsp+160h] [rbp+160h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2039;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2039);
    return 3221225485LL;
  }
  v12 = a1;
  if ( a1 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)v12;
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v12 + 16);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_QWORD *)(v12 + 32);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
    Current,
    v3 + 8);
  v14 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v14;
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL));
    v10 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  v16 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v16;
  HighestBitPos = GetHighestBitPos(v16);
  if ( HighestBitPos >= *(_DWORD *)(v22 + 232) )
    goto LABEL_16;
  v24 = *(unsigned __int16 *)(*(_QWORD *)(v22 + 1904) + 48LL * HighestBitPos);
  v25 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v25;
  if ( (unsigned int)v25 >= (unsigned int)v24 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v18, v25, v21);
    v23[3] = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_17;
  }
  if ( GetBitCount(v16) > 1 )
  {
LABEL_16:
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v23[3] = v16;
LABEL_17:
    v23[4] = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdWarning(v23);
    goto LABEL_14;
  }
  PoolWithTag = 0LL;
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
  v29 = *(char **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  if ( v29 )
  {
    if ( *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
      goto LABEL_27;
LABEL_26:
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v23[3] = v29;
    v23[4] = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    v23[5] = -1073741811LL;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
    goto LABEL_26;
LABEL_27:
  v30 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C);
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v30;
  if ( (v30 & 8) == 0 && ((*(_DWORD *)(v27 + 1388) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v21, v26, v20)) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v23[3] = -1073741811LL;
    v23[4] = 301LL;
    goto LABEL_18;
  }
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v14;
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 16), v14, 0, v31, 0);
  Context = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 16));
  if ( Context >= 0 )
  {
    if ( v29 )
    {
      v36 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v36;
      v37 = (unsigned int)v36;
      if ( !v36 )
        v37 = 1LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v37, 0x4B677844u);
      *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
        v42[3] = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        v42[4] = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        Context = -1073741801;
        v42[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v42);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 16));
        if ( *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL));
        v33 = qword_1C00467F0;
        v35 = (qword_1C00467F0 & 2) == 0;
        goto LABEL_36;
      }
      v43 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      if ( &v29[v43] < v29 || (unsigned __int64)&v29[v43] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, v29, v43);
      v44 = *(DXGDEVICE **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v45 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v46 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v47.0 = *(struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    }
    else
    {
      v44 = *(DXGDEVICE **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      v45 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v46 = *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v47.0 = *(struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    }
    *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    Context = DXGDEVICE::CreateContext(
                v44,
                v3 + 6,
                v46,
                v45,
                v47,
                PoolWithTag,
                *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                (enum _D3DKMT_CLIENTHINT)*(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
                1);
    if ( Context >= 0 )
    {
      v48 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 24LL);
      *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v48;
      v49 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v49 = (_DWORD *)MmUserProbeAddress;
      *v49 = v48;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 16));
    v33 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    if ( v33 && *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v33 + 80));
      KeLeaveCriticalRegion();
    }
    if ( *v3 )
    {
      v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)*v3 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v33 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)*v3 + 2), *v3);
    }
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 16));
    if ( *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL));
  }
  v35 = (qword_1C00467F0 & 2) == 0;
LABEL_36:
  if ( !v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 2039);
  return (unsigned int)Context;
}
