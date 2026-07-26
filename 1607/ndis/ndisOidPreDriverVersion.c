/*
 * XREFs of ndisOidPreDriverVersion @ 0x1C00B2C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPreDriverVersion(__int64 *a1)
{
  __int64 v1; // r9
  char v2; // dl
  __int64 v3; // r8
  __int64 v5; // rdx
  unsigned __int16 v6; // cx

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  if ( *a1 && (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 2u )
    {
      *(_DWORD *)(v3 + 56) = 2;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v5 = 2LL;
      v6 = _byteswap_ushort(*(_WORD *)(*(_QWORD *)(v1 + 3816) + 24LL));
      do
      {
        **(_WORD **)(v3 + 40) = v6;
        --v5;
      }
      while ( v5 );
      *(_DWORD *)(v3 + 52) = 2;
    }
    return 1;
  }
  return v2;
}
