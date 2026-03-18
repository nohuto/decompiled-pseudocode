/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00CD300
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009450 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DpiGetDxgAdapterSafe @ 0x1C00CD4F8 (DpiGetDxgAdapterSafe.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C016A5A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ProcessDxgProcess; // rsi
  int DxgAdapterSafe; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGADAPTER *v11; // rdi
  DXGADAPTER *v12; // rbx
  char *v13; // r13
  __int64 v14; // rcx
  DXGADAPTER *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGADAPTER *v26; // rdx
  int v27; // eax
  int v28; // ebp
  int v29; // ebx
  signed __int64 v30; // rax
  DXGADAPTER *v31; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r9d
  DXGADAPTER *v38; // [rsp+78h] [rbp+10h] BYREF
  char v39; // [rsp+80h] [rbp+18h] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2001);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v5);
  if ( ProcessDxgProcess )
  {
    DxgAdapterSafe = DpiGetDxgAdapterSafe(*(_QWORD *)a1, &v38, &v39);
    if ( DxgAdapterSafe < 0 )
    {
      v29 = DxgAdapterSafe;
    }
    else
    {
      v11 = v38;
      _InterlockedIncrement64((volatile signed __int64 *)v38 + 3);
      KeEnterCriticalRegion();
      v12 = v38;
      v13 = (char *)v38 + 120;
      ExAcquirePushLockSharedEx((char *)v38 + 120, 0LL);
      if ( *((_DWORD *)v12 + 44) != 1 )
        goto LABEL_12;
      v15 = v38;
      if ( *((_BYTE *)v38 + 2053) )
        goto LABEL_12;
      v16 = *((_QWORD *)v38 + 267);
      if ( !v16 )
        goto LABEL_12;
      v17 = *(_QWORD *)(ProcessDxgProcess + 64);
      v18 = *(_QWORD *)(v16 + 384);
      v19 = *(_QWORD *)(v16 + 376);
      if ( v17 )
        v17 = *(_QWORD *)(v17 + 8LL * (unsigned int)(*(_DWORD *)v19 - 1) + 16);
      if ( !v17 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v34 + 24) = 829LL;
        WdLogEvent5_WdAssertion(v34);
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v19 + 8) + 728LL))(v18, v17) )
      {
        v35 = WdLogNewEntry5_WdEvent(v14);
        *(_QWORD *)(v35 + 24) = v15;
        *(_QWORD *)(v35 + 32) = ProcessDxgProcess;
        WdLogEvent5_WdEvent(v35);
        DXGADAPTER::ReleaseReference(v15);
        v29 = -1073741790;
      }
      else
      {
LABEL_12:
        v20 = PsGetCurrentProcess(v14);
        v23 = PsGetProcessDxgProcess(v20, v21);
        if ( !v23 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v36 + 24) = 2797LL;
          WdLogEvent5_WdAssertion(v36);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 3);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23 + 184, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v37 = *(_DWORD *)(v23 + 200);
            if ( v37 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v24, &EventBlockThread, v25, v37);
          }
          ExAcquirePushLockExclusiveEx(v23 + 184, 0LL);
        }
        v26 = v38;
        *(_QWORD *)(v23 + 192) = KeGetCurrentThread();
        v27 = HMGRTABLE::AllocHandle(v23 + 208, v26, 1LL);
        *(_QWORD *)(v23 + 192) = 0LL;
        v28 = v27;
        ExReleasePushLockExclusiveEx(v23 + 184, 0LL);
        KeLeaveCriticalRegion();
        if ( v28 )
        {
          v29 = 0;
        }
        else
        {
          DXGADAPTER::ReleaseReferenceNoTracking(v38);
          v29 = -1073741801;
        }
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        v31 = v38;
        if ( v30 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v38 + 2), v38);
        if ( v29 >= 0 )
        {
          *((_DWORD *)a1 + 2) = v28;
          v29 = 0;
          *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v31 + 268);
        }
      }
      ExReleasePushLockSharedEx(v13, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v38 + 2), v38);
    }
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v6);
    v29 = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v9, &EventProfilerExit, v10, 2001);
  return (unsigned int)v29;
}
