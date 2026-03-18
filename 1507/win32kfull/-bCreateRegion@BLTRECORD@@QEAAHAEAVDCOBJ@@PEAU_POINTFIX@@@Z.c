/*
 * XREFs of ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C0004B78
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00A0100 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bCreateRegion(BLTRECORD *this, struct DCOBJ *a2, struct _POINTFIX *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v10; // [rsp+28h] [rbp-71h]
  struct _POINTFIX v11; // [rsp+A0h] [rbp+7h] BYREF
  struct _POINTFIX v12; // [rsp+A8h] [rbp+Fh] BYREF
  FIX x; // [rsp+B0h] [rbp+17h]
  FIX y; // [rsp+B4h] [rbp+1Bh]
  FIX v15; // [rsp+B8h] [rbp+1Fh]
  FIX v16; // [rsp+BCh] [rbp+23h]

  BLTRECORD::vMirror(this, a3);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v9);
  if ( !v10 )
    goto LABEL_7;
  v11 = *a3;
  v12 = a3[1];
  x = a3[3].x;
  y = a3[3].y;
  v15 = a3[2].x;
  v16 = a3[2].y;
  if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v9, 0LL, (struct _POINTL *)&v11) )
    goto LABEL_7;
  if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)v9, 0LL, (struct _POINTL *)&v12, 3u)
    && (v6 = 1,
        RGNMEMOBJ::vCreate((BLTRECORD *)((char *)this + 104), (struct EPATHOBJ *)v9, 1u, 0LL),
        (v7 = *((_QWORD *)this + 13)) != 0) )
  {
    *((_DWORD *)this + 55) |= 4u;
    *(_QWORD *)(*(_QWORD *)a2 + 1528LL) = v7;
  }
  else
  {
LABEL_7:
    v6 = 0;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v9);
  return v6;
}
