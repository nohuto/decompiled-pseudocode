/*
 * XREFs of ndisTopTcpConnectionOffloadStatus @ 0x1C0060A28
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 */

char __fastcall ndisTopTcpConnectionOffloadStatus(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r9
  char result; // al
  unsigned int v4; // r10d
  int v5; // r8d
  __int64 v6; // rdx
  size_t v7; // r8
  unsigned __int16 v8; // ax

  v2 = *(_BYTE **)(a2 + 48);
  result = 0;
  v4 = *(_DWORD *)(a2 + 56);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = *(_QWORD *)(a1 + 4152);
  if ( v6 )
  {
    if ( v5 == 1073872897 )
    {
      *(_BYTE *)(v6 + 4) = 1;
      return 1;
    }
    if ( v5 == 1073872899 )
    {
      v7 = 20LL;
      if ( v4 >= 0x14 && *v2 == 0x80 && *((_WORD *)v2 + 1) >= 0x14u && v2[1] )
      {
        *(_BYTE *)(v6 + 4) = 0;
        v8 = *((_WORD *)v2 + 1);
        if ( v8 < 0x14u )
          v7 = v8;
        memmove((void *)(*(_QWORD *)(a1 + 4152) + 840LL), v2, v7);
        return 1;
      }
    }
  }
  return result;
}
