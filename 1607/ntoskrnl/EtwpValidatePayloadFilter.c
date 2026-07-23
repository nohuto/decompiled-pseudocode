/*
 * XREFs of EtwpValidatePayloadFilter @ 0x1406AAB68
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x1406A898C (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // cx
  __int64 v6; // r10
  int v7; // r14d
  int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // r11
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rbx
  int v14; // eax
  int v15; // r15d
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // r13d
  int v19; // eax
  unsigned int v20; // esi
  int v21; // ecx
  int v22; // r12d
  int v23; // r15d
  int v24; // r8d
  unsigned int v25; // ebp
  unsigned int v26; // kr00_4
  unsigned __int16 *v27; // rdi
  __int64 v28; // r10
  _WORD *v29; // r11
  unsigned __int16 *v30; // r13
  int v31; // edx
  __int64 v32; // rbx
  unsigned int v33; // r12d
  __int64 v34; // rdx
  unsigned int v35; // ecx
  unsigned int v36; // ebx
  unsigned int v37; // r15d
  unsigned int v38; // r10d
  unsigned int v39; // r11d
  __int64 v40; // rcx
  int v41; // ecx
  _WORD *v42; // rcx
  unsigned __int64 v43; // rdx
  _WORD *v44; // rcx
  _BYTE *v45; // rcx
  unsigned __int64 i; // rdx
  _BYTE *v47; // rcx
  bool v48; // cf
  int v50; // [rsp+0h] [rbp-98h]
  int v51; // [rsp+4h] [rbp-94h]
  int v52; // [rsp+8h] [rbp-90h]
  int v53; // [rsp+Ch] [rbp-8Ch]
  int v54; // [rsp+10h] [rbp-88h]
  int v55; // [rsp+18h] [rbp-80h]
  int v56; // [rsp+1Ch] [rbp-7Ch]
  _WORD *v57; // [rsp+28h] [rbp-70h]
  _BYTE *v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  _WORD *v60; // [rsp+40h] [rbp-58h]
  __int64 v61; // [rsp+48h] [rbp-50h]
  __int64 v62; // [rsp+50h] [rbp-48h]
  int v63; // [rsp+B0h] [rbp+18h]
  int v64; // [rsp+B8h] [rbp+20h]

  if ( a3 >= 0x50
    && *(unsigned __int16 *)(a2 + 2) == a3
    && a3 <= 0x1000
    && (*(_WORD *)a2 & 0xFFF) == 0xA66
    && (*(_WORD *)a2 & 0xF000) == 0x1000 )
  {
    v5 = *(_WORD *)(a2 + 4);
    if ( v5 <= 0xAAu && !*(_WORD *)(a2 + 6) && *a1 == *(_QWORD *)(a2 + 16) && a1[1] == *(_QWORD *)(a2 + 24) )
    {
      v6 = *(unsigned __int16 *)(a2 + 32);
      v7 = v5;
      v52 = v5;
      v8 = 24 * v5 + 56;
      if ( (_DWORD)v6 == v8 )
      {
        v9 = *(unsigned __int16 *)(a2 + 34);
        v10 = *(unsigned __int16 *)(a2 + 36);
        v11 = v9 + v8;
        if ( (_DWORD)v10 == v11 )
        {
          v12 = *(unsigned __int16 *)(a2 + 38);
          v13 = *(unsigned __int16 *)(a2 + 40);
          v14 = v12 + v11;
          if ( (_DWORD)v13 == v14 )
          {
            v15 = *(unsigned __int16 *)(a2 + 44);
            v16 = *(unsigned __int16 *)(a2 + 42);
            v17 = v16 + v14;
            v51 = v15;
            if ( v15 == v17 )
            {
              v18 = *(unsigned __int16 *)(a2 + 46);
              v19 = v18 + v17;
              v53 = *(unsigned __int16 *)(a2 + 48);
              if ( v53 == v19 )
              {
                v56 = *(unsigned __int16 *)(a2 + 50);
                if ( a3 == v56 + v19
                  && v9 == 12 * (v9 / 0xC)
                  && (v12 & 3) == 0
                  && (v16 & 3) == 0
                  && (v18 & 1) == 0
                  && (v6 & 3) == 0
                  && (v10 & 3) == 0
                  && (v13 & 3) == 0
                  && (v15 & 3) == 0 )
                {
                  v20 = v12 >> 2;
                  v21 = 0;
                  v64 = 0;
                  v22 = 0;
                  v50 = 0;
                  v23 = 0;
                  v63 = 0;
                  v24 = 0;
                  v25 = v16 >> 2;
                  v26 = *(unsigned __int16 *)(a2 + 34);
                  v27 = (unsigned __int16 *)(a2 + v6);
                  v28 = a2 + v10;
                  v29 = (_WORD *)(a2 + v13);
                  v30 = (unsigned __int16 *)(a2 + 56);
                  v31 = *(unsigned __int16 *)(a2 + 46) >> 1;
                  v57 = (_WORD *)(a2 + (unsigned __int16)v51);
                  v58 = (_BYTE *)(a2 + (unsigned __int16)v53);
                  v32 = 0LL;
                  v61 = v28;
                  v60 = v29;
                  v54 = 0;
                  if ( v26 / 0xC )
                  {
                    while ( 1 )
                    {
                      v62 = v32 | (1LL << (*v27 % 63));
                      if ( v27[2] != v50 )
                        break;
                      v33 = v27[3];
                      if ( v33 > v20 - v50 )
                        break;
                      v50 += v33;
                      v34 = v28;
                      v59 = v28;
                      v35 = 0;
                      if ( v27[3] )
                      {
                        while ( *(_WORD *)(v28 + 2) < 0x40u
                             && *(_BYTE *)(v28 + 1) < 0x40u
                             && (*(_BYTE *)v28 & 0xC0) == 0
                             && (*(_BYTE *)v28 & 0xFu) < 9 )
                        {
                          v28 += 4LL;
                          ++v35;
                          v61 = v28;
                          if ( v35 >= v33 )
                            goto LABEL_33;
                        }
                        return 3221225485LL;
                      }
LABEL_33:
                      if ( v27[4] != v23 )
                        break;
                      v36 = v27[5];
                      if ( v36 > v25 - v23 )
                        break;
                      v55 = v36 + v23;
                      v37 = 0;
                      if ( v27[5] )
                      {
                        while ( (*v29 & 0xFCu) <= 0x20 )
                        {
                          if ( (unsigned __int16)v29[1] != v64 )
                            break;
                          v38 = (unsigned __int8)*v29 >> 2;
                          if ( v38 > v7 - v64 )
                            break;
                          v64 += v38;
                          v39 = 0;
                          if ( v38 )
                          {
                            while ( 1 )
                            {
                              v40 = *v30;
                              if ( (unsigned int)v40 >= v20
                                || (unsigned __int16)v40 >= (unsigned __int16)v33
                                || (unsigned __int16)v40 > *((unsigned __int8 *)v27 + 3) )
                              {
                                return 3221225485LL;
                              }
                              v41 = (*(_BYTE *)(v34 + 4 * v40) & 0xF) - 3;
                              if ( !v41 )
                                break;
                              if ( v41 == 1 )
                              {
                                if ( *((_QWORD *)v30 + 1) != v63 || *((_QWORD *)v30 + 2) )
                                  return 3221225485LL;
                                v42 = v57;
                                v43 = a2 + (unsigned int)*(unsigned __int16 *)(a2 + 46) + v51;
                                v7 = v52;
                                if ( *v57 )
                                {
                                  do
                                  {
                                    if ( (unsigned __int64)v42 >= v43 - 2 )
                                      break;
                                    ++v42;
                                  }
                                  while ( *v42 );
                                  v7 = v52;
                                }
                                v44 = v42 + 1;
                                if ( (unsigned __int64)v44 > v43 )
                                  return 3221225485LL;
                                v63 += v44 - v57;
                                v57 = v44;
LABEL_60:
                                v34 = v59;
                              }
                              ++v39;
                              v30 += 12;
                              if ( v39 >= v38 )
                                goto LABEL_62;
                            }
                            if ( *((_QWORD *)v30 + 1) != v24 || *((_QWORD *)v30 + 2) )
                              return 3221225485LL;
                            v45 = v58;
                            for ( i = a2 + (unsigned int)(v53 + v56); *v45; ++v45 )
                            {
                              if ( (unsigned __int64)v45 >= i - 1 )
                                break;
                            }
                            v47 = v45 + 1;
                            if ( (unsigned __int64)v47 > i )
                              return 3221225485LL;
                            v24 += (_DWORD)v47 - (_DWORD)v58;
                            v58 = v47;
                            goto LABEL_60;
                          }
LABEL_62:
                          ++v37;
                          v29 = v60 + 2;
                          v60 += 2;
                          if ( v37 >= v36 )
                          {
                            v28 = v61;
                            goto LABEL_64;
                          }
                        }
                        return 3221225485LL;
                      }
LABEL_64:
                      v27 += 6;
                      v23 = v55;
                      v48 = ++v54 < v26 / 0xC;
                      v32 = v62;
                      if ( !v48 )
                      {
                        v21 = v64;
                        v22 = v50;
                        v31 = *(unsigned __int16 *)(a2 + 46) >> 1;
                        goto LABEL_66;
                      }
                    }
                  }
                  else
                  {
LABEL_66:
                    if ( v32 == *(_QWORD *)(a2 + 8) && v21 == v7 && v22 == v20 && v23 == v25 && v63 == v31 )
                      return v56 != v24 ? 0xC000000D : 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
