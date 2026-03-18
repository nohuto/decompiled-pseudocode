/*
 * XREFs of GetFixupScan @ 0x1400F27B8
 * Callers:
 *     RepDIB_CY @ 0x1400F06B0 (RepDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400F09B0 (ShrinkDIB_CY_SrkCX.c)
 *     FastExpAA_CY @ 0x1400F20D0 (FastExpAA_CY.c)
 *     ShrinkDIB_CY @ 0x1400F3480 (ShrinkDIB_CY.c)
 *     GrayShrinkDIB_CY @ 0x1400F3CD0 (GrayShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1400F4320 (SkipDIB_CY.c)
 *     ExpandDIB_CY @ 0x140199E90 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1401DF950 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x140268CD0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1403097F0 (GrayExpandDIB_CY_ExpCX.c)
 *     TileDIB_CY @ 0x14030A360 (TileDIB_CY.c)
 * Callees:
 *     FixupGrayScan @ 0x1400F28F4 (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F2CA4 (FixupColorScan.c)
 *     MappingBGR @ 0x14030A2A0 (MappingBGR.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetFixupScan(unsigned int *a1, __int64 a2)
{
  unsigned int v4; // edx
  char *v5; // r8
  int v7; // r8d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // dl
  unsigned int v12; // eax
  unsigned int v13; // eax

  v4 = *a1;
  if ( (*a1 & 0x40) != 0 )
  {
    if ( (a1[2] & 4) != 0 )
      FixupGrayScan(a1, a2);
    else
      FixupColorScan(a1, a2);
  }
  else
  {
    if ( (v4 & 0x20) != 0 )
    {
      v7 = ++a1[15];
      v8 = a1[10];
      if ( v7 > v8 )
      {
        a1[15] = v8;
        v7 = v8;
      }
      v9 = v8 - v7;
      v5 = (char *)(a1 + 2);
      v10 = a1[17] * v9;
      *((_BYTE *)a1 + 8) |= 2u;
      *((_QWORD *)a1 + 6) = *((_QWORD *)a1 + 4) + v10;
      *a1 = v4 & 0xFFFFFFDF;
    }
    else
    {
      v5 = (char *)(a1 + 2);
    }
    if ( a2 )
    {
      (*((void (__fastcall **)(char *, __int64))a1 + 3))(v5, a2);
    }
    else
    {
      v11 = *v5;
      if ( (*v5 & 2) != 0 )
      {
        v12 = a1[15];
        if ( v12 && (v13 = v12 - 1, (a1[15] = v13) != 0) )
        {
          *((_QWORD *)a1 + 6) += (int)a1[17];
        }
        else if ( (v11 & 1) != 0 )
        {
          *((_QWORD *)a1 + 6) = *((_QWORD *)a1 + 4);
          a1[15] = a1[10];
        }
        else
        {
          *v5 = v11 & 0xFD;
        }
      }
    }
  }
  if ( (*a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR(a2, a1[14], *((_QWORD *)a1 + 49), *((_QWORD *)a1 + 56));
      *((_QWORD *)a1 + 56) += (int)a1[118];
      if ( *((_QWORD *)a1 + 56) == *((_QWORD *)a1 + 57) )
        *((_QWORD *)a1 + 56) = *((_QWORD *)a1 + 58);
    }
  }
  return a2;
}
