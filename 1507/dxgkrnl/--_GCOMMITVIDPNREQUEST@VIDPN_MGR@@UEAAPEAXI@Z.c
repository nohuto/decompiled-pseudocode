/*
 * XREFs of ??_GCOMMITVIDPNREQUEST@VIDPN_MGR@@UEAAPEAXI@Z @ 0x1C002B7B0
 * Callers:
 *     ??_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z @ 0x1C0010E80 (--_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WBI@EAAPEAXI@Z.c)
 *     ??_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z @ 0x1C0010E90 (--_ECOMMITVIDPNREQUEST@VIDPN_MGR@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

VIDPN_MGR::COMMITVIDPNREQUEST *__fastcall VIDPN_MGR::COMMITVIDPNREQUEST::`scalar deleting destructor'(
        VIDPN_MGR::COMMITVIDPNREQUEST *this,
        char a2)
{
  *(_QWORD *)this = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
  *((_QWORD *)this + 3) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 4) = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
  operator delete(*((void **)this + 9));
  auto_rc<DMMVIDPN>::reset((__int64 *)this + 6, 0LL);
  *((_DWORD *)this + 10) |= 0x6D640000u;
  *((_QWORD *)this + 4) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 3) = &NonReferenceCounted::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
