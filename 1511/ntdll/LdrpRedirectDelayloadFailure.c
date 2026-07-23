/*
 * XREFs of LdrpRedirectDelayloadFailure @ 0x1800823DC
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180032120 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x180081FEC (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180077430 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     LdrpGetDelayloadAPIInfo @ 0x1800824B4 (LdrpGetDelayloadAPIInfo.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpRedirectDelayloadFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD *),
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        __int64 a6,
        NTSTATUS Status)
{
  __int64 v7; // r13
  __int64 v10; // rsi
  char v11; // r9
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r15
  char v15; // al
  _QWORD v17[16]; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v18; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v19; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v20; // [rsp+F0h] [rbp+5Fh]

  v20 = a3;
  v7 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a3 + 4);
  v10 = 0LL;
  LdrpGetDelayloadAPIInfo(a1, a3, a6, (unsigned int)&v19, (__int64)&v18);
  v11 = LdrpDebugFlags;
  v12 = v18;
  v13 = v19;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrdload.c",
      330,
      (unsigned int)"LdrpRedirectDelayloadFailure",
      0,
      (__int64)"Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n");
    v11 = LdrpDebugFlags;
  }
  if ( (v11 & 0x10) != 0 )
    __debugbreak();
  if ( a2 )
  {
    v14 = *(_QWORD *)(a2 + 48);
    if ( LdrpAppPackagesPath.Buffer && (*(_BYTE *)(a2 + 104) & 1) == 0 )
    {
      v15 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v14 = 0LL;
  }
  v15 = 1;
LABEL_8:
  if ( !a4 || !v15 )
    goto LABEL_9;
  memset(v17, 0, 0x48uLL);
  v17[1] = v20;
  v17[2] = a6;
  LODWORD(v17[0]) = 72;
  v17[3] = v7;
  v17[6] = v14;
  LODWORD(v17[8]) = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v13 )
  {
    LODWORD(v17[4]) = 1;
    v17[5] = v13;
  }
  else
  {
    LODWORD(v17[4]) = 0;
    LODWORD(v17[5]) = v12;
  }
  v10 = a4(4LL, v17);
  if ( !v10 )
  {
LABEL_9:
    if ( HashTable )
    {
      if ( !v13 )
        v13 = v12;
      return ((__int64 (__fastcall *)(__int64, __int64))HashTable)(v7, v13);
    }
  }
  return v10;
}
