/*
 * XREFs of DxgkCreateKeyedMutex @ 0x1C014E300
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

__int64 __fastcall DxgkCreateKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  _OWORD *v13; // rax
  DXGGLOBAL *Global; // rax
  __int64 v15; // r8
  int KeyedMutex; // r14d
  _DWORD *v17; // r8
  _DWORD *v18; // rdx
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  _BYTE v27[48]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2051);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = Current;
  if ( Current )
  {
    v13 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v13;
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v5, v8, v9);
    KeyedMutex = DXGGLOBAL::CreateKeyedMutex(
                   Global,
                   *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
                   v3 + 1,
                   (unsigned int *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL),
                   0LL,
                   0,
                   0);
    if ( KeyedMutex >= 0 )
    {
      v17 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = *(_DWORD *)v3;
      v15 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 32LL);
      *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v15;
      v18 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = v15;
    }
    if ( KeyedMutex < 0 )
    {
      v26 = *(unsigned int *)v3;
      if ( (_DWORD)v26 )
        DXGKEYEDMUTEX::DestroyHandle(v26);
    }
    else
    {
      v19 = *(unsigned int *)v3;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
      v20 = ((unsigned int)v19 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 < *((_DWORD *)Current + 58) )
      {
        v21 = *((_QWORD *)Current + 27);
        v22 = *(unsigned int *)(v21 + 16 * v20 + 8);
        v23 = ((unsigned int)v19 >> 26) & 0x30;
        if ( (((unsigned int)v19 >> 26) & 0x30) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x30) && (v22 & 0xF) != 0 )
        {
          v24 = 2 * ((v19 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v21 + 8 * v24 + 8) & 0x1000) == 0 )
          {
            v25 = WdLogNewEntry5_WdAssertion(v23, v22, v21, 0xFFFFFFLL);
            *(_QWORD *)(v25 + 24) = 194LL;
            WdLogEvent5_WdAssertion(v25);
          }
          *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v24 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 25) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v26, &EventProfilerExit, v15, 2051);
    return (unsigned int)KeyedMutex;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v11, 2051);
    return 3221225485LL;
  }
}
