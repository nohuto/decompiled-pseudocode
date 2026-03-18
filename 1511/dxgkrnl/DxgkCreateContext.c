/*
 * XREFs of DxgkCreateContext @ 0x1C01378F0
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
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C006DABC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C008B768 (-GetBitCount@@YAII@Z.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1C008B778 (-GetHighestBitPos@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGCONTEXT **v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  struct DXGDEVICE *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int Context; // r12d
  __int64 v35; // rcx
  __int64 v36; // r8
  PVOID v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  char *v46; // rdx
  size_t v47; // r8
  unsigned int v48; // r8d
  __int64 v49; // rdx
  int v50; // r9d
  int v51; // r10d
  int v52; // r11d
  _DWORD *v53; // rdx
  _QWORD *v54; // rdx
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  _DWORD *v57; // rdx
  _QWORD *v58; // rdx
  _DWORD *v59; // rdx
  _BYTE v60[288]; // [rsp+1B0h] [rbp+1B0h] BYREF

  v3 = (struct DXGCONTEXT **)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 2039;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
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
      Template_q(v10, &EventProfilerExit, v9, 2039);
    return v8;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v13;
  *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v13[1];
  *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v13[2];
  *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v13[3];
  *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v13[4];
  *(_OWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v13[5];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
    Current,
    v3 + 7);
  v17 = *(struct DXGDEVICE **)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    v8 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  v19 = *((_QWORD *)v17 + 2);
  v20 = *(unsigned int *)(*(_QWORD *)(v19 + 16) + 1384LL);
  if ( (v20 & 1) != 0 )
  {
    v23 = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    GetHighestBitPos(*(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
    if ( (unsigned int)GetBitCount(v23) <= 1 )
    {
      v28 = *(_QWORD *)(v26 + 16);
      if ( (unsigned int)v27 >= *(_DWORD *)(v28 + 232) )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        v22[3] = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        goto LABEL_23;
      }
      v25 = *(unsigned __int16 *)(*(_QWORD *)(v28 + 1904) + 48 * v27);
      v23 = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
      *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v23;
      if ( (unsigned int)v23 < (unsigned int)v25 )
        goto LABEL_27;
    }
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
    v22[3] = v23;
LABEL_23:
    v8 = -1073741811;
    v22[4] = -1073741811LL;
    goto LABEL_20;
  }
  v21 = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
  *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v21;
  if ( (_DWORD)v21 || *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v14, v19, v16);
    v22[3] = v21;
    v22[4] = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    v8 = -1073741811;
    v22[5] = -1073741811LL;
LABEL_20:
    WdLogEvent5_WdWarning(v22);
    goto LABEL_15;
  }
LABEL_27:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4), v17);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 26), (__int64)v17, 0, v29, 0);
  Context = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 26));
  if ( Context >= 0 )
  {
    v37 = 0LL;
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    v38 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v38;
    if ( v38 )
    {
      if ( *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
      {
        v40 = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v40;
        v37 = operator new[]((unsigned int)v40, 0x4B677844u, PagedPool);
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v37;
        if ( !v37 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
          v45[3] = v17;
          v45[4] = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v8 = -1073741801;
          v45[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v45);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 26));
          if ( *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL));
          goto LABEL_6;
        }
        v46 = *(char **)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v47 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( &v46[v47] < v46 || (unsigned __int64)&v46[v47] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v37, v46, v47);
        v48 = *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        goto LABEL_50;
      }
    }
    else if ( !*(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
    {
      v48 = *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_50:
      *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      Context = DXGDEVICE::CreateContext(
                  v17,
                  v3 + 2,
                  v48,
                  *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                  *(struct _D3DDDI_CREATECONTEXTFLAGS *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
                  v37,
                  *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78),
                  (enum _D3DKMT_CLIENTHINT)*(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C),
                  0);
      v49 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( Context >= 0 )
      {
        v50 = *(_DWORD *)(v49 + 24);
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v49 + 56);
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_QWORD *)(v49 + 48);
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_QWORD *)(v49 + 80);
        v51 = *(_DWORD *)(v49 + 64);
        *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_QWORD *)(v49 + 112);
        v52 = *(_DWORD *)(v49 + 96);
        v53 = (_DWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v53 = (_DWORD *)MmUserProbeAddress;
        *v53 = v50;
        v54 = (_QWORD *)(a1 + 40);
        if ( a1 + 40 >= MmUserProbeAddress )
          v54 = (_QWORD *)MmUserProbeAddress;
        *v54 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v55 = (_QWORD *)(a1 + 48);
        if ( a1 + 48 >= MmUserProbeAddress )
          v55 = (_QWORD *)MmUserProbeAddress;
        *v55 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v56 = (_QWORD *)(a1 + 56);
        if ( a1 + 56 >= MmUserProbeAddress )
          v56 = (_QWORD *)MmUserProbeAddress;
        *v56 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        v57 = (_DWORD *)(a1 + 64);
        if ( a1 + 64 >= MmUserProbeAddress )
          v57 = (_DWORD *)MmUserProbeAddress;
        *v57 = v51;
        v58 = (_QWORD *)(a1 + 72);
        if ( a1 + 72 >= MmUserProbeAddress )
          v58 = (_QWORD *)MmUserProbeAddress;
        *v58 = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
        v59 = (_DWORD *)(a1 + 80);
        if ( a1 + 80 >= MmUserProbeAddress )
          v59 = (_DWORD *)MmUserProbeAddress;
        *v59 = v52;
      }
      operator delete(v37);
      goto LABEL_28;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    v39[3] = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v39[4] = *(unsigned int *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    v8 = -1073741811;
    v39[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 26));
    if ( *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    goto LABEL_15;
  }
LABEL_28:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 26));
  if ( *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v35, &EventProfilerExit, v36, 2039);
  return (unsigned int)Context;
}
