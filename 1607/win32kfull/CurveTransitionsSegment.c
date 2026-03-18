/*
 * XREFs of CurveTransitionsSegment @ 0x1C01043A4
 * Callers:
 *     Misoriented @ 0x1C00C65A0 (Misoriented.c)
 * Callees:
 *     QDiv2 @ 0x1C00C70E8 (QDiv2.c)
 */

__int64 __fastcall CurveTransitionsSegment(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // r15
  int v6; // ebp
  unsigned __int64 v7; // r14
  int v8; // r12d
  int v9; // ebx
  unsigned int v10; // esi
  __int64 v11; // r8
  int v12; // r10d
  int v13; // r11d
  __int64 v14; // rdx
  bool v15; // cc
  __int64 v16; // rcx

  v4 = a1;
  v5 = HIDWORD(a1);
  v6 = a2 - a1;
  v7 = HIDWORD(a3);
  v8 = a4 - a3;
  v9 = HIDWORD(a4) - HIDWORD(a3);
  v10 = 0;
  LODWORD(a1) = (a2 - a1) * (HIDWORD(a4) - HIDWORD(a3)) - (a4 - a3) * (HIDWORD(a2) - HIDWORD(a1));
  if ( !(_DWORD)a1 )
    return v10;
  v11 = QDiv2(
          -65536LL
        * (HIDWORD(a3) * v6 + (HIDWORD(a2) - HIDWORD(a1)) * v4 - v6 * (int)v5 - (int)a3 * (HIDWORD(a2) - HIDWORD(a1))),
          (int)a1);
  if ( (unsigned __int64)(v11 - 1) > 0xFFFF )
    return v10;
  if ( (int)abs32(v6) > (int)abs32(v12) )
  {
    v16 = v11 * v8 + ((__int64)(v13 - v4) << 16);
    if ( v6 < 0 )
    {
      if ( (__int64)v6 << 16 <= v16 && v16 < 0 )
        return 1;
      return v10;
    }
    if ( v16 <= 0 )
      return v10;
    v15 = v16 <= (__int64)v6 << 16;
  }
  else
  {
    v14 = v11 * v9 + ((__int64)((int)v7 - (int)v5) << 16);
    if ( v12 < 0 )
    {
      if ( (__int64)v12 << 16 <= v14 )
        return v14 < 0;
      return v10;
    }
    if ( v14 <= 0 )
      return v10;
    v15 = v14 <= (__int64)v12 << 16;
  }
  if ( v15 )
    return 1;
  return v10;
}
