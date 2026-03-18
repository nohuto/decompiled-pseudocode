/*
 * XREFs of HUBDSM_CheckingIfSerialNumberStringIndexIsZero @ 0x1C0018E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSerialNumberStringIndexIsZero(__int64 a1)
{
  __int64 result; // rax

  result = 4061LL;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 960) + 1988LL) )
    return 4089LL;
  return result;
}
