/*
 * XREFs of ??_GVIDPN_MGR@@UEAAPEAXI@Z @ 0x1C002B950
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002B238 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::`scalar deleting destructor'(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl

  v4 = a2;
  VIDPN_MGR::~VIDPN_MGR(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
