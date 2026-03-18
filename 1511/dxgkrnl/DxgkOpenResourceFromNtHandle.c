/*
 * XREFs of DxgkOpenResourceFromNtHandle @ 0x1C0061660
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C005C154 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z @ 0x1C005C730 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00969B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DxgkOpenResourceFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v5; // rax
  void *v6; // r14
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  BOOL v13; // r12d
  DXGKEYEDMUTEX **v14; // r14
  DXGKEYEDMUTEX *v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned int v25; // ecx
  DXGGLOBAL *v26; // rax
  _BYTE v27[160]; // [rsp+130h] [rbp+130h] BYREF

  v3 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2076);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)v5;
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)(v5 + 16);
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v5 + 32);
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v5 + 48);
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v5 + 64);
  *(_OWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v5 + 80);
  *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(v5 + 96);
  v6 = *(void **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  v7 = ObReferenceObjectByHandle(
         v6,
         0x20000u,
         g_pDxgkSharedAllocationObjectType,
         1,
         (PVOID *)(v3 + 8),
         (POBJECT_HANDLE_INFORMATION)(v3 + 32));
  v12 = v7;
  if ( v7 != -1073741788 )
  {
    if ( v7 < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      *(_QWORD *)(v23 + 24) = v6;
      *(_QWORD *)(v23 + 32) = v12;
      WdLogEvent5_WdWarning(v23);
LABEL_15:
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v18, &EventProfilerExit, v19, 2076);
      return (unsigned int)v12;
    }
    v13 = (*(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) & 1) == 0;
    *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    *(_DWORD *)v3 = 0;
    v14 = *(DXGKEYEDMUTEX ***)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v15 = v14[3];
    if ( !v15
      || (LODWORD(v12) = DXGKEYEDMUTEX::Open(
                           v15,
                           (unsigned int *)(v3 + 4),
                           *(char **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88),
                           *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90)),
          (int)v12 >= 0) )
    {
      if ( v14[4] )
      {
        Global = DXGGLOBAL::GetGlobal();
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 16), Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 16));
        LODWORD(v12) = DXGSYNCOBJECT::Open(
                         v14[4],
                         0LL,
                         0LL,
                         0LL,
                         (unsigned int *)((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL),
                         0LL,
                         0LL,
                         0,
                         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
        if ( (int)v12 < 0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 16));
          goto LABEL_13;
        }
        if ( *(_BYTE *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 16));
      }
      v16 = (_DWORD *)(a1 + 84);
      if ( a1 + 84 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v17 = (_DWORD *)(a1 + 100);
      if ( a1 + 100 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = *(_DWORD *)v3;
      LODWORD(v12) = OpenResourceFromGlobalHandleOrNtObject<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(a1, v17, v14, v13);
    }
LABEL_13:
    if ( (int)v12 < 0 )
    {
      v25 = *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      if ( v25 )
        DXGKEYEDMUTEX::DestroyLocal(v25);
      if ( *(_DWORD *)v3 )
      {
        v26 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::DestroySyncObject(v26, v14[4], *(_DWORD *)v3);
      }
    }
    ObfDereferenceObject(v14);
    goto LABEL_15;
  }
  v21 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
  *(_QWORD *)(v21 + 24) = v6;
  *(_QWORD *)(v21 + 32) = -1073741788LL;
  WdLogEvent5_WdWarning(v21);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v22, 2076);
  return 3221225508LL;
}
