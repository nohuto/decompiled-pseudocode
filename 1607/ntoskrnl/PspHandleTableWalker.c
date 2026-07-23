/*
 * XREFs of PspHandleTableWalker @ 0x140074EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 */

char __fastcall PspHandleTableWalker(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // eax

  ExUnlockHandleTableEntry();
  v6 = *(_DWORD *)(a4 + 12);
  if ( v6 >= *(_DWORD *)(a4 + 8) )
    return 1;
  *(_DWORD *)(*(_QWORD *)a4 + 4LL * v6) = a3;
  ++*(_DWORD *)(a4 + 12);
  return 0;
}
