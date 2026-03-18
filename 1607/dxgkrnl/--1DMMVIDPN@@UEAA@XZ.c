/*
 * XREFs of ??1DMMVIDPN@@UEAA@XZ @ 0x1C007DB44
 * Callers:
 *     ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0002F30 (--_EDMMVIDPN@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z @ 0x1C0002078 (-FindByValue@-$Set@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004774 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C00049C0 (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C000C900 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPN::~DMMVIDPN(DMMVIDPN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax

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
        v24 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v24);
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(v4 + 8) + 16LL)) )
      {
        if ( !*(_QWORD *)(v4 + 8) )
        {
          v25 = WdLogNewEntry5_WdAssertion(v21);
          WdLogEvent5_WdAssertion(v25);
        }
        v26 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL);
        if ( !*(_BYTE *)(v26 + 185) )
        {
          v27 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v27);
        }
      }
      v22 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v22 + 24) = v4;
      WdLogEvent5_WdDmmEvent(v22);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(*(_QWORD *)(v4 + 40) + 8LL) != CurrentThread )
      {
        v20 = WdLogNewEntry5_WdAssertion(CurrentThread);
        WdLogEvent5_WdAssertion(v20);
      }
      v7 = Set<DMMVIDPN>::FindByValue(v4 + 104, (__int64)this);
      if ( DoublyLinkedList<DMMVIDPN>::ContainsByReference(v4 + 112, v7) )
      {
        v9 = v8 + 1;
        v10 = v8[1];
        v8 = (_QWORD *)v8[2];
        if ( *(_QWORD **)(v10 + 8) != v9 || (_QWORD *)*v8 != v9 )
          __fastfail(3u);
        *v8 = v10;
        *(_QWORD *)(v10 + 8) = v8;
        *v9 = 0LL;
        *(_QWORD *)(v12 + 16) = 0LL;
        --*(_QWORD *)(v4 + 144);
      }
      v13 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = this;
      *(_QWORD *)(v13 + 32) = v4;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = this;
  }
  else
  {
    v23 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdWarning(v23);
  }
  v18 = *((_QWORD *)this + 39);
  if ( v18 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, 1LL);
  v19 = *((_QWORD *)this + 38);
  if ( v19 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, 1LL);
  DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY((DMMVIDPN *)((char *)this + 96));
  *((_DWORD *)this + 16) |= 0x6D640000u;
  *((_QWORD *)this + 7) = &SignedWithClassSignature<DMMVIDPN>::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &AggregatedBy<VIDPN_MGR>::`vftable';
  ReferenceCounted::~ReferenceCounted((DMMVIDPN *)((char *)this + 24));
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
}
