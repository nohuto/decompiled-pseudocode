/*
 * XREFs of DxgkCreateOverlay @ 0x1C0142F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C001E91C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0135234 (-CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkCreateOverlay(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  int Overlay; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  ULONG64 v13; // rax
  __int64 v14; // rcx
  struct ADAPTER_RENDER **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // eax
  size_t v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  PVOID v31; // r9
  _QWORD *v32; // rax
  char *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  _DWORD *v39; // rdx
  char v40; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2022;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2022);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    Overlay = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2022);
    return (unsigned int)Overlay;
  }
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v13;
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v13 + 16);
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v13 + 32);
  *(_OWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v13 + 48);
  *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_QWORD *)(v13 + 64);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44),
    Current,
    (struct DXGDEVICE **)(v3 + 24));
  v15 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = *(unsigned int *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44);
    Overlay = -1073741811;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 144, (__int64)v15, 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 144));
  if ( v18 >= 0 )
  {
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
    {
      v25 = WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
      Overlay = -1073741790;
      *(_QWORD *)(v25 + 24) = -1073741790LL;
      WdLogEvent5_WdEvent(v25);
LABEL_23:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
      if ( *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
      v10 = qword_1C00467F0;
      v11 = (qword_1C00467F0 & 2) == 0;
      goto LABEL_6;
    }
    v26 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
    if ( v26 && *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) )
    {
      v27 = v26;
      v31 = operator new[](v26, 0x4B677844u, PagedPool);
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v31;
      if ( !v31 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30, 0LL);
        v32[3] = v15;
        v32[4] = v27;
        Overlay = -1073741801;
        v32[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v32);
        goto LABEL_23;
      }
      v33 = *(char **)(a1 + 48);
      if ( &v33[v27] < v33 || (unsigned __int64)&v33[v27] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v31, v33, v27);
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 0;
      *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
    }
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v15) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
      *(_QWORD *)(v38 + 24) = 638LL;
      WdLogEvent5_WdAssertion(v38);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)(v3 + 32), v15[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 32));
    Overlay = DXGDEVICE::CreateOverlay((DXGDEVICE *)v15, (struct _D3DKMT_CREATEOVERLAY *)(v3 + 64));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 32));
    operator delete(*(void **)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70));
    if ( Overlay >= 0 )
    {
      v39 = (_DWORD *)(a1 + 64);
      if ( a1 + 64 >= MmUserProbeAddress )
        v39 = (_DWORD *)MmUserProbeAddress;
      *v39 = *(_DWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
    }
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 32));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
    if ( *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 144));
  if ( *(_QWORD *)(((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v40 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 2022);
  return (unsigned int)v18;
}
