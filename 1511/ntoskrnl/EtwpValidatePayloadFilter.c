/*
 * XREFs of EtwpValidatePayloadFilter @ 0x140667D2C
 * Callers:
 *     EtwpAllocatePayloadFilterData @ 0x140666918 (EtwpAllocatePayloadFilterData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidatePayloadFilter(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rdi
  __int64 v12; // r11
  int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rbp
  unsigned int v18; // r15d
  int v19; // eax
  unsigned int v20; // r12d
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  unsigned __int16 *v24; // rdi
  unsigned int v25; // edx
  unsigned __int16 *v26; // r12
  unsigned int v27; // esi
  int v28; // r8d
  unsigned int v29; // r15d
  __int64 v30; // r13
  _WORD *v31; // r11
  __int64 v32; // rbx
  unsigned int v33; // r10d
  unsigned int v34; // edx
  unsigned int v35; // ecx
  unsigned int v36; // ebp
  unsigned int v37; // ebx
  unsigned int v38; // r10d
  unsigned int v39; // r11d
  unsigned int v40; // ecx
  _WORD *v41; // rcx
  unsigned __int64 v42; // rdx
  _WORD *v43; // rcx
  _BYTE *v44; // rcx
  unsigned __int64 i; // rdx
  _BYTE *v46; // rcx
  int v47; // [rsp+0h] [rbp-98h]
  int v48; // [rsp+4h] [rbp-94h]
  int v49; // [rsp+8h] [rbp-90h]
  unsigned int v50; // [rsp+Ch] [rbp-8Ch]
  int v51; // [rsp+10h] [rbp-88h]
  int v52; // [rsp+1Ch] [rbp-7Ch]
  _BYTE *v53; // [rsp+28h] [rbp-70h]
  int v54; // [rsp+30h] [rbp-68h]
  _WORD *v55; // [rsp+38h] [rbp-60h]
  unsigned int v56; // [rsp+40h] [rbp-58h]
  _WORD *v57; // [rsp+48h] [rbp-50h]
  __int64 v58; // [rsp+50h] [rbp-48h]
  __int64 v59; // [rsp+58h] [rbp-40h]
  int v60; // [rsp+B0h] [rbp+18h]
  int v61; // [rsp+B8h] [rbp+20h]

  if ( a3 < 0x50 )
    return 3221225485LL;
  if ( *(unsigned __int16 *)(a2 + 2) != a3 )
    return 3221225485LL;
  if ( a3 > 0x1000 )
    return 3221225485LL;
  if ( (*(_WORD *)a2 & 0xFFF) != 0xA66 )
    return 3221225485LL;
  if ( (*(_WORD *)a2 & 0xF000) != 0x1000 )
    return 3221225485LL;
  v6 = *(_WORD *)(a2 + 4);
  if ( v6 > 0xAAu || *(_WORD *)(a2 + 6) )
    return 3221225485LL;
  v7 = *a1 - *(_QWORD *)(a2 + 16);
  if ( *a1 == *(_QWORD *)(a2 + 16) )
    v7 = a1[1] - *(_QWORD *)(a2 + 24);
  if ( v7 )
    return 3221225485LL;
  v8 = *(unsigned __int16 *)(a2 + 32);
  v9 = v6;
  v52 = v6;
  v10 = 24 * v6 + 56;
  if ( (_DWORD)v8 != v10 )
    return 3221225485LL;
  v11 = *(unsigned __int16 *)(a2 + 34);
  v12 = *(unsigned __int16 *)(a2 + 36);
  v13 = v11 + v10;
  if ( (_DWORD)v12 != v13 )
    return 3221225485LL;
  v14 = *(unsigned __int16 *)(a2 + 38);
  v15 = *(unsigned __int16 *)(a2 + 40);
  v16 = v14 + v13;
  if ( (_DWORD)v15 != v16 )
    return 3221225485LL;
  v17 = *(unsigned __int16 *)(a2 + 44);
  v18 = *(unsigned __int16 *)(a2 + 42);
  v19 = v18 + v16;
  v54 = v17;
  if ( (_DWORD)v17 != v19 )
    return 3221225485LL;
  v20 = *(unsigned __int16 *)(a2 + 46);
  v21 = v20 + v19;
  v51 = *(unsigned __int16 *)(a2 + 48);
  if ( v51 != v21 )
    return 3221225485LL;
  v49 = *(unsigned __int16 *)(a2 + 50);
  if ( a3 != v49 + v21
    || v11 != 12 * (v11 / 0xC)
    || (v14 & 3) != 0
    || (v18 & 3) != 0
    || (v20 & 1) != 0
    || (v8 & 3) != 0
    || (v12 & 3) != 0
    || (v15 & 3) != 0
    || (v17 & 3) != 0 )
  {
    return 3221225485LL;
  }
  v47 = 0;
  v22 = 0;
  v48 = 0;
  v60 = 0;
  v23 = (unsigned int)v11 / 0xC;
  v24 = (unsigned __int16 *)(a2 + v8);
  v25 = v20 >> 1;
  v55 = (_WORD *)(a2 + v17);
  v26 = (unsigned __int16 *)(a2 + 56);
  v27 = v14 >> 2;
  v28 = 0;
  v29 = v18 >> 2;
  v30 = a2 + v12;
  v61 = 0;
  v31 = (_WORD *)(a2 + v15);
  v56 = v25;
  v32 = 0LL;
  v57 = v31;
  v33 = 0;
  v53 = (_BYTE *)(a2 + (unsigned __int16)v51);
  v50 = 0;
  if ( v23 )
  {
    do
    {
      v58 = v32 | (1LL << (*v24 % 63));
      if ( v24[2] != v48 )
        return 3221225485LL;
      v34 = v24[3];
      v48 += v34;
      v35 = 0;
      v59 = v30;
      if ( v24[3] )
      {
        while ( *(_WORD *)(v30 + 2) < 0x40u
             && *(_BYTE *)(v30 + 1) < 0x40u
             && (*(_BYTE *)v30 & 0xC0) == 0
             && (*(_BYTE *)v30 & 0xFu) < 9 )
        {
          ++v35;
          v30 += 4LL;
          if ( v35 >= v34 )
            goto LABEL_34;
        }
        return 3221225485LL;
      }
LABEL_34:
      if ( v24[4] != v61 )
        return 3221225485LL;
      v36 = v24[5];
      v22 = v36 + v61;
      v37 = 0;
      v61 += v36;
      if ( v24[5] )
      {
        do
        {
          if ( (*v31 & 0xFCu) > 0x20 || (unsigned __int16)v31[1] != v47 )
            return 3221225485LL;
          v38 = (unsigned __int8)*v31 >> 2;
          v39 = 0;
          v47 += v38;
          if ( v38 )
          {
            while ( 1 )
            {
              v40 = *v26;
              if ( v40 >= v27
                || (unsigned __int16)v40 >= (unsigned __int16)v34
                || (unsigned __int16)v40 > *((unsigned __int8 *)v24 + 3) )
              {
                return 3221225485LL;
              }
              if ( (*(_BYTE *)(v59 + 4LL * *v26) & 0xF) == 3 )
                break;
              if ( (*(_BYTE *)(v59 + 4LL * *v26) & 0xF) == 4 )
              {
                if ( *((_QWORD *)v26 + 1) != v60 || *((_QWORD *)v26 + 2) )
                  return 3221225485LL;
                v41 = v55;
                v42 = a2 + (unsigned int)*(unsigned __int16 *)(a2 + 46) + v54;
                v9 = v52;
                if ( *v55 )
                {
                  do
                  {
                    if ( (unsigned __int64)v41 >= v42 - 2 )
                      break;
                    ++v41;
                  }
                  while ( *v41 );
                  v9 = v52;
                }
                v43 = v41 + 1;
                if ( (unsigned __int64)v43 > v42 )
                  return 3221225485LL;
                v60 += v43 - v55;
                v55 = v43;
LABEL_59:
                LOWORD(v34) = v24[3];
              }
              ++v39;
              v26 += 12;
              if ( v39 >= v38 )
                goto LABEL_61;
            }
            if ( *((_QWORD *)v26 + 1) != v28 || *((_QWORD *)v26 + 2) )
              return 3221225485LL;
            v44 = v53;
            for ( i = a2 + (unsigned int)(v51 + v49); *v44; ++v44 )
            {
              if ( (unsigned __int64)v44 >= i - 1 )
                break;
            }
            v46 = v44 + 1;
            if ( (unsigned __int64)v46 > i )
              return 3221225485LL;
            v28 += (_DWORD)v46 - (_DWORD)v53;
            v53 = v46;
            goto LABEL_59;
          }
LABEL_61:
          ++v37;
          v31 = v57 + 2;
          v57 += 2;
        }
        while ( v37 < v36 );
        v22 = v61;
        v33 = v50;
      }
      v32 = v58;
      ++v33;
      v24 += 6;
      v50 = v33;
    }
    while ( v33 < v23 );
    v25 = v56;
  }
  if ( v32 != *(_QWORD *)(a2 + 8) || v47 != v9 || v48 != v27 || v22 != v29 || v60 != v25 )
    return 3221225485LL;
  return v49 != v28 ? 0xC000000D : 0;
}
