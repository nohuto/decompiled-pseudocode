/*
 * XREFs of VidSchiFillSubmitCommandData @ 0x1C001174C
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 */

__int64 __fastcall VidSchiFillSubmitCommandData(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 24);
  memset(a2, 0, 0x60uLL);
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 )
    goto LABEL_12;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    LODWORD(v7) = (*(_DWORD *)(v7 + 72) >> 15) & 1;
  if ( (_DWORD)v7 )
LABEL_12:
    LODWORD(v7) = 1;
  *((_DWORD *)a2 + 18) ^= (*((_DWORD *)a2 + 18) ^ (8 * v7)) & 8;
  v8 = *((_DWORD *)a2 + 18) ^ (*((_DWORD *)a2 + 18) ^ (*(_DWORD *)(a1 + 92) >> 6)) & 0x40;
  *((_DWORD *)a2 + 18) = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 7)) & 0x80;
  *((_DWORD *)a2 + 18) = v9;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *((_DWORD *)a2 + 18) = v9 | 1;
    *a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *a2 = *(_QWORD *)(v2 + 64);
    if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
    {
      *((_DWORD *)a2 + 18) |= 0x30u;
      *((_DWORD *)a2 + 17) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 388LL);
      *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    }
    *((_DWORD *)a2 + 18) ^= (*((_DWORD *)a2 + 18) ^ (*(_DWORD *)(a1 + 92) >> 7)) & 2;
    *((_DWORD *)a2 + 18) ^= (*((_DWORD *)a2 + 18) ^ (*(_DWORD *)(a1 + 92) >> 1)) & 4;
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( v10 )
  {
    *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 40);
    a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 128LL);
    *((_DWORD *)a2 + 12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 136LL) + 88LL);
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 128);
  a2[2] = *(_QWORD *)(a1 + 136);
  *((_DWORD *)a2 + 7) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(a1 + 148);
  *((_DWORD *)a2 + 15) = *(_DWORD *)(a1 + 104);
  *((_DWORD *)a2 + 13) = *(_DWORD *)(a1 + 152);
  *((_DWORD *)a2 + 14) = *(_DWORD *)(a1 + 156);
  *((_DWORD *)a2 + 19) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 408) + 6LL);
  result = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 408) + 8LL);
  *((_DWORD *)a2 + 22) = result;
  return result;
}
