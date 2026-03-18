/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x14015D7A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(_WORD *a1)
{
  unsigned int v1; // edx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v1 = 0;
  if ( *a1 )
  {
    v2 = (unsigned __int64 *)(a1 + 4);
    v3 = (unsigned __int16)*a1;
    do
    {
      v4 = *v2;
      v5 = *v2++;
      v6 = ((v4 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
         + (((v4 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
      v1 += (unsigned int)((0x101010101010101LL * ((v6 + (v6 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v3;
    }
    while ( v3 );
  }
  return v1;
}
