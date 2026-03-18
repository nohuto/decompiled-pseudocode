/*
 * XREFs of OutputAATo8BPP_K_B332 @ 0x140307C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo8BPP_K_B332(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8)
{
  unsigned __int64 v8; // rax
  unsigned __int8 *v9; // rdx
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // ebx
  _DWORD v21[4]; // [rsp+0h] [rbp-30h]
  __int128 i; // [rsp+10h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h] BYREF

  v8 = (unsigned __int64)&retaddr;
  v9 = (unsigned __int8 *)(a2 + 4);
  for ( i = *(_OWORD *)(a5 - 24); (unsigned __int64)v9 < a3; v9 += 4 )
  {
    if ( v9[3] )
    {
      v12 = a6[2];
      v13 = *(_DWORD *)(a5 + 4LL * v9[2] + 2048);
      v14 = v9[1];
      v21[0] = v13;
      v15 = *(_DWORD *)(a5 + 4 * v14 + 1024);
      v8 = *v9;
      v21[1] = v15;
      v16 = *(_DWORD *)(a5 + 4 * v8);
      v21[3] = v16;
      v21[2] = v16;
      LOBYTE(v8) = BYTE14(i);
      v17 = v21[(v13 >= v15) | (unsigned __int64)(v21[v13 >= v15] >= v16 ? 2 : 0)] >> 21;
      if ( v17 < v12 )
      {
        v18 = a6[1];
        if ( v17 < v18 )
        {
          v19 = *a6;
          if ( v17 < v19 )
            LOBYTE(v8) = ((v18 - DWORD1(i)) >> 12) & ((v15 - v18) >> 12) & 0x1C | ((v12 - DWORD2(i)) >> 12) & ((v13 - v12) >> 12) & 0xE0 | ((v19 - (unsigned int)i) >> 12) & ((v16 - v19) >> 12) & 3;
        }
      }
      *a4 = v8;
    }
    ++a4;
    a6 += 3;
    if ( (unsigned __int64)a6 >= a7 )
    {
      LOBYTE(v8) = a8;
      a6 = (unsigned __int16 *)((char *)a6 + a8);
    }
  }
  return v8;
}
