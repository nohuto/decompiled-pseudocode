/*
 * XREFs of DxgkCreateKeyedMutex2 @ 0x1C005AF50
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C005B524 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  _OWORD *v15; // rax
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS v16; // r14d
  __int64 v17; // rax
  DXGGLOBAL *Global; // rax
  __int64 v19; // r8
  int KeyedMutex; // r14d
  _DWORD *v21; // r8
  _DWORD *v22; // rdx
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  _BYTE v31[64]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2066);
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v12 = qword_1C00467F0;
    v13 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2066);
    return 3221225485LL;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v15;
  *(_OWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v15[1];
  v16.0 = *(struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
  if ( (v16.Value & 0xFFFFFFFE) != 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v8, v9);
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    v13 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  *(_DWORD *)v3 = 0;
  *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  KeyedMutex = DXGGLOBAL::CreateKeyedMutex(
                 Global,
                 *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                 v3 + 1,
                 (unsigned int *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL),
                 *(void **)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                 *(_DWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
                 v16);
  if ( KeyedMutex >= 0 )
  {
    v21 = (_DWORD *)(a1 + 12);
    if ( a1 + 12 >= MmUserProbeAddress )
      v21 = (_DWORD *)MmUserProbeAddress;
    *v21 = *(_DWORD *)v3;
    v19 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 32LL);
    *(_DWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v19;
    v22 = (_DWORD *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = v19;
  }
  if ( KeyedMutex < 0 )
  {
    v30 = *(unsigned int *)v3;
    if ( (_DWORD)v30 )
      DXGKEYEDMUTEX::DestroyHandle(v30);
  }
  else
  {
    v23 = *(unsigned int *)v3;
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
    v24 = ((unsigned int)v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)Current + 58) )
    {
      v25 = *((_QWORD *)Current + 27);
      v26 = *(unsigned int *)(v25 + 16 * v24 + 8);
      v27 = ((unsigned int)v23 >> 26) & 0x30;
      if ( (((unsigned int)v23 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x30) && (v26 & 0xF) != 0 )
      {
        v28 = 2 * ((v23 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v25 + 8 * v28 + 8) & 0x1000) == 0 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v27, v26, v25, 0xFFFFFFLL);
          *(_QWORD *)(v29 + 24) = 194LL;
          WdLogEvent5_WdAssertion(v29);
        }
        *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v28 + 8) &= ~0x1000u;
      }
    }
    *((_QWORD *)Current + 25) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v30, &EventProfilerExit, v19, 2066);
  return (unsigned int)KeyedMutex;
}
