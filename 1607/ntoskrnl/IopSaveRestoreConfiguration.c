/*
 * XREFs of IopSaveRestoreConfiguration @ 0x14062CA70
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14055634C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopSaveRestoreConfiguration(__int64 a1, unsigned int a2, _QWORD **a3, char a4)
{
  __int64 *v5; // r10
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  _QWORD *result; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm1

  if ( a2 )
  {
    v5 = (__int64 *)(a1 + 32);
    v6 = a2;
    do
    {
      v7 = *v5;
      if ( a4 )
        *(_QWORD *)(v7 + 24) = *(_QWORD *)(v7 + 16);
      else
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 24);
      v8 = *(_QWORD *)(v7 + 24);
      v9 = 0LL;
      v10 = *(_QWORD *)v8 + 24LL;
      v11 = (*(_QWORD *)v8 + 8 * (*(unsigned int *)(*(_QWORD *)v8 + 20LL) + 3LL) - v10 + 7) >> 3;
      if ( v10 > *(_QWORD *)v8 + 8 * ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v8 + 20LL) + 3) )
        v11 = 0LL;
      if ( v11 )
      {
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v10 + 8LL) )
          {
            v12 = *(_QWORD *)(*(_QWORD *)v10 + 32LL);
            if ( a4 )
            {
              v13 = *(_DWORD *)(v12 + 152);
              v14 = *(_OWORD *)(v12 + 56);
              *(_OWORD *)(v12 + 160) = *(_OWORD *)(v12 + 40);
              v15 = *(_OWORD *)(v12 + 72);
              *(_OWORD *)(v12 + 176) = v14;
              v16 = *(_OWORD *)(v12 + 88);
              *(_OWORD *)(v12 + 192) = v15;
              v17 = *(_OWORD *)(v12 + 104);
              *(_OWORD *)(v12 + 208) = v16;
              v18 = *(_OWORD *)(v12 + 120);
              *(_OWORD *)(v12 + 224) = v17;
              v19 = *(_OWORD *)(v12 + 136);
              *(_OWORD *)(v12 + 240) = v18;
              *(_OWORD *)(v12 + 256) = v19;
              *(_DWORD *)(v12 + 272) = v13;
            }
            else
            {
              v20 = *(_DWORD *)(v12 + 272);
              v21 = *(_OWORD *)(v12 + 176);
              *(_OWORD *)(v12 + 40) = *(_OWORD *)(v12 + 160);
              v22 = *(_OWORD *)(v12 + 192);
              *(_OWORD *)(v12 + 56) = v21;
              v23 = *(_OWORD *)(v12 + 208);
              *(_OWORD *)(v12 + 72) = v22;
              v24 = *(_OWORD *)(v12 + 224);
              *(_OWORD *)(v12 + 88) = v23;
              v25 = *(_OWORD *)(v12 + 240);
              *(_OWORD *)(v12 + 104) = v24;
              v26 = *(_OWORD *)(v12 + 256);
              *(_OWORD *)(v12 + 120) = v25;
              *(_OWORD *)(v12 + 136) = v26;
              *(_DWORD *)(v12 + 152) = v20;
            }
          }
          v10 += 8LL;
          ++v9;
        }
        while ( v9 < v11 );
      }
      v5 += 8;
      --v6;
    }
    while ( v6 );
  }
  for ( result = *a3; result != a3; result = (_QWORD *)*result )
  {
    if ( a4 )
    {
      v28 = *(_OWORD *)result;
      *((_OWORD *)result - 2) = *((_OWORD *)result - 3);
      *((_OWORD *)result - 1) = v28;
    }
    else
    {
      v29 = *((_OWORD *)result - 1);
      *((_OWORD *)result - 3) = *((_OWORD *)result - 2);
      *(_OWORD *)result = v29;
    }
  }
  return result;
}
