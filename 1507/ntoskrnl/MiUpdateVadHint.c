/*
 * XREFs of MiUpdateVadHint @ 0x1404B9470
 * Callers:
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiUpdateVadHint(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  _BOOL8 result; // rax

  v1 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v2 = (v1 << 12) + 4096;
  if ( v2 > MEMORY[0xFFFFF58010804248] && v2 <= MEMORY[0xFFFFF58010804240] )
    MEMORY[0xFFFFF58010804248] = (v1 << 12) + 4096;
  if ( v1 + 1 <= 0x100000 && v2 > MEMORY[0xFFFFF580108042F8] && v2 <= MEMORY[0xFFFFF58010804240] )
    MEMORY[0xFFFFF580108042F8] = (v1 << 12) + 4096;
  result = 0;
  if ( (*(_DWORD *)(a1 + 48) & 0x8000) == 0 )
  {
    v3 = *(unsigned int *)(a1 + 52);
    LODWORD(v3) = v3 & 0x7FFFFFFF;
    if ( (v3 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) < 0x7FFFFFFFELL )
      return 1;
  }
  return result;
}
