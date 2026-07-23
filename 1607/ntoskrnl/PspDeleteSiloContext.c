/*
 * XREFs of PspDeleteSiloContext @ 0x14067EA04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspDeleteSiloContext(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rdx

  if ( (*(_BYTE *)(a1 - 48 + 26) & 0x40) != 0 )
    result = *(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 0x7F]) + 32LL;
  else
    result = 0LL;
  v2 = *(__int64 (**)(void))(result + 8);
  if ( v2 )
    return v2();
  return result;
}
