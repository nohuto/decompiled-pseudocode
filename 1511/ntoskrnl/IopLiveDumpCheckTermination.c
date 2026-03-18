/*
 * XREFs of IopLiveDumpCheckTermination @ 0x1405FD2AC
 * Callers:
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C (IopLiveDumpWriteDumpFileWithHvPages.c)
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
    return (*(_DWORD *)(a2 + 1724) & 1) != 0 ? 0xC000004B : 0;
}
