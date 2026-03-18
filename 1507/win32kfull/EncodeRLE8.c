/*
 * XREFs of EncodeRLE8 @ 0x1C02C61E0
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     ?WriteAbsolute8@@YAHPEAE0H0@Z @ 0x1C02C5114 (-WriteAbsolute8@@YAHPEAE0H0@Z.c)
 *     ?WriteEncoded4@@YAHEPEAEI0@Z @ 0x1C02C64E8 (-WriteEncoded4@@YAHEPEAEI0@Z.c)
 */

__int64 __fastcall EncodeRLE8(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // eax
  unsigned __int8 *v6; // rbx
  __int64 v7; // r9
  int v8; // edi
  unsigned __int8 *v9; // r13
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned __int8 *v12; // r10
  unsigned __int8 v13; // cl
  unsigned __int8 *v14; // rax
  int v15; // esi
  signed int v16; // r8d
  char *i; // r15
  char v18; // r14
  int v19; // eax
  int v20; // r12d
  int v21; // eax
  unsigned int v23; // r8d
  int v24; // eax
  unsigned int v25; // [rsp+20h] [rbp-48h]
  unsigned __int8 *v26; // [rsp+28h] [rbp-40h]
  int v28; // [rsp+80h] [rbp+18h]
  unsigned int v30; // [rsp+90h] [rbp+28h]

  v28 = a3;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = &a2[a5];
  v10 = (a3 + 3) & 0xFFFFFFFC;
  v25 = v10;
  v11 = 0;
  while ( 1 )
  {
    v30 = v11;
    if ( v11 >= v5 )
      break;
    v12 = (unsigned __int8 *)(v7 + v10 * v11);
    v13 = *v12;
    v14 = &v12[a3];
    v26 = v14;
    v15 = 0;
    v16 = 1;
    for ( i = (char *)(v12 + 1); i <= (char *)v14; ++i )
    {
      v18 = -1;
      if ( i != (char *)v14 )
        v18 = *i;
      if ( !v15 )
      {
        v15 = (v18 == (char)v13) + 1;
LABEL_27:
        v13 = v18;
        goto LABEL_28;
      }
      if ( v15 == 1 )
      {
        if ( v18 == v13 || v16 == 255 )
        {
          if ( v16 == 255 )
          {
            v20 = 0;
            v15 = 0;
          }
          else
          {
            v15 = 2;
            v20 = 1;
          }
          v21 = WriteAbsolute8(v12, v6, v16 - v20, v9);
          if ( v6 )
          {
            if ( !v21 )
              return 0LL;
            v6 += v21;
          }
          v8 += v21;
          v12 = (unsigned __int8 *)i;
          v16 = v20;
        }
        goto LABEL_27;
      }
      if ( v15 == 2 && (v18 != v13 || v16 == 255) )
      {
        v19 = WriteEncoded4(v13, v6, v16, v9);
        if ( v6 )
        {
          if ( !v19 )
            return 0LL;
          v6 += v19;
        }
        v8 += v19;
        v12 = (unsigned __int8 *)i;
        v16 = 0;
        v15 = 0;
        goto LABEL_27;
      }
LABEL_28:
      ++v16;
      v14 = v26;
    }
    if ( v16 > 1 )
    {
      v23 = v16 - 1;
      if ( v15 == 1 )
        v24 = WriteAbsolute8(v12, v6, v23, v9);
      else
        v24 = WriteEncoded4(v13, v6, v23, v9);
      if ( v6 )
      {
        if ( v24 )
        {
          v6 += v24;
          goto LABEL_36;
        }
        return 0LL;
      }
LABEL_36:
      v8 += v24;
    }
    if ( v6 <= v9 )
      v8 += 2;
    if ( v6 )
    {
      *(_WORD *)v6 = 0;
      v6 += 2;
    }
    v11 = v30 + 1;
    v10 = v25;
    a3 = v28;
    v5 = a4;
    v7 = a1;
  }
  if ( v6 )
  {
    if ( v6 + 2 > v9 )
      return 0LL;
    *v6 = 0;
    v6[1] = 1;
  }
  return (unsigned int)(v8 + 2);
}
