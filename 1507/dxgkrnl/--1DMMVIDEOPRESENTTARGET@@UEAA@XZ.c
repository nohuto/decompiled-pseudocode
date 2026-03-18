/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C017ACE0
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C002C3E0 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C00965D4 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct HDXGMONITOR__ *v4; // rsi
  __int64 v6; // rax
  VIDPN_MGR *v7; // rdi
  __int64 v8; // rax

  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 12);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `NonReferenceCounted'};
  if ( v4 )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    if ( !v7 )
    {
      v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v8);
    }
    VIDPN_MGR::ReleaseMonitorHandle(v7, v4, a3, a4);
  }
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
}
