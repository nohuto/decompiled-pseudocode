/*
 * XREFs of CurveTransitionsSegment @ 0x1C00B2C30
 * Callers:
 *     Misoriented @ 0x1C00B1E70 (Misoriented.c)
 * Callees:
 *     QDiv2 @ 0x1C00B29CC (QDiv2.c)
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
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  bool v17; // cc
  __int64 v18; // rcx

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
  v14 = v6;
  if ( v6 < 0 )
    v14 = -v6;
  v15 = v12;
  if ( v12 < 0 )
    v15 = -v12;
  if ( v14 > v15 )
  {
    v18 = v11 * v8 + ((__int64)(v13 - v4) << 16);
    if ( v6 < 0 )
    {
      if ( (__int64)v6 << 16 <= v18 && v18 < 0 )
        return 1;
      return v10;
    }
    if ( v18 <= 0 )
      return v10;
    v17 = v18 <= (__int64)v6 << 16;
  }
  else
  {
    v16 = v11 * v9 + ((__int64)((int)v7 - (int)v5) << 16);
    if ( v12 < 0 )
    {
      if ( (__int64)v12 << 16 <= v16 && v16 < 0 )
        return 1;
      return v10;
    }
    if ( v16 <= 0 )
      return v10;
    v17 = v16 <= (__int64)v12 << 16;
  }
  if ( v17 )
    return 1;
  return v10;
}
