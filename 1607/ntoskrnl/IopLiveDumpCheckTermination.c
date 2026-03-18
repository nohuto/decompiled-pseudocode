/*
 * XREFs of IopLiveDumpCheckTermination @ 0x140626F20
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x140627610 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14062782C (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopLiveDumpCheckTermination(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 && *(_DWORD *)(v2 + 4) )
    return 3221225760LL;
  else
    return (*(_DWORD *)(a2 + 1728) & 1) != 0 ? 0xC000004B : 0;
}
