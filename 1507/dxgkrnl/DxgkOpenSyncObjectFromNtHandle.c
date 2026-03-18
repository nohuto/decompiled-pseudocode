/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C00AEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_pp @ 0x1C001E834 (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _OWORD *v5; // rax
  void *v6; // r14
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT **v20; // r15
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rdi
  struct DXGPROCESS *Current; // rsi
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  _BYTE v35[48]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  v6 = *(void **)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  v7 = ObReferenceObjectByHandle(
         v6,
         0x20000u,
         g_pDxgkSharedSyncObjectType,
         1,
         (PVOID *)v3 + 1,
         (POBJECT_HANDLE_INFORMATION)v3 + 2);
  v12 = v7;
  if ( v7 == -1073741788 )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = v6;
    *(_QWORD *)(v13 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v13);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v14, 2086);
    return 3221225508LL;
  }
  if ( v7 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v16 + 24) = v6;
    *(_QWORD *)(v16 + 32) = v12;
    WdLogEvent5_WdWarning(v16);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2086);
    return (unsigned int)v12;
  }
  *v3 = 0;
  Global = DXGGLOBAL::GetGlobal(v9, v8, v10, v11);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 6), Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 6));
  v20 = *(DXGSYNCOBJECT ***)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( *((_DWORD *)*v20 + 32) == 5 )
  {
    v21 = -1073741811;
  }
  else
  {
    v21 = DXGSYNCOBJECT::Open(
            *v20,
            0LL,
            0LL,
            0LL,
            (unsigned int *)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL),
            0LL,
            0LL,
            0,
            DXGSYNCOBJECT::FlagsDefault);
    if ( v21 >= 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 6));
      v24 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v24 = (_DWORD *)MmUserProbeAddress;
      v25 = *v3;
      *v24 = v25;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pp(v22, &EventOpenSyncObject, v23, *v20, v25);
      Current = DXGPROCESS::GetCurrent(v22);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
      v27 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
      if ( v27 < *((_DWORD *)Current + 58) )
      {
        v28 = *((_QWORD *)Current + 27);
        v29 = *(unsigned int *)(v28 + 16LL * v27 + 8);
        v30 = ((unsigned int)v25 >> 26) & 0x30;
        if ( (((unsigned int)v25 >> 26) & 0x30) == (v29 & 0x30) && (v29 & 0xF) != 0 )
        {
          v31 = 2 * ((v25 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v28 + 8 * v31 + 8) & 0x1000) == 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v30, v29, v28, 0xFFFFFFLL);
            *(_QWORD *)(v32 + 24) = 194LL;
            WdLogEvent5_WdAssertion(v32);
          }
          *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v31 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 25) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_35;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 6));
LABEL_35:
  ObfDereferenceObject(v20);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v33, &EventProfilerExit, v34, 2086);
  return (unsigned int)v21;
}
