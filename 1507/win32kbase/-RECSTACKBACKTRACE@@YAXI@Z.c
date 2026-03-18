/*
 * XREFs of ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003C470 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00B2E40 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall RECSTACKBACKTRACE(unsigned int a1)
{
  struct tagStackTraceEntry **v1; // rdi
  __int64 v2; // rbx
  struct tagStackTraceEntry *v3; // rcx
  unsigned int CurrentProcessId; // eax
  struct tagStackTraceEntry **v5; // rdx

  v1 = gpentHmgrStacks;
  v2 = a1;
  if ( !gpentHmgrStacks[a1] )
    v1[a1] = (struct tagStackTraceEntry *)PALLOCMEM2(0x108uLL, 1651729991LL, 1);
  v3 = v1[v2];
  if ( v3 )
  {
    memset((char *)v3 + 8, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)v1[v2] + 1, 8u, 0);
    RtlWalkFrameChain((PVOID *)gpentHmgrStacks[v2] + 9, 0x18u, 1u);
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v5 = gpentHmgrStacks;
    *(_DWORD *)gpentHmgrStacks[v2] = CurrentProcessId & 0xFFFFFFFC;
    *((_DWORD *)v5[v2] + 1) = -1;
  }
}
