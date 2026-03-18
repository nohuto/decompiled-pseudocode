/*
 * XREFs of DxgkOpenKeyedMutex2 @ 0x1C014E830
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C014CEDC (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 */

__int64 __fastcall DxgkOpenKeyedMutex2(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGKEYEDMUTEX **v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  ULONG64 v13; // rax
  DXGGLOBAL *v14; // rcx
  int v15; // esi
  _DWORD *v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  _BYTE v25[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v3 = (struct DXGKEYEDMUTEX **)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2067);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = Current;
  if ( Current )
  {
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_OWORD *)v13;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *(_QWORD *)(v13 + 16);
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    *(_DWORD *)v3 = 0;
    DXGGLOBAL::GetGlobal(MmUserProbeAddress, v5, v8, v9);
    v15 = DXGGLOBAL::OpenKeyedMutex(
            v14,
            *(unsigned int *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18),
            v3 + 1,
            (unsigned int *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL),
            *(char **)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
            *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
    if ( v15 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 4);
      if ( a1 + 4 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *(_DWORD *)v3;
    }
    if ( v15 < 0 )
    {
      v24 = *(unsigned int *)v3;
      if ( (_DWORD)v24 )
        DXGKEYEDMUTEX::DestroyHandle(v24);
    }
    else
    {
      v17 = *(unsigned int *)v3;
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
      v18 = ((unsigned int)v17 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v18 < *((_DWORD *)Current + 58) )
      {
        v19 = *((_QWORD *)Current + 27);
        v20 = *(unsigned int *)(v19 + 16 * v18 + 8);
        v21 = ((unsigned int)v17 >> 26) & 0x30;
        if ( (((unsigned int)v17 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x30) && (v20 & 0xF) != 0 )
        {
          v22 = 2 * ((v17 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v19 + 8 * v22 + 8) & 0x1000) == 0 )
          {
            v23 = WdLogNewEntry5_WdAssertion(v21, v20, v19, 0xFFFFFFLL);
            *(_QWORD *)(v23 + 24) = 194LL;
            WdLogEvent5_WdAssertion(v23);
          }
          *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v22 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 25) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v24, &EventProfilerExit, (__int64)v16, 2067);
    return (unsigned int)v15;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v11, 2067);
    return 3221225485LL;
  }
}
