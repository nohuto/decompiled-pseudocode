/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C014EAD0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C001FBC4 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x1C001FC98 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C014D020 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  DXGKEYEDMUTEX *v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  _BYTE v24[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2055);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    v8 = qword_1C00467F0;
    v9 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v8, &EventProfilerExit, v7, 2055);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_OWORD *)v3;
  *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v3 + 16);
  v11 = *(unsigned int *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
    (DXGKEYEDMUTEXBYHANDLE *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
    Current,
    (struct DXGKEYEDMUTEX **)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v16 = *(DXGKEYEDMUTEX **)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = v11;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL));
    v9 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  v18 = DXGKEYEDMUTEX::ReleaseSync(
          v16,
          v11,
          *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
          *(struct _LIST_ENTRY **)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
          0LL,
          0);
  v20 = v18;
  if ( v18 < 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
    v21[3] = v11;
    v21[4] = v16;
    v21[5] = v20;
    WdLogEvent5_WdError(v21);
  }
  DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEX **)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 2055);
  return (unsigned int)v20;
}
