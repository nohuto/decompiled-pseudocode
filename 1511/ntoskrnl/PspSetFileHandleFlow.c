/*
 * XREFs of PspSetFileHandleFlow @ 0x140642630
 * Callers:
 *     <none>
 * Callees:
 *     IoSetHandleFlow @ 0x1401BD8F8 (IoSetHandleFlow.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 */

bool __fastcall PspSetFileHandleFlow(__int64 a1, volatile signed __int64 *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  unsigned __int64 v7; // r8

  v6 = 0;
  v7 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[v7] == IoFileObjectType )
  {
    v6 = IoSetHandleFlow(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 48, *(_QWORD *)a4, v7, *(_DWORD *)(a4 + 8));
    if ( v6 == -1073741585 )
      v6 = 0;
  }
  ExUnlockHandleTableEntry(a1, a2);
  return v6 < 0;
}
