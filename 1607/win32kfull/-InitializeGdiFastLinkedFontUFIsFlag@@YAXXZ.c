/*
 * XREFs of ?InitializeGdiFastLinkedFontUFIsFlag@@YAXXZ @ 0x1C0289980
 * Callers:
 *     bInitializeEUDC @ 0x1C0107FB0 (bInitializeEUDC.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

void InitializeGdiFastLinkedFontUFIsFlag(void)
{
  int v0; // ebx
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+68h] [rbp+1Fh]
  int v3; // [rsp+70h] [rbp+27h]
  _BYTE v4[40]; // [rsp+78h] [rbp+2Fh] BYREF
  int v5; // [rsp+B0h] [rbp+67h] BYREF
  int v6; // [rsp+B8h] [rbp+6Fh] BYREF

  v0 = 0;
  QueryTable.Flags = 32;
  v5 = 0;
  QueryTable.Name = L"UseFastLinkedFontUFIs";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v6;
  QueryTable.DefaultType = 4;
  QueryTable.DefaultLength = 4;
  QueryTable.DefaultData = &v5;
  v2 = 0LL;
  v3 = 0;
  memset(v4, 0, sizeof(v4));
  if ( RtlQueryRegistryValues(
         0,
         L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\GRE_Initialize",
         &QueryTable,
         0LL,
         0LL) >= 0 )
  {
    LOBYTE(v0) = v6 != 0;
    gbFastLinkedFontUFIsEnabled = v0;
  }
}
