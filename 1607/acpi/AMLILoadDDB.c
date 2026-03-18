/*
 * XREFs of AMLILoadDDB @ 0x1C00A68A8
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00A67F0 (ACPIInitializeDDBs.c)
 * Callees:
 *     LoadDDB @ 0x1C0007080 (LoadDDB.c)
 *     NewContext @ 0x1C000712C (NewContext.c)
 *     RtlStringCchCopyNA @ 0x1C0024278 (RtlStringCchCopyNA.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     AMLIDebugger @ 0x1C005A948 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     SyncLoadDDB @ 0x1C00A69A8 (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // al
  char v5; // cl
  unsigned int DDB; // ebx
  struct _SLIST_ENTRY *v7; // rdi
  PSLIST_ENTRY v8; // rcx
  _QWORD v10[9]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+88h] [rbp+10h] BYREF
  int pszSrc; // [rsp+90h] [rbp+18h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+98h] [rbp+20h] BYREF

  ListEntry = 0LL;
  memset(v10, 0, 0x28uLL);
  dword_1C0074698 = 0;
  v4 = gDebugger;
  byte_1C007469C[0] = 0;
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
