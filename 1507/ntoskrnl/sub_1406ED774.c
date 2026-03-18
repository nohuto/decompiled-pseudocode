/*
 * XREFs of sub_1406ED774 @ 0x1406ED774
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 *     sub_1406ECC3C @ 0x1406ECC3C (sub_1406ECC3C.c)
 */

__int64 __fastcall sub_1406ED774(_DWORD *a1, _DWORD *a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  unsigned int v6; // esi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // r9
  unsigned __int8 *v12; // rdx
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  __int128 v24; // [rsp+40h] [rbp-29h]
  __int128 v25; // [rsp+60h] [rbp-9h]
  _OWORD v26[3]; // [rsp+70h] [rbp+7h] BYREF

  v6 = a3;
  if ( !Data )
  {
    v9 = dword_14077E0F0;
    goto LABEL_21;
  }
  v10 = sub_14051E368(v26, (__int64)a2, a3, (__int64)a4);
  if ( v10 >= 0 )
  {
    v9 = DWORD2(v26[0]);
    goto LABEL_21;
  }
  v9 = 4;
  if ( v10 != -1073741275 || !Data )
    goto LABEL_21;
  v12 = (unsigned __int8 *)Data + 20;
  *(_QWORD *)&v25 = 0LL;
  DWORD2(v24) = 4;
  BYTE8(v25) = 1;
  if ( Data == (PVOID)-20LL )
    goto LABEL_19;
  v13 = *((unsigned int *)Data + 1);
  v14 = 0LL;
  if ( *((_DWORD *)Data + 1) )
  {
    v15 = 0;
    LODWORD(v11) = 0;
    do
    {
      v16 = *v12++;
      v16 -= 23737705;
      v15 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v15 + v16), 21), 21), 21);
      v11 = v15 + v16 + (_DWORD)v11;
      --v13;
    }
    while ( v13 );
    v14 = __PAIR64__(v15, v11);
  }
  *(_QWORD *)&v24 = v14;
  if ( !(_DWORD)NumOfElements )
    goto LABEL_20;
  v17 = 16 * NumOfElements;
  if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
  {
LABEL_19:
    *(_QWORD *)&v24 = 0LL;
    DWORD2(v24) = 4;
  }
  else
  {
    v11 = (__int64)qword_140784300;
    v18 = v17;
    if ( v17 )
    {
      v19 = HIDWORD(v14);
      v20 = v14;
      do
      {
        v21 = *(unsigned __int8 *)v11++;
        v21 -= 23737705;
        v19 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v19 + v21), 21), 21), 21);
        v20 += v19 + v21;
        --v18;
      }
      while ( v18 );
      v14 = __PAIR64__(v19, v20);
    }
    *(_QWORD *)&v24 = v14;
  }
LABEL_20:
  v26[0] = v24;
  DWORD2(v26[0]) = 4;
  v26[1] = 0uLL;
  v26[2] = v25;
  sub_14051D108((__int64)v26, -1, 0, v11);
LABEL_21:
  if ( v9 )
  {
    *a5 = 1;
    return (unsigned int)sub_1406ECC3C(a1, a2, v6, a4, 0);
  }
  else
  {
    v22 = -1073741772;
    *a5 = 0;
  }
  return v22;
}
