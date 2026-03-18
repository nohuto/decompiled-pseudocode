/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012D3D0
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012ED94 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144410 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C598 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000C5BC (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0018898 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0128120 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C0144D30 (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // r14
  unsigned int i; // esi
  char v15; // [rsp+50h] [rbp+8h] BYREF
  char v16; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 19546LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + 249) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 19551LL;
    WdLogEvent5_WdAssertion(v5);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 249) + 424LL) + 8LL) + 112LL))(*(_QWORD *)(*((_QWORD *)this + 249) + 432LL));
  if ( !KeResetEvent((PRKEVENT)this + 8) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 19575LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v16 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v15);
  v8 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 27)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 27));
  v12 = IsResourceAcquiredSharedLite != 0;
  if ( v8 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 249), v10, v11) < 0 )
    {
      *((_QWORD *)a2 + 11) = *((_QWORD *)this + 52);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 1952) = 1;
    if ( !v8 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 27));
      if ( v12 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 27), 1u);
    }
    KeSetEvent((PRKEVENT)this + 8, 0, 0);
    if ( v16 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v15);
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
      if ( i >= dword_1C0047170 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)this + 8, 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v15);
    return 3221225653LL;
  }
}
