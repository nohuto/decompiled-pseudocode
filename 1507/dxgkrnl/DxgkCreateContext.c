/*
 * XREFs of DxgkCreateContext @ 0x1C00689F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002BEC (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0068E84 (-GetBitCount@@YAII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C007A574 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGDEVICE *v11; // r13
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // eax
  unsigned int BitCount; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int Context; // r12d
  PVOID PoolWithTag; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  SIZE_T v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  char *v39; // rdx
  size_t v40; // r8
  unsigned int v41; // r8d
  __int64 v42; // rdx
  int v43; // r9d
  int v44; // r10d
  int v45; // r11d
  _DWORD *v46; // rdx
  _QWORD *v47; // rdx
  _QWORD *v48; // rdx
  _QWORD *v49; // rdx
  _DWORD *v50; // rdx
  _QWORD *v51; // rdx
  _DWORD *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v56; // rax
  unsigned int v57; // edi
  __int64 v58; // r8
  __int64 v59; // rcx
  bool v60; // zf
  __int64 v61; // rax
  __int64 v62; // rdi
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  _BYTE v66[304]; // [rsp+1C0h] [rbp+1C0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 2039;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v56 = WdLogNewEntry5_WdError(v5);
    v57 = -1073741811;
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v56);
LABEL_53:
    v59 = qword_1C00467F0;
    v60 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_56;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *v7;
  *(_OWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v7[1];
  *(_OWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v7[2];
  *(_OWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v7[3];
  *(_OWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v7[4];
  *(_OWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v7[5];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
    Current,
    v3 + 5);
  v11 = *(DXGDEVICE **)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( !v11 )
  {
    v61 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v61 + 24) = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    v57 = -1073741811;
    *(_QWORD *)(v61 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v61);
    goto LABEL_55;
  }
  v12 = *((_QWORD *)v11 + 2);
  v13 = *(unsigned int *)(*(_QWORD *)(v12 + 16) + 1376LL);
  if ( (v13 & 1) == 0 )
  {
    v62 = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
    *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v62;
    if ( !(_DWORD)v62 && !*(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) )
      goto LABEL_12;
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v8, v10, v12);
    v63[3] = v62;
    v63[4] = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    v57 = -1073741811;
    v63[5] = -1073741811LL;
LABEL_65:
    WdLogEvent5_WdWarning(v63);
    goto LABEL_55;
  }
  v14 = 0;
  v15 = *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  while ( 1 )
  {
    v15 >>= 1;
    if ( !v15 )
      break;
    ++v14;
  }
  BitCount = GetBitCount(*(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58));
  if ( BitCount > v21 || (v22 = *(_QWORD *)(v20 + 16), (unsigned int)v19 >= *(_DWORD *)(v22 + 232)) )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
    v63[3] = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
LABEL_64:
    v57 = -1073741811;
    v63[4] = -1073741811LL;
    goto LABEL_65;
  }
  v23 = *(unsigned __int16 *)(*(_QWORD *)(v22 + 1896) + 48 * v19);
  v24 = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x54);
  *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24;
  if ( (unsigned int)v24 >= (unsigned int)v23 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v17, v19, v20);
    v63[3] = v24;
    goto LABEL_64;
  }
LABEL_12:
  *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v11;
  *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 28), (__int64)v11, 0, v25, 0);
  Context = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 28));
  if ( Context < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 28));
    if ( *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_47;
  }
  PoolWithTag = 0LL;
  *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  v32 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
  *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v32;
  if ( v32 )
  {
    if ( *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
    {
      v33 = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
      *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v33;
      v34 = (unsigned int)v33;
      if ( !v33 )
        v34 = 1LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v34, 0x4B677844u);
      *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = PoolWithTag;
      if ( PoolWithTag )
      {
        v39 = *(char **)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        v40 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
        if ( &v39[v40] < v39 || (unsigned __int64)&v39[v40] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, v39, v40);
        v41 = *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        goto LABEL_22;
      }
      v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      v65[3] = v11;
      v65[4] = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v57 = -1073741801;
      v65[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v65);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 28));
      if ( *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_53;
    }
  }
  else if ( !*(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
  {
    v41 = *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_22:
    *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
    Context = DXGDEVICE::CreateContext(
                v11,
                v3 + 8,
                v41,
                *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
                *(struct _D3DDDI_CREATECONTEXTFLAGS *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x5C),
                PoolWithTag,
                *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                (enum _D3DKMT_CLIENTHINT)*(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
                0);
    v42 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( Context >= 0 )
    {
      v43 = *(_DWORD *)(v42 + 24);
      *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = v43;
      *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_QWORD *)(v42 + 56);
      *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *(_QWORD *)(v42 + 48);
      *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_QWORD *)(v42 + 80);
      v44 = *(_DWORD *)(v42 + 64);
      *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v44;
      *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v42 + 112);
      v45 = *(_DWORD *)(v42 + 96);
      *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v45;
      v46 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v46 = (_DWORD *)MmUserProbeAddress;
      *v46 = v43;
      v47 = (_QWORD *)(a1 + 40);
      if ( a1 + 40 >= MmUserProbeAddress )
        v47 = (_QWORD *)MmUserProbeAddress;
      *v47 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
      v48 = (_QWORD *)(a1 + 48);
      if ( a1 + 48 >= MmUserProbeAddress )
        v48 = (_QWORD *)MmUserProbeAddress;
      *v48 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
      v49 = (_QWORD *)(a1 + 56);
      if ( a1 + 56 >= MmUserProbeAddress )
        v49 = (_QWORD *)MmUserProbeAddress;
      *v49 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
      v50 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v50 = (_DWORD *)MmUserProbeAddress;
      *v50 = v44;
      v51 = (_QWORD *)(a1 + 72);
      if ( a1 + 72 >= MmUserProbeAddress )
        v51 = (_QWORD *)MmUserProbeAddress;
      *v51 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
      v52 = (_DWORD *)(a1 + 80);
      if ( a1 + 80 >= MmUserProbeAddress )
        v52 = (_DWORD *)MmUserProbeAddress;
      *v52 = v45;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 28));
    v54 = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( v54 && *(_DWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v54 + 80));
      KeLeaveCriticalRegion();
    }
    if ( *v3 )
    {
      v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)*v3 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v54 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)*v3 + 2), *v3);
    }
LABEL_47:
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v54, &EventProfilerExit, v53, 2039);
    return (unsigned int)Context;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
  v64[3] = *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  v64[4] = *(unsigned int *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
  v57 = -1073741811;
  v64[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v64);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 28));
  if ( *(_QWORD *)(((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
LABEL_55:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v66 & 0xFFFFFFFFFFFFFFC0uLL));
  v60 = (qword_1C00467F0 & 2) == 0;
LABEL_56:
  if ( !v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v59, &EventProfilerExit, v58, 2039);
  return v57;
}
