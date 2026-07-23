/*
 * XREFs of IopCheckHandleForRevocation @ 0x1401C9D3C
 * Callers:
 *     <none>
 * Callees:
 *     IopRevokeFileObjectForProcess @ 0x1401CA00C (IopRevokeFileObjectForProcess.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 */

char __fastcall IopCheckHandleForRevocation(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                             + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)] == IoFileObjectType
    && *(_QWORD *)(((*a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x38) == *a4 )
  {
    IopRevokeFileObjectForProcess(((*a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 48, a4[1]);
  }
  ExUnlockHandleTableEntry(a1, a2);
  return 0;
}
