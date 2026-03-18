/*
 * XREFs of ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C0798
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0023A20 (GreSetDCOwnerEx.c)
 *     HmgAlloc @ 0x1C00300B0 (HmgAlloc.c)
 *     ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00365F4 (-RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     memset @ 0x1C008A080 (memset.c)
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
