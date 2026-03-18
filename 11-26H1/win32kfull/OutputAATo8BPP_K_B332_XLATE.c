/*
 * XREFs of OutputAATo8BPP_K_B332_XLATE @ 0x140307DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall OutputAATo8BPP_K_B332_XLATE(
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
  unsigned int v13; // r13d
  char v14; // r8
  unsigned int v15; // r15d
  __int64 v16; // rcx
  unsigned int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned int v20; // edx
  unsigned int v21; // esi
  unsigned int v22; // ecx
  _DWORD v23[4]; // [rsp+0h] [rbp-30h]
  __int128 v24; // [rsp+10h] [rbp-20h]

  v9 = (unsigned __int8 *)(a2 + 4);
  v24 = *(_OWORD *)(a5 - 24);
  if ( a2 + 4 < a3 )
  {
    do
    {
      if ( v9[3] )
      {
        v13 = a6[2];
        v14 = BYTE14(v24);
        v15 = *(_DWORD *)(a5 + 4LL * v9[2] + 2048);
        v16 = v9[1];
        v23[0] = v15;
        v17 = *(_DWORD *)(a5 + 4 * v16 + 1024);
        v18 = *v9;
        v23[1] = v17;
        v19 = *(_DWORD *)(a5 + 4 * v18);
        v23[3] = v19;
        v23[2] = v19;
        v20 = v23[(v15 >= v17) | (unsigned __int64)(v23[v15 >= v17] >= v19 ? 2 : 0)] >> 21;
        if ( v20 < v13 )
        {
          v21 = a6[1];
          if ( v20 < v21 )
          {
            v22 = *a6;
            if ( v20 < v22 )
              v14 = *(_BYTE *)((((v21 - DWORD1(v24)) & (v17 - v21) & 0x1C000 | (v13 - DWORD2(v24)) & (v15 - v13) & 0xE0000 | (unsigned __int64)((unsigned __int16)(v22 - v24) & (unsigned __int16)(v19 - v22) & 0x3000)) >> 12)
                             + a9);
          }
        }
        *a4 = v14;
      }
      ++a4;
      a6 += 3;
      if ( (unsigned __int64)a6 >= a7 )
        a6 = (unsigned __int16 *)((char *)a6 + a8);
      v9 += 4;
    }
    while ( (unsigned __int64)v9 < a3 );
  }
}
