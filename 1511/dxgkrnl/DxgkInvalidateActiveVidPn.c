/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C0142810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0003110 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DmmInvalidateActiveVidPn @ 0x1C017B064 (DmmInvalidateActiveVidPn.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rcx
  DXGADAPTER *v13; // r14
  _QWORD *v14; // rax
  int active; // ebx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID v21; // rsi
  size_t v22; // r12
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int v30; // [rsp+20h] [rbp-50h]
  char v31; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 2037;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2037);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v7);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2037);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v4 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    Current,
    (struct DXGADAPTER **)(v3 + 16));
  v13 = *(DXGADAPTER **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v14[3] = -1073741811LL;
    v14[4] = Current;
    v14[5] = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    WdLogEvent5_WdError(v14);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
    v10 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 64),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 64));
  if ( active >= 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v13) > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = v13;
LABEL_22:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
      goto LABEL_14;
    }
    v21 = 0LL;
    v22 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( (_DWORD)v22 )
    {
      v23 = *(char **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v24 + 24) = 5863LL;
        WdLogEvent5_WdError(v24);
        goto LABEL_22;
      }
      v21 = operator new[](
              *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
              0x4B677844u,
              PagedPool);
      *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v21;
      if ( !v21 )
      {
        v29 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
        active = -1073741801;
        *(_QWORD *)(v29 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v29);
        goto LABEL_16;
      }
      if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, v23, v22);
    }
    active = DmmInvalidateActiveVidPn(v13, DXGK_AVIR_USERMODE, v21, v22, v30);
    operator delete(v21);
  }
LABEL_16:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v16, 2037);
  return (unsigned int)active;
}
