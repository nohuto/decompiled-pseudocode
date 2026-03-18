/*
 * XREFs of bValidRangeGSUB @ 0x1C0158050
 * Callers:
 *     bCheckVerticalTable @ 0x1C0157FC8 (bCheckVerticalTable.c)
 * Callees:
 *     UShortAdd @ 0x1C001D458 (UShortAdd.c)
 */

__int64 __fastcall bValidRangeGSUB(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  unsigned int *v4; // r11
  __int64 v5; // r12
  _WORD *v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rsi
  _WORD *v11; // rdi
  _WORD *v12; // r15
  unsigned __int16 v13; // ax
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rcx
  _DWORD *i; // rax
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r9
  _WORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rbx
  char *v30; // rdx
  __int16 v31; // ax
  unsigned __int16 v32; // r8
  unsigned int v33; // edi
  unsigned int v34; // ebp
  _WORD *v35; // rbx
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // dx
  USHORT v38; // cx
  __int64 v39; // rcx
  USHORT pusResult; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 244);
  result = 0LL;
  *a2 = 0;
  v4 = a2;
  v5 = *(unsigned int *)(a1 + 240);
  v7 = (_WORD *)(v5 + *(_QWORD *)(a1 + 64));
  pusResult = 0;
  if ( (unsigned int)v2 >= 0xA )
  {
    v8 = (unsigned int)v2;
    v9 = (unsigned __int16)__ROR2__(v7[3], 8);
    v10 = (unsigned __int16)__ROR2__(v7[4], 8);
    v11 = (_WORD *)((char *)v7 + v9);
    v12 = (_WORD *)((char *)v7 + v10);
    if ( (unsigned __int64)(unsigned __int16)__ROR2__(v7[2], 8) + 10 > v2 )
      return 0LL;
    if ( v9 + 8 > v2 )
      return 0LL;
    if ( v10 + 4 > v2 )
      return 0LL;
    v13 = __ROR2__(*v11, 8);
    v14 = v13;
    if ( v9 + 2 * (v13 + 2 * (unsigned __int64)v13 + 1) > v8 )
      return 0LL;
    v15 = 0;
    v16 = 0LL;
    if ( !v13 )
      return 0LL;
    for ( i = v11 + 1; *i != 1953654134; i = (_DWORD *)((char *)i + 6) )
    {
      ++v15;
      if ( ++v16 >= v14 )
        return 0LL;
    }
    v18 = __ROR2__(v11[3 * v15 + 3], 8);
    if ( !v18 )
      return 0LL;
    v19 = (unsigned int)v9 + v18;
    if ( v19 + 6 > v8 )
      return 0LL;
    if ( __ROR2__(*(_WORD *)((char *)v7 + (unsigned int)v19 + 2), 8) != 1 )
      return 0LL;
    v20 = __ROR2__(*(_WORD *)((char *)v7 + (unsigned int)v19 + 4), 8);
    if ( __ROR2__(*v12, 8) < v20 )
      return 0LL;
    if ( v10 + 4 + 2 * (unsigned __int64)v20 > v8 )
      return 0LL;
    _mm_lfence();
    v21 = (unsigned __int16)__ROR2__(v12[v20 + 1], 8);
    if ( (unsigned int)v10 > -1 - (int)v21 )
      return 0LL;
    v22 = (unsigned int)(v10 + v21);
    if ( (unsigned int)v22 > 0xFFFFFFF7
      || v22 + 8 > v8
      || __ROR2__(*(_WORD *)((char *)v12 + v21), 8) != 1
      || __ROR2__(*(_WORD *)((char *)v12 + v21 + 4), 8) != 1 )
    {
      return 0LL;
    }
    v23 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v12 + v21 + 6), 8);
    v24 = v23 + v21;
    if ( v23 + (unsigned int)v21 < v23 || (v25 = v24 + (unsigned int)v10, *v4 = v24, (unsigned int)v25 < v24) )
    {
      *v4 = -1;
    }
    else
    {
      *v4 = v25;
      if ( (unsigned int)v25 <= 0xFFFFFFF9 && v25 + 6 <= v8 )
      {
        v26 = (_WORD *)(v5 + (unsigned int)v25 + *(_QWORD *)(a1 + 64));
        if ( __ROR2__(*v26, 8) == 2 )
        {
          v27 = (unsigned __int16)__ROR2__(v26[1], 8);
          if ( (unsigned int)v25 <= -1 - (int)v27 )
          {
            v28 = (unsigned int)(v25 + v27);
            if ( (unsigned int)v28 <= 0xFFFFFFFB )
            {
              v29 = (unsigned int)v28;
              if ( v28 + 4 <= v8 )
              {
                v30 = (char *)v26 + v27;
                v31 = __ROR2__(*(_WORD *)((char *)v26 + v27), 8);
                if ( v31 == 1 )
                {
                  v39 = (unsigned __int16)__ROR2__(*((_WORD *)v30 + 1), 8);
                  if ( v29 + 2 * (v39 + 2) <= v8 && v25 + 2 * (v39 + 3) <= v8 )
                  {
                    *v4 = v25 + v5;
                    return 1LL;
                  }
                }
                else if ( v31 == 2 )
                {
                  v32 = __ROR2__(*((_WORD *)v30 + 1), 8);
                  if ( v29 + 2 * (3 * (unsigned __int64)v32 + 2) <= v8 )
                  {
                    v33 = 0;
                    v34 = v32;
                    if ( v32 )
                    {
                      v35 = v30 + 8;
                      do
                      {
                        v36 = __ROR2__(*(v35 - 2), 8);
                        v37 = __ROR2__(*(v35 - 1), 8);
                        v38 = __ROR2__(*v35, 8);
                        if ( v36 > v37 || v38 != pusResult || UShortAdd(v38, v37 - v36 + 1, &pusResult) < 0 )
                          return 0LL;
                        ++v33;
                        v35 += 3;
                      }
                      while ( v33 < v34 );
                    }
                    if ( v25 + 2 * ((unsigned __int64)pusResult + 3) <= v8 )
                    {
                      *v4 = v25 + v5;
                      return 1LL;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return 0LL;
  }
  return result;
}
