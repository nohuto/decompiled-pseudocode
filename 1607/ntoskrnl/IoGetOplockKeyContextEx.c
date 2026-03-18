/*
 * XREFs of IoGetOplockKeyContextEx @ 0x14007B498
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A960 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B1D8 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpAttachOplockKey @ 0x14007B9B4 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007B520 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL, 0LL, a4);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
