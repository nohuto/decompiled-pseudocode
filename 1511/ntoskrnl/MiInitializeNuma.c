/*
 * XREFs of MiInitializeNuma @ 0x140520784
 * Callers:
 *     MiInitializePartition @ 0x1405201DC (MiInitializePartition.c)
 * Callees:
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 */

__int64 __fastcall MiInitializeNuma(__int64 a1)
{
  __int64 result; // rax
  _SLIST_HEADER *v3; // rbp
  unsigned int v4; // esi
  unsigned int v5; // r11d
  _QWORD *v6; // r14
  int v7; // ebx
  int *v8; // rdi
  int v9; // eax
  _SLIST_HEADER *v10; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  _DWORD *v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 i; // rcx
  __int64 v22; // rax
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  _BYTE *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  _BYTE *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // ecx
  _BYTE *v31; // rdx
  __int64 v32; // rax

  result = *(_QWORD *)(a1 + 40);
  v3 = qword_1402FE6C0;
  v4 = 0;
  if ( KeNumberNodes )
  {
    v5 = MmNumberOfChannels;
    v6 = (_QWORD *)(result + 1304);
    do
    {
      *((_DWORD *)v6 - 19) = v4;
      *v6 = 0LL;
      v6[3] = 0LL;
      *((_DWORD *)v6 - 20) = v4 << byte_1402FE6D9;
      if ( (int *)a1 == MiSystemPartition )
      {
        v7 = 0;
        v8 = (int *)&v3[8];
        do
        {
          InitializeSListHead(&v3[2 * v7 + 7]);
          v9 = -(v7++ != 1);
          *v8 = v9 & 5;
          v8 += 8;
        }
        while ( v7 < 2 );
        InitializeSListHead(v3);
        v5 = MmNumberOfChannels;
      }
      if ( qword_1402FE6E0 )
      {
        v16 = 1336LL * v4;
        v17 = (_DWORD *)(v16 + *(_QWORD *)(a1 + 40));
        if ( v5 > 1 )
          v17[324] |= 1u;
        if ( (int *)a1 == MiSystemPartition )
        {
          v19 = 4LL * v4;
          if ( MxFreeDescriptor[v19 + 1] )
          {
            v20 = MiPageToChannel(MxFreeDescriptor[v19]);
            *((_BYTE *)v17 + v20 + 1321) = 2;
          }
          for ( i = qword_1402FE6E0; *(_QWORD *)i != -1LL; i += 16LL )
          {
            if ( *(unsigned __int16 *)(i + 10) == v4 )
            {
              v22 = *(unsigned __int16 *)(i + 12);
              if ( *(_BYTE *)(i + 14) )
              {
                if ( *((_BYTE *)v17 + v22 + 1321) != 2 )
                  *((_BYTE *)v17 + v22 + 1321) = 1;
              }
              else
              {
                *((_BYTE *)v17 + v22 + 1321) = 2;
              }
            }
          }
          v23 = 0;
          v24 = 0;
          if ( v5 )
          {
            v25 = (char *)v17 + 1321;
            do
            {
              if ( *v25 == 2 )
              {
                v26 = v23++;
                *((_BYTE *)v17 + v26 + 1313) = v24;
                *((_BYTE *)v17 + v26 + 1317) = v24;
              }
              ++v24;
              ++v25;
            }
            while ( v24 < v5 );
          }
          v27 = 0;
          if ( v5 )
          {
            v28 = (char *)v17 + 1321;
            do
            {
              if ( *v28 == 1 )
              {
                v29 = v23++;
                *((_BYTE *)v17 + v29 + 1313) = v27;
                *((_BYTE *)v17 + v29 + 1317) = v27;
              }
              ++v27;
              ++v28;
            }
            while ( v27 < v5 );
          }
          v30 = 0;
          if ( v5 )
          {
            v31 = (char *)v17 + 1321;
            do
            {
              if ( !*v31 )
              {
                v32 = v23++;
                *((_BYTE *)v17 + v32 + 1313) = v30;
                *((_BYTE *)v17 + v32 + 1317) = v30;
              }
              ++v30;
              ++v31;
            }
            while ( v30 < v5 );
          }
        }
        else
        {
          v18 = qword_1402FFD68;
          *(_DWORD *)((char *)v17 + 1321) = *(_DWORD *)(v16 + qword_1402FFD68 + 1321);
          *(_DWORD *)((char *)v17 + 1313) = *(_DWORD *)(v16 + v18 + 1313);
          *(_DWORD *)((char *)v17 + 1317) = *(_DWORD *)(v16 + v18 + 1317);
        }
      }
      if ( (int *)a1 == MiSystemPartition )
      {
        v10 = v3 + 4;
        v11 = 3LL;
        do
        {
          InitializeSListHead(v10 - 3);
          InitializeSListHead(v10++);
          --v11;
        }
        while ( v11 );
        v5 = MmNumberOfChannels;
      }
      v12 = v6 - 112;
      v13 = 8LL;
      do
      {
        v14 = v12;
        v15 = 4LL;
        do
        {
          *(v14 - 1) = 0LL;
          *v14 = 0xFFFFFFFFFLL;
          v14[1] = 0xFFFFFFFFFLL;
          v14 += 24;
          --v15;
        }
        while ( v15 );
        v12 += 3;
        --v13;
      }
      while ( v13 );
      result = (unsigned __int16)KeNumberNodes;
      ++v4;
      v6 += 167;
      v3 += 26;
    }
    while ( v4 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
