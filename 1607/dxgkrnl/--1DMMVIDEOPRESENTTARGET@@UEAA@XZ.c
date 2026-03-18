/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01AA6FC
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x1C0034C30 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C0082D54 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
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
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDEOPRESENTTARGET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDEOPRESENTTARGETSET>::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
}
