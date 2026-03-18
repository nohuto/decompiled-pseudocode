/*
 * XREFs of sub_14066A360 @ 0x14066A360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 *     sub_1405174E0 @ 0x1405174E0 (sub_1405174E0.c)
 */

__int64 __fastcall sub_14066A360(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int8 *v18; // r9
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  __int128 v25; // [rsp+40h] [rbp-29h]
  __int128 v26; // [rsp+60h] [rbp-9h]
  _OWORD v27[3]; // [rsp+70h] [rbp+7h] BYREF

  if ( !Data )
  {
    v9 = dword_1406FB0F4;
    goto LABEL_22;
  }
  v10 = sub_14048AB98(v27);
  if ( v10 >= 0 )
  {
    v9 = DWORD2(v27[0]);
    goto LABEL_22;
  }
  if ( v10 == -1073741275 && Data )
  {
    v11 = (unsigned __int8 *)Data + 20;
    *(_QWORD *)&v26 = 0LL;
    DWORD2(v25) = 4;
    BYTE8(v26) = 1;
    if ( Data == (PVOID)-20LL )
      goto LABEL_19;
    v12 = *((unsigned int *)Data + 1);
    v13 = 0LL;
    if ( *((_DWORD *)Data + 1) )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *v11++;
        v16 -= 23737705;
        v14 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v14 + v16), 21), 21), 21);
        v15 += v14 + v16;
        --v12;
      }
      while ( v12 );
      v13 = __PAIR64__(v14, v15);
    }
    *(_QWORD *)&v25 = v13;
    if ( !(_DWORD)NumOfElements )
      goto LABEL_20;
    v17 = 16 * NumOfElements;
    if ( 16 * (unsigned __int64)(unsigned int)NumOfElements > 0xFFFFFFFF )
    {
LABEL_19:
      *(_QWORD *)&v25 = 0LL;
      DWORD2(v25) = 4;
    }
    else
    {
      v18 = (unsigned __int8 *)qword_140701300;
      v19 = v17;
      if ( v17 )
      {
        v20 = HIDWORD(v13);
        v21 = v13;
        do
        {
          v22 = *v18++;
          v22 -= 23737705;
          v20 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v20 + v22), 21), 21), 21);
          v21 += v20 + v22;
          --v19;
        }
        while ( v19 );
        v13 = __PAIR64__(v20, v21);
      }
      *(_QWORD *)&v25 = v13;
    }
LABEL_20:
    v27[0] = v25;
    DWORD2(v27[0]) = 4;
    v27[1] = 0uLL;
    v27[2] = v26;
    sub_140489880((__int64)v27, -1, 0);
  }
  v9 = 4;
LABEL_22:
  if ( v9 )
  {
    *a5 = 1;
    return (unsigned int)sub_1405174E0(a1, a2, a3, a4, 4);
  }
  else
  {
    v23 = -1073741772;
    *a5 = 0;
  }
  return v23;
}
