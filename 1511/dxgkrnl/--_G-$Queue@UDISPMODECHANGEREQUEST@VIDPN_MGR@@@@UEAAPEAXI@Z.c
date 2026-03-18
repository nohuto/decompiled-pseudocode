/*
 * XREFs of ??_G?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x1C002B430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ @ 0x1C002AE28 (--1-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::~Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
