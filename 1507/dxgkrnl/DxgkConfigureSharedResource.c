/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C00A99C0
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
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C007A0EC (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rdi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rcx
  PERESOURCE *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  char v21; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v5);
    v12 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_10:
    v14 = qword_1C00467F0;
    v15 = (qword_1C00467F0 & 2) == 0;
LABEL_11:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v14, &EventProfilerExit, v13, 2056);
    return v12;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v4;
  *(_OWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v4[1];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
    Current,
    (struct DXGDEVICE **)(v3 + 8));
  v8 = *(PERESOURCE **)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v8 )
  {
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v12 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL));
    v15 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_11;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 64, (__int64)v8, 0, v9, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 64));
  if ( v11 >= 0 )
  {
    LOBYTE(v10) = *(_BYTE *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v12 = DXGDEVICE::ConfigureSharedResource(
            v8,
            v10,
            *(void **)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
            *(unsigned int *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
            *(_BYTE *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
    if ( *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_10;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 64));
  if ( *(_QWORD *)(((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v21 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v20, 2056);
  return (unsigned int)v11;
}
