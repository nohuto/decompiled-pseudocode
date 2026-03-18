/*
 * XREFs of PspIsSiloContext @ 0x14055FBC8
 * Callers:
 *     PsInsertPermanentSiloContext @ 0x14055FA14 (PsInsertPermanentSiloContext.c)
 *     PsInsertSiloContext @ 0x14067DF24 (PsInsertSiloContext.c)
 *     PsReplaceSiloContext @ 0x14067E000 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == (PVOID)PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
