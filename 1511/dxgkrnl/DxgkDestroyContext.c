/*
 * XREFs of DxgkDestroyContext @ 0x1C008AE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0010F30 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkDestroyContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  DXGCONTEXT *v11; // rbx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rax
  _BYTE v22[32]; // [rsp+80h] [rbp+80h] BYREF

  v3 = (unsigned int *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2040);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (unsigned int *)MmUserProbeAddress;
    v6 = *v3;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL),
      Current);
    v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < *((_DWORD *)Current + 58)
      && (v9 = *((_QWORD *)Current + 27),
          v8 = *(unsigned int *)(v9 + 16LL * (unsigned int)v10 + 8),
          v7 = ((unsigned int)v6 >> 26) & 0x30,
          (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v9 + 16LL * (unsigned int)v10 + 8) & 0x30))
      && (v8 & 0x1000) == 0
      && (v8 & 0xF) != 0
      && (*(_BYTE *)(v9 + 16LL * (unsigned int)v10 + 8) & 0xF) == 7 )
    {
      v11 = *(DXGCONTEXT **)(v9 + 16LL * (unsigned int)v10);
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
    {
      if ( (unsigned int)v10 < *((_DWORD *)Current + 58) )
      {
        v12 = *((_QWORD *)Current + 27);
        v13 = *(_DWORD *)(v12 + 16LL * (unsigned int)v10 + 8);
        if ( (((unsigned int)v6 >> 26) & 0x30) == (v13 & 0x30) && (v13 & 0x1000) == 0 && (v13 & 0xF) != 0 )
          *(_DWORD *)(v12 + 16 * (((unsigned __int64)(unsigned int)v6 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL));
      DXGCONTEXT::ReleaseReference(v11);
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v14, &EventProfilerExit, v15, 2040);
      return 0LL;
    }
    v21 = WdLogNewEntry5_WdWarning(v7, v10, v8, v9);
    *(_QWORD *)(v21 + 24) = v6;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v21);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL));
    v20 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    v19 = qword_1C00467F0;
    v20 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v19, &EventProfilerExit, v18, 2040);
  return 3221225485LL;
}
