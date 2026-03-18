/*
 * XREFs of DxgkGetOverlayState @ 0x1C0143B90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C00096EC (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009718 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00103D0 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C001E8A4 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C001E8DC (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C001E91C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C01427A0 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  int OverlayState; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  ULONG64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  struct ADAPTER_RENDER **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r9
  struct DXGOVERLAY *v22; // rbx
  _QWORD *v23; // rax
  int v24; // r15d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _BYTE *v31; // rdx
  char v32; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2057);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    OverlayState = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_7:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2057);
    return (unsigned int)OverlayState;
  }
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)v13;
  *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_DWORD *)(v13 + 8);
  v14 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    (struct _KTHREAD **)Current,
    (struct DXGDEVICE **)(v3 + 56));
  v16 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = v14;
    OverlayState = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 24),
    *(struct DXGDEVICE **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 64), Current);
  v20 = (*(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >> 6) & 0xFFFFFF;
  v21 = *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >> 30;
  if ( (unsigned int)v20 < *((_DWORD *)Current + 58)
    && (v19 = *((_QWORD *)Current + 27),
        v18 = *(unsigned int *)(v19 + 16LL * (unsigned int)v20 + 8),
        (_DWORD)v21 == ((*(_DWORD *)(v19 + 16LL * (unsigned int)v20 + 8) >> 4) & 3))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * (unsigned int)v20 + 8) & 0xF) == 6 )
  {
    v22 = *(struct DXGOVERLAY **)(v19 + 16LL * (unsigned int)v20);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v20, v19, v21);
    OverlayState = -1073741811;
    v23[4] = -1073741811LL;
LABEL_25:
    v23[3] = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdWarning(v23);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 64));
LABEL_26:
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 24));
    goto LABEL_15;
  }
  if ( v16 != *((struct ADAPTER_RENDER ***)v22 + 2) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v20, v19, v21);
    v23[4] = v14;
    OverlayState = -1073741811;
    v23[5] = -1073741811LL;
    goto LABEL_25;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 64));
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88), v22);
  v24 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)(v3 + 88));
  if ( v24 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v16) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v30 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v30);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)(v3 + 40), v16[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 40));
    OverlayState = DXGOVERLAY::GetOverlayState(v22, (struct _D3DKMT_GETOVERLAYSTATE *)(v3 + 8));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 40));
    if ( OverlayState < 0 )
    {
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 40));
      COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88));
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 24));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_6;
    }
    v31 = (_BYTE *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v31 = (_BYTE *)MmUserProbeAddress;
    *v31 = *(_BYTE *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 40));
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88));
    goto LABEL_26;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 24));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v25, 2057);
  return (unsigned int)v24;
}
