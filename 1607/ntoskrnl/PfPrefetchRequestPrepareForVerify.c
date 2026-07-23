/*
 * XREFs of PfPrefetchRequestPrepareForVerify @ 0x1403EF7F4
 * Callers:
 *     PfPrefetchRequestVerify @ 0x1403EF4D8 (PfPrefetchRequestVerify.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PfPrefetchRequestPrepareForVerify(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  unsigned __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned __int64 v16; // r9
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v21; // ecx

  v4 = a2;
  v6 = 128;
  memset(a3, 0, 0x3CuLL);
  v7 = a1[2];
  if ( (_DWORD)v7 )
  {
    if ( !a1[8] )
      return 4000LL;
  }
  else if ( a1[8] )
  {
    return 4100LL;
  }
  v8 = a1[8];
  if ( v8 )
  {
    if ( v8 < 0x80 )
      return 4200LL;
    if ( v7 > v4 / 0x28 )
      return 4300LL;
    v9 = 40 * v7;
    if ( v8 >= (unsigned int)v4 || v9 >= (unsigned int)v4 || v8 > (unsigned int)v4 - v9 )
      return 4400LL;
    v6 = v8 + v9;
    *a3 = v8;
    a3[1] = v8 + v9;
    a3[2] = a1[2];
  }
  v10 = a1[3];
  if ( (_DWORD)v10 )
  {
    if ( !a1[10] )
      return 5000LL;
  }
  else if ( a1[10] )
  {
    return 5100LL;
  }
  v11 = a1[10];
  if ( v11 )
  {
    if ( v11 < v6 )
      return 5200LL;
    if ( v10 > v4 / 0x30 )
      return 5300LL;
    v12 = 48 * v10;
    if ( v11 >= (unsigned int)v4 || v12 >= (unsigned int)v4 || v11 > (unsigned int)v4 - v12 )
      return 5400LL;
    v6 = v11 + v12;
    a3[3] = v11;
    a3[4] = v11 + v12;
    a3[5] = a1[3];
  }
  v13 = a1[4];
  if ( v13 )
  {
    if ( !a1[12] )
      return 6000LL;
  }
  else if ( a1[12] )
  {
    return 6100LL;
  }
  v14 = a1[12];
  if ( v14 )
  {
    if ( v14 < v6 )
      return 6200LL;
    if ( v13 > (unsigned int)v4 >> 4 )
      return 6300LL;
    v15 = 16 * v13;
    if ( v14 >= (unsigned int)v4 || v15 >= (unsigned int)v4 || v14 > (unsigned int)v4 - v15 )
      return 6400LL;
    v6 = v14 + v15;
    a3[6] = v14;
    a3[7] = v14 + v15;
    a3[8] = a1[4];
  }
  v16 = a1[5];
  if ( (_DWORD)v16 )
  {
    if ( !a1[14] )
      return 7000LL;
  }
  else if ( a1[14] )
  {
    return 7100LL;
  }
  v17 = a1[14];
  if ( v17 )
  {
    if ( v17 < v6 )
      return 7200LL;
    if ( v16 > v4 / 0x28 )
      return 7300LL;
    v21 = 40 * v16;
    if ( v17 >= (unsigned int)v4 || v21 >= (unsigned int)v4 || v17 > (unsigned int)v4 - v21 )
      return 7400LL;
    v6 = v17 + v21;
    a3[9] = v17;
    a3[10] = v17 + v21;
    a3[11] = a1[5];
  }
  v18 = a1[6];
  if ( v18 )
  {
    if ( !a1[16] )
      return 8000LL;
  }
  else if ( a1[16] )
  {
    return 8100LL;
  }
  v19 = a1[16];
  if ( !v19 )
    return (_DWORD)v4 != v6 ? 0x2328 : 0;
  if ( v19 < v6 )
    return 8200LL;
  if ( v19 < (unsigned int)v4 && v18 < (unsigned int)v4 && v19 <= (unsigned int)v4 - v18 )
  {
    v6 = v19 + v18;
    a3[12] = v19;
    a3[13] = v19 + v18;
    return (_DWORD)v4 != v6 ? 0x2328 : 0;
  }
  return 8300LL;
}
