/*
 * XREFs of bVerifyMsftHighByteTable @ 0x1C0245370
 * Callers:
 *     bComputeIDs @ 0x1C015929C (bComputeIDs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bVerifyMsftHighByteTable(__int64 a1, _DWORD *a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int v6; // r10d
  __int64 v7; // r13
  __int64 v8; // rdi
  unsigned __int16 v9; // r11
  unsigned int v10; // ebx
  int v11; // r15d
  int v12; // r12d
  _WORD *v13; // rdx
  __int64 v14; // r8
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // r14
  _WORD *v18; // rcx
  int v19; // r12d
  unsigned __int16 v20; // bp
  _WORD *v21; // rdi
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r11
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // [rsp+0h] [rbp-38h]
  __int64 v28; // [rsp+40h] [rbp+8h]

  v6 = 0;
  v7 = a1 + 6;
  v8 = a1 + 518;
  v28 = a1 + 6;
  v27 = a1 + 518;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned __int16)(a4 - 2) <= 3u )
  {
    v12 = a6;
    *a2 = 5;
    *(_QWORD *)a3 = 0LL;
    *(_DWORD *)(a3 + 12) = 0;
    if ( a5 - a6 >= 0x20E )
    {
      v13 = (_WORD *)(a1 + 6);
      v14 = 256LL;
      do
      {
        v15 = __ROR2__(*v13, 8);
        if ( v15 > v9 )
          v9 = v15;
        ++v13;
        --v14;
      }
      while ( v14 );
      if ( a5 - a6 - 526 >= v9 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = __ROR2__(*(_WORD *)(v7 + 2LL * v16), 8);
          v18 = (_WORD *)(v8 + v17);
          v19 = v17 + 524 + v12;
          v20 = __ROR2__(v18[3], 8);
          v21 = (_WORD *)((char *)v18 + v20 + 6);
          v22 = __ROR2__(*v18, 8);
          v23 = __ROR2__(v18[1], 8);
          if ( v17 )
          {
            if ( (unsigned __int16)(v22 + v23) < v22 )
              return 0LL;
            v24 = v19 + v20 + 2 * v23;
          }
          else
          {
            if ( v22 > v16 )
              return 0LL;
            v24 = v19 + v20 + 2 + 2 * (v16 - v22);
          }
          if ( v24 > a5 )
            break;
          if ( v17 )
          {
            if ( v23 )
            {
              v25 = v23;
              do
              {
                if ( __ROR2__(*v21, 8) )
                  ++v11;
                ++v21;
                --v25;
              }
              while ( v25 );
              v7 = v28;
            }
          }
          else if ( __ROR2__(v21[v16 - (unsigned __int64)v22], 8) )
          {
            ++v10;
          }
          if ( ++v16 >= 0x100u )
          {
            if ( v10 > (unsigned __int16)__ROR2__(*(_WORD *)(v27 + 2), 8) )
              return 0LL;
            LOBYTE(v6) = v11 + v10 - 1 <= 0xFFFE;
            return v6;
          }
          v12 = a6;
          v8 = v7 + 512;
        }
      }
    }
  }
  return 0LL;
}
