/*
 * XREFs of PsInsertPermanentSiloContext @ 0x14055FF54
 * Callers:
 *     CmpCreateServerSiloCallback @ 0x14055FED0 (CmpCreateServerSiloCallback.c)
 *     ObCreateSiloRootDirectory @ 0x1406E613C (ObCreateSiloRootDirectory.c)
 * Callees:
 *     PspIsSiloContext @ 0x140560108 (PspIsSiloContext.c)
 */

__int64 __fastcall PsInsertPermanentSiloContext(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r9

  if ( (unsigned __int8)PspIsSiloContext(a3) )
  {
    if ( (*(_BYTE *)(v4 - 48 + 26) & 0x40) != 0 )
      v5 = (_QWORD *)(*(_QWORD *)(v4 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v4 - 48 + 26) & 0x7F]) + 32LL);
    if ( *v5 != v6 )
      return 3221225485LL;
  }
  v8 = v4;
  LOBYTE(v4) = 1;
  return PspStorageInsertObject(v7, a2, v4, v8);
}
