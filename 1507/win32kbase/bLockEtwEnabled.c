/*
 * XREFs of bLockEtwEnabled @ 0x1C007D58C
 * Callers:
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 bLockEtwEnabled()
{
  unsigned int v0; // ebx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v3; // [rsp+68h] [rbp+1Fh]
  int v4; // [rsp+70h] [rbp+27h]
  __int64 v5; // [rsp+78h] [rbp+2Fh]
  _BYTE v6[32]; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+B0h] [rbp+67h] BYREF
  int v8; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = 0;
  QueryTable.Name = L"LockEtw";
  v7 = 0;
  QueryTable.EntryContext = &v8;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 4;
  QueryTable.DefaultLength = 4;
  QueryTable.Flags = 32;
  QueryTable.DefaultData = &v7;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  memset(v6, 0, sizeof(v6));
  if ( RtlQueryRegistryValues(3u, L"GRE_Initialize", &QueryTable, 0LL, 0LL) < 0 )
    return 0LL;
  LOBYTE(v0) = v8 == 1;
  return v0;
}
