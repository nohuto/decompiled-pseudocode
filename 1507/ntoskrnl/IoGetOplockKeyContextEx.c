/*
 * XREFs of IoGetOplockKeyContextEx @ 0x140071324
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400709B0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400716C0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetOplockKeyContextEx(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 6LL, 0LL);
  if ( !result || (*(_BYTE *)(result + 2) & 3) == 0 )
    return 0LL;
  return result;
}
