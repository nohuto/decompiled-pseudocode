/*
 * XREFs of bCvtPts1 @ 0x1C0015A64
 * Callers:
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0015800 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0015A18 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0071CFC (bFToL.c)
 */

__int64 __fastcall bCvtPts1(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rsi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r11
  _DWORD *v20; // r11
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r11
  _DWORD *v25; // r11
  int v26; // [rsp+30h] [rbp+8h] BYREF
  int v27; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  v5 = (_DWORD *)a1;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          v16 = 6LL;
          do
          {
            bFToL(a1, a2, v16);
            bFToL(v17, v19, v18);
            *a2 += v5[6];
            a2 += 2;
            *v20 += v5[7];
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          v13 = 6LL;
          do
          {
            bFToL(a1, &v26, v13);
            bFToL(v14, &v27, v15);
            a1 = (unsigned int)((((v5[6] + v26) >> 3) + 1) >> 1);
            *a2 = a1;
            a2[1] = (((v27 + v5[7]) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          v10 = 6LL;
          do
          {
            bFToL(a1, &v26, v10);
            bFToL(v11, &v27, v12);
            a1 = (unsigned int)((((v5[6] + v26) >> 3) + 1) >> 1);
            *a2 = a1;
            a2 += 2;
            *(a2 - 1) = (((v27 + v5[7]) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    v21 = 6LL;
    do
    {
      bFToL(a1, a2, v21);
      bFToL(v22, v24, v23);
      *a2 += v5[6];
      a2 += 2;
      a1 = (unsigned int)v5[7];
      *v25 += a1;
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
