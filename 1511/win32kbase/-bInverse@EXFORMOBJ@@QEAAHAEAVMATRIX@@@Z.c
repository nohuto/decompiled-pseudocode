/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0015110
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00158B0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C0014FDC (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0071CFC (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bInverse(EXFORMOBJ *this, struct MATRIX *a2)
{
  __int64 v2; // r11
  float v4; // xmm3_4
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // r8
  __int64 v8; // r11
  unsigned int v9; // ebx
  int v10; // eax
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r11
  float v15; // xmm0_4
  float v16; // [rsp+30h] [rbp+8h] BYREF

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
  v16 = v4;
  v9 = 0;
  if ( EFLOAT::bIsZero((EFLOAT *)&v16) )
    return 0LL;
  if ( (v7 & 1) != 0 )
  {
    *(_QWORD *)(v8 + 4) = 0LL;
  }
  else
  {
    v15 = *(float *)(v5 + 4) / v4;
    *(float *)(v8 + 4) = v15;
    *(_DWORD *)(v8 + 4) = LODWORD(v15) ^ _xmm;
    *(_DWORD *)(v8 + 8) = COERCE_UNSIGNED_INT(*(float *)(v5 + 8) / v4) ^ _xmm;
  }
  *(float *)v8 = *(float *)(v5 + 12) / v4;
  *(float *)(v8 + 12) = *(float *)v5 / v4;
  v10 = *(_DWORD *)(v5 + 32);
  if ( (v10 & 0x40) != 0 )
  {
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    return 1LL;
  }
  if ( (v10 & 1) != 0 )
  {
    *(float *)(v8 + 16) = *(float *)v8 * *(float *)(v5 + 16);
    v11 = *(float *)(v8 + 12) * *(float *)(v5 + 20);
  }
  else
  {
    *(float *)(v8 + 16) = (float)(*(float *)(v8 + 8) * *(float *)(v5 + 20))
                        + (float)(*(float *)v8 * *(float *)(v5 + 16));
    v11 = (float)(*(float *)(v8 + 12) * *(float *)(v5 + 20)) + (float)(*(float *)(v8 + 4) * *(float *)(v5 + 16));
  }
  *(float *)(v8 + 20) = v11;
  *(_DWORD *)(v8 + 16) ^= _xmm;
  *(_DWORD *)(v8 + 20) ^= _xmm;
  if ( !(unsigned int)bFToL(v6, v8 + 24, 6LL) )
    return 0LL;
  LOBYTE(v9) = (unsigned int)bFToL(v12, v14 + 28, v13) != 0;
  return v9;
}
