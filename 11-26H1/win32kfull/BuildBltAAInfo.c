/*
 * XREFs of BuildBltAAInfo @ 0x1401B8050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall BuildBltAAInfo(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        unsigned int a10)
{
  int v10; // r13d
  int v11; // r14d
  int v12; // edi
  int v13; // r15d
  int v14; // ebp
  int v15; // r12d
  int v16; // esi
  int v17; // eax
  int v18; // ebx
  unsigned int v20; // ecx
  _DWORD *v21; // rax
  _DWORD *v22; // rcx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // r14d
  int v27; // eax
  int v28; // [rsp+20h] [rbp-48h]
  int v29; // [rsp+24h] [rbp-44h]
  int v32; // [rsp+98h] [rbp+30h]
  int v33; // [rsp+A0h] [rbp+38h]

  v10 = *a4;
  v11 = 0;
  v12 = *a3;
  v13 = 0;
  v14 = a6;
  v15 = *a4 - *a3;
  v16 = a7 - a6;
  v28 = 0;
  if ( a7 - a6 <= 0 )
    return 0LL;
  v17 = 0;
  if ( v12 >= 0 )
    v17 = *a3;
  v33 = v17;
  if ( v10 > a5 )
    v10 = a5;
  v18 = -1;
  v32 = *a8;
  v29 = *a9;
  if ( *a8 >= *a9 )
    return 0LL;
  if ( v15 != v16 )
    return 0LL;
  if ( a10 + 8 < a10 )
    return 0LL;
  v20 = (a10 + 8) & 0xFFFFFFF8;
  if ( v20 >= 0xFFFFFF10 )
    return 0LL;
  v21 = EngAllocMem(1u, v20 + 240, 0x33355448u);
  v22 = v21;
  if ( v21 )
  {
    v23 = v16;
    *((_QWORD *)v21 + 4) = v21 + 60;
    do
    {
      --v23;
      if ( v14 < v32 || v12 < v33 || v14 >= v29 || v12 >= v10 )
      {
        if ( v18 != -1 )
          goto LABEL_24;
      }
      else
      {
        v24 = v14;
        v11 = v12;
        v13 = v14;
        if ( v18 != -1 )
          v24 = v28;
        v28 = v24;
        v25 = v12;
        if ( v18 != -1 )
          v25 = v18;
        v18 = v25;
      }
      ++v12;
      ++v14;
    }
    while ( v23 );
    if ( v18 != -1 )
    {
LABEL_24:
      *a3 = v18;
      v22[30] = v18;
      *a4 = v11;
      v26 = v11 - v18;
      *a8 = v28;
      *a9 = v13;
      *v22 = v26 + 1;
      v22[31] = v26 + 1;
      v22[28] = v15;
      v22[29] = v16;
      v27 = v13 - v28 + 1;
      v22[1] = v27;
      v22[5] = v27;
      v22[4] = v27;
      return v22;
    }
    EngFreeMem(v22);
    return 0LL;
  }
  return v22;
}
