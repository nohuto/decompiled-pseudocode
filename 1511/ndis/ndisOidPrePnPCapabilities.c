/*
 * XREFs of ndisOidPrePnPCapabilities @ 0x1C00C3AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall ndisOidPrePnPCapabilities(__int64 *a1)
{
  __int64 v1; // r9
  char v2; // dl
  __int64 v3; // r8

  v1 = *a1;
  v2 = 0;
  v3 = a1[4];
  if ( *a1 && (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 && (*(_DWORD *)(v1 + 120) & 0x8000) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) < 0x10u )
    {
      *(_DWORD *)(v3 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      *(_OWORD *)*(_QWORD *)(v3 + 40) = *(_OWORD *)(v1 + 984);
      *(_DWORD *)(v3 + 52) = 16;
      *((_DWORD *)a1 + 10) = 0;
    }
    return 1;
  }
  return v2;
}
