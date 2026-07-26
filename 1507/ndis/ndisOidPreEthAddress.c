/*
 * XREFs of ndisOidPreEthAddress @ 0x1C009A6E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 */

char __fastcall ndisOidPreEthAddress(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  char v4; // cl
  void *v6; // r9
  unsigned __int16 *v7; // rax
  unsigned int v8; // edi
  const void *v9; // rax

  v1 = a1[4];
  v3 = *a1;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    v6 = *(void **)(v1 + 40);
    v7 = *(unsigned __int16 **)(v3 + 4096);
    if ( *(_DWORD *)(v1 + 32) == 16843009 )
    {
      v8 = v7[579];
      v9 = v7 + 580;
    }
    else
    {
      v8 = v7[562];
      v9 = v7 + 563;
    }
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < v8 )
    {
      *(_DWORD *)(v1 + 56) = v8;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( *((_DWORD *)a1 + 10) )
    {
      *(_DWORD *)(v1 + 56) = v8;
    }
    else
    {
      memmove(v6, v9, v8);
      *(_DWORD *)(v1 + 52) = v8;
    }
    return 1;
  }
  return v4;
}
