/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle @ 0x1C00C2440
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_pp @ 0x1C001E898 (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _OWORD *v5; // rax
  void *v6; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT **v14; // rsi
  __int64 v15; // r8
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  _BYTE v24[48]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *v5;
  v6 = *(void **)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  v7 = ObReferenceObjectByHandle(
         v6,
         0x20000u,
         g_pDxgkSharedSyncObjectType,
         1,
         (PVOID *)v3 + 1,
         (POBJECT_HANDLE_INFORMATION)v3 + 2);
  v12 = v7;
  if ( v7 != -1073741788 )
  {
    if ( v7 < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      *(_QWORD *)(v23 + 24) = v6;
      *(_QWORD *)(v23 + 32) = v12;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_16;
    }
    *v3 = 0;
    Global = DXGGLOBAL::GetGlobal(v9);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 6), Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 6));
    v14 = *(DXGSYNCOBJECT ***)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( *((_DWORD *)*v14 + 38) == 5 )
    {
      LODWORD(v12) = -1073741811;
    }
    else
    {
      LODWORD(v12) = DXGSYNCOBJECT::Open(
                       *v14,
                       0LL,
                       0LL,
                       0LL,
                       (unsigned int *)((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL),
                       0LL,
                       0LL,
                       0,
                       (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
      if ( (int)v12 >= 0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 6));
        v16 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        v17 = *v3;
        *v16 = v17;
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_pp(v17, &EventOpenSyncObject, v15, *v14, v17);
LABEL_15:
        ObfDereferenceObject(v14);
LABEL_16:
        if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          Template_q(v18, &EventProfilerExit, v19, 2086);
        return (unsigned int)v12;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 6));
    goto LABEL_15;
  }
  v21 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
  *(_QWORD *)(v21 + 24) = v6;
  *(_QWORD *)(v21 + 32) = -1073741788LL;
  WdLogEvent5_WdWarning(v21);
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(qword_1C00467F0, &EventProfilerExit, v22, 2086);
  return 3221225508LL;
}
