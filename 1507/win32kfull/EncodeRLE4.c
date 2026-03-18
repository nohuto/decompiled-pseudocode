/*
 * XREFs of EncodeRLE4 @ 0x1C02C7D5C
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C02C6424 (-WriteAbsolute4@@YAHPEAE0H0@Z.c)
 *     ?WriteEncoded4@@YAHEPEAEI0@Z @ 0x1C02C64E8 (-WriteEncoded4@@YAHEPEAEI0@Z.c)
 */

__int64 __fastcall EncodeRLE4(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // eax
  int v6; // r9d
  unsigned __int8 *v7; // rbx
  __int64 v8; // r10
  int v9; // r15d
  int v10; // esi
  unsigned __int8 *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned __int8 *v14; // r11
  unsigned __int8 v15; // r10
  unsigned __int8 *v16; // r13
  int v17; // edi
  int v18; // r8d
  char *i; // r14
  char v20; // r12
  int v21; // eax
  int v22; // eax
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v26; // [rsp+28h] [rbp-40h]
  unsigned int v30; // [rsp+90h] [rbp+28h]

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  v11 = &a2[a5];
  v26 = v11;
  v12 = ((unsigned int)(a3 + 7) >> 1) & 0x7FFFFFFC;
  v25 = v12;
  v13 = 0;
  while ( 1 )
  {
    v30 = v13;
    if ( v13 >= v5 )
      break;
    v14 = (unsigned __int8 *)(v8 + v12 * v13);
    v15 = *v14;
    v16 = &v14[(unsigned __int64)(unsigned int)(v6 + 1) >> 1];
    v17 = 0;
    v18 = 2;
    for ( i = (char *)(v14 + 1); i <= (char *)v16; ++i )
    {
      v20 = -1;
      if ( i != (char *)v16 )
        v20 = *i;
      if ( !v17 )
      {
        v17 = (v20 == (char)v15) + 1;
LABEL_33:
        v15 = v20;
        goto LABEL_34;
      }
      if ( v17 == 1 )
      {
        if ( v20 == v15 || v18 == 254 )
        {
          if ( v18 == 254 )
          {
            if ( i == (char *)v16 && (v6 & 1) != 0 )
              v9 = 1;
            v17 = 0;
          }
          else
          {
            v17 = 2;
            v9 = 2;
          }
          v22 = WriteAbsolute4(v14, v7, v18 - v9, v11);
          if ( v7 )
          {
            if ( !v22 )
              return 0LL;
            v7 += v22;
          }
          v10 += v22;
          v14 = (unsigned __int8 *)i;
          v18 = v9;
          v9 = 0;
        }
        goto LABEL_33;
      }
      if ( v17 == 2 && (v20 != v15 || v18 == 254) )
      {
        if ( i == (char *)v16 && (v6 & 1) != 0 )
          LOBYTE(v18) = v18 - 1;
        v21 = WriteEncoded4(v15, v7, v18, v11);
        if ( v7 )
        {
          if ( !v21 )
            return 0LL;
          v7 += v21;
        }
        v10 += v21;
        v14 = (unsigned __int8 *)i;
        v18 = 0;
        v17 = 0;
        goto LABEL_33;
      }
LABEL_34:
      v18 += 2;
      v11 = v26;
      v6 = a3;
    }
    if ( v18 > 3 )
    {
      if ( (v6 & 1) != 0 )
        --v18;
      if ( v17 == 1 )
        v24 = WriteAbsolute4(v14, v7, v18 - 2, v11);
      else
        v24 = WriteEncoded4(v15, v7, (unsigned __int8)v18 - 2, v11);
      if ( v7 )
      {
        if ( v24 )
        {
          v7 += v24;
          goto LABEL_44;
        }
        return 0LL;
      }
LABEL_44:
      v10 += v24;
      v11 = v26;
      v6 = a3;
    }
    if ( v7 <= v11 )
      v10 += 2;
    if ( v7 )
    {
      *(_WORD *)v7 = 0;
      v7 += 2;
    }
    v13 = v30 + 1;
    v12 = v25;
    v5 = a4;
    v8 = a1;
  }
  if ( v7 )
  {
    if ( v7 + 2 > v11 )
      return 0LL;
    *v7 = 0;
    v7[1] = 1;
  }
  return (unsigned int)(v10 + 2);
}
