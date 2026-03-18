/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0027CF0
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0028530 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0027BB0 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 */

__int64 __fastcall EXFORMOBJ::bInverse(EXFORMOBJ *this, struct MATRIX *a2)
{
  __int64 v2; // r11
  float v4; // xmm3_4
  __int64 v5; // rdx
  char v6; // r8
  __int64 v7; // r11
  unsigned int v8; // ebx
  int v9; // eax
  float v10; // xmm2_4
  char v11; // r8
  __int64 v12; // r11
  float v13; // xmm0_4
  float v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  if ( (*((_DWORD *)a2 + 8) & 2) != 0 )
  {
    *(_QWORD *)v2 = 1031798784LL;
    *(_DWORD *)(v2 + 12) = 1031798784;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 16) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v2 + 20) = *((_DWORD *)a2 + 5);
    *(_DWORD *)(v2 + 16) ^= _xmm;
    *(_DWORD *)(v2 + 20) ^= _xmm;
    *(float *)(v2 + 16) = *(float *)(v2 + 16) * 0.0625;
    *(float *)(v2 + 20) = *(float *)(v2 + 20) * 0.0625;
    *(_DWORD *)(v2 + 24) = -(*((int *)a2 + 6) >> 4);
    *(_DWORD *)(v2 + 28) = -(*((int *)a2 + 7) >> 4);
    return 1LL;
  }
  v4 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * *((float *)a2 + 1));
  v14 = v4;
  v8 = 0;
  if ( EFLOAT::bIsZero((EFLOAT *)&v14) )
    return 0LL;
  if ( (v6 & 1) != 0 )
  {
    *(_QWORD *)(v7 + 4) = 0LL;
  }
  else
  {
    v13 = *(float *)(v5 + 4) / v4;
    *(float *)(v7 + 4) = v13;
    *(_DWORD *)(v7 + 4) = LODWORD(v13) ^ _xmm;
    *(_DWORD *)(v7 + 8) = COERCE_UNSIGNED_INT(*(float *)(v5 + 8) / v4) ^ _xmm;
  }
  *(float *)v7 = *(float *)(v5 + 12) / v4;
  *(float *)(v7 + 12) = *(float *)v5 / v4;
  v9 = *(_DWORD *)(v5 + 32);
  if ( (v9 & 0x40) != 0 )
  {
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    return 1LL;
  }
  if ( (v9 & 1) != 0 )
  {
    *(float *)(v7 + 16) = *(float *)v7 * *(float *)(v5 + 16);
    v10 = *(float *)(v7 + 12) * *(float *)(v5 + 20);
  }
  else
  {
    *(float *)(v7 + 16) = (float)(*(float *)(v7 + 8) * *(float *)(v5 + 20))
                        + (float)(*(float *)v7 * *(float *)(v5 + 16));
    v10 = (float)(*(float *)(v7 + 12) * *(float *)(v5 + 20)) + (float)(*(float *)(v7 + 4) * *(float *)(v5 + 16));
  }
  *(float *)(v7 + 20) = v10;
  *(_DWORD *)(v7 + 16) ^= _xmm;
  *(_DWORD *)(v7 + 20) ^= _xmm;
  if ( !(unsigned int)bFToL(*(float *)(v7 + 16), (_DWORD *)(v7 + 24), 6) )
    return 0LL;
  LOBYTE(v8) = (unsigned int)bFToL(*(float *)(v12 + 20), (_DWORD *)(v12 + 28), v11) != 0;
  return v8;
}
