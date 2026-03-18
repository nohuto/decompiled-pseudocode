/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C0138A10
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
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_N@Z @ 0x1C013640C (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBI_N@Z.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  _OWORD *v4; // rbx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r15
  char *v16; // rdx
  unsigned int v17; // r14d
  size_t v18; // r8
  __int64 v19; // rcx
  DXGDEVICE *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  char v33; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_OWORD *)a1;
  *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 2079;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2079);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
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
      Template_q(v10, &EventProfilerExit, v9, 2079);
    return v8;
  }
  v15 = (unsigned int)_guard_dispatch_icall_fptr() == 0;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *v4;
  v16 = *(char **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v16 || (v17 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC), v17 - 1 > 0x1E) )
  {
    v32 = WdLogNewEntry5_WdWarning(1LL, v16, v13, v14);
    *(_QWORD *)(v32 + 24) = *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v8 = -1073741811;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_31;
  }
  v18 = 4LL * v17;
  if ( &v16[v18] < v16 || (unsigned __int64)&v16[v18] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v3 + 18, v16, v18);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    Current,
    v3 + 5);
  v20 = *(DXGDEVICE **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( !v20 )
  {
    v21 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v8 = -1073741811;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_31:
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3),
    *(struct DXGDEVICE **)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 8), (__int64)v20, 2, v22, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 8));
  v28 = v23;
  if ( v23 >= 0 )
  {
    v8 = DXGDEVICE::PinDirectFlipResources(v20, v17, (const unsigned int *)v3 + 36, v15);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 8));
    if ( *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL));
    goto LABEL_6;
  }
  v29 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
  *(_QWORD *)(v29 + 24) = v20;
  *(_QWORD *)(v29 + 32) = v28;
  WdLogEvent5_WdWarning(v29);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 8));
  if ( *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 2079);
  return (unsigned int)v28;
}
