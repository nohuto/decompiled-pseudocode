/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C00A94F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005B2E4 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0067C40 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C014CBF8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  ULONG64 v5; // rax
  void *v6; // rsi
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
  BOOL v19; // edi
  __int64 v20; // r15
  DXGKEYEDMUTEX *v21; // rcx
  int v22; // esi
  struct DXGGLOBAL *Global; // rax
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  struct DXGPROCESS *Current; // r13
  unsigned __int64 v27; // rdi
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  struct DXGPROCESS *v35; // r12
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  unsigned int v42; // edi
  PERESOURCE *v43; // rax
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  bool Object; // [rsp+C0h] [rbp+C0h]
  _BYTE v48[160]; // [rsp+130h] [rbp+130h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2076);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)v5;
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v5 + 32);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v5 + 48);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v5 + 64);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v5 + 80);
  *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(v5 + 96);
  v6 = *(void **)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  v7 = ObReferenceObjectByHandle(
         v6,
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         1,
         (PVOID *)v3 + 1,
         (POBJECT_HANDLE_INFORMATION)v3 + 4);
  v12 = v7;
  if ( v7 == -1073741788 )
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = v6;
    *(_QWORD *)(v13 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v13);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(qword_1C00467F0, &EventProfilerExit, v14, 2076);
    return 3221225508LL;
  }
  if ( v7 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v16 + 24) = v6;
    *(_QWORD *)(v16 + 32) = v12;
    WdLogEvent5_WdWarning(v16);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2076);
    return (unsigned int)v12;
  }
  v19 = (*(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) & 1) == 0;
  *v3 = 0;
  *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
  v20 = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v21 = *(DXGKEYEDMUTEX **)(v20 + 24);
  if ( !v21
    || (v22 = DXGKEYEDMUTEX::Open(
                v21,
                (unsigned int *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL),
                *(void **)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
                *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90),
                Object),
        v22 >= 0) )
  {
    if ( *(_QWORD *)(v20 + 32) )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)v21, v8, v10, v11);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 4), Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 4));
      v22 = DXGSYNCOBJECT::Open(
              *(DXGSYNCOBJECT **)(v20 + 32),
              0LL,
              0LL,
              0LL,
              v3 + 1,
              0LL,
              0LL,
              0,
              DXGSYNCOBJECT::FlagsDefault);
      if ( v22 < 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 4));
        goto LABEL_43;
      }
      if ( *(_BYTE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 4));
    }
    v24 = (_DWORD *)(a1 + 84);
    if ( a1 + 84 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = *v3;
    v25 = (_DWORD *)(a1 + 100);
    if ( a1 + 100 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    v22 = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, (__int64)v25, v20, v19);
    if ( v22 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent((__int64)v21);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
      v27 = *(unsigned int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v28 = (*(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 6) & 0xFFFFFF;
      if ( v28 < *((_DWORD *)Current + 58) )
      {
        v29 = *((_QWORD *)Current + 27);
        v30 = *(unsigned int *)(v29 + 16LL * v28 + 8);
        v31 = ((unsigned int)v27 >> 26) & 0x30;
        if ( (((unsigned int)v27 >> 26) & 0x30) == (v30 & 0x30) && (v30 & 0xF) != 0 )
        {
          v32 = 2 * ((v27 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v29 + 8 * v32 + 8) & 0x1000) == 0 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31, v30, v29, 0xFFFFFFLL);
            *(_QWORD *)(v33 + 24) = 194LL;
            WdLogEvent5_WdAssertion(v33);
          }
          *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v32 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 25) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
      v34 = *v3;
      if ( (_DWORD)v34 )
      {
        v35 = DXGPROCESS::GetCurrent((__int64)v21);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)v35 + 192));
        v36 = ((unsigned int)v34 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v36 < *((_DWORD *)v35 + 58) )
        {
          v37 = *((_QWORD *)v35 + 27);
          v38 = *(unsigned int *)(v37 + 16 * v36 + 8);
          v39 = ((unsigned int)v34 >> 26) & 0x30;
          if ( (((unsigned int)v34 >> 26) & 0x30) == (v38 & 0x30) && (v38 & 0xF) != 0 )
          {
            v40 = 2 * ((v34 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v37 + 8 * v40 + 8) & 0x1000) == 0 )
            {
              v41 = WdLogNewEntry5_WdAssertion(v39, v38, v37, 0xFFFFFFLL);
              *(_QWORD *)(v41 + 24) = 194LL;
              WdLogEvent5_WdAssertion(v41);
            }
            *(_DWORD *)(*((_QWORD *)v35 + 27) + 8 * v40 + 8) &= ~0x1000u;
          }
        }
        *((_QWORD *)v35 + 25) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v35 + 192, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
LABEL_43:
  if ( v22 < 0 )
  {
    if ( *v3 )
      DXGKEYEDMUTEX::DestroyLocal(*v3);
    v42 = *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
    if ( v42 )
    {
      v43 = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)v21, v8, v10, v11);
      DXGGLOBAL::DestroySyncObject(v43, *(struct DXGSYNCOBJECT **)(v20 + 32), v42, v44);
    }
  }
  ObfDereferenceObject((PVOID)v20);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v45, &EventProfilerExit, v46, 2076);
  return (unsigned int)v22;
}
