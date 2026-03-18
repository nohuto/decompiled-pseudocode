/*
 * XREFs of ??_G?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x1C0033360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C0032860 (--1-$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::~Queue<VIDPN_MGR::COMMITVIDPNREQUEST>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
