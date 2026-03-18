/*
 * XREFs of bVerifyMsftHighByteTable @ 0x1C0241498
 * Callers:
 *     bComputeIDs @ 0x1C0156C80 (bComputeIDs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bVerifyMsftHighByteTable(__int64 a1, _DWORD *a2, __int64 a3, __int16 a4, unsigned int a5, int a6)
{
  unsigned int v6; // r10d
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int16 v9; // r11
  unsigned int v10; // ebx
  int v11; // r14d
  int v12; // edi
  _WORD *v13; // rdx
  __int64 v14; // r8
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // bp
  _WORD *v18; // rcx
  int v19; // r15d
  unsigned __int16 v20; // si
  unsigned __int16 v21; // r9
  _WORD *v22; // rdi
  unsigned __int16 v23; // r11
  unsigned int v24; // eax
  __int64 v25; // rcx

  v6 = 0;
  v7 = a1 + 6;
  v8 = a1 + 518;
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
          v19 = v17 + v12 + 524;
          v20 = __ROR2__(v18[3], 8);
          v21 = __ROR2__(*v18, 8);
          v22 = (_WORD *)((char *)v18 + v20 + 6);
          v23 = __ROR2__(v18[1], 8);
          if ( v17 )
          {
            if ( (unsigned __int16)(v21 + v23) < v21 )
              return 0LL;
            v24 = v19 + v20 + 2 * v23;
          }
          else
          {
            if ( v21 > v16 )
              return 0LL;
            v24 = v19 + v20 + 2 + 2 * (v16 - v21);
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
                if ( __ROR2__(*v22, 8) )
                  ++v11;
                ++v22;
                --v25;
              }
              while ( v25 );
              v8 = v7 + 512;
            }
          }
          else if ( __ROR2__(v22[v16 - v21], 8) )
          {
            ++v10;
          }
          if ( ++v16 >= 0x100u )
          {
            if ( v10 > (unsigned __int16)__ROR2__(*(_WORD *)(v8 + 2), 8) )
              return 0LL;
            LOBYTE(v6) = v11 + v10 - 1 <= 0xFFFE;
            return v6;
          }
          v12 = a6;
        }
      }
    }
  }
  return 0LL;
}
