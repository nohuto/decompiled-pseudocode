/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0127150
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013DFD0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C000A31C (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A330 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000A354 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0122074 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(
        DXGADAPTER *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  bool v17; // r14
  unsigned int i; // esi
  char v20; // [rsp+50h] [rbp+8h] BYREF
  char v21; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 19135LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this + 248) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 19140LL;
    WdLogEvent5_WdAssertion(v7);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 248) + 400LL) + 8LL) + 112LL))(*(_QWORD *)(*((_QWORD *)this + 248) + 408LL));
  if ( !KeResetEvent((PRKEVENT)this + 8) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 19164LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v21 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v20);
  v13 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 27)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 27));
  v17 = IsResourceAcquiredSharedLite != 0;
  if ( v13 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 248), v15, v16) < 0 )
    {
      *((_QWORD *)a2 + 11) = *((_QWORD *)this + 52);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    if ( !v13 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 27));
      if ( v17 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 27), 1u);
    }
    KeSetEvent((PRKEVENT)this + 8, 0, 0);
    if ( v21 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v20);
    return 0LL;
  }
  else
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 27));
    for ( i = 0; ; ++i )
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 27), 0) )
      {
        *((_DWORD *)a2 + 695) = i;
        goto LABEL_15;
      }
      if ( i >= dword_1C00470F0 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)this + 8, 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v20);
    return 3221225653LL;
  }
}
