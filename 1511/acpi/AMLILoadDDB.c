/*
 * XREFs of AMLILoadDDB @ 0x1C0086088
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C0085FD0 (ACPIInitializeDDBs.c)
 * Callees:
 *     LoadDDB @ 0x1C00065EC (LoadDDB.c)
 *     NewContext @ 0x1C0006698 (NewContext.c)
 *     RtlStringCchCopyNA @ 0x1C001EB90 (RtlStringCchCopyNA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 *     SyncLoadDDB @ 0x1C0086180 (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // al
  char v5; // cl
  unsigned int DDB; // ebx
  struct _SLIST_ENTRY *v7; // rdi
  PSLIST_ENTRY v8; // rcx
  _QWORD v10[6]; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF
  int pszSrc; // [rsp+A0h] [rbp+40h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp+48h] BYREF

  ListEntry = 0LL;
  memset(v10, 0, 40);
  v4 = gDebugger;
  dword_1C005A228 = 0;
  byte_1C005A22C[0] = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
    v4 = gDebugger;
  }
  if ( (v4 & 8) != 0 )
  {
    pszSrc = *a1;
    RtlStringCchCopyNA(pszDest, 5uLL, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    PrintDebugMessage(85, KeGetCurrentThread(), pszDest, a1, 0LL);
  }
  v5 = 0;
  v11 = 0;
  if ( ghQueryDLMSupportHandler )
  {
    ghQueryDLMSupportHandler(&v11);
    v5 = v11;
  }
  gDeviceLockMutexSupported = v5;
  DDB = NewContext((PVOID *)&ListEntry);
  if ( !DDB )
  {
    v7 = ListEntry;
    v8 = ListEntry;
    ListEntry[20].Next = (_SLIST_ENTRY *)gpheapGlobal;
    DDB = LoadDDB((__int64)v8, (__int64)a1, gpnsNameSpaceRoot, (__int64)v10);
    if ( !DDB )
      DDB = SyncLoadDDB(v7);
  }
  if ( a2 )
    *a2 = v10[2];
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return DDB;
}
