/*
 * XREFs of ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1C01DC3F4
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortTouchContacts(struct tagPOINTER_TOUCH_INFO *a1, unsigned int a2)
{
  unsigned int v5; // r8d
  int v6; // r10d
  __int64 v7; // rdi
  __int128 *v8; // rsi
  __int64 v9; // r14
  int v10; // r12d
  __int64 v11; // r13
  char *v12; // rbx
  __int64 v13; // rdx
  _OWORD *v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  _OWORD *v17; // rdx
  int v18; // edx
  _DWORD *i; // r8
  __int128 v20; // [rsp+0h] [rbp-B8h]
  __int128 v21; // [rsp+10h] [rbp-A8h]
  __int128 v22; // [rsp+20h] [rbp-98h]
  __int128 v23; // [rsp+30h] [rbp-88h]
  __int128 v24; // [rsp+40h] [rbp-78h]
  __int128 v25; // [rsp+50h] [rbp-68h]
  __int128 v26; // [rsp+60h] [rbp-58h]
  __int128 v27; // [rsp+70h] [rbp-48h]
  __int128 v28; // [rsp+80h] [rbp-38h]

  if ( !a2 )
    return 0LL;
  v5 = 1;
  if ( a2 / 9 <= 1 )
    goto LABEL_23;
  do
    v5 = 3 * v5 + 1;
  while ( v5 < a2 / 9 );
  if ( v5 )
  {
LABEL_23:
    do
    {
      if ( v5 < a2 )
      {
        v6 = 0;
        v7 = 144LL * v5;
        v8 = (__int128 *)((char *)a1 + v7);
        do
        {
          v9 = v6;
          v10 = v6;
          v20 = *v8;
          v21 = v8[1];
          v22 = v8[2];
          v23 = v8[3];
          v24 = v8[4];
          v25 = v8[5];
          v26 = v8[6];
          v27 = v8[7];
          v28 = v8[8];
          if ( v6 >= 0 )
          {
            v11 = v6 + v5;
            v12 = (char *)a1 + 144 * v6;
            do
            {
              if ( *((_DWORD *)v12 + 1) <= DWORD1(v20) )
                break;
              v10 -= v5;
              v13 = 144 * v11;
              v11 = (unsigned int)v11 - v5;
              v14 = (_OWORD *)((char *)a1 + v13);
              *v14 = *(_OWORD *)v12;
              v14[1] = *((_OWORD *)v12 + 1);
              v14[2] = *((_OWORD *)v12 + 2);
              v14[3] = *((_OWORD *)v12 + 3);
              v14[4] = *((_OWORD *)v12 + 4);
              v14[5] = *((_OWORD *)v12 + 5);
              v14[6] = *((_OWORD *)v12 + 6);
              v14[7] = *((_OWORD *)v12 + 7);
              v15 = *((_OWORD *)v12 + 8);
              v12 -= v7;
              v9 -= v5;
              v14[8] = v15;
            }
            while ( v9 >= 0 );
          }
          v16 = v10 + v5;
          if ( v6 + v5 != (_DWORD)v16 )
          {
            v17 = (_OWORD *)((char *)a1 + 144 * v16);
            *v17 = v20;
            v17[1] = v21;
            v17[2] = v22;
            v17[3] = v23;
            v17[4] = v24;
            v17[5] = v25;
            v17[6] = v26;
            v17[7] = v27;
            v17[8] = v28;
          }
          ++v6;
          v8 += 9;
        }
        while ( v6 + v5 < a2 );
      }
      v5 /= 3u;
    }
    while ( v5 );
  }
  v18 = 1;
  if ( a2 > 1 )
  {
    for ( i = (_DWORD *)((char *)a1 + 148); *i != *((_DWORD *)a1 + 36 * (unsigned int)(v18 - 1) + 1); i += 36 )
    {
      if ( ++v18 >= a2 )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
