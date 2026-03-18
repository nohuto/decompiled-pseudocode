/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0181334
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C002C500 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C008DC14 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(DMMVIDEOPRESENTTARGET *this)
{
  struct HDXGMONITOR__ *v1; // rsi
  __int64 v3; // rax
  VIDPN_MGR *v4; // rdi
  __int64 v5; // rax

  v1 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `NonReferenceCounted'};
  if ( v1 )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      v3 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v3);
    }
    v4 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    if ( !v4 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v5);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v4, v1);
  }
  *((_QWORD *)this + 8) = &SetElement::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
