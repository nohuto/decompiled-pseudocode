/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C00917A8
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0005010 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C0004D6C (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0005874 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C000BCC4 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = *((_QWORD *)this + 6);
  *(_QWORD *)this = &DMMVIDPN::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPN::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 5) = &DMMVIDPN::`vftable'{for `AggregatedBy<VIDPN_MGR>'};
  *((_QWORD *)this + 7) = &DMMVIDPN::`vftable'{for `SignedWithClassSignature<DMMVIDPN>'};
  *((_QWORD *)this + 9) = &DMMVIDPN::`vftable'{for `FallibleConstruction'};
  if ( v4 )
  {
    if ( *(DMMVIDPN **)(v4 + 72) == this )
    {
      if ( !*(_QWORD *)(v4 + 8) )
      {
        v22 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v22);
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v4 + 8) + 16LL)) )
      {
        if ( !*(_QWORD *)(v4 + 8) )
        {
          v23 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v23);
        }
        v19 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
        if ( !*(_BYTE *)(v19 + 169) )
        {
          v24 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v24);
        }
      }
      v20 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v20 + 24) = v4;
      WdLogEvent5_WdDmmEvent(v20);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( **(struct _KTHREAD ***)(v4 + 40) != CurrentThread )
      {
        v18 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v18);
      }
      Set<DMMVIDPN>::Remove(v4 + 104, (__int64)this);
      v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      *(_QWORD *)(v11 + 24) = this;
      *(_QWORD *)(v11 + 32) = v4;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = this;
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = this;
    WdLogEvent5_WdWarning(v21);
  }
  v16 = *((_QWORD *)this + 39);
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, 1LL);
  v17 = *((_QWORD *)this + 38);
  if ( v17 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &SetElement::`vftable';
}
