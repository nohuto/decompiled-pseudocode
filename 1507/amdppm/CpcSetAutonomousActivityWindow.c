/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x1C0002D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetAutonomousActivityWindow(__int64 a1, unsigned int a2)
{
  char v2; // r9
  unsigned int i; // r8d

  v2 = 0;
  for ( i = a2; i > 0x7F; i /= 0xAu )
    ++v2;
  return WriteGenAddr(*(_QWORD *)(a1 + 96) + 200LL, i & 0x7F | (unsigned __int64)((unsigned __int8)(v2 & 7) << 7));
}
