/*
 * XREFs of MmMdlPagesAreZero @ 0x1400AE4E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPagesAreZero(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8

  if ( (*(_WORD *)(a1 + 10) & 0x4002) == 0x4002 )
  {
    v1 = (_QWORD *)(a1 + 48);
    v2 = ((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + *(unsigned int *)(a1 + 40) + 4095LL;
    v3 = 0;
    v4 = v2 >> 12;
    if ( !v4 )
      return 1LL;
    while ( *v1 == qword_1403276E0 )
    {
      ++v3;
      ++v1;
      if ( v3 >= v4 )
        return 1LL;
    }
  }
  return 0LL;
}
