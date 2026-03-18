/*
 * XREFs of DxgkCreateOverlay @ 0x1C016D600
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
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00112A0 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0025788 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C015D288 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // rsi
  __int64 v9; // rax
  int Overlay; // edi
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  ULONG64 v15; // rax
  __int64 v16; // rcx
  struct ADAPTER_RENDER **v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // eax
  size_t v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  PVOID v30; // r9
  _QWORD *v31; // rax
  char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _DWORD *v35; // rdx
  char v36; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2022;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2022);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    Overlay = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2022);
    return (unsigned int)Overlay;
  }
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v15;
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v15 + 16);
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v15 + 32);
  *(_OWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v15 + 48);
  *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(v15 + 64);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44),
    ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 24));
  v17 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
    Overlay = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 144, (__int64)v17, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
  if ( v20 >= 0 )
  {
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
    {
      v24 = WdLogNewEntry5_WdEvent(v23);
      Overlay = -1073741790;
      *(_QWORD *)(v24 + 24) = -1073741790LL;
      WdLogEvent5_WdEvent(v24);
LABEL_23:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
      if ( *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
      v12 = qword_1C0056840;
      v13 = (qword_1C0056840 & 2) == 0;
      goto LABEL_6;
    }
    v25 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    if ( v25 && *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) )
    {
      v26 = v25;
      v30 = operator new(v25, 0x4B677844u, PagedPool);
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v30;
      if ( !v30 )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29, 0LL);
        v31[3] = v17;
        v31[4] = v26;
        Overlay = -1073741801;
        v31[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_23;
      }
      v32 = *(char **)(a1 + 48);
      if ( &v32[v26] < v32 || (unsigned __int64)&v32[v26] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v30, v32, v26);
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
      *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v17) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v34 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v34);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)(v3 + 32), v17[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 32));
    Overlay = DXGDEVICE::CreateOverlay((DXGDEVICE *)v17, (struct _D3DKMT_CREATEOVERLAY *)(v3 + 64));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 32));
    operator delete(*(void **)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
    if ( Overlay >= 0 )
    {
      v35 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v35 = (_DWORD *)MmUserProbeAddress;
      *v35 = *(_DWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 32));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
  if ( *(_QWORD *)(((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v36 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v22, 2022);
  return (unsigned int)v20;
}
