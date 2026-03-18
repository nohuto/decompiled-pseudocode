/*
 * XREFs of VidSchiFillSubmitCommandDataVirtual @ 0x1C0001EB4
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 */

__int64 __fastcall VidSchiFillSubmitCommandDataVirtual(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // edx
  __int64 v8; // rax
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 24);
  memset(a2, 0, 0x60uLL);
  v7 = 0;
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0
    || ((v8 = *(_QWORD *)(a1 + 56)) == 0 ? (v9 = 0) : (v9 = *(_WORD *)(v8 + 74) & 1), v10 = v9 == 0, v11 = 0, !v10) )
  {
    v11 = 1;
  }
  *((_DWORD *)a2 + 13) ^= (*((_DWORD *)a2 + 13) ^ (8 * v11)) & 8;
  v12 = *((_DWORD *)a2 + 13) ^ (*((_DWORD *)a2 + 13) ^ (*(_DWORD *)(a1 + 92) >> 6)) & 0x40;
  *((_DWORD *)a2 + 13) = v12;
  v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 7)) & 0x80;
  *((_DWORD *)a2 + 13) = v13;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *((_DWORD *)a2 + 13) = v13 | 1;
    *a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *a2 = *(_QWORD *)(v2 + 64);
    if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
    {
      *((_DWORD *)a2 + 13) |= 0x10u;
      LOBYTE(v7) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 376LL) != 2;
      *((_DWORD *)a2 + 13) ^= (*((_DWORD *)a2 + 13) ^ (32 * v7)) & 0x20;
      *((_DWORD *)a2 + 12) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 380LL);
      *((_DWORD *)a2 + 11) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    }
    *((_DWORD *)a2 + 13) ^= (*((_DWORD *)a2 + 13) ^ (*(_DWORD *)(a1 + 92) >> 7)) & 2;
    *((_DWORD *)a2 + 13) ^= (*((_DWORD *)a2 + 13) ^ (*(_DWORD *)(a1 + 92) >> 1)) & 4;
  }
  a2[1] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 148);
  a2[3] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 152);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 152);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(a1 + 184);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 104);
  *((_DWORD *)a2 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 368) + 6LL);
  result = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 368) + 8LL);
  *((_DWORD *)a2 + 15) = result;
  return result;
}
