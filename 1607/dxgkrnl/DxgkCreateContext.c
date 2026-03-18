/*
 * XREFs of DxgkCreateContext @ 0x1C01570A0
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
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C0093FC4 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00960C4 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1C016B9F4 (-GetHighestBitPos@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContext(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGCONTEXT **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  struct DXGDEVICE *v19; // r13
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int Context; // r12d
  __int64 v37; // rcx
  __int64 v38; // r8
  PVOID v39; // rdi
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  char *v48; // rdx
  size_t v49; // r8
  unsigned int v50; // r8d
  __int64 v51; // rdx
  int v52; // r9d
  int v53; // r10d
  int v54; // r11d
  _DWORD *v55; // rdx
  _QWORD *v56; // rdx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _DWORD *v59; // rdx
  _QWORD *v60; // rdx
  _DWORD *v61; // rdx
  _BYTE v62[288]; // [rsp+1B0h] [rbp+1B0h] BYREF

  v3 = (struct DXGCONTEXT **)((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 2039;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2039);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2039);
    return v10;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v15;
  *(_OWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v15[1];
  *(_OWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v15[2];
  *(_OWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v15[3];
  *(_OWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v15[4];
  *(_OWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v15[5];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
    ProcessDxgProcess,
    v3 + 6);
  v19 = *(struct DXGDEVICE **)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v20 + 24) = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    v10 = -1073741811;
    *(_QWORD *)(v20 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v20);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  v21 = *((_QWORD *)v19 + 2);
  v22 = *(unsigned int *)(*(_QWORD *)(v21 + 16) + 1520LL);
  if ( (v22 & 1) != 0 )
  {
    v25 = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    GetHighestBitPos(*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68));
    if ( (unsigned int)GetBitCount(v25) <= 1 )
    {
      v30 = *(_QWORD *)(v28 + 16);
      if ( (unsigned int)v29 >= *(_DWORD *)(v30 + 248) )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
        v24[3] = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
        goto LABEL_23;
      }
      v27 = *(unsigned __int16 *)(*(_QWORD *)(v30 + 2040) + 48 * v29);
      v25 = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
      *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v25;
      if ( (unsigned int)v25 < (unsigned int)v27 )
        goto LABEL_27;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    v24[3] = v25;
LABEL_23:
    v10 = -1073741811;
    v24[4] = -1073741811LL;
    goto LABEL_20;
  }
  v23 = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x64);
  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v23;
  if ( (_DWORD)v23 || *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v16, v21, v18);
    v24[3] = v23;
    v24[4] = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
    v10 = -1073741811;
    v24[5] = -1073741811LL;
LABEL_20:
    WdLogEvent5_WdWarning(v24);
    goto LABEL_15;
  }
LABEL_27:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4), v19);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 24), (__int64)v19, 0, v31, 0);
  Context = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 24));
  if ( Context >= 0 )
  {
    v39 = 0LL;
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
    v40 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v40;
    if ( v40 )
    {
      if ( *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
      {
        v42 = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v42;
        v39 = operator new((unsigned int)v42, 0x4B677844u, PagedPool);
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v39;
        if ( !v39 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
          v47[3] = v19;
          v47[4] = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v10 = -1073741801;
          v47[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v47);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 24));
          if ( *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL));
          goto LABEL_6;
        }
        v48 = *(char **)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v49 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        if ( &v48[v49] < v48 || (unsigned __int64)&v48[v49] > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v39, v48, v49);
        v50 = *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        goto LABEL_50;
      }
    }
    else if ( !*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) )
    {
      v50 = *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_50:
      *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      Context = DXGDEVICE::CreateContext(
                  v19,
                  v3 + 2,
                  v50,
                  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
                  *(struct _D3DDDI_CREATECONTEXTFLAGS *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C),
                  v39,
                  *(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78),
                  (enum _D3DKMT_CLIENTHINT)*(_DWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x7C),
                  0);
      v51 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      if ( Context >= 0 )
      {
        v52 = *(_DWORD *)(v51 + 24);
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(v51 + 56);
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = *(_QWORD *)(v51 + 48);
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_QWORD *)(v51 + 80);
        v53 = *(_DWORD *)(v51 + 64);
        *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = *(_QWORD *)(v51 + 112);
        v54 = *(_DWORD *)(v51 + 96);
        v55 = (_DWORD *)(a1 + 32);
        if ( a1 + 32 >= MmUserProbeAddress )
          v55 = (_DWORD *)MmUserProbeAddress;
        *v55 = v52;
        v56 = (_QWORD *)(a1 + 40);
        if ( a1 + 40 >= MmUserProbeAddress )
          v56 = (_QWORD *)MmUserProbeAddress;
        *v56 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v57 = (_QWORD *)(a1 + 48);
        if ( a1 + 48 >= MmUserProbeAddress )
          v57 = (_QWORD *)MmUserProbeAddress;
        *v57 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        v58 = (_QWORD *)(a1 + 56);
        if ( a1 + 56 >= MmUserProbeAddress )
          v58 = (_QWORD *)MmUserProbeAddress;
        *v58 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
        v59 = (_DWORD *)(a1 + 64);
        if ( a1 + 64 >= MmUserProbeAddress )
          v59 = (_DWORD *)MmUserProbeAddress;
        *v59 = v53;
        v60 = (_QWORD *)(a1 + 72);
        if ( a1 + 72 >= MmUserProbeAddress )
          v60 = (_QWORD *)MmUserProbeAddress;
        *v60 = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
        v61 = (_DWORD *)(a1 + 80);
        if ( a1 + 80 >= MmUserProbeAddress )
          v61 = (_DWORD *)MmUserProbeAddress;
        *v61 = v54;
      }
      operator delete(v39);
      goto LABEL_28;
    }
    v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    v41[3] = *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v41[4] = *(unsigned int *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    v10 = -1073741811;
    v41[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 24));
    if ( *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    goto LABEL_15;
  }
LABEL_28:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 24));
  if ( *(_QWORD *)(((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v62 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v37, &EventProfilerExit, v38, 2039);
  return (unsigned int)Context;
}
