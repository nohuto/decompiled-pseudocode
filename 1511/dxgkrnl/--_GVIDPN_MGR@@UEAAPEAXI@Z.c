/*
 * XREFs of ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C002B690
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002AEF4 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::`scalar deleting destructor'(VIDPN_MGR *this, char a2)
{
  VIDPN_MGR::~VIDPN_MGR(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
