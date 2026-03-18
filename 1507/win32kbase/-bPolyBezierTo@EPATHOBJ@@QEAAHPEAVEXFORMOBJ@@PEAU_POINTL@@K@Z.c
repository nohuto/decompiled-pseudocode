/*
 * XREFs of ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0025B50
 * Callers:
 *     PATHOBJ_bPolyBezierTo @ 0x1C00B0280 (PATHOBJ_bPolyBezierTo.c)
 * Callees:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C0026008 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bPolyBezierTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3, unsigned int a4)
{
  unsigned int v6; // ecx
  _DWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  struct _POINTL *v9; // [rsp+28h] [rbp-10h]

  if ( !*((_QWORD *)this + 1) )
    return 0LL;
  v9 = a3;
  v8[0] = 16;
  v8[1] = a4;
  v6 = EPATHOBJ::addpoints(this, a2, (struct _PATHDATAL *)v8);
  if ( v6 )
    *((_DWORD *)this + 1) += a4 / 3;
  return v6;
}
