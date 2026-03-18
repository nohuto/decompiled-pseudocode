/*
 * XREFs of ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C00C2320
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C00469D8 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C008A194 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00C22E0 (-vError@HFDBASIS64@@QEAAXPEA_J@Z.c)
 */

void __fastcall BEZIER64::vInit(BEZIER64 *this, struct _POINTFIX *a2, struct _RECTFX *a3, __int64 *a4)
{
  __int128 v8; // xmm0
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 40) = 1;
  HFDBASIS64::vInit((BEZIER64 *)((char *)this + 64), a2->x, a2[1].x, a2[2].x, a2[3].x);
  HFDBASIS64::vInit((BEZIER64 *)((char *)this + 96), a2->y, a2[1].y, a2[2].y, a2[3].y);
  *((_QWORD *)this + 16) = *a4;
  if ( a3 )
  {
    v8 = (__int128)*a3;
    *((_QWORD *)this + 17) = (char *)this + 144;
    *((_OWORD *)this + 9) = v8;
  }
  else
  {
    *((_QWORD *)this + 17) = 0LL;
  }
  while ( 1 )
  {
    HFDBASIS64::vError((BEZIER64 *)((char *)this + 64), &v16);
    if ( v16 <= geqErrorHigh )
    {
      HFDBASIS64::vError((BEZIER64 *)((char *)this + 96), &v16);
      if ( v16 <= v9 )
        break;
    }
    *((_DWORD *)this + 40) *= 2;
    v10 = *((_QWORD *)this + 11);
    v11 = (v10 + *((_QWORD *)this + 10)) >> 3;
    v12 = *((_QWORD *)this + 9) - v11;
    *((_QWORD *)this + 10) = v11;
    *((_QWORD *)this + 9) = v12 >> 1;
    *((_QWORD *)this + 11) = v10 >> 2;
    v13 = *((_QWORD *)this + 15);
    v14 = (v13 + *((_QWORD *)this + 14)) >> 3;
    v15 = *((_QWORD *)this + 13) - v14;
    *((_QWORD *)this + 14) = v14;
    *((_QWORD *)this + 15) = v13 >> 2;
    *((_QWORD *)this + 13) = v15 >> 1;
  }
}
