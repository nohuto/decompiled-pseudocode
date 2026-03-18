/*
 * XREFs of ??1DMMVIDPNSOURCE@@UEAA@XZ @ 0x1C0002600
 * Callers:
 *     ??_GDMMVIDPNSOURCE@@UEAAPEAXI@Z @ 0x1C00025D0 (--_GDMMVIDPNSOURCE@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ @ 0x1C00023DC (--1-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DMMVIDPNSOURCE::~DMMVIDPNSOURCE(DMMVIDPNSOURCE *this)
{
  char *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  *(_QWORD *)this = &DMMVIDPNSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  v2 = (char *)this + 104;
  *((_QWORD *)this + 4) = &DMMVIDPNSOURCE::`vftable'{for `ContainedBy<DMMVIDPNSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDPNSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCE::`vftable'{for `NonReferenceCounted'};
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    if ( (unsigned __int64)*(int *)(v3 + 96) > 1 )
    {
      v5 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v5 + 24) = *(_QWORD *)v2;
      *(_QWORD *)(v5 + 32) = this;
      WdLogEvent5_WdError(v5);
    }
    *(_QWORD *)(*(_QWORD *)v2 + 112LL) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v6 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v6 + 24) = *((unsigned int *)this + 6);
    WdLogEvent5_WdError(v6);
  }
  DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::~AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>((_QWORD *)this + 16);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 120, 0LL);
  v4 = *((_QWORD *)this + 14);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v2, 0LL);
  *((_QWORD *)this + 10) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCE>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCESET>::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
}
