/*
 * XREFs of vInitFontSubTable @ 0x1C03794D0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

void *vInitFontSubTable()
{
  _OWORD *v0; // rcx
  _OWORD *v1; // rcx
  char *v2; // rcx
  void *result; // rax
  struct _RTL_QUERY_REGISTRY_TABLE v4; // [rsp+30h] [rbp-78h] BYREF
  __int64 v5; // [rsp+68h] [rbp-40h]
  int v6; // [rsp+70h] [rbp-38h]
  __int64 v7; // [rsp+78h] [rbp-30h]

  gpfsTable = 0LL;
  gcfsCharSetTable = 0;
  v4.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)QueryRegistryFontSubstituteListRoutine;
  v4.Flags = 0;
  memset(&v4.Name, 0, 20);
  v4.DefaultData = 0LL;
  v4.DefaultLength = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  gcfsTable = 1;
  RtlQueryRegistryValues(3u, L"FontSubstitutes", &v4, 0LL, 0LL);
  v0 = gpfsTable;
  if ( gpfsTable || (result = PALLOCMEM2(196 * gcfsTable, 1651729991LL, 1), gpfsTable = result, (v0 = result) != 0LL) )
  {
    *v0 = xmmword_1C02E98E0;
    v0[1] = xmmword_1C02E98F0;
    *((_DWORD *)v0 + 8) = 6684777;
    *((_WORD *)v0 + 18) = 0;
    v1 = gpfsTable;
    *((_OWORD *)gpfsTable + 4) = xmmword_1C02E98B8;
    v1[5] = xmmword_1C02E98C8;
    *((_DWORD *)v1 + 24) = 4587593;
    *((_WORD *)v1 + 50) = 0;
    v2 = (char *)gpfsTable;
    *(_OWORD *)((char *)gpfsTable + 130) = xmmword_1C02E9908;
    *(_QWORD *)(v2 + 146) = 0x49005200450053LL;
    *(_DWORD *)(v2 + 154) = 70;
    *((_BYTE *)gpfsTable + 128) = 1;
    *((_BYTE *)gpfsTable + 129) = 1;
    *((_BYTE *)gpfsTable + 194) = 1;
    result = gpfsTable;
    *((_BYTE *)gpfsTable + 195) = 1;
  }
  else
  {
    gcfsTable = 0;
  }
  return result;
}
