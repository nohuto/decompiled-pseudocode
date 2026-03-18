/*
 * XREFs of DxgkInvalidateActiveVidPn @ 0x1C013C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002434 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DmmInvalidateActiveVidPn @ 0x1C0176ACC (DmmInvalidateActiveVidPn.c)
 */

__int64 __fastcall DxgkInvalidateActiveVidPn(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // rsi
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rcx
  DXGADAPTER *v14; // r14
  _QWORD *v15; // rax
  int active; // ebx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  PVOID v22; // rsi
  size_t v23; // r12
  char *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int v31; // [rsp+20h] [rbp-50h]
  char v32; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 2037;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2037);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v8);
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v10, &EventProfilerExit, v9, 2037);
    return 3221225485LL;
  }
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_OWORD *)v4;
  *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_QWORD *)(v4 + 16);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
    Current,
    (struct DXGADAPTER **)(v3 + 16));
  v14 = *(DXGADAPTER **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  if ( !v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v15[3] = -1073741811LL;
    v15[4] = Current;
    v15[5] = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    WdLogEvent5_WdError(v15);
LABEL_14:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
    v11 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 64),
    *(struct DXGADAPTER *const *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    0LL);
  active = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 64));
  if ( active >= 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(v14) > 1000 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = v14;
LABEL_22:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
      goto LABEL_14;
    }
    v22 = 0LL;
    v23 = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    if ( (_DWORD)v23 )
    {
      v24 = *(char **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v25 + 24) = 5727LL;
        WdLogEvent5_WdError(v25);
        goto LABEL_22;
      }
      v22 = operator new[](
              *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
              0x4B677844u,
              PagedPool);
      *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v22;
      if ( !v22 )
      {
        v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
        active = -1073741801;
        *(_QWORD *)(v30 + 24) = -1073741801LL;
        WdLogEvent5_WdWarning(v30);
        goto LABEL_16;
      }
      if ( &v24[v23] < v24 || (unsigned __int64)&v24[v23] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v24, v23);
    }
    active = DmmInvalidateActiveVidPn(v14, DXGK_AVIR_USERMODE, v22, v23, v31);
    operator delete(v22);
  }
LABEL_16:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 64));
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v17, 2037);
  return (unsigned int)active;
}
