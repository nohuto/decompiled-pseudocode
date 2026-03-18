/*
 * XREFs of IoGetOplockKeyContextEx @ 0x1400CC128
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140037950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpAttachOplockKey @ 0x1400CB06C (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007CDA0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
