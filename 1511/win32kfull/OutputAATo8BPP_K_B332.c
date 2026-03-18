/*
 * XREFs of OutputAATo8BPP_K_B332 @ 0x1C0251C30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall OutputAATo8BPP_K_B332(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned __int8 *v8; // r10
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // edx
  char v19; // cl
  unsigned int v20; // eax
  __int128 v21; // [rsp+0h] [rbp-30h]
  _DWORD v22[4]; // [rsp+18h] [rbp-18h]

  v8 = (unsigned __int8 *)(a2 + 4);
  v21 = *(_OWORD *)(a5 - 24);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v8[3] )
      {
        v11 = a6[2];
        v12 = a6[1];
        v13 = *(_DWORD *)(a5 + 4LL * ((unsigned int)v8[2] + 512));
        v14 = (unsigned int)v8[1] + 256;
        v22[0] = v13;
        v15 = *(_DWORD *)(a5 + 4 * v14);
        v16 = *v8;
        v22[1] = v15;
        v17 = *(_DWORD *)(a5 + 4 * v16);
        v22[3] = v17;
        v22[2] = v17;
        v18 = *a6;
        v19 = BYTE14(v21);
        v20 = v22[(v13 >= v15) | (unsigned __int64)(2 * (unsigned int)(v22[v13 >= v15] >= v17))] >> 21;
        if ( v20 < v11 && v20 < v12 && v20 < v18 )
          v19 = ((v17 - v18) >> 12) & ((v18 - (unsigned int)v21) >> 12) & 3 | ((v15 - v12) >> 12) & ((v12 - DWORD1(v21)) >> 12) & 0x1C | ((v13 - v11) >> 12) & ((v11 - DWORD2(v21)) >> 12) & 0xE0;
        *a4 = v19;
      }
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v8 += 4;
    }
    while ( (unsigned __int64)v8 < a3 );
  }
}
