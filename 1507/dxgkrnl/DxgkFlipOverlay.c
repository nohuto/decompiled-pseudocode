/*
 * XREFs of DxgkFlipOverlay @ 0x1C0143850
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C0002EF0 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C00103D0 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C001E8A4 (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C001E8DC (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C001E91C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z @ 0x1C0142498 (-FlipOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_FLIPOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkFlipOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // r14
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // r15
  __int64 v14; // rcx
  struct ADAPTER_RENDER **v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  struct DXGOVERLAY *v21; // rbx
  _QWORD *v22; // rax
  int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  char v31; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2024);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2024);
    return v8;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *v4;
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v4[1];
  v13 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
    (struct _KTHREAD **)Current,
    (struct DXGDEVICE **)(v3 + 8));
  v15 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v13;
    v8 = -1073741811;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 72), Current);
  v20 = (*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 < *((_DWORD *)Current + 58)
    && (v19 = *((_QWORD *)Current + 27),
        v18 = *(unsigned int *)(v19 + 16LL * (unsigned int)v20 + 8),
        v17 = (*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) >> 26) & 0x30,
        ((*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * (unsigned int)v20 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * (unsigned int)v20 + 8) & 0xF) == 6 )
  {
    v21 = *(struct DXGOVERLAY **)(v19 + 16LL * (unsigned int)v20);
  }
  else
  {
    v21 = 0LL;
  }
  if ( !v21 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v20, v18, v19);
    v8 = -1073741811;
    v22[4] = -1073741811LL;
LABEL_24:
    v22[3] = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
    WdLogEvent5_WdWarning(v22);
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 72));
LABEL_25:
    if ( *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    goto LABEL_14;
  }
  if ( v15 != *((struct ADAPTER_RENDER ***)v21 + 2) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v20, v18, v19);
    v22[4] = v13;
    v8 = -1073741811;
    v22[5] = -1073741811LL;
    goto LABEL_24;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)(v3 + 72));
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 96), v21);
  v23 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)(v3 + 96));
  if ( v23 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v15) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v30 + 24) = 877LL;
      WdLogEvent5_WdAssertion(v30);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)(v3 + 24), v15[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 24));
    v8 = DXGOVERLAY::FlipOverlay(v21, (struct _D3DKMT_FLIPOVERLAY *)(v3 + 40));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 24));
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 24));
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 96));
    goto LABEL_25;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 96));
  if ( *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v25, 2024);
  return (unsigned int)v23;
}
