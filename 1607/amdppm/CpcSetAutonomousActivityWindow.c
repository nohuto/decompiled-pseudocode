/*
 * XREFs of CpcSetAutonomousActivityWindow @ 0x1C0003200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CpcSetAutonomousActivityWindow(__int64 *a1, unsigned int a2)
{
  char v2; // r8
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx

  v2 = 0;
  while ( a2 > 0x7F )
  {
    ++v2;
    a2 /= 0xAu;
  }
  v3 = a2 & 0x7F | (unsigned __int64)((unsigned __int8)(v2 & 7) << 7);
  v4 = a1[13];
  v5 = *a1;
  if ( *(_BYTE *)(v5 + 66) )
    return WriteGenAddrHidden(*(unsigned int *)(v5 + 68), v4 + 200, v3);
  else
    return WriteGenAddr(v4 + 200, v3);
}
