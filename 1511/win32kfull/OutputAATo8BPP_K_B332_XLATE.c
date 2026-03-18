/*
 * XREFs of OutputAATo8BPP_K_B332_XLATE @ 0x1C0251D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall OutputAATo8BPP_K_B332_XLATE(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v9; // r10
  __int64 result; // rax
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rcx
  unsigned int v18; // r13d
  __int64 v19; // rcx
  unsigned int v20; // r15d
  unsigned int v21; // r8d
  char v22; // dl
  unsigned int v23; // ecx
  __int128 v24; // [rsp+8h] [rbp-38h]
  _DWORD v25[4]; // [rsp+20h] [rbp-20h]

  v9 = (unsigned __int8 *)(a2 + 4);
  result = a9;
  v24 = *(_OWORD *)(a5 - 24);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v9[3] )
      {
        v14 = *a6;
        v15 = a6[1];
        v16 = *(_DWORD *)(a5 + 4LL * ((unsigned int)v9[2] + 512));
        v17 = (unsigned int)v9[1] + 256;
        v25[0] = v16;
        v18 = *(_DWORD *)(a5 + 4 * v17);
        v19 = *v9;
        v25[1] = v18;
        v20 = *(_DWORD *)(a5 + 4 * v19);
        v25[3] = v20;
        v25[2] = v20;
        v21 = a6[2];
        v22 = BYTE14(v24);
        v23 = v25[(v16 >= v18) | (unsigned __int64)(2 * (unsigned int)(v25[v16 >= v18] >= v20))] >> 21;
        if ( v23 < v21 && v23 < v15 && v23 < v14 )
          v22 = *(_BYTE *)((((unsigned __int16)(v20 - v14) & (unsigned __int16)(v14 - v24) & 0x3000 | (v18 - v15) & (v15 - DWORD1(v24)) & 0x1C000 | (unsigned __int64)((v16 - v21) & (v21 - DWORD2(v24)) & 0xE0000)) >> 12)
                         + a9);
        *a4 = v22;
      }
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v9 += 4;
    }
    while ( (unsigned __int64)v9 < a3 );
  }
  return result;
}
